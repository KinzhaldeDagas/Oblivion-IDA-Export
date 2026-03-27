0x4300D0: add     ecx, 3Ch ; '<'
0x4300D3: push    0; int
0x4300D5: push    ecx; char *
0x4300D6: call    __access
0x4300DB: xor     ecx, ecx
0x4300DD: add     esp, 8
0x4300E0: cmp     eax, 0FFFFFFFFh
0x4300E3: setnz   cl
0x4300E6: mov     al, cl
0x4300E8: retn
