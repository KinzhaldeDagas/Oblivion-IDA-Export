0x6F7E40: push    0FFFFFFFFh
0x6F7E42: push    offset SEH_6F7E40
0x6F7E47: mov     eax, large fs:0
0x6F7E4D: push    eax
0x6F7E4E: sub     esp, 30h
0x6F7E51: mov     eax, ds:0B30AACh
0x6F7E56: xor     eax, esp
0x6F7E58: mov     [esp+3Ch+var_10], eax
0x6F7E5C: push    ebx
0x6F7E5D: push    ebp
0x6F7E5E: push    esi
0x6F7E5F: push    edi; File
0x6F7E60: mov     eax, ds:0B30AACh
0x6F7E65: xor     eax, esp
0x6F7E67: push    eax
0x6F7E68: lea     eax, [esp+50h+var_C]
0x6F7E6C: mov     large fs:0, eax
0x6F7E72: mov     ebx, [esp+50h+arg_0]
0x6F7E76: cmp     ebx, 0FFFFFFFFh
0x6F7E79: mov     edx, ecx
0x6F7E7B: mov     [esp+50h+var_38], edx
0x6F7E7F: jnz     short loc_6F7E88
0x6F7E81: xor     eax, eax
0x6F7E83: jmp     loc_6F81E5
0x6F7E88: mov     eax, [edx+24h]
0x6F7E8B: mov     ecx, [eax]
0x6F7E8D: test    ecx, ecx
0x6F7E8F: jz      short loc_6F7EB2
0x6F7E91: mov     eax, [edx+34h]
0x6F7E94: mov     esi, [eax]
0x6F7E96: add     esi, ecx
0x6F7E98: cmp     ecx, esi
0x6F7E9A: jnb     short loc_6F7EB2
0x6F7E9C: add     dword ptr [eax], 0FFFFFFFFh
0x6F7E9F: mov     eax, [edx+24h]
0x6F7EA2: mov     ecx, [eax]
0x6F7EA4: lea     edx, [ecx+1]
0x6F7EA7: mov     [eax], edx
0x6F7EA9: mov     [ecx], bl
0x6F7EAB: mov     eax, ebx
0x6F7EAD: jmp     loc_6F81E5
0x6F7EB2: mov     eax, [edx+4Ch]
0x6F7EB5: test    eax, eax
0x6F7EB7: jz      loc_6F81E2
0x6F7EBD: cmp     dword ptr [edx+3Ch], 0
0x6F7EC1: jnz     short loc_6F7EE0
0x6F7EC3: push    eax; File
0x6F7EC4: movsx   eax, bl
0x6F7EC7: push    eax; Ch
0x6F7EC8: call    _putc
0x6F7ECD: add     esp, 8
0x6F7ED0: cmp     eax, 0FFFFFFFFh
0x6F7ED3: jz      loc_6F81E2
0x6F7ED9: mov     eax, ebx
0x6F7EDB: jmp     loc_6F81E5
0x6F7EE0: mov     ecx, 0Fh
0x6F7EE5: xor     eax, eax
0x6F7EE7: cmp     ecx, 10h
0x6F7EEA: mov     byte ptr [esp+50h+Str], 0
0x6F7EEF: mov     [esp+50h+var_3C], bl
0x6F7EF3: mov     [esp+50h+var_14], ecx
0x6F7EF7: mov     [esp+50h+Str], eax
0x6F7EFB: mov     [esp+50h+var_24], eax
0x6F7EFF: mov     [esp+50h+var_18], 8
0x6F7F07: jnb     short loc_6F7F0D
0x6F7F09: lea     eax, [esp+50h+Str]
0x6F7F0D: mov     byte ptr [eax+8], 0
0x6F7F11: mov     [esp+50h+var_4], 0
0x6F7F19: mov     eax, [esp+50h+Str]
0x6F7F1D: mov     ebx, [esp+50h+var_18]
0x6F7F21: mov     edx, [esp+50h+var_14]
0x6F7F25: cmp     edx, 10h
0x6F7F28: jb      loc_6F816B
0x6F7F2E: test    eax, eax
0x6F7F30: mov     ebp, eax
0x6F7F32: jz      short loc_6F7F54
0x6F7F34: cmp     edx, 10h
0x6F7F37: mov     ecx, eax
0x6F7F39: jnb     short loc_6F7F3F
0x6F7F3B: lea     ecx, [esp+50h+Str]
0x6F7F3F: cmp     ecx, ebp
0x6F7F41: ja      short loc_6F7F54
0x6F7F43: cmp     edx, 10h
0x6F7F46: mov     ecx, eax
0x6F7F48: jnb     short loc_6F7F4E
0x6F7F4A: lea     ecx, [esp+50h+Str]
0x6F7F4E: add     ecx, ebx
0x6F7F50: cmp     ebp, ecx
0x6F7F52: jbe     short loc_6F7F65
0x6F7F54: call    __invalid_parameter_noinfo
0x6F7F59: mov     edx, [esp+50h+var_14]
0x6F7F5D: mov     ebx, [esp+50h+var_18]
0x6F7F61: mov     eax, [esp+50h+Str]
0x6F7F65: lea     ecx, [esp+50h+var_2C]
0x6F7F69: cmp     ecx, 0FFFFFFFEh
0x6F7F6C: jz      short loc_6F7F90
0x6F7F6E: cmp     edx, 10h
0x6F7F71: mov     ecx, eax
0x6F7F73: jnb     short loc_6F7F79
0x6F7F75: lea     ecx, [esp+50h+Str]
0x6F7F79: add     ecx, ebx
0x6F7F7B: cmp     ebp, ecx
0x6F7F7D: jb      short loc_6F7F90
0x6F7F7F: call    __invalid_parameter_noinfo
0x6F7F84: mov     edx, [esp+50h+var_14]
0x6F7F88: mov     ebx, [esp+50h+var_18]
0x6F7F8C: mov     eax, [esp+50h+Str]
0x6F7F90: cmp     edx, 10h
0x6F7F93: mov     edi, ebx
0x6F7F95: jb      loc_6F8174
0x6F7F9B: test    eax, eax
0x6F7F9D: mov     esi, eax
0x6F7F9F: jz      short loc_6F7FC1
0x6F7FA1: cmp     edx, 10h
0x6F7FA4: mov     ecx, eax
0x6F7FA6: jnb     short loc_6F7FAC
0x6F7FA8: lea     ecx, [esp+50h+Str]
0x6F7FAC: cmp     ecx, esi
0x6F7FAE: ja      short loc_6F7FC1
0x6F7FB0: cmp     edx, 10h
0x6F7FB3: mov     ecx, eax
0x6F7FB5: jnb     short loc_6F7FBB
0x6F7FB7: lea     ecx, [esp+50h+Str]
0x6F7FBB: add     ecx, ebx
0x6F7FBD: cmp     esi, ecx
0x6F7FBF: jbe     short loc_6F7FD2
0x6F7FC1: call    __invalid_parameter_noinfo
0x6F7FC6: mov     edx, [esp+50h+var_14]
0x6F7FCA: mov     ebx, [esp+50h+var_18]
0x6F7FCE: mov     eax, [esp+50h+Str]
0x6F7FD2: lea     ecx, [esp+50h+var_2C]
0x6F7FD6: cmp     ecx, 0FFFFFFFEh
0x6F7FD9: jz      short loc_6F7FEF
0x6F7FDB: cmp     edx, 10h
0x6F7FDE: jnb     short loc_6F7FE4
0x6F7FE0: lea     eax, [esp+50h+Str]
0x6F7FE4: add     eax, ebx
0x6F7FE6: cmp     esi, eax
0x6F7FE8: jb      short loc_6F7FEF
0x6F7FEA: call    __invalid_parameter_noinfo
0x6F7FEF: mov     ebx, [esp+50h+var_38]
0x6F7FF3: mov     ecx, [ebx+3Ch]
0x6F7FF6: mov     edx, [ecx]
0x6F7FF8: mov     edx, [edx+14h]
0x6F7FFB: lea     eax, [esp+50h+var_34]
0x6F7FFF: push    eax
0x6F8000: add     ebp, edi
0x6F8002: push    ebp
0x6F8003: push    esi
0x6F8004: lea     eax, [esp+5Ch+var_30]
0x6F8008: push    eax
0x6F8009: lea     eax, [esp+60h+var_3B]
0x6F800D: push    eax
0x6F800E: lea     eax, [esp+64h+var_3C]
0x6F8012: push    eax
0x6F8013: lea     eax, [ebx+44h]
0x6F8016: push    eax
0x6F8017: call    edx
0x6F8019: test    eax, eax
0x6F801B: jl      loc_6F81D9
0x6F8021: cmp     eax, 1
0x6F8024: jg      loc_6F818F
0x6F802A: mov     edx, [esp+50h+var_14]
0x6F802E: cmp     edx, 10h
0x6F8031: mov     eax, [esp+50h+Str]
0x6F8035: jb      loc_6F817D
0x6F803B: test    eax, eax
0x6F803D: mov     esi, eax
0x6F803F: jz      short loc_6F8065
0x6F8041: cmp     edx, 10h
0x6F8044: mov     ecx, eax
0x6F8046: jnb     short loc_6F804C
0x6F8048: lea     ecx, [esp+50h+Str]
0x6F804C: cmp     ecx, esi
0x6F804E: ja      short loc_6F8065
0x6F8050: cmp     edx, 10h
0x6F8053: mov     ecx, eax
0x6F8055: jnb     short loc_6F805B
0x6F8057: lea     ecx, [esp+50h+Str]
0x6F805B: mov     ebx, [esp+50h+var_18]
0x6F805F: add     ecx, ebx
0x6F8061: cmp     esi, ecx
0x6F8063: jbe     short loc_6F8076
0x6F8065: call    __invalid_parameter_noinfo
0x6F806A: mov     edx, [esp+50h+var_14]
0x6F806E: mov     ebx, [esp+50h+var_18]
0x6F8072: mov     eax, [esp+50h+Str]
0x6F8076: lea     ecx, [esp+50h+var_2C]
0x6F807A: cmp     ecx, 0FFFFFFFEh
0x6F807D: jz      short loc_6F80A1
0x6F807F: cmp     edx, 10h
0x6F8082: mov     ecx, eax
0x6F8084: jnb     short loc_6F808A
0x6F8086: lea     ecx, [esp+50h+Str]
0x6F808A: add     ecx, ebx
0x6F808C: cmp     esi, ecx
0x6F808E: jb      short loc_6F80A1
0x6F8090: call    __invalid_parameter_noinfo
0x6F8095: mov     edx, [esp+50h+var_14]
0x6F8099: mov     ebx, [esp+50h+var_18]
0x6F809D: mov     eax, [esp+50h+Str]
0x6F80A1: mov     edi, [esp+50h+var_34]
0x6F80A5: sub     edi, esi
0x6F80A7: jz      loc_6F8132
0x6F80AD: cmp     edx, 10h
0x6F80B0: jb      loc_6F8186
0x6F80B6: test    eax, eax
0x6F80B8: mov     esi, eax
0x6F80BA: jz      short loc_6F80DC
0x6F80BC: cmp     edx, 10h
0x6F80BF: mov     ecx, eax
0x6F80C1: jnb     short loc_6F80C7
0x6F80C3: lea     ecx, [esp+50h+Str]
0x6F80C7: cmp     ecx, esi
0x6F80C9: ja      short loc_6F80DC
0x6F80CB: cmp     edx, 10h
0x6F80CE: mov     ecx, eax
0x6F80D0: jnb     short loc_6F80D6
0x6F80D2: lea     ecx, [esp+50h+Str]
0x6F80D6: add     ecx, ebx
0x6F80D8: cmp     esi, ecx
0x6F80DA: jbe     short loc_6F80ED
0x6F80DC: call    __invalid_parameter_noinfo
0x6F80E1: mov     edx, [esp+50h+var_14]
0x6F80E5: mov     ebx, [esp+50h+var_18]
0x6F80E9: mov     eax, [esp+50h+Str]
0x6F80ED: lea     ecx, [esp+50h+var_2C]
0x6F80F1: cmp     ecx, 0FFFFFFFEh
0x6F80F4: jz      short loc_6F810A
0x6F80F6: cmp     edx, 10h
0x6F80F9: jnb     short loc_6F80FF
0x6F80FB: lea     eax, [esp+50h+Str]
0x6F80FF: add     eax, ebx
0x6F8101: cmp     esi, eax
0x6F8103: jb      short loc_6F810A
0x6F8105: call    __invalid_parameter_noinfo
0x6F810A: mov     edx, [esp+50h+var_38]
0x6F810E: mov     eax, [edx+4Ch]
0x6F8111: push    eax; Count
0x6F8112: push    edi; Count
0x6F8113: push    1; Size
0x6F8115: push    esi; Str
0x6F8116: call    _fwrite
0x6F811B: add     esp, 10h
0x6F811E: cmp     edi, eax
0x6F8120: jnz     loc_6F81D9
0x6F8126: mov     edx, [esp+50h+var_14]
0x6F812A: mov     ebx, [esp+50h+var_18]
0x6F812E: mov     eax, [esp+50h+Str]
0x6F8132: mov     ecx, [esp+50h+var_38]
0x6F8136: mov     byte ptr [ecx+41h], 1
0x6F813A: lea     ecx, [esp+50h+var_3C]
0x6F813E: cmp     [esp+50h+var_30], ecx
0x6F8142: jnz     loc_6F81CA
0x6F8148: test    edi, edi
0x6F814A: ja      loc_6F7F25
0x6F8150: cmp     ebx, 20h ; ' '
0x6F8153: lea     ecx, [esp+50h+var_2C]
0x6F8157: jnb     loc_6F81DD
0x6F815D: push    0
0x6F815F: push    8
0x6F8161: call    sub_6EDAA0
0x6F8166: jmp     loc_6F7F19
0x6F816B: lea     ebp, [esp+50h+Str]
0x6F816F: jmp     loc_6F7F34
0x6F8174: lea     esi, [esp+50h+Str]
0x6F8178: jmp     loc_6F7FA1
0x6F817D: lea     esi, [esp+50h+Str]
0x6F8181: jmp     loc_6F8041
0x6F8186: lea     esi, [esp+50h+Str]
0x6F818A: jmp     loc_6F80BC
0x6F818F: cmp     eax, 3
0x6F8192: jnz     short loc_6F81D9
0x6F8194: mov     edx, [ebx+4Ch]
0x6F8197: mov     eax, dword ptr [esp+50h+var_3C]
0x6F819B: push    edx; File
0x6F819C: push    eax; char
0x6F819D: call    sub_6F7440
0x6F81A2: add     esp, 8
0x6F81A5: test    al, al
0x6F81A7: jz      short loc_6F81BA
0x6F81A9: mov     esi, [esp+50h+arg_0]
0x6F81AD: lea     ecx, [esp+50h+var_2C]
0x6F81B1: call    sub_79AB00
0x6F81B6: mov     eax, esi
0x6F81B8: jmp     short loc_6F81E5
0x6F81BA: lea     ecx, [esp+50h+var_2C]
0x6F81BE: or      esi, 0FFFFFFFFh
0x6F81C1: call    sub_79AB00
0x6F81C6: mov     eax, esi
0x6F81C8: jmp     short loc_6F81E5
0x6F81CA: lea     ecx, [esp+50h+var_2C]
0x6F81CE: call    sub_79AB00
0x6F81D3: mov     eax, [esp+50h+arg_0]
0x6F81D7: jmp     short loc_6F81E5
0x6F81D9: lea     ecx, [esp+50h+var_2C]
0x6F81DD: call    sub_79AB00
0x6F81E2: or      eax, 0FFFFFFFFh
0x6F81E5: mov     ecx, dword ptr [esp+50h+var_C]
0x6F81E9: mov     large fs:0, ecx
0x6F81F0: pop     ecx
0x6F81F1: pop     edi
0x6F81F2: pop     esi
0x6F81F3: pop     ebp
0x6F81F4: pop     ebx
0x6F81F5: mov     ecx, [esp+3Ch+var_10]
0x6F81F9: xor     ecx, esp
0x6F81FB: call    @__security_check_cookie@4; __security_check_cookie(x)
0x6F8200: add     esp, 3Ch
0x6F8203: retn    4
