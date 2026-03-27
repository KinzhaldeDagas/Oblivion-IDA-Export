0x5E32F0: push    esi
0x5E32F1: mov     esi, ecx
0x5E32F3: call    Actor_IsNPC
0x5E32F8: test    al, al
0x5E32FA: jz      short loc_5E3314
0x5E32FC: mov     eax, [esi]
0x5E32FE: mov     edx, [eax+170h]
0x5E3304: mov     ecx, esi
0x5E3306: call    edx
0x5E3308: test    eax, eax
0x5E330A: jz      short loc_5E3314
0x5E330C: mov     eax, [eax+0E8h]
0x5E3312: pop     esi
0x5E3313: retn
0x5E3314: xor     eax, eax
0x5E3316: pop     esi
0x5E3317: retn
