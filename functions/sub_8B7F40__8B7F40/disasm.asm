0x8B7F40: push    ecx
0x8B7F41: push    esi
0x8B7F42: mov     esi, ecx
0x8B7F44: mov     eax, [esi]
0x8B7F46: mov     edx, [eax+74h]
0x8B7F49: lea     ecx, [esp+8+var_1]
0x8B7F4D: push    ecx
0x8B7F4E: mov     ecx, esi
0x8B7F50: call    edx
0x8B7F52: test    eax, eax
0x8B7F54: mov     ecx, [esp+8+arg_4]
0x8B7F58: jz      short loc_8B7F87
0x8B7F5A: fld     dword ptr [ecx+10h]
0x8B7F5D: fstp    [esp+8+arg_4]
0x8B7F61: fld     dword ptr [eax+10h]
0x8B7F64: fld     [esp+8+arg_4]
0x8B7F68: fld     st
0x8B7F6A: fmulp   st(2), st
0x8B7F6C: fxch    st(1)
0x8B7F6E: fstp    dword ptr [eax+10h]
0x8B7F71: fld     st
0x8B7F73: fmul    dword ptr [eax+14h]
0x8B7F76: fstp    dword ptr [eax+14h]
0x8B7F79: fld     dword ptr [eax+18h]
0x8B7F7C: fmul    st, st(1)
0x8B7F7E: fstp    dword ptr [eax+18h]
0x8B7F81: fmul    dword ptr [eax+1Ch]
0x8B7F84: fstp    dword ptr [eax+1Ch]
0x8B7F87: mov     eax, [esp+8+arg_0]
0x8B7F8B: push    ecx
0x8B7F8C: push    eax
0x8B7F8D: mov     ecx, esi
0x8B7F8F: call    sub_8A2670
0x8B7F94: pop     esi
0x8B7F95: pop     ecx
0x8B7F96: retn    8
