0x41F6F0: push    esi
0x41F6F1: push    14h; a2
0x41F6F3: mov     esi, ecx
0x41F6F5: call    BaseExtraList_GetExtraData
0x41F6FA: test    eax, eax
0x41F6FC: jnz     short loc_41F70A
0x41F6FE: mov     eax, [esp+4+arg_4]
0x41F702: push    eax
0x41F703: mov     ecx, esi
0x41F705: call    ExtraDataList_AddExtraStartingPosition
0x41F70A: mov     edx, [eax+18h]
0x41F70D: mov     ecx, [esp+4+arg_0]
0x41F711: mov     [ecx], edx
0x41F713: mov     edx, [eax+1Ch]
0x41F716: mov     eax, [eax+20h]
0x41F719: mov     [ecx+4], edx
0x41F71C: mov     [ecx+8], eax
0x41F71F: mov     eax, ecx
0x41F721: pop     esi
0x41F722: retn    8
