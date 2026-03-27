0x720DB0: sub     esp, 24h
0x720DB3: push    esi
0x720DB4: mov     esi, [esp+28h+arg_0]
0x720DB8: cmp     dword ptr [esi+0D8h], 0A030006h
0x720DC2: push    edi
0x720DC3: mov     edi, ecx
0x720DC5: jnb     loc_720F70
0x720DCB: push    ebx
0x720DCC: push    ebp
0x720DCD: push    esi
0x720DCE: call    sub_700FC0
0x720DD3: lea     eax, [edi+4]
0x720DD6: push    eax; lpAddend
0x720DD7: call    dword ptr ds:0A28078h
0x720DDD: mov     eax, [esi+21Ch]
0x720DE3: push    1
0x720DE5: lea     ecx, [esp+38h+var_20]
0x720DE9: push    ecx
0x720DEA: push    1
0x720DEC: lea     edx, [esp+40h+arg_0]
0x720DF0: push    edx
0x720DF1: mov     byte ptr [esp+44h+arg_0], 0
0x720DF6: push    eax
0x720DF7: mov     eax, [eax+4]
0x720DFA: mov     [esp+48h+var_20], 1
0x720E02: call    eax
0x720E04: add     esp, 14h
0x720E07: xor     eax, eax
0x720E09: mov     [esp+34h+var_18], eax
0x720E0D: mov     [esp+34h+var_14], eax
0x720E11: mov     [esp+34h+var_10], eax
0x720E15: mov     [esp+34h+var_C], eax
0x720E19: mov     [esp+34h+var_8], eax
0x720E1D: mov     [esp+34h+var_4], eax
0x720E21: lea     ebx, [esp+34h+var_18]
0x720E25: mov     ebp, 6
0x720E2A: lea     ebx, [ebx+0]
0x720E30: push    ebx
0x720E31: mov     ecx, esi
0x720E33: call    sub_713620
0x720E38: add     ebx, 4
0x720E3B: sub     ebp, 1
0x720E3E: jnz     short loc_720E30
0x720E40: push    6
0x720E42: mov     ecx, esi
0x720E44: call    sub_712BC0
0x720E49: mov     ebx, 6
0x720E4E: mov     edi, edi
0x720E50: mov     ecx, esi
0x720E52: call    sub_712A20
0x720E57: sub     ebx, 1
0x720E5A: jnz     short loc_720E50
0x720E5C: cmp     byte ptr [esp+34h+arg_0], 0
0x720E61: jz      short loc_720E8F
0x720E63: mov     ecx, [esi+1E8h]
0x720E69: mov     edx, [esp+34h+var_4]
0x720E6D: mov     eax, [esp+34h+var_8]
0x720E71: push    ecx
0x720E72: mov     ecx, [esp+38h+var_C]
0x720E76: push    edx
0x720E77: mov     edx, [esp+3Ch+var_10]
0x720E7B: push    eax
0x720E7C: mov     eax, [esp+40h+var_14]
0x720E80: push    ecx
0x720E81: mov     ecx, [esp+44h+var_18]
0x720E85: push    edx
0x720E86: push    eax
0x720E87: push    ecx
0x720E88: mov     ecx, edi
0x720E8A: call    sub_720B40
0x720E8F: xor     ebx, ebx
0x720E91: mov     edx, [esp+ebx*4+34h+var_18]
0x720E95: push    edx
0x720E96: call    FormHeapFree
0x720E9B: add     ebx, 1
0x720E9E: add     esp, 4
0x720EA1: cmp     ebx, 6
0x720EA4: jb      short loc_720E91
0x720EA6: mov     eax, [esi+21Ch]
0x720EAC: push    1
0x720EAE: lea     ecx, [esp+38h+var_20]
0x720EB2: push    ecx
0x720EB3: mov     ebx, 4
0x720EB8: push    ebx
0x720EB9: lea     edx, [esp+40h+var_1C]
0x720EBD: push    edx
0x720EBE: push    eax
0x720EBF: mov     eax, [eax+4]
0x720EC2: mov     [esp+48h+var_20], ebx
0x720EC6: call    eax
0x720EC8: mov     ecx, [esp+48h+var_1C]
0x720ECC: push    1
0x720ECE: lea     edx, [esp+4Ch+var_1C]
0x720ED2: push    edx
0x720ED3: mov     [edi+18h], ecx
0x720ED6: mov     eax, [esi+21Ch]
0x720EDC: mov     edx, [eax+4]
0x720EDF: push    ebx
0x720EE0: lea     ecx, [esp+54h+var_20]
0x720EE4: push    ecx
0x720EE5: push    eax
0x720EE6: mov     [esp+5Ch+var_1C], ebx
0x720EEA: call    edx
0x720EEC: mov     eax, [esp+5Ch+var_20]
0x720EF0: push    1
0x720EF2: lea     ecx, [esp+60h+var_1C]
0x720EF6: push    ecx
0x720EF7: mov     [edi+20h], eax
0x720EFA: mov     eax, [esi+21Ch]
0x720F00: push    ebx
0x720F01: lea     edx, [esp+68h+var_20]
0x720F05: push    edx
0x720F06: push    eax
0x720F07: mov     eax, [eax+4]
0x720F0A: mov     [esp+70h+var_1C], ebx
0x720F0E: call    eax
0x720F10: mov     ecx, [esp+70h+var_20]
0x720F14: mov     dl, [edi+40h]
0x720F17: push    1
0x720F19: lea     eax, [esp+74h+var_1C]
0x720F1D: push    eax
0x720F1E: mov     [edi+1Ch], ecx
0x720F21: mov     esi, [esi+21Ch]
0x720F27: push    1
0x720F29: lea     ecx, [esp+7Ch+var_21]
0x720F2D: push    ecx
0x720F2E: mov     [esp+80h+var_21], dl
0x720F32: mov     edx, [esi+4]
0x720F35: push    esi
0x720F36: mov     [esp+84h+var_1C], 1
0x720F3E: call    edx
0x720F40: add     esp, 50h
0x720F43: cmp     [esp+34h+var_21], 0
0x720F48: setnz   al
0x720F4B: mov     [edi+40h], al
0x720F4E: lea     eax, [edi+4]
0x720F51: push    eax; lpAddend
0x720F52: call    dword ptr ds:0A2807Ch
0x720F58: test    eax, eax
0x720F5A: pop     ebp
0x720F5B: pop     ebx
0x720F5C: jnz     short loc_720F76
0x720F5E: mov     edx, [edi]
0x720F60: mov     eax, [edx]
0x720F62: push    1
0x720F64: mov     ecx, edi
0x720F66: call    eax
0x720F68: pop     edi
0x720F69: pop     esi
0x720F6A: add     esp, 24h
0x720F6D: retn    4
0x720F70: push    esi
0x720F71: call    sub_7023E0
0x720F76: pop     edi
0x720F77: pop     esi
0x720F78: add     esp, 24h
0x720F7B: retn    4
