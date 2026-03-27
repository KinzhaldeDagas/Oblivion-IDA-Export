0x4E8DB0: sub     esp, 10h
0x4E8DB3: fld     dword ptr ds:0A32048h
0x4E8DB9: push    ebp
0x4E8DBA: push    esi
0x4E8DBB: fstp    [esp+18h+var_10]
0x4E8DBF: mov     esi, [esp+18h+arg_4]
0x4E8DC3: xor     ebp, ebp
0x4E8DC5: test    esi, esi
0x4E8DC7: jz      loc_4E8E64
0x4E8DCD: push    ebx
0x4E8DCE: mov     ebx, [esp+1Ch+arg_0]
0x4E8DD2: push    edi
0x4E8DD3: cmp     dword ptr [esi+4], 0
0x4E8DD7: jnz     short loc_4E8DE2
0x4E8DD9: cmp     dword ptr [esi], 0
0x4E8DDC: jz      loc_4E8E62
0x4E8DE2: mov     edi, [esi]
0x4E8DE4: mov     ecx, edi
0x4E8DE6: call    sub_4BEF40
0x4E8DEB: fld     dword ptr [eax]
0x4E8DED: fsub    dword ptr [ebx]
0x4E8DEF: fstp    [esp+20h+var_C]
0x4E8DF3: fld     dword ptr [eax+4]
0x4E8DF6: fsub    dword ptr [ebx+4]
0x4E8DF9: fstp    [esp+20h+var_8]
0x4E8DFD: fld     dword ptr [eax+8]
0x4E8E00: fsub    dword ptr [ebx+8]
0x4E8E03: fstp    [esp+20h+var_4]
0x4E8E07: fld     [esp+20h+var_C]
0x4E8E0B: fld     [esp+20h+var_8]
0x4E8E0F: fld     [esp+20h+var_4]
0x4E8E13: fld     st(1)
0x4E8E15: fmulp   st(2), st
0x4E8E17: fld     st(2)
0x4E8E19: fmulp   st(3), st
0x4E8E1B: fxch    st(1)
0x4E8E1D: faddp   st(2), st
0x4E8E1F: fmul    st, st
0x4E8E21: faddp   st(1), st
0x4E8E23: fstp    [esp+20h+arg_4]
0x4E8E27: fld     [esp+20h+arg_4]
0x4E8E2B: call    __CIsqrt
0x4E8E30: fstp    [esp+20h+arg_4]
0x4E8E34: fld     [esp+20h+arg_4]
0x4E8E38: fstp    [esp+20h+arg_4]
0x4E8E3C: fld     [esp+20h+arg_4]
0x4E8E40: fld     [esp+20h+var_10]
0x4E8E44: fcomp   st(1)
0x4E8E46: fnstsw  ax
0x4E8E48: test    ah, 41h
0x4E8E4B: jnz     short loc_4E8E55
0x4E8E4D: fstp    [esp+20h+var_10]
0x4E8E51: mov     ebp, edi
0x4E8E53: jmp     short loc_4E8E57
0x4E8E55: fstp    st
0x4E8E57: mov     esi, [esi+4]
0x4E8E5A: test    esi, esi
0x4E8E5C: jnz     loc_4E8DD3
0x4E8E62: pop     edi
0x4E8E63: pop     ebx
0x4E8E64: mov     eax, [esp+18h+arg_8]
0x4E8E68: fld     [esp+18h+var_10]
0x4E8E6C: fstp    dword ptr [eax]
0x4E8E6E: pop     esi
0x4E8E6F: mov     eax, ebp
0x4E8E71: pop     ebp
0x4E8E72: add     esp, 10h
0x4E8E75: retn    0Ch
