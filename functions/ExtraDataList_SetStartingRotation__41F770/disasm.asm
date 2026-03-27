0x41F770: push    esi
0x41F771: push    14h; a2
0x41F773: mov     esi, ecx
0x41F775: call    BaseExtraList_GetExtraData
0x41F77A: test    eax, eax
0x41F77C: jnz     short loc_41F78A
0x41F77E: mov     eax, [esp+4+arg_4]
0x41F782: push    eax
0x41F783: mov     ecx, esi
0x41F785: call    ExtraDataList_AddExtraStartingPosition
0x41F78A: mov     ecx, [esp+4+arg_8]
0x41F78E: mov     edx, [esp+4+arg_C]
0x41F792: mov     esi, [esp+4+arg_10]
0x41F796: mov     [eax+18h], ecx
0x41F799: mov     [eax+1Ch], edx
0x41F79C: mov     [eax+20h], esi
0x41F79F: mov     eax, [esp+4+arg_0]
0x41F7A3: mov     [eax], ecx
0x41F7A5: mov     [eax+4], edx
0x41F7A8: mov     [eax+8], esi
0x41F7AB: pop     esi
0x41F7AC: retn    14h
