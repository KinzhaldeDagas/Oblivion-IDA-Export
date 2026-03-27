0x41F7B0: push    esi
0x41F7B1: push    14h; a2
0x41F7B3: mov     esi, ecx
0x41F7B5: call    BaseExtraList_GetExtraData
0x41F7BA: test    eax, eax
0x41F7BC: jnz     short loc_41F7CA
0x41F7BE: mov     eax, [esp+4+arg_4]
0x41F7C2: push    eax
0x41F7C3: mov     ecx, esi
0x41F7C5: call    ExtraDataList_AddExtraStartingPosition
0x41F7CA: mov     ecx, [esp+4+arg_8]
0x41F7CE: mov     edx, [esp+4+arg_C]
0x41F7D2: mov     esi, [esp+4+arg_10]
0x41F7D6: mov     [eax+0Ch], ecx
0x41F7D9: mov     [eax+10h], edx
0x41F7DC: mov     [eax+14h], esi
0x41F7DF: mov     eax, [esp+4+arg_0]
0x41F7E3: mov     [eax], ecx
0x41F7E5: mov     [eax+4], edx
0x41F7E8: mov     [eax+8], esi
0x41F7EB: pop     esi
0x41F7EC: retn    14h
