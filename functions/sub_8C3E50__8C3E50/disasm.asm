0x8C3E50: push    ecx
0x8C3E51: push    esi
0x8C3E52: mov     esi, ecx
0x8C3E54: mov     eax, [esi]
0x8C3E56: mov     edx, [eax+74h]
0x8C3E59: lea     ecx, [esp+8+var_1]
0x8C3E5D: push    ecx
0x8C3E5E: mov     ecx, esi
0x8C3E60: call    edx
0x8C3E62: mov     edx, [esp+8+arg_4]
0x8C3E66: mov     ecx, eax
0x8C3E68: test    ecx, ecx
0x8C3E6A: jz      loc_8C3EFA
0x8C3E70: fld     dword ptr [edx+10h]
0x8C3E73: fstp    [esp+8+arg_4]
0x8C3E77: fld1
0x8C3E79: fld     [esp+8+arg_4]
0x8C3E7D: fucom   st(1)
0x8C3E7F: fnstsw  ax
0x8C3E81: fstp    st(1)
0x8C3E83: test    ah, 44h
0x8C3E86: jnp     short loc_8C3EF8
0x8C3E88: fld     dword ptr [ecx+10h]
0x8C3E8B: mov     eax, [esp+8+arg_0]
0x8C3E8F: fmul    st, st(1)
0x8C3E91: push    edx
0x8C3E92: push    eax
0x8C3E93: fstp    dword ptr [ecx+10h]
0x8C3E96: fld     dword ptr [ecx+14h]
0x8C3E99: fmul    st, st(1)
0x8C3E9B: fstp    dword ptr [ecx+14h]
0x8C3E9E: fld     dword ptr [ecx+18h]
0x8C3EA1: fmul    st, st(1)
0x8C3EA3: fstp    dword ptr [ecx+18h]
0x8C3EA6: fld     dword ptr [ecx+1Ch]
0x8C3EA9: fmul    st, st(1)
0x8C3EAB: fstp    dword ptr [ecx+1Ch]
0x8C3EAE: fld     st
0x8C3EB0: fmul    dword ptr [ecx+20h]
0x8C3EB3: fstp    dword ptr [ecx+20h]
0x8C3EB6: fld     dword ptr [ecx+24h]
0x8C3EB9: fmul    st, st(1)
0x8C3EBB: fstp    dword ptr [ecx+24h]
0x8C3EBE: fld     dword ptr [ecx+28h]
0x8C3EC1: fmul    st, st(1)
0x8C3EC3: fstp    dword ptr [ecx+28h]
0x8C3EC6: fld     dword ptr [ecx+2Ch]
0x8C3EC9: fmul    st, st(1)
0x8C3ECB: fstp    dword ptr [ecx+2Ch]
0x8C3ECE: fld     dword ptr [ecx+30h]
0x8C3ED1: fmul    st, st(1)
0x8C3ED3: fstp    dword ptr [ecx+30h]
0x8C3ED6: fld     dword ptr [ecx+34h]
0x8C3ED9: fmul    st, st(1)
0x8C3EDB: fstp    dword ptr [ecx+34h]
0x8C3EDE: fld     dword ptr [ecx+38h]
0x8C3EE1: fmul    st, st(1)
0x8C3EE3: fstp    dword ptr [ecx+38h]
0x8C3EE6: fmul    dword ptr [ecx+3Ch]
0x8C3EE9: fstp    dword ptr [ecx+3Ch]
0x8C3EEC: mov     ecx, esi
0x8C3EEE: call    sub_8A2670
0x8C3EF3: pop     esi
0x8C3EF4: pop     ecx
0x8C3EF5: retn    8
0x8C3EF8: fstp    st
0x8C3EFA: mov     eax, [esp+8+arg_0]
0x8C3EFE: push    edx
0x8C3EFF: push    eax
0x8C3F00: mov     ecx, esi
0x8C3F02: call    sub_8A2670
0x8C3F07: pop     esi
0x8C3F08: pop     ecx
0x8C3F09: retn    8
