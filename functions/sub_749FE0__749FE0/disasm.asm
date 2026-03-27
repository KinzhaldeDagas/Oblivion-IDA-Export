0x749FE0: push    0F0h ; 'ð'; Size
0x749FE5: call    FormHeapAlloc
0x749FEA: add     esp, 4
0x749FED: test    eax, eax
0x749FEF: jz      short loc_749FF8
0x749FF1: mov     ecx, eax
0x749FF3: jmp     sub_749EE0
0x749FF8: xor     eax, eax
0x749FFA: retn
