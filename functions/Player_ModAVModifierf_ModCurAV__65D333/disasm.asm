0x65D333: mov     edi, [esp+arg_C]
0x65D337: mov     eax, edi
0x65D339: sub     eax, 8
0x65D33C: jz      loc_65D3DB
0x65D342: sub     eax, 1
0x65D345: jz      short loc_65D3AF
0x65D347: sub     eax, 1
0x65D34A: jz      short loc_65D383
0x65D34C: cmp     edi, 0FFFFFFFFh
0x65D34F: jz      loc_65D470
0x65D355: mov     eax, [esp+arg_14]
0x65D359: fld     [esp+arg_10]
0x65D35D: push    eax; int
0x65D35E: sub     esp, 8
0x65D361: fstp    [esp+0Ch+var_8]; float
0x65D365: fld     dword ptr [esi+edi*4+450h]
0x65D36C: fstp    [esp+0Ch+var_C]; float
0x65D36F: call    Player_ModAVNode
0x65D374: add     esp, 0Ch
0x65D377: fstp    dword ptr [esi+edi*4+450h]
0x65D37E: pop     edi
0x65D37F: pop     esi
0x65D380: retn    10h
0x65D383: mov     ecx, [esp+arg_14]
0x65D387: fld     [esp+arg_10]
0x65D38B: push    ecx; int
0x65D38C: sub     esp, 8
0x65D38F: fstp    [esp+0Ch+var_8]; float
0x65D393: fld     dword ptr [esi+44Ch]
0x65D399: fstp    [esp+0Ch+var_C]; float
0x65D39C: call    Player_ModAVNode
0x65D3A1: add     esp, 0Ch
0x65D3A4: fstp    dword ptr [esi+44Ch]
0x65D3AA: pop     edi
0x65D3AB: pop     esi
0x65D3AC: retn    10h
0x65D3AF: mov     edx, [esp+arg_14]
0x65D3B3: fld     [esp+arg_10]
0x65D3B7: push    edx; int
0x65D3B8: sub     esp, 8
0x65D3BB: fstp    [esp+0Ch+var_8]; float
0x65D3BF: fld     dword ptr [esi+448h]
0x65D3C5: fstp    [esp+0Ch+var_C]; float
0x65D3C8: call    Player_ModAVNode
0x65D3CD: add     esp, 0Ch
0x65D3D0: fstp    dword ptr [esi+448h]
0x65D3D6: pop     edi
0x65D3D7: pop     esi
0x65D3D8: retn    10h
0x65D3DB: mov     eax, [esp+arg_14]
0x65D3DF: fld     [esp+arg_10]
0x65D3E3: push    eax; int
0x65D3E4: sub     esp, 8
0x65D3E7: fstp    [esp+0Ch+var_8]; float
0x65D3EB: fld     dword ptr [esi+444h]
0x65D3F1: fstp    [esp+0Ch+var_C]; float
0x65D3F4: call    Player_ModAVNode
0x65D3F9: add     esp, 0Ch
0x65D3FC: fstp    dword ptr [esi+444h]
0x65D402: pop     edi
0x65D403: pop     esi
0x65D404: retn    10h
