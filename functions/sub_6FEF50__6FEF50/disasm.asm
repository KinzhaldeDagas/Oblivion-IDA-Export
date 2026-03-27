0x6FEF50: sub     esp, 0Ch
0x6FEF53: movzx   edx, word ptr [esp+0Ch+arg_4]
0x6FEF58: fld     dword ptr [ecx+30h]
0x6FEF5B: push    esi
0x6FEF5C: mov     esi, [esp+10h+arg_0]
0x6FEF60: push    edi
0x6FEF61: mov     edi, [esi+5Ch]
0x6FEF64: lea     eax, ds:0[edx*8]
0x6FEF6B: sub     eax, edx
0x6FEF6D: lea     eax, [edi+eax*4]
0x6FEF70: pop     edi
0x6FEF71: fadd    dword ptr [eax]
0x6FEF73: fstp    dword ptr [eax]
0x6FEF75: fld     dword ptr [ecx+34h]
0x6FEF78: fadd    dword ptr [eax+4]
0x6FEF7B: fstp    dword ptr [eax+4]
0x6FEF7E: fld     dword ptr [ecx+38h]
0x6FEF81: fadd    dword ptr [eax+8]
0x6FEF84: fstp    dword ptr [eax+8]
0x6FEF87: fld     dword ptr [ecx+18h]
0x6FEF8A: fstp    [esp+10h+arg_4]
0x6FEF8E: fld     dword ptr [ecx+30h]
0x6FEF91: fld     [esp+10h+arg_4]
0x6FEF95: fld     st
0x6FEF97: fmulp   st(2), st
0x6FEF99: fxch    st(1)
0x6FEF9B: fstp    [esp+10h+var_C]
0x6FEF9F: fld     dword ptr [ecx+34h]
0x6FEFA2: fmul    st, st(1)
0x6FEFA4: fstp    [esp+10h+var_8]
0x6FEFA8: fmul    dword ptr [ecx+38h]
0x6FEFAB: lea     ecx, [edx+edx*2]
0x6FEFAE: mov     edx, [esi+1Ch]
0x6FEFB1: lea     eax, [edx+ecx*4]
0x6FEFB4: fstp    [esp+10h+var_4]
0x6FEFB8: pop     esi
0x6FEFB9: fld     dword ptr [eax]
0x6FEFBB: fsub    [esp+0Ch+var_C]
0x6FEFBE: fstp    dword ptr [eax]
0x6FEFC0: fld     dword ptr [eax+4]
0x6FEFC3: fsub    [esp+0Ch+var_8]
0x6FEFC7: fstp    dword ptr [eax+4]
0x6FEFCA: fld     dword ptr [eax+8]
0x6FEFCD: fsub    [esp+0Ch+var_4]
0x6FEFD1: fstp    dword ptr [eax+8]
0x6FEFD4: add     esp, 0Ch
0x6FEFD7: retn    8
