0x7568B0: push    esi
0x7568B1: push    edi
0x7568B2: mov     edi, [esp+8+arg_0]
0x7568B6: push    edi
0x7568B7: mov     esi, ecx
0x7568B9: call    sub_75E600
0x7568BE: test    al, al
0x7568C0: jz      short loc_7568FE
0x7568C2: mov     eax, [esi+40h]
0x7568C5: lea     ecx, [esp+8+arg_0]
0x7568C9: push    ecx
0x7568CA: push    eax
0x7568CB: lea     ecx, [edi+0D4h]
0x7568D1: call    NiTMap_GetAt
0x7568D6: test    al, al
0x7568D8: jz      short loc_7568FE
0x7568DA: mov     ecx, [esp+8+arg_0]
0x7568DE: test    ecx, ecx
0x7568E0: jz      short loc_7568FE
0x7568E2: mov     edx, [ecx]
0x7568E4: mov     eax, [edx+4]
0x7568E7: call    eax
0x7568E9: test    eax, eax
0x7568EB: jz      short loc_7568FE
0x7568ED: lea     ecx, [ecx+0]
0x7568F0: cmp     eax, offset dword_B40AA4
0x7568F5: jz      short loc_756905
0x7568F7: mov     eax, [eax+4]
0x7568FA: test    eax, eax
0x7568FC: jnz     short loc_7568F0
0x7568FE: pop     edi
0x7568FF: xor     al, al
0x756901: pop     esi
0x756902: retn    4
0x756905: pop     edi
0x756906: mov     al, 1
0x756908: pop     esi
0x756909: retn    4
