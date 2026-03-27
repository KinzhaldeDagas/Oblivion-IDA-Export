0x6E5920: mov     eax, [esp+arg_10]
0x6E5924: mov     edx, [esp+arg_8]
0x6E5928: push    esi
0x6E5929: push    eax; int
0x6E592A: mov     eax, [esp+8+arg_4]
0x6E592E: mov     esi, ecx
0x6E5930: mov     ecx, [esp+8+arg_C]
0x6E5934: push    ecx; int
0x6E5935: mov     ecx, [esp+0Ch+arg_0]
0x6E5939: push    edx; int
0x6E593A: push    eax; int
0x6E593B: push    ecx; int
0x6E593C: mov     ecx, esi; this
0x6E593E: call    sub_6E4930
0x6E5943: mov     dword ptr [esi], offset ??_7NiBSplineCompTransformInterpolator@@6B@; const NiBSplineCompTransformInterpolator::`vftable'
0x6E5949: fld     dword ptr ds:0A7DEB4h
0x6E594F: fstp    dword ptr [esi+48h]
0x6E5952: mov     eax, esi
0x6E5954: fld     dword ptr ds:0A7DEB4h
0x6E595A: fstp    dword ptr [esi+4Ch]
0x6E595D: fld     dword ptr ds:0A7DEB4h
0x6E5963: fstp    dword ptr [esi+50h]
0x6E5966: fld     dword ptr ds:0A7DEB4h
0x6E596C: fstp    dword ptr [esi+54h]
0x6E596F: fld     dword ptr ds:0A7DEB4h
0x6E5975: fstp    dword ptr [esi+58h]
0x6E5978: fld     dword ptr ds:0A7DEB4h
0x6E597E: fstp    dword ptr [esi+5Ch]
0x6E5981: pop     esi
0x6E5982: retn    14h
