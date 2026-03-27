0x68D195: cmp     byte ptr [esi+11h], 0
0x68D199: pop     ebx
0x68D19A: jnz     loc_68D272
0x68D1A0: fld     dword ptr [esi+18h]
0x68D1A3: push    ecx
0x68D1A4: fchs
0x68D1A6: mov     ecx, esi
0x68D1A8: fmul    [esp+arg_18]
0x68D1AC: fstp    [esp+arg_C]
0x68D1B0: fld     [esp+arg_C]
0x68D1B4: fstp    dword ptr [esp+0]
0x68D1B7: push    ebp
0x68D1B8: call    ValueModifierEffect_ModifyAV
