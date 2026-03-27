0x4A6AA0: push    ecx
0x4A6AA1: mov     ecx, [esp+4+arg_0]
0x4A6AA5: test    ecx, ecx
0x4A6AA7: jz      short loc_4A6AE7
0x4A6AA9: mov     eax, [esp+4+arg_4]
0x4A6AAD: test    eax, eax
0x4A6AAF: jz      short loc_4A6AE7
0x4A6AB1: fld     dword ptr [eax]
0x4A6AB3: fstp    [esp+4+arg_0]
0x4A6AB7: fld     dword ptr [eax+4]
0x4A6ABA: fstp    [esp+4+var_4]
0x4A6ABD: fld     [esp+4+arg_0]
0x4A6AC1: fld     dword ptr [ecx]
0x4A6AC3: fsub    st, st(1)
0x4A6AC5: fld     dword ptr [ecx+4]
0x4A6AC8: fld     [esp+4+var_4]
0x4A6ACB: fld     st
0x4A6ACD: fsubp   st(2), st
0x4A6ACF: fxch    st(2)
0x4A6AD1: fdivrp  st(1), st
0x4A6AD3: fld     [esp+4+arg_8]
0x4A6AD7: fsubp   st(2), st
0x4A6AD9: fmulp   st(1), st
0x4A6ADB: fsubp   st(1), st
0x4A6ADD: fstp    [esp+4+arg_0]
0x4A6AE1: fld     [esp+4+arg_0]
0x4A6AE5: pop     ecx
0x4A6AE6: retn
0x4A6AE7: fldz
0x4A6AE9: pop     ecx
0x4A6AEA: retn
