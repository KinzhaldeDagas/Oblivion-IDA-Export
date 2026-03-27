0x7571B0: push    esi
0x7571B1: push    edi
0x7571B2: mov     edi, [esp+8+arg_0]
0x7571B6: push    edi
0x7571B7: mov     esi, ecx
0x7571B9: call    sub_75E600
0x7571BE: test    al, al
0x7571C0: jz      short loc_7571FE
0x7571C2: mov     eax, [esi+40h]
0x7571C5: lea     ecx, [esp+8+arg_0]
0x7571C9: push    ecx
0x7571CA: push    eax
0x7571CB: lea     ecx, [edi+0D4h]
0x7571D1: call    NiTMap_GetAt
0x7571D6: test    al, al
0x7571D8: jz      short loc_7571FE
0x7571DA: mov     ecx, [esp+8+arg_0]
0x7571DE: test    ecx, ecx
0x7571E0: jz      short loc_7571FE
0x7571E2: mov     edx, [ecx]
0x7571E4: mov     eax, [edx+4]
0x7571E7: call    eax
0x7571E9: test    eax, eax
0x7571EB: jz      short loc_7571FE
0x7571ED: lea     ecx, [ecx+0]
0x7571F0: cmp     eax, offset dword_B40C3C
0x7571F5: jz      short loc_757205
0x7571F7: mov     eax, [eax+4]
0x7571FA: test    eax, eax
0x7571FC: jnz     short loc_7571F0
0x7571FE: pop     edi
0x7571FF: xor     al, al
0x757201: pop     esi
0x757202: retn    4
0x757205: pop     edi
0x757206: mov     al, 1
0x757208: pop     esi
0x757209: retn    4
