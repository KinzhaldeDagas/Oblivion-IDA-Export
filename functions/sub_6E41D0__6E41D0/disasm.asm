0x6E41D0: push    esi
0x6E41D1: mov     esi, [esp+4+arg_0]
0x6E41D5: test    esi, esi
0x6E41D7: push    edi
0x6E41D8: mov     edi, ecx
0x6E41DA: jnz     short loc_6E41E0
0x6E41DC: xor     ecx, ecx
0x6E41DE: jmp     short loc_6E4208
0x6E41E0: mov     eax, [esi]
0x6E41E2: mov     edx, [eax+4]
0x6E41E5: mov     ecx, esi
0x6E41E7: call    edx
0x6E41E9: test    eax, eax
0x6E41EB: jz      short loc_6E41FE
0x6E41ED: lea     ecx, [ecx+0]
0x6E41F0: cmp     eax, offset dword_B3E2D0
0x6E41F5: jz      short loc_6E4234
0x6E41F7: mov     eax, [eax+4]
0x6E41FA: test    eax, eax
0x6E41FC: jnz     short loc_6E41F0
0x6E41FE: xor     al, al
0x6E4200: neg     al
0x6E4202: sbb     eax, eax
0x6E4204: and     eax, esi
0x6E4206: mov     ecx, eax
0x6E4208: mov     eax, [edi+44h]
0x6E420B: mov     esi, [eax+0Ch]
0x6E420E: add     eax, 0Ch
0x6E4211: sub     esp, 10h
0x6E4214: mov     edx, esp
0x6E4216: mov     [edx], esi
0x6E4218: mov     esi, [eax+4]
0x6E421B: mov     [edx+4], esi
0x6E421E: mov     esi, [eax+8]
0x6E4221: mov     eax, [eax+0Ch]
0x6E4224: mov     [edx+8], esi
0x6E4227: mov     [edx+0Ch], eax
0x6E422A: call    sub_6E3AA0
0x6E422F: pop     edi
0x6E4230: pop     esi
0x6E4231: retn    8
0x6E4234: mov     al, 1
0x6E4236: jmp     short loc_6E4200
