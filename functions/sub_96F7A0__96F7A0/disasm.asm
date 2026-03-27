0x96F7A0: mov     eax, [esp+arg_14]
0x96F7A4: fld     [esp+arg_10]
0x96F7A8: push    esi
0x96F7A9: push    eax; int
0x96F7AA: sub     esp, 0Ch
0x96F7AD: fstp    [esp+14h+var_C]; float
0x96F7B1: mov     esi, ecx
0x96F7B3: fld     [esp+14h+arg_C]
0x96F7B7: fstp    [esp+14h+var_10]; float
0x96F7BB: fld     [esp+14h+arg_8]
0x96F7BF: fstp    [esp+14h+var_14]; float
0x96F7C2: call    sub_96F0E0
0x96F7C7: mov     eax, [esp+4+arg_0]
0x96F7CB: mov     ecx, [esp+4+arg_4]
0x96F7CF: mov     [esi+38h], eax
0x96F7D2: mov     dword ptr [esi], offset ??_7NiCapsuleCapsuleIntersector@@6B@; const NiCapsuleCapsuleIntersector::`vftable'
0x96F7D8: mov     [esi+3Ch], ecx
0x96F7DB: fld     dword ptr [eax+38h]
0x96F7DE: fadd    dword ptr [ecx+38h]
0x96F7E1: mov     eax, esi
0x96F7E3: fstp    [esp+4+arg_14]
0x96F7E7: fld     [esp+4+arg_14]
0x96F7EB: fmul    st, st
0x96F7ED: fld1
0x96F7EF: fdivrp  st(1), st
0x96F7F1: fstp    dword ptr [esi+40h]
0x96F7F4: fld     dword ptr ds:0A7DEB4h
0x96F7FA: fstp    dword ptr [esi+44h]
0x96F7FD: fld     dword ptr ds:0A7DEB4h
0x96F803: fstp    dword ptr [esi+48h]
0x96F806: pop     esi
0x96F807: retn    18h
