0x994ECE: push    ebp
0x994ECF: mov     ebp, esp
0x994ED1: sub     esp, 7Ch
0x994ED4: mov     eax, ___security_cookie
0x994ED9: xor     eax, ebp
0x994EDB: mov     [ebp+var_4], eax
0x994EDE: mov     eax, [ebp+arg_0]
0x994EE1: push    ebx
0x994EE2: xor     ebx, ebx
0x994EE4: push    esi
0x994EE5: xor     esi, esi
0x994EE7: mov     [ebp+var_7C], eax
0x994EEA: mov     eax, [ebp+arg_4]
0x994EED: inc     esi
0x994EEE: xor     ecx, ecx
0x994EF0: cmp     [ebp+arg_1C], ebx
0x994EF3: push    edi
0x994EF4: mov     [ebp+var_70], eax
0x994EF7: lea     edi, [ebp+var_20]
0x994EFA: mov     [ebp+var_74], ebx
0x994EFD: mov     [ebp+var_68], esi
0x994F00: mov     [ebp+var_4C], ebx
0x994F03: mov     [ebp+var_58], ebx
0x994F06: mov     [ebp+var_5C], ebx
0x994F09: mov     [ebp+var_60], ebx
0x994F0C: mov     [ebp+var_64], ebx
0x994F0F: mov     [ebp+var_50], ebx
0x994F12: mov     [ebp+var_6C], ebx
0x994F15: jnz     short loc_994F36
0x994F17: call    __errno
0x994F1C: push    ebx
0x994F1D: push    ebx
0x994F1E: push    ebx
0x994F1F: push    ebx
0x994F20: push    ebx
0x994F21: mov     dword ptr [eax], 16h
0x994F27: call    __invalid_parameter
0x994F2C: add     esp, 14h
0x994F2F: xor     eax, eax
0x994F31: jmp     loc_995550
0x994F36: mov     edx, [ebp+arg_8]
0x994F39: mov     [ebp+var_54], edx
0x994F3C: mov     al, [edx]
0x994F3E: cmp     al, 20h ; ' '
0x994F40: jz      short loc_994F4E
0x994F42: cmp     al, 9
0x994F44: jz      short loc_994F4E
0x994F46: cmp     al, 0Ah
0x994F48: jz      short loc_994F4E
0x994F4A: cmp     al, 0Dh
0x994F4C: jnz     short loc_994F51
0x994F4E: inc     edx
0x994F4F: jmp     short loc_994F3C
0x994F51: mov     bl, 30h ; '0'
0x994F53: mov     al, [edx]
0x994F55: inc     edx
0x994F56: cmp     ecx, 0Bh; switch 12 cases
0x994F59: ja      ___strgtold12_l___$LN257; jumptable 00994F5F default case, case 10
0x994F5F: jmp     ds:jpt_994F5F[ecx*4]; switch jump
0x994F66: mov     cl, al; jumptable 00994F5F case 0
0x994F68: sub     cl, 31h ; '1'
0x994F6B: cmp     cl, 8
0x994F6E: ja      short loc_994F76
0x994F70: push    3
0x994F72: pop     ecx
0x994F73: dec     edx
0x994F74: jmp     short loc_994F53
0x994F76: mov     ecx, [ebp+arg_1C]
0x994F79: mov     ecx, [ecx]
0x994F7B: mov     ecx, [ecx+0BCh]
0x994F81: mov     ecx, [ecx]
0x994F83: cmp     al, [ecx]
0x994F85: jnz     short loc_994F8C
0x994F87: push    5
0x994F89: pop     ecx
0x994F8A: jmp     short loc_994F53
0x994F8C: movsx   eax, al
0x994F8F: sub     eax, 2Bh ; '+'
0x994F92: jz      short loc_994FB1
0x994F94: dec     eax
0x994F95: dec     eax
0x994F96: jz      short loc_994FA5
0x994F98: sub     eax, 3
0x994F9B: jnz     loc_99512C
0x994FA1: mov     ecx, esi
0x994FA3: jmp     short loc_994F53
0x994FA5: push    2
0x994FA7: pop     ecx
0x994FA8: mov     [ebp+var_74], 8000h
0x994FAF: jmp     short loc_994F53
0x994FB1: and     [ebp+var_74], 0
0x994FB5: push    2
0x994FB7: pop     ecx
0x994FB8: jmp     short loc_994F53
0x994FBA: mov     cl, al; jumptable 00994F5F case 1
0x994FBC: sub     cl, 31h ; '1'
0x994FBF: cmp     cl, 8
0x994FC2: mov     [ebp+var_58], esi
0x994FC5: jbe     short loc_994F70
0x994FC7: mov     ecx, [ebp+arg_1C]
0x994FCA: mov     ecx, [ecx]
0x994FCC: mov     ecx, [ecx+0BCh]
0x994FD2: mov     ecx, [ecx]
0x994FD4: cmp     al, [ecx]
0x994FD6: jnz     short loc_994FDC
0x994FD8: push    4
0x994FDA: jmp     short loc_994F89
0x994FDC: cmp     al, 2Bh ; '+'
0x994FDE: jz      short loc_995008
0x994FE0: cmp     al, 2Dh ; '-'
0x994FE2: jz      short loc_995008
0x994FE4: cmp     al, bl
0x994FE6: jz      short loc_994FA1
0x994FE8: cmp     al, 43h ; 'C'
0x994FEA: jle     loc_99512C
0x994FF0: cmp     al, 45h ; 'E'
0x994FF2: jle     short loc_995004
0x994FF4: cmp     al, 63h ; 'c'
0x994FF6: jle     loc_99512C
0x994FFC: cmp     al, 65h ; 'e'
0x994FFE: jg      loc_99512C
0x995004: push    6
0x995006: jmp     short loc_994F89
0x995008: dec     edx
0x995009: push    0Bh
0x99500B: jmp     loc_994F89
0x995010: mov     cl, al; jumptable 00994F5F case 2
0x995012: sub     cl, 31h ; '1'
0x995015: cmp     cl, 8
0x995018: jbe     loc_994F70
0x99501E: mov     ecx, [ebp+arg_1C]
0x995021: mov     ecx, [ecx]
0x995023: mov     ecx, [ecx+0BCh]
0x995029: mov     ecx, [ecx]
0x99502B: cmp     al, [ecx]
0x99502D: jz      loc_994F87
0x995033: cmp     al, bl
0x995035: jz      loc_994FA1
0x99503B: mov     edx, [ebp+var_54]
0x99503E: jmp     loc_995157
0x995043: mov     [ebp+var_58], esi; jumptable 00994F5F case 3
0x995046: jmp     short loc_995062
0x995048: cmp     al, 39h ; '9'
0x99504A: jg      short loc_995066
0x99504C: cmp     [ebp+var_4C], 19h
0x995050: jnb     short loc_99505C
0x995052: inc     [ebp+var_4C]
0x995055: sub     al, bl
0x995057: mov     [edi], al
0x995059: inc     edi
0x99505A: jmp     short loc_99505F
0x99505C: inc     [ebp+var_50]
0x99505F: mov     al, [edx]
0x995061: inc     edx
0x995062: cmp     al, bl
0x995064: jge     short loc_995048
0x995066: mov     ecx, [ebp+arg_1C]
0x995069: mov     ecx, [ecx]
0x99506B: mov     ecx, [ecx+0BCh]
0x995071: mov     ecx, [ecx]
0x995073: cmp     al, [ecx]
0x995075: jz      loc_994FD8
0x99507B: cmp     al, 2Bh ; '+'
0x99507D: jz      short loc_995008
0x99507F: cmp     al, 2Dh ; '-'
0x995081: jz      short loc_995008
0x995083: jmp     loc_994FE8
0x995088: cmp     [ebp+var_4C], 0; jumptable 00994F5F case 4
0x99508C: mov     [ebp+var_58], esi
0x99508F: mov     [ebp+var_5C], esi
0x995092: jnz     short loc_9950BA
0x995094: jmp     short loc_99509C
0x995096: dec     [ebp+var_50]
0x995099: mov     al, [edx]
0x99509B: inc     edx
0x99509C: cmp     al, bl
0x99509E: jz      short loc_995096
0x9950A0: jmp     short loc_9950BA
0x9950A2: cmp     al, 39h ; '9'
0x9950A4: jg      short loc_99507B
0x9950A6: cmp     [ebp+var_4C], 19h
0x9950AA: jnb     short loc_9950B7
0x9950AC: inc     [ebp+var_4C]
0x9950AF: sub     al, bl
0x9950B1: mov     [edi], al
0x9950B3: inc     edi
0x9950B4: dec     [ebp+var_50]
0x9950B7: mov     al, [edx]
0x9950B9: inc     edx
0x9950BA: cmp     al, bl
0x9950BC: jge     short loc_9950A2
0x9950BE: jmp     short loc_99507B
0x9950C0: sub     al, bl; jumptable 00994F5F case 5
0x9950C2: cmp     al, 9
0x9950C4: mov     [ebp+var_5C], esi
0x9950C7: ja      loc_99503B
0x9950CD: push    4
0x9950CF: jmp     loc_994F72
0x9950D4: lea     ecx, [edx-2]; jumptable 00994F5F case 6
0x9950D7: mov     [ebp+var_54], ecx
0x9950DA: mov     cl, al
0x9950DC: sub     cl, 31h ; '1'
0x9950DF: cmp     cl, 8
0x9950E2: ja      short loc_9950EB
0x9950E4: push    9
0x9950E6: jmp     loc_994F72
0x9950EB: movsx   eax, al
0x9950EE: sub     eax, 2Bh ; '+'
0x9950F1: jz      short loc_995113
0x9950F3: dec     eax
0x9950F4: dec     eax
0x9950F5: jz      short loc_995107
0x9950F7: sub     eax, 3
0x9950FA: jnz     loc_99503B
0x995100: push    8
0x995102: jmp     loc_994F89
0x995107: or      [ebp+var_68], 0FFFFFFFFh
0x99510B: push    7
0x99510D: pop     ecx
0x99510E: jmp     loc_994F53
0x995113: push    7
0x995115: jmp     loc_994F89
0x99511A: mov     [ebp+var_60], esi; jumptable 00994F5F case 8
0x99511D: jmp     short loc_995122
0x99511F: mov     al, [edx]
0x995121: inc     edx
0x995122: cmp     al, bl
0x995124: jz      short loc_99511F
0x995126: sub     al, 31h ; '1'
0x995128: cmp     al, 8
0x99512A: jbe     short loc_9950E4
0x99512C: dec     edx
0x99512D: jmp     short loc_995157
0x99512F: mov     cl, al; jumptable 00994F5F case 7
0x995131: sub     cl, 31h ; '1'
0x995134: cmp     cl, 8
0x995137: jbe     short loc_9950E4
0x995139: cmp     al, bl
0x99513B: jmp     short loc_9950FA
0x99513D: cmp     [ebp+arg_18], 0; jumptable 00994F5F case 11
0x995141: jz      short loc_99518A
0x995143: movsx   eax, al
0x995146: sub     eax, 2Bh ; '+'
0x995149: lea     ecx, [edx-1]
0x99514C: mov     [ebp+var_54], ecx
0x99514F: jz      short loc_995113
0x995151: dec     eax
0x995152: dec     eax
0x995153: jz      short loc_995107
0x995155: mov     edx, ecx
0x995157: cmp     [ebp+var_58], 0
0x99515B: mov     eax, [ebp+var_70]
0x99515E: mov     [eax], edx
0x995160: jz      loc_99550B
0x995166: push    18h
0x995168: pop     eax
0x995169: cmp     [ebp+var_4C], eax
0x99516C: jbe     short loc_99517E
0x99516E: cmp     [ebp+var_9], 5
0x995172: jl      short loc_995177
0x995174: inc     [ebp+var_9]
0x995177: dec     edi
0x995178: inc     [ebp+var_50]
0x99517B: mov     [ebp+var_4C], eax
0x99517E: cmp     [ebp+var_4C], 0
0x995182: jbe     loc_995532
0x995188: jmp     short loc_9951E3
0x99518A: push    0Ah
0x99518C: pop     ecx
0x99518D: dec     edx
0x99518E: cmp     ecx, 0Ah; jumptable 00994F5F default case, case 10
0x995191: jnz     loc_994F53
0x995197: jmp     short loc_995157
0x995199: mov     [ebp+var_60], esi; jumptable 00994F5F case 9
0x99519C: xor     ecx, ecx
0x99519E: jmp     short loc_9951B9
0x9951A0: cmp     al, 39h ; '9'
0x9951A2: jg      short loc_9951C4
0x9951A4: imul    ecx, 0Ah
0x9951A7: movsx   esi, al
0x9951AA: lea     ecx, [ecx+esi-30h]
0x9951AE: cmp     ecx, 1450h
0x9951B4: jg      short loc_9951BF
0x9951B6: mov     al, [edx]
0x9951B8: inc     edx
0x9951B9: cmp     al, bl
0x9951BB: jge     short loc_9951A0
0x9951BD: jmp     short loc_9951C4
0x9951BF: mov     ecx, 1451h
0x9951C4: mov     [ebp+var_64], ecx
0x9951C7: jmp     short loc_9951D4
0x9951C9: cmp     al, 39h ; '9'
0x9951CB: jg      loc_99512C
0x9951D1: mov     al, [edx]
0x9951D3: inc     edx
0x9951D4: cmp     al, bl
0x9951D6: jge     short loc_9951C9
0x9951D8: jmp     loc_99512C
0x9951DD: dec     [ebp+var_4C]
0x9951E0: inc     [ebp+var_50]
0x9951E3: dec     edi
0x9951E4: cmp     byte ptr [edi], 0
0x9951E7: jz      short loc_9951DD
0x9951E9: lea     eax, [ebp+var_3C]
0x9951EC: push    eax
0x9951ED: push    [ebp+var_4C]
0x9951F0: lea     eax, [ebp+var_20]
0x9951F3: push    eax
0x9951F4: call    ___mtold12
0x9951F9: mov     eax, [ebp+var_64]
0x9951FC: xor     ecx, ecx
0x9951FE: add     esp, 0Ch
0x995201: cmp     [ebp+var_68], ecx
0x995204: jge     short loc_995208
0x995206: neg     eax
0x995208: add     eax, [ebp+var_50]
0x99520B: cmp     [ebp+var_60], ecx
0x99520E: jnz     short loc_995213
0x995210: add     eax, [ebp+arg_10]
0x995213: cmp     [ebp+var_5C], ecx
0x995216: jnz     short loc_99521B
0x995218: sub     eax, [ebp+arg_14]
0x99521B: cmp     eax, 1450h
0x995220: jg      loc_995514
0x995226: cmp     eax, 0FFFFEBB0h
0x99522B: jl      loc_99552B
0x995231: mov     esi, offset unk_B32120
0x995236: sub     esi, 60h ; '`'
0x995239: cmp     eax, ecx
0x99523B: mov     [ebp+var_54], eax
0x99523E: jz      loc_9954F9
0x995244: jge     short loc_995253
0x995246: neg     eax
0x995248: mov     esi, offset unk_B32280
0x99524D: mov     [ebp+var_54], eax
0x995250: sub     esi, 60h ; '`'
0x995253: cmp     [ebp+arg_C], ecx
0x995256: jnz     short loc_99525C
0x995258: mov     word ptr [ebp+var_3C], cx
0x99525C: cmp     [ebp+var_54], ecx
0x99525F: jz      loc_9954F9
0x995265: mov     eax, [ebp+var_54]
0x995268: sar     [ebp+var_54], 3
0x99526C: add     esi, 54h ; 'T'
0x99526F: and     eax, 7
0x995272: test    eax, eax
0x995274: mov     [ebp+var_4C], esi
0x995277: jz      loc_9954EF
0x99527D: imul    eax, 0Ch
0x995280: add     eax, esi
0x995282: mov     ebx, eax
0x995284: cmp     word ptr [ebx], 8000h
0x995289: mov     [ebp+var_70], ebx
0x99528C: jb      short loc_9952A2
0x99528E: mov     esi, ebx
0x995290: lea     edi, [ebp+var_48]
0x995293: movsd
0x995294: movsd
0x995295: movsd
0x995296: dec     [ebp+var_46]
0x995299: mov     esi, [ebp+var_4C]
0x99529C: lea     ebx, [ebp+var_48]
0x99529F: mov     [ebp+var_70], ebx
0x9952A2: movzx   edx, word ptr [ebx+0Ah]
0x9952A6: mov     ecx, [ebp+var_32]
0x9952A9: xor     eax, eax
0x9952AB: mov     [ebp+var_50], eax
0x9952AE: mov     [ebp+var_2C], eax
0x9952B1: mov     [ebp+var_28], eax
0x9952B4: mov     [ebp+var_24], eax
0x9952B7: mov     eax, edx
0x9952B9: mov     edi, 7FFFh
0x9952BE: xor     eax, ecx
0x9952C0: and     ecx, edi
0x9952C2: and     edx, edi
0x9952C4: and     eax, 8000h
0x9952C9: cmp     cx, 7FFFh
0x9952CE: lea     edi, [edx+ecx]
0x9952D1: movzx   edi, di
0x9952D4: jnb     loc_9954D5
0x9952DA: cmp     dx, 7FFFh
0x9952DF: jnb     loc_9954D5
0x9952E5: cmp     di, 0BFFDh
0x9952EA: ja      loc_9954D5
0x9952F0: cmp     di, 3FBFh
0x9952F5: ja      short loc_995304
0x9952F7: xor     eax, eax
0x9952F9: mov     [ebp+var_38], eax
0x9952FC: mov     [ebp+var_3C], eax
0x9952FF: jmp     loc_9954EC
0x995304: test    cx, cx
0x995307: jnz     short loc_995328
0x995309: inc     edi
0x99530A: test    dword ptr [ebp-34h], 7FFFFFFFh
0x995311: jnz     short loc_995328
0x995313: cmp     [ebp+var_38], 0
0x995317: jnz     short loc_995328
0x995319: cmp     [ebp+var_3C], 0
0x99531D: jnz     short loc_995328
0x99531F: and     word ptr [ebp+var_32], cx
0x995323: jmp     loc_9954EF
0x995328: xor     ecx, ecx
0x99532A: cmp     dx, cx
0x99532D: jnz     short loc_995350
0x99532F: inc     edi
0x995330: test    dword ptr [ebx+8], 7FFFFFFFh
0x995337: jnz     short loc_995350
0x995339: cmp     [ebx+4], ecx
0x99533C: jnz     short loc_995350
0x99533E: cmp     [ebx], ecx
0x995340: jnz     short loc_995350
0x995342: mov     [ebp-34h], ecx
0x995345: mov     [ebp+var_38], ecx
0x995348: mov     [ebp+var_3C], ecx
0x99534B: jmp     loc_9954EF
0x995350: and     [ebp+var_68], ecx
0x995353: lea     esi, [ebp+var_28]
0x995356: mov     [ebp+var_58], 5
0x99535D: mov     ecx, [ebp+var_68]
0x995360: mov     edx, [ebp+var_58]
0x995363: add     ecx, ecx
0x995365: test    edx, edx
0x995367: mov     [ebp+var_64], edx
0x99536A: jle     short loc_9953C1
0x99536C: lea     ecx, [ebp+ecx+var_3C]
0x995370: add     ebx, 8
0x995373: mov     [ebp+var_5C], ecx
0x995376: mov     [ebp+var_60], ebx
0x995379: mov     ecx, [ebp+var_60]
0x99537C: mov     edx, [ebp+var_5C]
0x99537F: movzx   edx, word ptr [edx]
0x995382: movzx   ecx, word ptr [ecx]
0x995385: and     [ebp+var_78], 0
0x995389: imul    ecx, edx
0x99538C: mov     edx, [esi-4]
0x99538F: lea     ebx, [edx+ecx]
0x995392: cmp     ebx, edx
0x995394: jb      short loc_99539A
0x995396: cmp     ebx, ecx
0x995398: jnb     short loc_9953A1
0x99539A: mov     [ebp+var_78], 1
0x9953A1: cmp     [ebp+var_78], 0
0x9953A5: mov     [esi-4], ebx
0x9953A8: jz      short loc_9953AD
0x9953AA: inc     word ptr [esi]
0x9953AD: add     [ebp+var_5C], 2
0x9953B1: sub     [ebp+var_60], 2
0x9953B5: dec     [ebp+var_64]
0x9953B8: cmp     [ebp+var_64], 0
0x9953BC: jg      short loc_995379
0x9953BE: mov     ebx, [ebp+var_70]
0x9953C1: inc     esi
0x9953C2: inc     esi
0x9953C3: inc     [ebp+var_68]
0x9953C6: dec     [ebp+var_58]
0x9953C9: cmp     [ebp+var_58], 0
0x9953CD: jg      short loc_99535D
0x9953CF: add     edi, 0C002h
0x9953D5: test    di, di
0x9953D8: jle     short loc_995415
0x9953DA: test    [ebp+var_24], 80000000h
0x9953E1: jnz     short loc_995410
0x9953E3: mov     esi, [ebp+var_28]
0x9953E6: mov     ecx, [ebp+var_2C]
0x9953E9: shl     [ebp+var_2C], 1
0x9953EC: shr     ecx, 1Fh
0x9953EF: mov     edx, esi
0x9953F1: add     esi, esi
0x9953F3: or      esi, ecx
0x9953F5: mov     ecx, [ebp+var_24]
0x9953F8: shr     edx, 1Fh
0x9953FB: add     ecx, ecx
0x9953FD: or      ecx, edx
0x9953FF: add     edi, 0FFFFh
0x995405: test    di, di
0x995408: mov     [ebp+var_28], esi
0x99540B: mov     [ebp+var_24], ecx
0x99540E: jg      short loc_9953DA
0x995410: test    di, di
0x995413: jg      short loc_995463
0x995415: add     edi, 0FFFFh
0x99541B: test    di, di
0x99541E: jge     short loc_995463
0x995420: mov     ecx, edi
0x995422: neg     ecx
0x995424: movzx   esi, cx
0x995427: add     edi, esi
0x995429: test    byte ptr [ebp+var_2C], 1
0x99542D: jz      short loc_995432
0x99542F: inc     [ebp+var_50]
0x995432: mov     ecx, [ebp+var_24]
0x995435: mov     ebx, [ebp+var_28]
0x995438: mov     edx, [ebp+var_28]
0x99543B: shr     [ebp+var_24], 1
0x99543E: shl     ecx, 1Fh
0x995441: shr     ebx, 1
0x995443: or      ebx, ecx
0x995445: mov     ecx, [ebp+var_2C]
0x995448: shl     edx, 1Fh
0x99544B: shr     ecx, 1
0x99544D: or      ecx, edx
0x99544F: dec     esi
0x995450: mov     [ebp+var_28], ebx
0x995453: mov     [ebp+var_2C], ecx
0x995456: jnz     short loc_995429
0x995458: cmp     [ebp+var_50], 0
0x99545C: jz      short loc_995463
0x99545E: or      word ptr [ebp+var_2C], 1
0x995463: cmp     word ptr [ebp+var_2C], 8000h
0x995469: ja      short loc_99547C
0x99546B: mov     ecx, [ebp+var_2C]
0x99546E: and     ecx, 1FFFFh
0x995474: cmp     ecx, 18000h
0x99547A: jnz     short loc_9954AF
0x99547C: cmp     [ebp+var_2C+2], 0FFFFFFFFh
0x995480: jnz     short loc_9954AC
0x995482: and     [ebp+var_2C+2], 0
0x995486: cmp     [ebp+var_28+2], 0FFFFFFFFh
0x99548A: jnz     short loc_9954A7
0x99548C: and     [ebp+var_28+2], 0
0x995490: cmp     word ptr [ebp+var_24+2], 0FFFFh
0x995496: jnz     short loc_9954A1
0x995498: mov     word ptr [ebp+var_24+2], 8000h
0x99549E: inc     edi
0x99549F: jmp     short loc_9954AF
0x9954A1: inc     word ptr [ebp+var_24+2]
0x9954A5: jmp     short loc_9954AF
0x9954A7: inc     [ebp+var_28+2]
0x9954AA: jmp     short loc_9954AF
0x9954AC: inc     [ebp+var_2C+2]
0x9954AF: cmp     di, 7FFFh
0x9954B4: mov     esi, [ebp+var_4C]
0x9954B7: jnb     short loc_9954D5
0x9954B9: mov     cx, word ptr [ebp+var_2C+2]
0x9954BD: mov     word ptr [ebp+var_3C], cx
0x9954C1: mov     ecx, [ebp+var_28]
0x9954C4: mov     [ebp+var_3C+2], ecx
0x9954C7: mov     ecx, [ebp+var_24]
0x9954CA: or      edi, eax
0x9954CC: mov     [ebp+var_38+2], ecx
0x9954CF: mov     word ptr [ebp+var_32], di
0x9954D3: jmp     short loc_9954EF
0x9954D5: neg     ax
0x9954D8: sbb     eax, eax
0x9954DA: and     [ebp+var_38], 0
0x9954DE: and     eax, 80000000h
0x9954E3: add     eax, 7FFF8000h
0x9954E8: and     [ebp+var_3C], 0
0x9954EC: mov     [ebp-34h], eax
0x9954EF: cmp     [ebp+var_54], 0
0x9954F3: jnz     loc_995265
0x9954F9: mov     eax, [ebp-34h]
0x9954FC: movzx   ecx, word ptr [ebp+var_3C]
0x995500: mov     esi, [ebp+var_3C+2]
0x995503: mov     edx, [ebp+var_38+2]
0x995506: shr     eax, 10h
0x995509: jmp     short loc_99553A
0x99550B: mov     [ebp+var_6C], 4
0x995512: jmp     short loc_995532
0x995514: xor     esi, esi
0x995516: mov     eax, 7FFFh
0x99551B: mov     edx, 80000000h
0x995520: xor     ecx, ecx
0x995522: mov     [ebp+var_6C], 2
0x995529: jmp     short loc_99553A
0x99552B: mov     [ebp+var_6C], 1
0x995532: xor     ecx, ecx
0x995534: xor     eax, eax
0x995536: xor     edx, edx
0x995538: xor     esi, esi
0x99553A: mov     edi, [ebp+var_7C]
0x99553D: or      eax, [ebp+var_74]
0x995540: mov     [edi], cx
0x995543: mov     [edi+0Ah], ax
0x995547: mov     eax, [ebp+var_6C]
0x99554A: mov     [edi+2], esi
0x99554D: mov     [edi+6], edx
0x995550: mov     ecx, [ebp+var_4]
0x995553: pop     edi
0x995554: pop     esi
0x995555: xor     ecx, ebp
0x995557: pop     ebx
0x995558: call    @__security_check_cookie@4
0x99555D: leave
0x99555E: retn
