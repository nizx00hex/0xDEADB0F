# Pwn Lab — Binary Exploitation Practice

A structured collection of binary exploitation challenges focused on understanding memory corruption, control flow hijacking, and Linux exploitation techniques.

---

## About

This repository is a hands-on lab for learning **low-level binary exploitation (pwn)**.  
Each challenge is designed to demonstrate a specific vulnerability and exploitation technique in a controlled environment.

The focus is on:
- Understanding how memory works at runtime
- Identifying vulnerabilities in C programs
- Exploiting stack-based bugs
- Learning real-world attack techniques used in CTFs

---

## Repository Structure

```
challenges/
├── ret2win/
│   ├── src/
│   ├── solve/
│   ├── writeups/
│
└── README.md

```

---

## Topics Covered

- Stack Buffer Overflows
- Return Address Overwrites (ret2win)
- ret2libc Exploitation
- ROP Chains
- Format String Vulnerabilities
- GDB-based Debugging
- pwntools Exploitation Scripts

---

## Tools Used

- GDB (GNU Debugger)
- pwntools (Python exploitation framework)
- GCC (Linux compiler)
- checksec (binary protection analysis)

---

## Learning Workflow

1. Analyze vulnerable C code
2. Identify memory corruption point
3. Calculate overflow offset
4. Control execution flow (EIP/RIP)
5. Redirect execution to target function
6. Validate and document exploit

---

## Goals

- Build strong understanding of system-level security
- Develop exploit development skills
- Practice CTF-style problem solving
- Progress toward advanced exploitation (ROP, heap, kernel)

---

## Completed Challenges

- ret2win — Stack buffer overflow → function redirection ✔

---

## Notes

This repository is strictly for educational purposes in a controlled environment.  
All exploits are tested locally in CTF-style binaries.

---

## Future Improvements

- Add ret2libc challenges
- Add format string lab
- Add heap exploitation series
- Automate exploit templates