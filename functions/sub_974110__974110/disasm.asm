0x974110: sub     esp, 0Ch
0x974113: mov     eax, [esp+0Ch+arg_1C]
0x974117: fld     [esp+0Ch+arg_18]
0x97411B: push    esi
0x97411C: push    eax; int
0x97411D: sub     esp, 0Ch
0x974120: fstp    [esp+20h+var_18]; float
0x974124: mov     esi, ecx
0x974126: fld     [esp+20h+arg_14]
0x97412A: fstp    [esp+20h+var_1C]; float
0x97412E: fld     [esp+20h+arg_10]
0x974132: fstp    [esp+20h+var_20]; float
0x974135: call    sub_96F0E0
0x97413A: mov     eax, [esp+10h+arg_4]
0x97413E: mov     edx, [esp+10h+arg_0]
0x974142: mov     dword ptr [esi], offset ??_7NiCapsuleTriIntersector@@6B@; const NiCapsuleTriIntersector::`vftable'
0x974148: mov     [esi+38h], edx
0x97414B: mov     ecx, [eax]
0x97414D: mov     [esi+3Ch], ecx
0x974150: mov     ecx, [eax+4]
0x974153: mov     [esi+40h], ecx
0x974156: mov     ecx, [eax+8]
0x974159: mov     [esi+44h], ecx
0x97415C: mov     ecx, [esp+10h+arg_8]
0x974160: fld     dword ptr [ecx]
0x974162: fsub    dword ptr [eax]
0x974164: fstp    [esp+10h+var_C]
0x974168: fld     dword ptr [ecx+4]
0x97416B: fsub    dword ptr [eax+4]
0x97416E: fstp    [esp+10h+var_8]
0x974172: fld     dword ptr [ecx+8]
0x974175: mov     ecx, [esp+10h+var_C]
0x974179: fsub    dword ptr [eax+8]
0x97417C: mov     [esi+48h], ecx
0x97417F: mov     ecx, [esp+10h+var_8]
0x974183: mov     [esi+4Ch], ecx
0x974186: fstp    [esp+10h+var_4]
0x97418A: mov     ecx, [esp+10h+var_4]
0x97418E: mov     [esi+50h], ecx
0x974191: mov     ecx, [esp+10h+arg_C]
0x974195: fld     dword ptr [ecx]
0x974197: fsub    dword ptr [eax]
0x974199: fstp    [esp+10h+var_C]
0x97419D: fld     dword ptr [ecx+4]
0x9741A0: fsub    dword ptr [eax+4]
0x9741A3: fstp    [esp+10h+var_8]
0x9741A7: fld     dword ptr [ecx+8]
0x9741AA: mov     ecx, [esp+10h+var_8]
0x9741AE: fsub    dword ptr [eax+8]
0x9741B1: mov     eax, [esp+10h+var_C]
0x9741B5: mov     [esi+54h], eax
0x9741B8: mov     [esi+58h], ecx
0x9741BB: fstp    [esp+10h+var_4]
0x9741BF: mov     eax, [esp+10h+var_4]
0x9741C3: mov     [esi+5Ch], eax
0x9741C6: fld     dword ptr [edx+38h]
0x9741C9: fmul    st, st
0x9741CB: mov     eax, esi
0x9741CD: fld1
0x9741CF: fdivrp  st(1), st
0x9741D1: fstp    dword ptr [esi+60h]
0x9741D4: fld     dword ptr ds:0A7DEB4h
0x9741DA: fstp    dword ptr [esi+64h]
0x9741DD: fld     dword ptr ds:0A7DEB4h
0x9741E3: fstp    dword ptr [esi+68h]
0x9741E6: pop     esi
0x9741E7: add     esp, 0Ch
0x9741EA: retn    20h ; ' '
