0x8A2D60: push    ebp
0x8A2D61: mov     ebp, esp
0x8A2D63: and     esp, 0FFFFFFF0h
0x8A2D66: sub     esp, 10h
0x8A2D69: fld     [ebp+arg_0]
0x8A2D6C: movss   xmm1, [ebp+arg_0]
0x8A2D71: fld     st
0x8A2D73: xorps   xmm0, xmm0
0x8A2D76: fmul    st, st(1)
0x8A2D78: movss   xmm0, xmm1
0x8A2D7C: movaps  xmm1, xmm0
0x8A2D7F: shufps  xmm1, xmm0, 0
0x8A2D83: movaps  xmm0, xmmword ptr [ecx+0A0h]
0x8A2D8A: fmul    st, st(1)
0x8A2D8C: mulps   xmm1, xmm0
0x8A2D8F: movaps  xmmword ptr [ecx+0A0h], xmm1
0x8A2D96: fstp    [esp+10h+var_4]
0x8A2D9A: lea     eax, [ecx+80h]
0x8A2DA0: fld     [esp+10h+var_4]
0x8A2DA4: mov     edx, 3
0x8A2DA9: fld     dword ptr [eax-10h]
0x8A2DAC: add     eax, 4
0x8A2DAF: sub     edx, 1
0x8A2DB2: fmul    st, st(1)
0x8A2DB4: fstp    dword ptr [eax-14h]
0x8A2DB7: fld     dword ptr [eax-4]
0x8A2DBA: fmul    st, st(1)
0x8A2DBC: fstp    dword ptr [eax-4]
0x8A2DBF: fld     dword ptr [eax+0Ch]
0x8A2DC2: fmul    st, st(1)
0x8A2DC4: fstp    dword ptr [eax+0Ch]
0x8A2DC7: jnz     short loc_8A2DA9
0x8A2DC9: fstp    st
0x8A2DCB: fmul    dword ptr [ecx+0B0h]
0x8A2DD1: fstp    dword ptr [ecx+0B0h]
0x8A2DD7: mov     esp, ebp
0x8A2DD9: pop     ebp
0x8A2DDA: retn    4
