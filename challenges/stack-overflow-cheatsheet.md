# Stack Overflow Attack Techniques

## 1. Ret2win
Redirect execution to a privileged function already present in the binary (often called `win()` in CTF challenges).

## 2. Return Address Overwrite
Overwrite the saved return address on the stack to change the program's execution flow.

## 3. Shellcode Injection
Execute attacker-supplied machine code placed in memory. Historically common when executable memory protections (NX/DEP) are disabled.

## 4. ret2libc
Redirect execution to existing library functions instead of injecting new code.

## 5. Return-Oriented Programming (ROP)
Chain together small instruction sequences ("gadgets") already present in memory to perform arbitrary actions.

## 6. Jump-Oriented Programming (JOP)
Similar to ROP, but uses jump instructions instead of return instructions.

## 7. Call-Oriented Programming (COP)
Reuse existing code by chaining execution through call-oriented control flow.

## 8. Stack Pivoting
Move the stack pointer (`RSP`) to an attacker-controlled memory region before continuing execution.

## 9. Sigreturn-Oriented Programming (SROP)
Abuse the operating system's signal return mechanism to gain control of CPU registers and execution flow.

## 10. Function Pointer Overwrite
Overwrite a function pointer stored in memory and redirect it to a different function or code location.

## 11. GOT/PLT Hijacking
Overwrite entries in the Global Offset Table (GOT) or Procedure Linkage Table (PLT) to redirect function calls.

## 12. SEH Overwrite (Windows)
Overwrite Structured Exception Handler (SEH) records to gain control during exception handling.

## 13. Code-Reuse Attacks
A broad category of attacks that reuse existing executable code instead of injecting new code.

### Examples
- ret2libc
- ROP
- JOP
- COP

---

# Notes

A stack overflow vulnerability occurs when data written to a stack buffer exceeds its allocated size, allowing adjacent memory to be overwritten. Depending on the target application's security mitigations and memory layout, this may lead to crashes, denial of service, or control-flow hijacking.