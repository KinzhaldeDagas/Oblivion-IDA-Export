0x96F3C0: mov     eax, [esp+arg_14]
0x96F3C4: fld     [esp+arg_10]
0x96F3C8: push    esi
0x96F3C9: push    eax; int
0x96F3CA: sub     esp, 0Ch
0x96F3CD: fstp    [esp+14h+var_C]; float
0x96F3D1: mov     esi, ecx
0x96F3D3: fld     [esp+14h+arg_C]
0x96F3D7: fstp    [esp+14h+var_10]; float
0x96F3DB: fld     [esp+14h+arg_8]
0x96F3DF: fstp    [esp+14h+var_14]; float
0x96F3E2: call    sub_96F0E0
0x96F3E7: mov     eax, [esp+4+arg_0]
0x96F3EB: mov     ecx, [esp+4+arg_4]
0x96F3EF: mov     [esi+38h], eax
0x96F3F2: mov     dword ptr [esi], offset ??_7NiCapsuleSphereIntersector@@6B@; const NiCapsuleSphereIntersector::`vftable'
0x96F3F8: mov     [esi+3Ch], ecx
0x96F3FB: fld     dword ptr [eax+38h]
0x96F3FE: fadd    dword ptr [ecx+10h]
0x96F401: mov     eax, esi
0x96F403: fstp    [esp+4+arg_14]
0x96F407: fld     [esp+4+arg_14]
0x96F40B: fmul    st, st
0x96F40D: fld1
0x96F40F: fdivrp  st(1), st
0x96F411: fstp    dword ptr [esi+40h]
0x96F414: fld     dword ptr ds:0A7DEB4h
0x96F41A: fstp    dword ptr [esi+44h]
0x96F41D: pop     esi
0x96F41E: retn    18h
