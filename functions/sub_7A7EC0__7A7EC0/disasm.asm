0x7A7EC0: push    ecx
0x7A7EC1: movzx   eax, byte ptr [ecx+14h]
0x7A7EC5: mov     [esp+4+var_4], eax
0x7A7EC8: mov     eax, [esp+4+arg_0]
0x7A7ECC: movzx   edx, byte ptr [ecx+15h]
0x7A7ED0: fild    [esp+4+var_4]
0x7A7ED3: fld     qword ptr ds:0A3DDD8h
0x7A7ED9: mov     [esp+4+arg_0], edx
0x7A7EDD: fdiv    st(1), st
0x7A7EDF: movzx   ecx, byte ptr [ecx+16h]
0x7A7EE3: fxch    st(1)
0x7A7EE5: fstp    dword ptr [eax]
0x7A7EE7: fild    [esp+4+arg_0]
0x7A7EEB: mov     [esp+4+arg_0], ecx
0x7A7EEF: fdiv    st, st(1)
0x7A7EF1: fstp    dword ptr [eax+4]
0x7A7EF4: fild    [esp+4+arg_0]
0x7A7EF8: fdivrp  st(1), st
0x7A7EFA: fstp    dword ptr [eax+8]
0x7A7EFD: pop     ecx
0x7A7EFE: retn    4
