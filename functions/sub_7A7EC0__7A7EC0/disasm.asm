0x7A7EC0: push    ecx; OBLIVION AUTHORITY (2026-08-24): CBillboardLeaf::GetColor decodes packed +0x14 R/G/B bytes to float channels by dividing by 255. Used by lower-LOD pair averaging at 0x7A91A8/0x7A91AA.
0x7A7EC1: movzx   eax, byte ptr [ecx+14h]
0x7A7EC5: mov     [esp+4+var_4], eax
0x7A7EC8: mov     eax, [esp+4+outRgb]
0x7A7ECC: movzx   edx, byte ptr [ecx+15h]
0x7A7ED0: fild    [esp+4+var_4]
0x7A7ED3: fld     qword ptr ds:0A3DDD8h
0x7A7ED9: mov     [esp+4+outRgb], edx
0x7A7EDD: fdiv    st(1), st
0x7A7EDF: movzx   ecx, byte ptr [ecx+16h]
0x7A7EE3: fxch    st(1)
0x7A7EE5: fstp    dword ptr [eax]
0x7A7EE7: fild    [esp+4+outRgb]
0x7A7EEB: mov     [esp+4+outRgb], ecx
0x7A7EEF: fdiv    st, st(1)
0x7A7EF1: fstp    dword ptr [eax+4]
0x7A7EF4: fild    [esp+4+outRgb]
0x7A7EF8: fdivrp  st(1), st
0x7A7EFA: fstp    dword ptr [eax+8]
0x7A7EFD: pop     ecx
0x7A7EFE: retn    4
