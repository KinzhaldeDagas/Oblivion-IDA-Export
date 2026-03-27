0x974250: mov     eax, [esp+arg_14]
0x974254: fld     [esp+arg_10]
0x974258: push    esi
0x974259: push    eax; int
0x97425A: sub     esp, 0Ch
0x97425D: fstp    [esp+14h+var_C]; float
0x974261: mov     esi, ecx
0x974263: fld     [esp+14h+arg_C]
0x974267: fstp    [esp+14h+var_10]; float
0x97426B: fld     [esp+14h+arg_8]
0x97426F: fstp    [esp+14h+var_14]; float
0x974272: call    sub_96F0E0
0x974277: mov     eax, [esp+4+arg_4]
0x97427B: mov     ecx, [esp+4+arg_0]
0x97427F: mov     [esi+3Ch], eax
0x974282: mov     dword ptr [esi], offset ??_7NiBoxCapsuleIntersector@@6B@; const NiBoxCapsuleIntersector::`vftable'
0x974288: mov     [esi+38h], ecx
0x97428B: fld     dword ptr [eax+38h]
0x97428E: fmul    st, st
0x974290: mov     eax, esi
0x974292: fld1
0x974294: fdivrp  st(1), st
0x974296: fstp    dword ptr [esi+40h]
0x974299: fld     dword ptr ds:0A7DEB4h
0x97429F: fstp    dword ptr [esi+44h]
0x9742A2: fld     dword ptr ds:0A7DEB4h
0x9742A8: fstp    dword ptr [esi+48h]
0x9742AB: fld     dword ptr ds:0A7DEB4h
0x9742B1: fstp    dword ptr [esi+4Ch]
0x9742B4: pop     esi
0x9742B5: retn    18h
