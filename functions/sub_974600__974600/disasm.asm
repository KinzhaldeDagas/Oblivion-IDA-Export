0x974600: mov     eax, [esp+arg_14]
0x974604: fld     [esp+arg_10]
0x974608: push    esi
0x974609: push    eax; int
0x97460A: sub     esp, 0Ch
0x97460D: fstp    [esp+14h+var_C]; float
0x974611: mov     esi, ecx
0x974613: fld     [esp+14h+arg_C]
0x974617: fstp    [esp+14h+var_10]; float
0x97461B: fld     [esp+14h+arg_8]
0x97461F: fstp    [esp+14h+var_14]; float
0x974622: call    sub_96F0E0
0x974627: mov     eax, [esp+4+arg_4]
0x97462B: mov     ecx, [esp+4+arg_0]
0x97462F: mov     [esi+3Ch], eax
0x974632: mov     dword ptr [esi], offset ??_7NiBoxSphereIntersector@@6B@; const NiBoxSphereIntersector::`vftable'
0x974638: mov     [esi+38h], ecx
0x97463B: fld     dword ptr [eax+10h]
0x97463E: fmul    st, st
0x974640: mov     eax, esi
0x974642: fld1
0x974644: fdivrp  st(1), st
0x974646: fstp    dword ptr [esi+40h]
0x974649: fld     dword ptr ds:0A7DEB4h
0x97464F: fstp    dword ptr [esi+44h]
0x974652: fld     dword ptr ds:0A7DEB4h
0x974658: fstp    dword ptr [esi+48h]
0x97465B: fld     dword ptr ds:0A7DEB4h
0x974661: fstp    dword ptr [esi+4Ch]
0x974664: pop     esi
0x974665: retn    18h
