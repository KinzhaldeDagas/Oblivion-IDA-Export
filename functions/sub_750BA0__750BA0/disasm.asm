0x750BA0: push    3Ch ; '<'; Size
0x750BA2: call    FormHeapAlloc
0x750BA7: add     esp, 4
0x750BAA: test    eax, eax
0x750BAC: jz      short loc_750BB5
0x750BAE: mov     ecx, eax
0x750BB0: jmp     sub_750B50
0x750BB5: xor     eax, eax
0x750BB7: retn
