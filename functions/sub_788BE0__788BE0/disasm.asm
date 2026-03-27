0x788BE0: sub     esp, 18h
0x788BE3: push    ebx
0x788BE4: push    ebp
0x788BE5: push    esi
0x788BE6: push    edi
0x788BE7: mov     edi, ecx
0x788BE9: mov     esi, [edi+4]
0x788BEC: cmp     esi, [edi+8]
0x788BEF: jbe     short loc_788BF6
0x788BF1: call    __invalid_parameter_noinfo
0x788BF6: mov     ebx, [esp+28h+arg_0]
0x788BFA: lea     ebx, [ebx+0]
0x788C00: mov     ebp, [edi+8]
0x788C03: cmp     [edi+4], ebp
0x788C06: jbe     short loc_788C0D
0x788C08: call    __invalid_parameter_noinfo
0x788C0D: cmp     esi, ebp
0x788C0F: jz      loc_788D8F
0x788C15: cmp     esi, [edi+8]
0x788C18: jb      short loc_788C33
0x788C1A: call    __invalid_parameter_noinfo
0x788C1F: cmp     esi, [edi+8]
0x788C22: jb      short loc_788C33
0x788C24: call    __invalid_parameter_noinfo
0x788C29: cmp     esi, [edi+8]
0x788C2C: jb      short loc_788C33
0x788C2E: call    __invalid_parameter_noinfo
0x788C33: cmp     esi, [edi+8]
0x788C36: fld     dword ptr [esi+4]
0x788C39: fstp    [esp+28h+var_18]
0x788C3D: fld     dword ptr [esi+8]
0x788C40: fstp    [esp+28h+var_14]
0x788C44: fld     dword ptr [esi+0Ch]
0x788C47: fstp    [esp+28h+var_10]
0x788C4B: fld     dword ptr [ebx+10h]
0x788C4E: fld     [esp+28h+var_14]
0x788C52: fld     st
0x788C54: fmulp   st(2), st
0x788C56: fld     dword ptr [ebx]
0x788C58: fld     [esp+28h+var_18]
0x788C5C: fld     st
0x788C5E: fmulp   st(2), st
0x788C60: fxch    st(3)
0x788C62: faddp   st(1), st
0x788C64: fld     dword ptr [ebx+20h]
0x788C67: fld     [esp+28h+var_10]
0x788C6B: fld     st
0x788C6D: fmulp   st(2), st
0x788C6F: fxch    st(2)
0x788C71: faddp   st(1), st
0x788C73: fadd    dword ptr [ebx+30h]
0x788C76: fstp    [esp+28h+var_C]
0x788C7A: fld     dword ptr [ebx+4]
0x788C7D: fmul    st, st(3)
0x788C7F: fld     dword ptr [ebx+14h]
0x788C82: fmul    st, st(3)
0x788C84: faddp   st(1), st
0x788C86: fld     dword ptr [ebx+24h]
0x788C89: fmul    st, st(2)
0x788C8B: faddp   st(1), st
0x788C8D: fadd    dword ptr [ebx+34h]
0x788C90: fstp    [esp+28h+var_8]
0x788C94: fld     dword ptr [ebx+18h]
0x788C97: fmulp   st(2), st
0x788C99: fld     dword ptr [ebx+8]
0x788C9C: fmulp   st(3), st
0x788C9E: fxch    st(1)
0x788CA0: faddp   st(2), st
0x788CA2: fmul    dword ptr [ebx+28h]
0x788CA5: faddp   st(1), st
0x788CA7: fadd    dword ptr [ebx+38h]
0x788CAA: fstp    [esp+28h+var_4]
0x788CAE: jb      short loc_788CB5
0x788CB0: call    __invalid_parameter_noinfo
0x788CB5: fld     [esp+28h+var_C]
0x788CB9: fstp    dword ptr [esi+4]
0x788CBC: cmp     esi, [edi+8]
0x788CBF: jb      short loc_788CC6
0x788CC1: call    __invalid_parameter_noinfo
0x788CC6: fld     [esp+28h+var_8]
0x788CCA: fstp    dword ptr [esi+8]
0x788CCD: cmp     esi, [edi+8]
0x788CD0: jb      short loc_788CD7
0x788CD2: call    __invalid_parameter_noinfo
0x788CD7: fld     [esp+28h+var_4]
0x788CDB: fstp    dword ptr [esi+0Ch]
0x788CDE: cmp     esi, [edi+8]
0x788CE1: jb      short loc_788CE8
0x788CE3: call    __invalid_parameter_noinfo
0x788CE8: cmp     dword ptr [esi], 0
0x788CEB: jnz     short loc_788D01
0x788CED: cmp     esi, [edi+8]
0x788CF0: jb      short loc_788CF7
0x788CF2: call    __invalid_parameter_noinfo
0x788CF7: fld     dword ptr [esi+10h]
0x788CFA: fmul    dword ptr [ebx]
0x788CFC: fstp    dword ptr [esi+10h]
0x788CFF: jmp     short loc_788D7D
0x788D01: cmp     esi, [edi+8]
0x788D04: jb      short loc_788D0B
0x788D06: call    __invalid_parameter_noinfo
0x788D0B: cmp     dword ptr [esi], 1
0x788D0E: jnz     short loc_788D36
0x788D10: cmp     esi, [edi+8]
0x788D13: jb      short loc_788D1A
0x788D15: call    __invalid_parameter_noinfo
0x788D1A: fld     dword ptr [esi+10h]
0x788D1D: fmul    dword ptr [ebx]
0x788D1F: fstp    dword ptr [esi+10h]
0x788D22: cmp     esi, [edi+8]
0x788D25: jb      short loc_788D2C
0x788D27: call    __invalid_parameter_noinfo
0x788D2C: fld     dword ptr [esi+14h]
0x788D2F: fmul    dword ptr [ebx]
0x788D31: fstp    dword ptr [esi+14h]
0x788D34: jmp     short loc_788D7D
0x788D36: cmp     esi, [edi+8]
0x788D39: jb      short loc_788D40
0x788D3B: call    __invalid_parameter_noinfo
0x788D40: cmp     dword ptr [esi], 2
0x788D43: jnz     short loc_788D7D
0x788D45: cmp     esi, [edi+8]
0x788D48: jb      short loc_788D4F
0x788D4A: call    __invalid_parameter_noinfo
0x788D4F: fld     dword ptr [esi+10h]
0x788D52: fmul    dword ptr [ebx]
0x788D54: fstp    dword ptr [esi+10h]
0x788D57: cmp     esi, [edi+8]
0x788D5A: jb      short loc_788D61
0x788D5C: call    __invalid_parameter_noinfo
0x788D61: fld     dword ptr [esi+14h]
0x788D64: fmul    dword ptr [ebx+14h]
0x788D67: fstp    dword ptr [esi+14h]
0x788D6A: cmp     esi, [edi+8]
0x788D6D: jb      short loc_788D74
0x788D6F: call    __invalid_parameter_noinfo
0x788D74: fld     dword ptr [ebx+28h]
0x788D77: fmul    dword ptr [esi+18h]
0x788D7A: fstp    dword ptr [esi+18h]
0x788D7D: cmp     esi, [edi+8]
0x788D80: jb      short loc_788D87
0x788D82: call    __invalid_parameter_noinfo
0x788D87: add     esi, 1Ch
0x788D8A: jmp     loc_788C00
0x788D8F: pop     edi
0x788D90: pop     esi
0x788D91: pop     ebp
0x788D92: pop     ebx
0x788D93: add     esp, 18h
0x788D96: retn    4
