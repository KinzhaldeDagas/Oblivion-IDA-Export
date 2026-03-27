0x74BB20: push    84h ; '„'; Size
0x74BB25: call    FormHeapAlloc
0x74BB2A: add     esp, 4
0x74BB2D: test    eax, eax
0x74BB2F: jz      short loc_74BB38
0x74BB31: mov     ecx, eax
0x74BB33: jmp     sub_74ACC0
0x74BB38: xor     eax, eax
0x74BB3A: retn
