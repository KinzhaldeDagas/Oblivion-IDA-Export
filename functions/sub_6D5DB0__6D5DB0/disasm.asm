0x6D5DB0: sub     esp, 0Ch
0x6D5DB3: fld     dword ptr ds:0A7DEB4h
0x6D5DB9: mov     ecx, [ecx+2Ch]
0x6D5DBC: test    ecx, ecx
0x6D5DBE: push    ebx
0x6D5DBF: push    ebp
0x6D5DC0: mov     ebp, [esp+14h+arg_0]
0x6D5DC4: fstp    dword ptr [ebp+0]
0x6D5DC7: push    esi
0x6D5DC8: fld     dword ptr ds:0A7DEB4h
0x6D5DCE: push    edi
0x6D5DCF: mov     edi, [esp+1Ch+arg_4]
0x6D5DD3: fchs
0x6D5DD5: fstp    dword ptr [edi]
0x6D5DD7: mov     [esp+1Ch+var_9], 0
0x6D5DDC: jz      loc_6D5F85
0x6D5DE2: movzx   edx, word ptr [ecx+0Ah]
0x6D5DE6: test    edx, edx
0x6D5DE8: mov     bl, [ecx+1Dh]
0x6D5DEB: mov     esi, [ecx+24h]
0x6D5DEE: jbe     short loc_6D5E37
0x6D5DF0: fld     dword ptr [esi]
0x6D5DF2: fstp    [esp+1Ch+var_8]
0x6D5DF6: fld     [esp+1Ch+var_8]
0x6D5DFA: fld     dword ptr [ebp+0]
0x6D5DFD: fcomp   st(1)
0x6D5DFF: fnstsw  ax
0x6D5E01: test    ah, 41h
0x6D5E04: jnz     short loc_6D5E0B
0x6D5E06: fstp    dword ptr [ebp+0]
0x6D5E09: jmp     short loc_6D5E0D
0x6D5E0B: fstp    st
0x6D5E0D: movzx   eax, bl
0x6D5E10: add     edx, 0FFFFFFFFh
0x6D5E13: imul    edx, eax
0x6D5E16: fld     dword ptr [edx+esi]
0x6D5E19: fstp    [esp+1Ch+var_8]
0x6D5E1D: fld     [esp+1Ch+var_8]
0x6D5E21: fld     dword ptr [edi]
0x6D5E23: fcomp   st(1)
0x6D5E25: fnstsw  ax
0x6D5E27: test    ah, 5
0x6D5E2A: jp      short loc_6D5E30
0x6D5E2C: fstp    dword ptr [edi]
0x6D5E2E: jmp     short loc_6D5E32
0x6D5E30: fstp    st
0x6D5E32: mov     [esp+1Ch+var_9], 1
0x6D5E37: test    ecx, ecx
0x6D5E39: jz      loc_6D5F85
0x6D5E3F: movzx   esi, word ptr [ecx+8]
0x6D5E43: test    esi, esi
0x6D5E45: mov     eax, [ecx+10h]
0x6D5E48: mov     bl, [ecx+1Ch]
0x6D5E4B: mov     edx, [ecx+20h]
0x6D5E4E: jbe     loc_6D5F2B
0x6D5E54: cmp     eax, 4
0x6D5E57: jnz     loc_6D5EE4
0x6D5E5D: lea     ebp, [edx+2Ch]
0x6D5E60: lea     esi, [edx+30h]
0x6D5E63: mov     [esp+1Ch+var_4], 3
0x6D5E6B: jmp     short loc_6D5E70
0x6D5E6D: align 10h
0x6D5E70: mov     edi, [esi-1Ch]
0x6D5E73: test    edi, edi
0x6D5E75: jbe     short loc_6D5ECD
0x6D5E77: mov     edx, [esi]
0x6D5E79: fld     dword ptr [edx]
0x6D5E7B: mov     eax, [esp+1Ch+arg_0]
0x6D5E7F: mov     bl, [ebp+0]
0x6D5E82: fstp    [esp+1Ch+var_8]
0x6D5E86: fld     [esp+1Ch+var_8]
0x6D5E8A: fld     dword ptr [eax]
0x6D5E8C: fcomp   st(1)
0x6D5E8E: fnstsw  ax
0x6D5E90: test    ah, 41h
0x6D5E93: jnz     short loc_6D5E9D
0x6D5E95: mov     eax, [esp+1Ch+arg_0]
0x6D5E99: fstp    dword ptr [eax]
0x6D5E9B: jmp     short loc_6D5E9F
0x6D5E9D: fstp    st
0x6D5E9F: movzx   eax, bl
0x6D5EA2: add     edi, 0FFFFFFFFh
0x6D5EA5: imul    edi, eax
0x6D5EA8: fld     dword ptr [edi+edx]
0x6D5EAB: mov     edx, [esp+1Ch+arg_4]
0x6D5EAF: fstp    [esp+1Ch+var_8]
0x6D5EB3: fld     [esp+1Ch+var_8]
0x6D5EB7: fld     dword ptr [edx]
0x6D5EB9: fcomp   st(1)
0x6D5EBB: fnstsw  ax
0x6D5EBD: test    ah, 5
0x6D5EC0: jp      short loc_6D5EC6
0x6D5EC2: fstp    dword ptr [edx]
0x6D5EC4: jmp     short loc_6D5EC8
0x6D5EC6: fstp    st
0x6D5EC8: mov     [esp+1Ch+var_9], 1
0x6D5ECD: add     esi, 4
0x6D5ED0: add     ebp, 1
0x6D5ED3: sub     [esp+1Ch+var_4], 1
0x6D5ED8: jnz     short loc_6D5E70
0x6D5EDA: mov     ebp, [esp+1Ch+arg_0]
0x6D5EDE: mov     edi, [esp+1Ch+arg_4]
0x6D5EE2: jmp     short loc_6D5F2B
0x6D5EE4: fld     dword ptr [edx]
0x6D5EE6: fstp    [esp+1Ch+arg_0]
0x6D5EEA: fld     [esp+1Ch+arg_0]
0x6D5EEE: fld     dword ptr [ebp+0]
0x6D5EF1: fcomp   st(1)
0x6D5EF3: fnstsw  ax
0x6D5EF5: test    ah, 41h
0x6D5EF8: jnz     short loc_6D5EFF
0x6D5EFA: fstp    dword ptr [ebp+0]
0x6D5EFD: jmp     short loc_6D5F01
0x6D5EFF: fstp    st
0x6D5F01: movzx   eax, bl
0x6D5F04: add     esi, 0FFFFFFFFh
0x6D5F07: imul    esi, eax
0x6D5F0A: fld     dword ptr [esi+edx]
0x6D5F0D: fstp    [esp+1Ch+arg_0]
0x6D5F11: fld     [esp+1Ch+arg_0]
0x6D5F15: fld     dword ptr [edi]
0x6D5F17: fcomp   st(1)
0x6D5F19: fnstsw  ax
0x6D5F1B: test    ah, 5
0x6D5F1E: jp      short loc_6D5F24
0x6D5F20: fstp    dword ptr [edi]
0x6D5F22: jmp     short loc_6D5F26
0x6D5F24: fstp    st
0x6D5F26: mov     [esp+1Ch+var_9], 1
0x6D5F2B: test    ecx, ecx
0x6D5F2D: jz      short loc_6D5F85
0x6D5F2F: movzx   edx, word ptr [ecx+0Ch]
0x6D5F33: test    edx, edx
0x6D5F35: mov     bl, [ecx+1Eh]
0x6D5F38: mov     ecx, [ecx+28h]
0x6D5F3B: jbe     short loc_6D5F85
0x6D5F3D: fld     dword ptr [ecx]
0x6D5F3F: fstp    [esp+1Ch+arg_0]
0x6D5F43: fld     [esp+1Ch+arg_0]
0x6D5F47: fld     dword ptr [ebp+0]
0x6D5F4A: fcomp   st(1)
0x6D5F4C: fnstsw  ax
0x6D5F4E: test    ah, 41h
0x6D5F51: jnz     short loc_6D5F58
0x6D5F53: fstp    dword ptr [ebp+0]
0x6D5F56: jmp     short loc_6D5F5A
0x6D5F58: fstp    st
0x6D5F5A: movzx   eax, bl
0x6D5F5D: add     edx, 0FFFFFFFFh
0x6D5F60: imul    edx, eax
0x6D5F63: fld     dword ptr [edx+ecx]
0x6D5F66: fstp    [esp+1Ch+arg_0]
0x6D5F6A: fld     [esp+1Ch+arg_0]
0x6D5F6E: fld     dword ptr [edi]
0x6D5F70: fcomp   st(1)
0x6D5F72: fnstsw  ax
0x6D5F74: test    ah, 5
0x6D5F77: jp      short loc_6D5F9D
0x6D5F79: fstp    dword ptr [edi]
0x6D5F7B: pop     edi
0x6D5F7C: pop     esi
0x6D5F7D: pop     ebp
0x6D5F7E: pop     ebx
0x6D5F7F: add     esp, 0Ch
0x6D5F82: retn    8
0x6D5F85: cmp     [esp+1Ch+var_9], 0
0x6D5F8A: jnz     short loc_6D5F9F
0x6D5F8C: fldz
0x6D5F8E: fst     dword ptr [ebp+0]
0x6D5F91: fstp    dword ptr [edi]
0x6D5F93: pop     edi
0x6D5F94: pop     esi
0x6D5F95: pop     ebp
0x6D5F96: pop     ebx
0x6D5F97: add     esp, 0Ch
0x6D5F9A: retn    8
0x6D5F9D: fstp    st
0x6D5F9F: pop     edi
0x6D5FA0: pop     esi
0x6D5FA1: pop     ebp
0x6D5FA2: pop     ebx
0x6D5FA3: add     esp, 0Ch
0x6D5FA6: retn    8
