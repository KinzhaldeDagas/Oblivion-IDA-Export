0x6A8847: fld     dword ptr [esi+18h]
0x6A884A: push    ecx
0x6A884B: fmul    [esp+4+arg_8]
0x6A884F: mov     ecx, esi
0x6A8851: fstp    [esp+4+arg_8]
0x6A8855: fld     [esp+4+arg_8]
0x6A8859: fstp    [esp+4+var_4]
0x6A885C: push    edi
0x6A885D: call    ValueModifierEffect_ModifyAV
0x6A8862: cmp     dword ptr [esi+38h], 5
0x6A8866: jnz     short ValueModifierEffect_UpdateEffect___Done_
