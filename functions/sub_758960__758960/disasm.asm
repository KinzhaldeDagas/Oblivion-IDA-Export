0x758960: push    34h ; '4'; Size
0x758962: call    FormHeapAlloc
0x758967: add     esp, 4
0x75896A: test    eax, eax
0x75896C: jz      short loc_758975
0x75896E: mov     ecx, eax
0x758970: jmp     sub_758910
0x758975: xor     eax, eax
0x758977: retn
