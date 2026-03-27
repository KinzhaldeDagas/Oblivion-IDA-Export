0x75C2D0: push    68h ; 'h'; Size
0x75C2D2: call    FormHeapAlloc
0x75C2D7: add     esp, 4
0x75C2DA: test    eax, eax
0x75C2DC: jz      short loc_75C2E5
0x75C2DE: mov     ecx, eax
0x75C2E0: jmp     sub_75C250
0x75C2E5: xor     eax, eax
0x75C2E7: retn
