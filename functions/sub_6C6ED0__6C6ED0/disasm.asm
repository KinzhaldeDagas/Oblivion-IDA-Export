0x6C6ED0: mov     eax, [ecx+20h]
0x6C6ED3: sub     esp, 14h
0x6C6ED6: test    eax, eax
0x6C6ED8: jz      loc_6C7098
0x6C6EDE: mov     ecx, [esp+14h+arg_0]
0x6C6EE2: mov     ecx, [ecx+20h]
0x6C6EE5: test    ecx, ecx
0x6C6EE7: jz      loc_6C7098
0x6C6EED: mov     edx, [eax+10h]
0x6C6EF0: push    ebx
0x6C6EF1: push    ebp
0x6C6EF2: push    esi
0x6C6EF3: mov     esi, [ecx+0Ch]
0x6C6EF6: mov     ecx, [ecx+10h]
0x6C6EF9: push    edi
0x6C6EFA: mov     edi, [eax+0Ch]
0x6C6EFD: xor     ebx, ebx
0x6C6EFF: test    esi, esi
0x6C6F01: mov     [esp+24h+var_8], esi
0x6C6F05: mov     [esp+24h+var_10], edi
0x6C6F09: mov     [esp+24h+var_C], edx
0x6C6F0D: mov     byte ptr [esp+24h+arg_0], 0
0x6C6F12: jbe     loc_6C7080
0x6C6F18: add     ecx, 4
0x6C6F1B: mov     [esp+24h+var_4], ecx
0x6C6F1F: mov     [esp+24h+var_14], ecx
0x6C6F23: jmp     short loc_6C6F30
0x6C6F25: align 10h
0x6C6F30: mov     ecx, ds:0B241C8h
0x6C6F36: mov     eax, [esp+24h+var_14]
0x6C6F3A: mov     edx, ds:0B241C4h
0x6C6F40: mov     ebp, [eax]
0x6C6F42: push    ecx; MaxCount
0x6C6F43: push    edx; Str2
0x6C6F44: push    ebp; Str1
0x6C6F45: call    __strnicmp
0x6C6F4A: add     esp, 0Ch
0x6C6F4D: test    eax, eax
0x6C6F4F: jnz     short loc_6C6FB9
0x6C6F51: xor     esi, esi
0x6C6F53: test    edi, edi
0x6C6F55: mov     byte ptr [esp+24h+arg_0], 1
0x6C6F5A: jbe     loc_6C7080
0x6C6F60: mov     edi, [esp+24h+var_C]
0x6C6F64: add     edi, 4
0x6C6F67: mov     ecx, [edi]
0x6C6F69: mov     eax, ebp
0x6C6F6B: jmp     short loc_6C6F70
0x6C6F6D: align 10h
0x6C6F70: mov     dl, [eax]
0x6C6F72: cmp     dl, [ecx]
0x6C6F74: jnz     short loc_6C6F90
0x6C6F76: test    dl, dl
0x6C6F78: jz      short loc_6C6F8C
0x6C6F7A: mov     dl, [eax+1]
0x6C6F7D: cmp     dl, [ecx+1]
0x6C6F80: jnz     short loc_6C6F90
0x6C6F82: add     eax, 2
0x6C6F85: add     ecx, 2
0x6C6F88: test    dl, dl
0x6C6F8A: jnz     short loc_6C6F70
0x6C6F8C: xor     eax, eax
0x6C6F8E: jmp     short loc_6C6F95
0x6C6F90: sbb     eax, eax
0x6C6F92: sbb     eax, 0FFFFFFFFh
0x6C6F95: test    eax, eax
0x6C6F97: jz      short loc_6C6FB1
0x6C6F99: add     esi, 1
0x6C6F9C: add     edi, 8
0x6C6F9F: cmp     esi, [esp+24h+var_10]
0x6C6FA3: jb      short loc_6C6F67
0x6C6FA5: pop     edi
0x6C6FA6: pop     esi
0x6C6FA7: pop     ebp
0x6C6FA8: xor     al, al
0x6C6FAA: pop     ebx
0x6C6FAB: add     esp, 14h
0x6C6FAE: retn    4
0x6C6FB1: mov     esi, [esp+24h+var_8]
0x6C6FB5: mov     edi, [esp+24h+var_10]
0x6C6FB9: add     [esp+24h+var_14], 8
0x6C6FBE: add     ebx, 1
0x6C6FC1: cmp     ebx, esi
0x6C6FC3: jb      loc_6C6F30
0x6C6FC9: cmp     byte ptr [esp+24h+arg_0], 0
0x6C6FCE: jz      loc_6C7080
0x6C6FD4: xor     ebx, ebx
0x6C6FD6: test    edi, edi
0x6C6FD8: mov     byte ptr [esp+24h+arg_0], 0
0x6C6FDD: jbe     loc_6C7080
0x6C6FE3: mov     eax, [esp+24h+var_C]
0x6C6FE7: add     eax, 4
0x6C6FEA: mov     [esp+24h+var_14], eax
0x6C6FEE: mov     edi, edi
0x6C6FF0: mov     edx, ds:0B241C8h
0x6C6FF6: mov     ecx, [esp+24h+var_14]
0x6C6FFA: mov     eax, ds:0B241C4h
0x6C6FFF: mov     ebp, [ecx]
0x6C7001: push    edx; MaxCount
0x6C7002: push    eax; Str2
0x6C7003: push    ebp; Str1
0x6C7004: call    __strnicmp
0x6C7009: add     esp, 0Ch
0x6C700C: test    eax, eax
0x6C700E: jnz     short loc_6C7069
0x6C7010: mov     esi, [esp+24h+var_4]
0x6C7014: mov     byte ptr [esp+24h+arg_0], 1
0x6C7019: xor     edi, edi
0x6C701B: jmp     short loc_6C7020
0x6C701D: align 10h
0x6C7020: mov     ecx, [esi]
0x6C7022: mov     eax, ebp
0x6C7024: mov     dl, [eax]
0x6C7026: cmp     dl, [ecx]
0x6C7028: jnz     short loc_6C7044
0x6C702A: test    dl, dl
0x6C702C: jz      short loc_6C7040
0x6C702E: mov     dl, [eax+1]
0x6C7031: cmp     dl, [ecx+1]
0x6C7034: jnz     short loc_6C7044
0x6C7036: add     eax, 2
0x6C7039: add     ecx, 2
0x6C703C: test    dl, dl
0x6C703E: jnz     short loc_6C7024
0x6C7040: xor     eax, eax
0x6C7042: jmp     short loc_6C7049
0x6C7044: sbb     eax, eax
0x6C7046: sbb     eax, 0FFFFFFFFh
0x6C7049: test    eax, eax
0x6C704B: jz      short loc_6C7065
0x6C704D: add     edi, 1
0x6C7050: add     esi, 8
0x6C7053: cmp     edi, [esp+24h+var_8]
0x6C7057: jb      short loc_6C7020
0x6C7059: pop     edi
0x6C705A: pop     esi
0x6C705B: pop     ebp
0x6C705C: xor     al, al
0x6C705E: pop     ebx
0x6C705F: add     esp, 14h
0x6C7062: retn    4
0x6C7065: mov     edi, [esp+24h+var_10]
0x6C7069: add     [esp+24h+var_14], 8
0x6C706E: add     ebx, 1
0x6C7071: cmp     ebx, edi
0x6C7073: jb      loc_6C6FF0
0x6C7079: cmp     byte ptr [esp+24h+arg_0], 0
0x6C707E: jnz     short loc_6C708C
0x6C7080: pop     edi
0x6C7081: pop     esi
0x6C7082: pop     ebp
0x6C7083: xor     al, al
0x6C7085: pop     ebx
0x6C7086: add     esp, 14h
0x6C7089: retn    4
0x6C708C: pop     edi
0x6C708D: pop     esi
0x6C708E: pop     ebp
0x6C708F: mov     al, 1
0x6C7091: pop     ebx
0x6C7092: add     esp, 14h
0x6C7095: retn    4
0x6C7098: xor     al, al
0x6C709A: add     esp, 14h
0x6C709D: retn    4
