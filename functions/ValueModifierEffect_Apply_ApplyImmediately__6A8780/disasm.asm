0x6A8780: fld     dword ptr [esi+18h]
0x6A8783: push    ecx
0x6A8784: mov     ecx, esi
0x6A8786: fstp    [esp+4+var_4]; float
0x6A8789: call    ValueModifierEffect_GetEffectiveMagnitude
0x6A878E: fstp    [esp+4+arg_0]
0x6A8792: fld     [esp+4+arg_0]
0x6A8796: push    ecx
0x6A8797: fst     dword ptr [esi+18h]
0x6A879A: mov     ecx, esi
0x6A879C: fstp    [esp+8+var_8]
0x6A879F: push    edi
0x6A87A0: call    ValueModifierEffect_ModifyAV
0x6A87A5: cmp     dword ptr [esi+38h], 5
0x6A87A9: jnz     short ValueModifierEffect_Apply___Wrapup
