0x414B90: push    esi
0x414B91: push    edi
0x414B92: mov     edi, [esp+8+arg_0]
0x414B96: mov     esi, ecx
0x414B98: push    edi
0x414B99: lea     ecx, [esi+4]
0x414B9C: call    BSSimpleList_PushBack
0x414BA1: mov     ecx, edi
0x414BA3: call    EffectItem_IsHostile
0x414BA8: test    al, al
0x414BAA: jz      short loc_414BB0
0x414BAC: add     dword ptr [esi+0Ch], 1
0x414BB0: pop     edi
0x414BB1: pop     esi
0x414BB2: retn    4
