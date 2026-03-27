0x41F730: push    esi
0x41F731: push    14h; a2
0x41F733: mov     esi, ecx
0x41F735: call    BaseExtraList_GetExtraData
0x41F73A: test    eax, eax
0x41F73C: jnz     short loc_41F74A
0x41F73E: mov     eax, [esp+4+arg_4]
0x41F742: push    eax
0x41F743: mov     ecx, esi
0x41F745: call    ExtraDataList_AddExtraStartingPosition
0x41F74A: mov     edx, [eax+0Ch]
0x41F74D: mov     ecx, [esp+4+arg_0]
0x41F751: mov     [ecx], edx
0x41F753: mov     edx, [eax+10h]
0x41F756: mov     eax, [eax+14h]
0x41F759: mov     [ecx+4], edx
0x41F75C: mov     [ecx+8], eax
0x41F75F: mov     eax, ecx
0x41F761: pop     esi
0x41F762: retn    8
