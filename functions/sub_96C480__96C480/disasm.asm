0x96C480: push    esi
0x96C481: mov     esi, [esp+4+arg_0]
0x96C485: mov     eax, [esi]
0x96C487: mov     edx, [eax+0Ch]
0x96C48A: push    edi
0x96C48B: mov     edi, ecx
0x96C48D: mov     ecx, esi
0x96C48F: call    edx
0x96C491: test    eax, eax
0x96C493: jnz     short loc_96C4AF
0x96C495: add     edi, 4
0x96C498: push    edi
0x96C499: lea     ecx, [esi+4]
0x96C49C: call    sub_73B770
0x96C4A1: test    al, al
0x96C4A3: jz      short loc_96C4AF
0x96C4A5: pop     edi
0x96C4A6: mov     eax, 1
0x96C4AB: pop     esi
0x96C4AC: retn    4
0x96C4AF: pop     edi
0x96C4B0: xor     eax, eax
0x96C4B2: pop     esi
0x96C4B3: retn    4
