0x78F250: sub     esp, 18h
0x78F253: mov     eax, [esp+18h+arg_8]
0x78F257: mov     ecx, [esp+18h+arg_4]
0x78F25B: fld     dword ptr [eax]
0x78F25D: fsub    dword ptr [ecx]
0x78F25F: fstp    [esp+18h+var_18]
0x78F262: fld     dword ptr [eax+4]
0x78F265: fsub    dword ptr [ecx+4]
0x78F268: fstp    [esp+18h+var_14]
0x78F26C: fld     dword ptr [eax+8]
0x78F26F: mov     eax, [esp+18h+arg_0]
0x78F273: fsub    dword ptr [ecx+8]
0x78F276: fstp    [esp+18h+var_10]
0x78F27A: fld     [esp+18h+var_18]
0x78F27D: fld     [esp+18h+arg_C]
0x78F281: fld     st
0x78F283: fmulp   st(2), st
0x78F285: fxch    st(1)
0x78F287: fstp    [esp+18h+var_C]
0x78F28B: fld     [esp+18h+var_14]
0x78F28F: fmul    st, st(1)
0x78F291: fstp    [esp+18h+var_8]
0x78F295: fmul    [esp+18h+var_10]
0x78F299: fstp    [esp+18h+var_4]
0x78F29D: fld     dword ptr [ecx]
0x78F29F: fadd    [esp+18h+var_C]
0x78F2A3: fstp    dword ptr [eax]
0x78F2A5: fld     [esp+18h+var_8]
0x78F2A9: fadd    dword ptr [ecx+4]
0x78F2AC: fstp    dword ptr [eax+4]
0x78F2AF: fld     dword ptr [ecx+8]
0x78F2B2: fadd    [esp+18h+var_4]
0x78F2B6: fstp    dword ptr [eax+8]
0x78F2B9: add     esp, 18h
0x78F2BC: retn
