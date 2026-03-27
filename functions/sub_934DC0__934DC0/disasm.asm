0x934DC0: push    ebp
0x934DC1: mov     ebp, esp
0x934DC3: and     esp, 0FFFFFFF0h
0x934DC6: mov     eax, 15B4h
0x934DCB: call    __alloca_probe
0x934DD0: mov     ecx, [ebp+arg_14]
0x934DD3: mov     eax, [ecx+3040h]
0x934DD9: push    ebx; int
0x934DDA: push    esi; int
0x934DDB: xor     esi, esi
0x934DDD: cmp     eax, esi
0x934DDF: push    edi
0x934DE0: mov     [esp+15C0h+var_1570], eax; int
0x934DE4: jnz     short loc_934E1B
0x934DE6: mov     eax, [ebp+arg_8]
0x934DE9: mov     dl, [eax+0Ch]
0x934DEC: test    dl, dl
0x934DEE: jnz     short loc_934E1B
0x934DF0: lea     edx, [esp+15C0h+var_C00]
0x934DF7: mov     [esp+15C0h+var_1008], edx
0x934DFE: lea     eax, [esp+15C0h+var_1000]
0x934E05: lea     edx, [esp+15C0h+var_1008]
0x934E0C: mov     [esp+15C0h+var_1004], eax
0x934E13: mov     [ecx+3040h], edx
0x934E19: jmp     short loc_934E21
0x934E1B: mov     [ecx+3040h], esi
0x934E21: mov     edi, [ebp+arg_4]
0x934E24: mov     eax, [edi+8]
0x934E27: mov     ecx, [eax]
0x934E29: mov     eax, [edi+4]
0x934E2C: mov     [esp+15C0h+var_1584], eax; int
0x934E30: mov     edx, [eax+8]
0x934E33: mov     [esp+15C0h+var_15A8], ecx; int
0x934E37: mov     ecx, [ebp+arg_0]
0x934E3A: mov     [esp+15C0h+var_1588], edx; int
0x934E3E: lea     eax, [esp+15C0h+var_1590]
0x934E42: mov     [edi+4], eax
0x934E45: mov     edx, [ecx]
0x934E47: mov     eax, [edx]
0x934E49: mov     edx, [eax]
0x934E4B: lea     ecx, [eax+10h]
0x934E4E: mov     [esp+15C0h+var_156C], eax; int
0x934E52: lea     eax, [edx+eax+10h]
0x934E56: mov     edx, ds:0BA9DE4h
0x934E5C: mov     [esp+15C0h+var_159C], ecx; int
0x934E60: mov     ecx, large fs:2Ch
0x934E67: mov     [esp+15C0h+var_1564], eax; int
0x934E6B: mov     eax, [ecx+edx*4]
0x934E6E: mov     [esp+15C0h+var_15AC], eax; int
0x934E72: mov     eax, [eax+19Ch]
0x934E78: mov     ecx, [eax+64h]
0x934E7B: cmp     ecx, esi
0x934E7D: mov     [esp+15C0h+var_1578], esi; int
0x934E81: mov     [esp+15C0h+var_1580], 1; int
0x934E89: mov     [esp+15C0h+var_157C], esi; int
0x934E8D: jz      short loc_934E9E
0x934E8F: dec     dword ptr [eax+0A8h]
0x934E95: mov     edx, [ecx]
0x934E97: mov     [eax+64h], edx
0x934E9A: mov     eax, ecx
0x934E9C: jmp     short loc_934EAD
0x934E9E: mov     ecx, ds:0BA7D98h
0x934EA4: mov     eax, [ecx]
0x934EA6: push    1Ch
0x934EA8: push    0Ch
0x934EAA: call    dword ptr [eax+18h]
0x934EAD: cmp     eax, esi
0x934EAF: jz      short loc_934EB5
0x934EB1: mov     [eax], esi
0x934EB3: jmp     short loc_934EB7
0x934EB5: xor     eax, eax
0x934EB7: mov     byte ptr [esp+15C0h+var_15A0+2], 0
0x934EBC: mov     byte ptr [esp+15C0h+var_15A0+3], 0
0x934EC1: mov     [esp+15C0h+var_1594], eax; int
0x934EC5: lea     ebx, [eax+10h]
0x934EC8: jmp     short loc_934ED0
0x934ECA: align 10h
0x934ED0: mov     eax, [ebp+arg_C]
0x934ED3: test    eax, eax
0x934ED5: mov     edx, [esp+15C0h+var_159C]
0x934ED9: jnz     short loc_934F3B
0x934EDB: movzx   esi, byte ptr [edx+3]
0x934EDF: shr     esi, 4
0x934EE2: dec     esi
0x934EE3: mov     [esp+15C0h+var_15B0], edx
0x934EE7: js      short loc_934F1D
0x934EE9: lea     ecx, [edx+0Ch]
0x934EEC: sub     edx, ebx
0x934EEE: inc     esi
0x934EEF: lea     eax, [ebx+8]
0x934EF2: mov     [esp+15C0h+var_15A4], esi
0x934EF6: mov     esi, [ecx-0Ch]
0x934EF9: mov     [eax-8], esi
0x934EFC: mov     esi, [ecx-8]
0x934EFF: mov     [eax-4], esi
0x934F02: mov     esi, [edx+eax]
0x934F05: mov     [eax], esi
0x934F07: mov     esi, [ecx]
0x934F09: mov     [eax+4], esi
0x934F0C: mov     esi, [esp+15C0h+var_15A4]
0x934F10: add     ecx, 10h
0x934F13: add     eax, 10h
0x934F16: dec     esi
0x934F17: mov     [esp+15C0h+var_15A4], esi
0x934F1B: jnz     short loc_934EF6
0x934F1D: mov     eax, [esp+15C0h+var_159C]
0x934F21: movzx   ecx, byte ptr [eax+3]
0x934F25: mov     edx, [esp+15C0h+var_15B0]
0x934F29: mov     esi, [edx+8]
0x934F2C: add     eax, ecx
0x934F2E: mov     [esp+15C0h+var_159C], eax
0x934F32: mov     [esp+15C0h+var_15A4], esi
0x934F36: jmp     loc_935198
0x934F3B: mov     eax, [ebp+arg_C]
0x934F3E: mov     esi, [eax]
0x934F40: mov     eax, [edx+8]
0x934F43: cmp     eax, esi
0x934F45: mov     ecx, edx
0x934F47: mov     [esp+15C0h+var_15A4], esi; int
0x934F4B: jnz     short loc_934FAE
0x934F4D: movzx   eax, byte ptr [edx+3]
0x934F51: shr     eax, 4
0x934F54: dec     eax
0x934F55: mov     [esp+15C0h+var_15B0], eax
0x934F59: js      short loc_934F9F
0x934F5B: lea     ecx, [edx+0Ch]
0x934F5E: sub     edx, ebx
0x934F60: mov     [esp+15C0h+var_1598], edx
0x934F64: mov     edx, [esp+15C0h+var_15B0]
0x934F68: inc     edx
0x934F69: lea     eax, [ebx+8]
0x934F6C: mov     [esp+15C0h+var_15B0], edx
0x934F70: mov     edx, [ecx-0Ch]
0x934F73: mov     [eax-8], edx
0x934F76: mov     edx, [ecx-8]
0x934F79: mov     [eax-4], edx
0x934F7C: mov     edx, [esp+15C0h+var_1598]
0x934F80: mov     edx, [eax+edx]
0x934F83: mov     [eax], edx
0x934F85: mov     edx, [ecx]
0x934F87: mov     [eax+4], edx
0x934F8A: mov     edx, [esp+15C0h+var_15B0]
0x934F8E: add     ecx, 10h
0x934F91: add     eax, 10h
0x934F94: dec     edx
0x934F95: mov     [esp+15C0h+var_15B0], edx
0x934F99: jnz     short loc_934F70
0x934F9B: mov     edx, [esp+15C0h+var_159C]
0x934F9F: movzx   eax, byte ptr [edx+3]
0x934FA3: add     edx, eax
0x934FA5: mov     [esp+15C0h+var_159C], edx
0x934FA9: jmp     loc_935194
0x934FAE: jnb     short loc_934FEC
0x934FB0: mov     al, [edx]
0x934FB2: and     al, 0Eh
0x934FB4: cmp     al, 4
0x934FB6: lea     eax, [edx+20h]
0x934FB9: jz      short loc_934FBE
0x934FBB: lea     eax, [edx+10h]
0x934FBE: mov     edx, [esp+15C0h+var_159C]
0x934FC2: movzx   esi, byte ptr [edx+3]
0x934FC6: add     edx, esi
0x934FC8: mov     esi, [edi+0Ch]
0x934FCB: mov     [esp+15C0h+var_159C], edx; int
0x934FCF: movzx   edx, byte ptr [ecx+1]
0x934FD3: imul    edx, 34h ; '4'
0x934FD6: push    esi
0x934FD7: push    eax
0x934FD8: mov     eax, [esp+15C8h+var_15A8]
0x934FDC: push    ecx
0x934FDD: call    dword ptr [edx+eax+1698h]
0x934FE4: add     esp, 0Ch
0x934FE7: jmp     def_9351A0
0x934FEC: mov     ecx, [edi+4]
0x934FEF: mov     edx, [ecx+0Ch]
0x934FF2: mov     eax, [edi+8]
0x934FF5: mov     ecx, [eax+4]
0x934FF8: mov     [esp+15C0h+var_1598], ecx; int
0x934FFC: push    esi
0x934FFD: mov     [esp+15C4h+var_15B0], edx; int
0x935001: mov     edx, [ecx]
0x935003: mov     ecx, [ebp+arg_8]
0x935006: push    ecx
0x935007: mov     ecx, [esp+15C8h+var_15B0]
0x93500B: push    ecx
0x93500C: mov     ecx, [edi]
0x93500E: push    ecx
0x93500F: mov     ecx, [esp+15D0h+var_1598]
0x935013: push    eax
0x935014: lea     eax, [esp+15D4h+var_1565]
0x935018: push    eax
0x935019: call    dword ptr [edx]
0x93501B: cmp     byte ptr [eax], 0
0x93501E: jz      loc_935182
0x935024: mov     ecx, [ebp+arg_8]
0x935027: mov     edx, [ecx]
0x935029: lea     eax, [esp+15D8h+var_1228]
0x935030: push    eax
0x935031: push    esi
0x935032: call    dword ptr [edx+28h]
0x935035: mov     [esp+15E0h+var_15B0], eax
0x935039: mov     [esp+15E0h+var_15AC], esi
0x93503D: mov     [ebx+8], esi
0x935040: mov     ecx, [edi]
0x935042: mov     edx, [ecx]
0x935044: mov     ecx, [edi+8]
0x935047: mov     [esp+15E0h+var_15B8], edx
0x93504B: mov     dl, [ecx+0Ch]
0x93504E: mov     byte ptr [esp+15E0h+var_156C], dl
0x935052: mov     edx, [eax]
0x935054: mov     ecx, eax
0x935056: call    dword ptr [edx+8]
0x935059: mov     ecx, [esp+15E0h+var_15B8]
0x93505D: mov     [esp+15E0h+var_15D0], eax
0x935061: mov     eax, [ecx]
0x935063: call    dword ptr [eax+8]
0x935066: mov     cl, byte ptr [esp+15E0h+var_156C]
0x93506A: shl     eax, 5
0x93506D: test    cl, cl
0x93506F: mov     ecx, [esp+15E0h+var_15D0]
0x935073: jz      short loc_935085
0x935075: add     eax, ecx
0x935077: mov     ecx, [esp+15E0h+var_15C8]
0x93507B: movzx   eax, byte ptr [eax+ecx+1294h]
0x935083: jmp     short loc_935093
0x935085: mov     edx, [esp+15E0h+var_15C8]
0x935089: add     eax, ecx
0x93508B: movzx   eax, byte ptr [eax+edx+0E94h]
0x935093: mov     ecx, [esp+15E0h+var_15C8]
0x935097: mov     [ebx+1], al
0x93509A: movzx   eax, al
0x93509D: imul    eax, 34h ; '4'
0x9350A0: mov     byte ptr [ebx+2], 0
0x9350A4: cmp     dword ptr [eax+ecx+16C4h], 2
0x9350AC: mov     [esp+15E0h+var_15D0], edi
0x9350B0: mov     [esp+15E0h+var_15B8], 0
0x9350B8: jnz     short loc_93511A
0x9350BA: mov     ecx, [edi]
0x9350BC: mov     eax, [edi+4]
0x9350BF: movaps  xmm0, xmmword ptr [edi+60h]
0x9350C3: movaps  xmm1, xmmword ptr ds:0A9B570h
0x9350CA: mov     [esp+15E0h+var_129C], ecx
0x9350D1: lea     edx, [esp+15E0h+var_12A0]
0x9350D8: lea     ecx, [edi+10h]
0x9350DB: mov     [esp+15E0h+var_15D0], edx
0x9350DF: mov     edx, [edi+8]
0x9350E2: mov     [esp+15E0h+var_12A0], eax
0x9350E9: mov     eax, [edi+0Ch]
0x9350EC: push    ecx
0x9350ED: xorps   xmm0, xmm1
0x9350F0: lea     ecx, [esp+15E4h+var_1290]
0x9350F7: mov     [esp+15E4h+var_15B8], 1
0x9350FF: mov     dword ptr [esp+15E4h+var_1298], edx
0x935106: mov     [esp+15E4h+var_1294], eax
0x93510D: movaps  [esp+15E4h+var_1248+8], xmm0
0x935115: call    sub_8B1F10
0x93511A: movzx   edx, byte ptr [ebx+1]
0x93511E: mov     eax, [esp+15E0h+var_15C8]
0x935122: imul    edx, 34h ; '4'
0x935125: mov     ecx, [eax+edx+16B8h]
0x93512C: add     eax, edx
0x93512E: mov     edx, [esp+15E0h+var_15D0]
0x935132: test    ecx, ecx
0x935134: mov     cl, byte ptr [esp+15E0h+var_15B8]
0x935138: jz      short loc_935165
0x93513A: add     cl, 4
0x93513D: mov     [ebx], cl
0x93513F: lea     ecx, [ebx+20h]
0x935142: push    ecx
0x935143: xorps   xmm0, xmm0
0x935146: mov     dword ptr [ebx+0Ch], 0BF800000h
0x93514D: movaps  xmmword ptr [ebx+10h], xmm0
0x935151: mov     eax, [eax+1694h]
0x935157: push    ebx
0x935158: push    edx
0x935159: call    eax
0x93515B: add     esp, 0Ch
0x93515E: sub     al, bl
0x935160: mov     [ebx+3], al
0x935163: jmp     short loc_935194
0x935165: add     cl, 2
0x935168: mov     [ebx], cl
0x93516A: mov     eax, [eax+1694h]
0x935170: lea     ecx, [ebx+10h]
0x935173: push    ecx
0x935174: push    ebx
0x935175: push    edx
0x935176: call    eax
0x935178: add     esp, 0Ch
0x93517B: sub     al, bl
0x93517D: mov     [ebx+3], al
0x935180: jmp     short loc_935194
0x935182: mov     [ebx+8], esi
0x935185: mov     byte ptr [ebx+1], 0
0x935189: mov     byte ptr [ebx+2], 0
0x93518D: mov     byte ptr [ebx], 0
0x935190: mov     byte ptr [ebx+3], 10h
0x935194: add     [ebp+arg_C], 4
0x935198: movzx   eax, byte ptr [ebx]
0x93519B: cmp     eax, 6; switch 7 cases
0x93519E: ja      short def_9351A0
0x9351A0: jmp     ds:jpt_9351A0[eax*4]; switch jump
0x9351A7: mov     ecx, [ebp+arg_8]; jumptable 009351A0 case 6
0x9351AA: mov     eax, [ecx]
0x9351AC: lea     edx, [esp+15C0h+var_1210]
0x9351B3: push    edx
0x9351B4: push    esi
0x9351B5: call    dword ptr [eax+28h]
0x9351B8: mov     edx, [ebp+arg_14]
0x9351BB: push    edx
0x9351BC: mov     edx, [edi+8]
0x9351BF: push    edx
0x9351C0: lea     edx, [esp+15D0h+var_1598]
0x9351C4: mov     [esp+15D0h+var_1598], eax
0x9351C8: mov     [esp+15D0h+var_1594], esi
0x9351CC: mov     ecx, [ebx+4]
0x9351CF: mov     eax, [ecx]
0x9351D1: push    edx
0x9351D2: mov     edx, [edi]
0x9351D4: push    edx
0x9351D5: call    dword ptr [eax+14h]
0x9351D8: add     ebx, 10h; jumptable 009351A0 cases 0,1
