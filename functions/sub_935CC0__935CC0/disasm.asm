0x935CC0: push    ebp
0x935CC1: mov     ebp, esp
0x935CC3: and     esp, 0FFFFFFF0h
0x935CC6: sub     esp, 184h
0x935CCC: push    ebx
0x935CCD: mov     ebx, [ebp+arg_8]
0x935CD0: mov     eax, ebx
0x935CD2: mov     ecx, [eax]
0x935CD4: mov     edx, [eax+4]
0x935CD7: mov     [esp+188h+var_170], ecx
0x935CDB: mov     ecx, [eax+8]
0x935CDE: mov     [esp+188h+var_168], ecx
0x935CE2: fld     [esp+188h+var_168]
0x935CE6: fadd    dword ptr [ebx+24h]
0x935CE9: push    esi
0x935CEA: push    edi
0x935CEB: mov     edi, [ebp+arg_0]
0x935CEE: mov     ecx, [edi]
0x935CF0: fstp    [esp+190h+var_168]
0x935CF4: mov     [esp+190h+var_16C], edx
0x935CF8: mov     edx, [eax+0Ch]
0x935CFB: mov     [esp+190h+var_160], offset off_A9BB8C
0x935D03: mov     [esp+190h+var_158], 0
0x935D08: mov     dword ptr [esp+190h+anonymous_0+0Ch], 7F7FFFFFh
0x935D10: mov     [esp+190h+var_15C], 7F7FFFFFh
0x935D18: mov     [esp+190h+var_164], edx
0x935D1C: mov     eax, [ecx]
0x935D1E: call    dword ptr [eax+8]
0x935D21: mov     ecx, [ebp+arg_4]
0x935D24: mov     ecx, [ecx]
0x935D26: mov     edx, [ecx]
0x935D28: mov     esi, eax
0x935D2A: call    dword ptr [edx+8]
0x935D2D: mov     ecx, [ebx]
0x935D2F: shl     esi, 5
0x935D32: add     esi, ecx
0x935D34: movzx   eax, byte ptr [esi+eax+190h]
0x935D3C: lea     eax, [eax+eax*4]
0x935D3F: mov     esi, [ecx+eax*4+998h]
0x935D46: mov     eax, [ebp+arg_4]
0x935D49: lea     ecx, [esp+190h+var_160]
0x935D4D: push    ecx
0x935D4E: lea     edx, [esp+194h+var_170]
0x935D52: push    edx
0x935D53: push    eax
0x935D54: push    edi
0x935D55: call    esi
0x935D57: mov     al, [esp+1A0h+var_158]
0x935D5B: add     esp, 10h
0x935D5E: test    al, al
0x935D60: jz      loc_936043
0x935D66: fld     dword ptr [esp+190h+anonymous_0+0Ch]
0x935D6A: mov     ecx, [ebp+arg_4]
0x935D6D: fcomp   dword ptr [ebx+8]
0x935D70: movaps  xmm0, [esp+190h+anonymous_0]
0x935D75: movaps  xmm1, [esp+190h+var_150]
0x935D7A: mov     [esp+190h+var_110], edi
0x935D81: mov     [esp+190h+var_10C], ecx
0x935D88: fnstsw  ax
0x935D8A: movaps  [esp+190h+var_120], xmm0
0x935D8F: movaps  [esp+190h+anonymous_1], xmm1
0x935D94: test    ah, 5
0x935D97: jp      short loc_935DAF
0x935D99: mov     ecx, [ebp+arg_10]
0x935D9C: test    ecx, ecx
0x935D9E: jz      short loc_935DAF
0x935DA0: mov     edx, [ecx]
0x935DA2: lea     eax, [esp+190h+anonymous_1]
0x935DA6: push    eax
0x935DA7: call    dword ptr [edx+4]
0x935DAA: movaps  xmm0, [esp+190h+anonymous_0]
0x935DAF: movaps  xmm1, xmmword ptr [ebx+10h]
0x935DB3: fld     dword ptr [esp+190h+anonymous_0+0Ch]
0x935DB7: mulps   xmm0, xmm1
0x935DBA: movaps  [esp+190h+anonymous_3], xmm1
0x935DC2: movaps  xmm1, xmm0
0x935DC5: shufps  xmm1, xmm0, 55h ; 'U'
0x935DC9: movaps  xmm2, xmm0
0x935DCC: addss   xmm1, xmm0
0x935DD0: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x935DD4: lea     ecx, [esp+190h+var_178]
0x935DD8: addss   xmm2, xmm1
0x935DDC: movss   dword ptr [ecx], xmm2
0x935DE0: fadd    [esp+190h+var_178]
0x935DE4: fst     [esp+190h+var_17C]
0x935DE8: fcomp   dword ptr ds:0A2FAA8h
0x935DEE: fnstsw  ax
0x935DF0: test    ah, 41h
0x935DF3: jz      loc_936043
0x935DF9: fld     [esp+190h+var_178]
0x935DFD: fadd    dword ptr [ebx+20h]
0x935E00: fcomp   dword ptr ds:0A2FAA8h
0x935E06: fnstsw  ax
0x935E08: test    ah, 1
0x935E0B: jz      loc_936043
0x935E11: mov     eax, [ebx+28h]
0x935E14: fld     dword ptr [esp+190h+anonymous_0+0Ch]
0x935E18: fcomp   dword ptr [eax]
0x935E1A: fld     dword ptr [esp+190h+anonymous_0+0Ch]
0x935E1E: fnstsw  ax
0x935E20: test    ah, 41h
0x935E23: jp      short loc_935E80
0x935E25: fcomp   dword ptr ds:0A2FAA8h
0x935E2B: mov     ecx, [ebp+arg_C]
0x935E2E: fnstsw  ax
0x935E30: test    ah, 41h
0x935E33: jnz     short loc_935E64
0x935E35: fld     dword ptr [esp+190h+anonymous_0+0Ch]
0x935E39: fsub    [esp+190h+var_17C]
0x935E3D: fdivr   dword ptr [esp+190h+anonymous_0+0Ch]
0x935E41: fcom    dword ptr [ecx+4]
0x935E44: fnstsw  ax
0x935E46: test    ah, 41h
0x935E49: jz      loc_936041
0x935E4F: mov     edx, [ecx]
0x935E51: fstp    dword ptr [esp+190h+var_120+0Ch]
0x935E55: lea     eax, [esp+190h+anonymous_1]
0x935E59: push    eax
0x935E5A: call    dword ptr [edx+4]
0x935E5D: pop     edi
0x935E5E: pop     esi
0x935E5F: pop     ebx
0x935E60: mov     esp, ebp
0x935E62: pop     ebp
0x935E63: retn
0x935E64: mov     edx, [ecx]
0x935E66: lea     eax, [esp+190h+anonymous_1]
0x935E6A: push    eax
0x935E6B: mov     dword ptr [esp+194h+var_120+0Ch], 0
0x935E76: call    dword ptr [edx+4]
0x935E79: pop     edi
0x935E7A: pop     esi
0x935E7B: pop     ebx
0x935E7C: mov     esp, ebp
0x935E7E: pop     ebp
0x935E7F: retn
0x935E80: fsub    [esp+190h+var_17C]
0x935E84: mov     ecx, [edi+8]
0x935E87: push    ecx
0x935E88: lea     ecx, [esp+194h+var_B0]
0x935E8F: fdivr   dword ptr [esp+194h+anonymous_0+0Ch]
0x935E93: mov     [esp+194h+var_F0], offset off_A9BB8C
0x935E9E: mov     [esp+194h+var_E8], 0
0x935EA6: mov     dword ptr [esp+194h+anonymous_2+0Ch], 7F7FFFFFh
0x935EB1: mov     [esp+194h+var_EC], 7F7FFFFFh
0x935EBC: fstp    dword ptr [esp+194h+var_120+0Ch]
0x935EC3: call    sub_903FA0
0x935EC8: mov     ecx, [edi]
0x935ECA: lea     edx, [esp+190h+var_B0]
0x935ED1: mov     [esp+190h+var_F4], edi
0x935ED8: mov     [esp+190h+var_F8], edx
0x935EDF: mov     eax, [edi+4]
0x935EE2: mov     [esp+190h+var_FC], eax
0x935EE9: mov     eax, [ebx+28h]
0x935EEC: mov     [esp+190h+var_100], ecx
0x935EF3: mov     eax, [eax+4]
0x935EF6: dec     eax
0x935EF7: mov     [esp+190h+var_17C], eax
0x935EFB: js      loc_93602D
0x935F01: mov     edx, dword ptr [esp+190h+var_120+0Ch]
0x935F05: mov     eax, [edi+8]
0x935F08: mov     [esp+190h+var_174], edx
0x935F0C: movss   xmm0, [esp+190h+var_174]
0x935F12: movaps  xmm1, xmm0
0x935F15: shufps  xmm1, xmm0, 0
0x935F19: mulps   xmm1, [esp+190h+anonymous_3]
0x935F21: lea     ecx, [esp+190h+var_F0]
0x935F28: push    ecx
0x935F29: mov     [esp+194h+var_E8], 0
0x935F31: mov     dword ptr [esp+194h+anonymous_2+0Ch], 7F7FFFFFh
0x935F3C: mov     [esp+194h+var_EC], 7F7FFFFFh
0x935F47: movaps  xmm0, xmmword ptr [eax+30h]
0x935F4B: mov     eax, [ebp+arg_4]
0x935F4E: lea     edx, [esp+194h+var_170]
0x935F52: push    edx
0x935F53: push    eax
0x935F54: lea     ecx, [esp+19Ch+var_100]
0x935F5B: addps   xmm0, xmm1
0x935F5E: push    ecx
0x935F5F: movaps  xmmword ptr [esp+1A0h+var_84+4], xmm0
0x935F67: call    esi
0x935F69: mov     al, [esp+1A0h+var_E8]
0x935F70: add     esp, 10h
0x935F73: test    al, al
0x935F75: jz      loc_936043
0x935F7B: movaps  xmm1, xmmword ptr [ebx+10h]
0x935F7F: movaps  xmm2, [esp+190h+anonymous_2]
0x935F87: movaps  [esp+190h+anonymous_3], xmm1
0x935F8F: movaps  xmm0, xmm2
0x935F92: mulps   xmm0, xmm1
0x935F95: movaps  xmm1, xmm0
0x935F98: shufps  xmm1, xmm0, 55h ; 'U'
0x935F9C: movaps  xmm3, xmm0
0x935F9F: addss   xmm1, xmm0
0x935FA3: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x935FA7: lea     edx, [esp+190h+var_178]
0x935FAB: addss   xmm3, xmm1
0x935FAF: movss   dword ptr [edx], xmm3
0x935FB3: fld     [esp+190h+var_178]
0x935FB7: fcomp   dword ptr ds:0A2FAA8h
0x935FBD: fnstsw  ax
0x935FBF: test    ah, 1
0x935FC2: jz      short loc_936043
0x935FC4: fld     [esp+190h+var_178]
0x935FC8: fchs
0x935FCA: fld     dword ptr [esp+190h+var_120+0Ch]
0x935FCE: fmul    st, st(1)
0x935FD0: fadd    dword ptr [esp+190h+anonymous_2+0Ch]
0x935FD7: fcomp   st(1)
0x935FD9: fnstsw  ax
0x935FDB: test    ah, 41h
0x935FDE: jz      short loc_936041
0x935FE0: fdivr   dword ptr [esp+190h+anonymous_2+0Ch]
0x935FE7: mov     ecx, [ebp+arg_C]
0x935FEA: fadd    dword ptr [esp+190h+var_120+0Ch]
0x935FEE: fld     st
0x935FF0: fcomp   dword ptr [ecx+4]
0x935FF3: fnstsw  ax
0x935FF5: test    ah, 41h
0x935FF8: jz      short loc_936041
0x935FFA: mov     eax, [ebx+28h]
0x935FFD: movaps  xmm0, xmmword ptr [esp+190h+var_E4+4]
0x936005: movaps  [esp+190h+var_120], xmm2
0x93600A: fstp    dword ptr [esp+190h+var_120+0Ch]
0x93600E: fld     dword ptr [esp+190h+anonymous_2+0Ch]
0x936015: movaps  [esp+190h+anonymous_1], xmm0
0x93601A: fcomp   dword ptr [eax]
0x93601C: fnstsw  ax
0x93601E: test    ah, 41h
0x936021: jnp     short loc_936030
0x936023: dec     [esp+190h+var_17C]
0x936027: jns     loc_935F01
0x93602D: mov     ecx, [ebp+arg_C]
0x936030: mov     edx, [ecx]
0x936032: lea     eax, [esp+190h+anonymous_1]
0x936036: push    eax
0x936037: call    dword ptr [edx+4]
0x93603A: pop     edi
0x93603B: pop     esi
0x93603C: pop     ebx
0x93603D: mov     esp, ebp
0x93603F: pop     ebp
0x936040: retn
0x936041: fstp    st
0x936043: pop     edi
0x936044: pop     esi
0x936045: pop     ebx
0x936046: mov     esp, ebp
0x936048: pop     ebp
0x936049: retn
