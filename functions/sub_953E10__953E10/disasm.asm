0x953E10: sub     esp, 244h
0x953E16: push    ebx
0x953E17: push    ebp
0x953E18: push    esi
0x953E19: push    edi
0x953E1A: mov     edi, [esp+254h+arg_C]
0x953E21: lea     eax, [esp+254h+var_229]
0x953E25: mov     ebx, ecx
0x953E27: push    eax
0x953E28: mov     ecx, edi
0x953E2A: call    sub_90D380
0x953E2F: cmp     byte ptr [eax], 0
0x953E32: jz      short loc_953E81
0x953E34: mov     ecx, edi
0x953E36: call    sub_90D1E0
0x953E3B: mov     esi, [esp+254h+arg_14]
0x953E42: mov     ecx, [esi+20h]
0x953E45: lea     ebp, [esi+18h]
0x953E48: mov     [esp+254h+var_220], eax
0x953E4C: mov     eax, [ebp+4]
0x953E4F: and     ecx, 3FFFFFFFh
0x953E55: cmp     eax, ecx
0x953E57: jnz     short loc_953E64
0x953E59: push    8
0x953E5B: push    ebp
0x953E5C: call    sub_8A6EE0
0x953E61: add     esp, 8
0x953E64: mov     edx, [ebp+4]
0x953E67: mov     eax, [ebp+0]
0x953E6A: mov     ecx, [esp+254h+arg_10]
0x953E71: mov     [eax+edx*8], ecx
0x953E74: mov     ecx, [esp+254h+var_220]
0x953E78: mov     [eax+edx*8+4], ecx
0x953E7C: inc     dword ptr [ebp+4]
0x953E7F: jmp     short loc_953E88
0x953E81: mov     esi, [esp+254h+arg_14]
0x953E88: mov     ecx, edi
0x953E8A: mov     [esp+254h+var_230], 0
0x953E92: call    sub_90D240
0x953E97: test    eax, eax
0x953E99: jle     loc_954039
0x953E9F: nop
0x953EA0: mov     edx, [esp+254h+var_230]
0x953EA4: push    edx
0x953EA5: mov     ecx, edi
0x953EA7: call    sub_90D260
0x953EAC: mov     ecx, [esp+254h+arg_4]
0x953EB3: mov     ebp, eax
0x953EB5: mov     eax, [ebp+0]
0x953EB8: push    eax
0x953EB9: call    sub_90D2E0
0x953EBE: test    eax, eax
0x953EC0: mov     [esp+254h+var_23C], eax
0x953EC4: jz      loc_954021
0x953ECA: movzx   edi, word ptr [eax+12h]
0x953ECE: mov     ecx, [esp+254h+arg_0]
0x953ED5: mov     dl, [eax+0Ch]
0x953ED8: add     edi, ecx
0x953EDA: mov     cl, [ebp+0Ch]
0x953EDD: cmp     dl, cl
0x953EDF: jnz     loc_95401A
0x953EE5: mov     dl, [ebp+0Dh]
0x953EE8: cmp     [eax+0Dh], dl
0x953EEB: jnz     loc_95401A
0x953EF1: movzx   ecx, cl
0x953EF4: dec     ecx; switch 28 cases
0x953EF5: cmp     ecx, 1Bh
0x953EF8: ja      def_953F05
0x953EFE: movzx   ecx, ds:byte_9545F8[ecx]
0x953F05: jmp     ds:jpt_953F05[ecx*4]; switch jump
0x953F0C: mov     esi, ebp; jumptable 00953F05 case 20
0x953F0E: call    sub_953560
0x953F13: mov     esi, [esp+254h+var_23C]
0x953F17: mov     [esp+254h+var_244], eax
0x953F1B: call    sub_953560
0x953F20: mov     ecx, [esp+254h+var_244]
0x953F24: cmp     eax, ecx
0x953F26: mov     [esp+254h+var_240], eax
0x953F2A: jl      short loc_953F30
0x953F2C: mov     [esp+254h+var_240], ecx
0x953F30: mov     ecx, [esp+254h+var_240]
0x953F34: xor     eax, eax
0x953F36: test    ecx, ecx
0x953F38: mov     [esp+254h+var_238], eax
0x953F3C: jle     loc_953FF9
0x953F42: movzx   edx, byte ptr [ebx+8]
0x953F46: imul    edx, eax
0x953F49: mov     ecx, [edx+edi]
0x953F4C: test    ecx, ecx
0x953F4E: mov     [esp+254h+var_244], ecx
0x953F52: jz      loc_953FE8
0x953F58: movzx   esi, byte ptr [ebx+0Ch]
0x953F5C: imul    esi, eax
0x953F5F: movzx   eax, word ptr [ebp+12h]
0x953F63: add     esi, eax
0x953F65: cmp     byte ptr [ebp+0Dh], 2
0x953F69: jnz     short loc_953FB3
0x953F6B: mov     ecx, [esp+254h+arg_8]
0x953F72: call    sub_953130
0x953F77: mov     edx, [eax]
0x953F79: mov     ecx, eax
0x953F7B: call    dword ptr [edx+1Ch]
0x953F7E: mov     ecx, [esp+254h+arg_14]
0x953F85: push    eax
0x953F86: mov     eax, [esp+258h+arg_10]
0x953F8D: add     esi, eax
0x953F8F: push    esi
0x953F90: call    sub_90D920
0x953F95: mov     esi, [esp+254h+var_244]
0x953F99: push    esi
0x953F9A: call    sub_8B1860
0x953F9F: mov     ecx, [esp+258h+arg_8]
0x953FA6: add     esp, 4
0x953FA9: inc     eax
0x953FAA: push    eax
0x953FAB: push    esi
0x953FAC: call    sub_918390
0x953FB1: jmp     short loc_953FE4
0x953FB3: mov     edx, [esp+254h+var_23C]
0x953FB7: cmp     byte ptr [edx+0Dh], 19h
0x953FBB: jnz     short loc_953FCA
0x953FBD: mov     ecx, ebp
0x953FBF: call    sub_90D1F0
0x953FC4: mov     ecx, [esp+254h+var_244]
0x953FC8: jmp     short loc_953FCC
0x953FCA: xor     eax, eax
0x953FCC: push    eax
0x953FCD: mov     eax, [esp+258h+arg_10]
0x953FD4: push    ecx
0x953FD5: mov     ecx, [esp+25Ch+arg_14]
0x953FDC: add     esi, eax
0x953FDE: push    esi
0x953FDF: call    sub_953680
0x953FE4: mov     eax, [esp+254h+var_238]
0x953FE8: mov     ecx, [esp+254h+var_240]
0x953FEC: inc     eax
0x953FED: cmp     eax, ecx
0x953FEF: mov     [esp+254h+var_238], eax
0x953FF3: jl      loc_953F42
0x953FF9: mov     esi, [esp+254h+arg_14]
0x954000: mov     ecx, [esp+254h+arg_8]; jumptable 00953F05 cases 1-19,21,24
0x954007: call    sub_953130
0x95400C: push    eax
0x95400D: mov     eax, 10h
0x954012: call    sub_9536D0
0x954017: add     esp, 4
0x95401A: mov     edi, [esp+254h+arg_C]
0x954021: mov     ebp, [esp+254h+var_230]
0x954025: inc     ebp
0x954026: mov     ecx, edi
0x954028: mov     [esp+254h+var_230], ebp
0x95402C: call    sub_90D240
0x954031: cmp     ebp, eax
0x954033: jl      loc_953EA0
0x954039: pop     edi
0x95403A: pop     esi
0x95403B: pop     ebp
0x95403C: pop     ebx
0x95403D: add     esp, 244h
0x954043: retn    18h
0x954046: mov     eax, [edi+4]; jumptable 00953F05 cases 22,23,26
0x954049: test    eax, eax
0x95404B: jz      short loc_954000; jumptable 00953F05 cases 1-19,21,24
0x95404D: cmp     dl, 14h
0x954050: mov     ecx, [esp+254h+arg_8]
0x954057: jnz     loc_9540EA
0x95405D: call    sub_953130
0x954062: mov     edx, [eax]
0x954064: movzx   ebp, word ptr [ebp+12h]
0x954068: mov     ecx, eax
0x95406A: call    dword ptr [edx+1Ch]
0x95406D: push    eax
0x95406E: mov     eax, [esp+258h+arg_10]
0x954075: add     ebp, eax
0x954077: push    ebp
0x954078: mov     ecx, esi
0x95407A: call    sub_90D920
0x95407F: mov     eax, [edi+4]
0x954082: xor     ebp, ebp
0x954084: cmp     eax, ebp
0x954086: mov     [esp+254h+var_224], ebp
0x95408A: mov     [esp+254h+var_220], ebp
0x95408E: jle     loc_954000; jumptable 00953F05 cases 1-19,21,24
0x954094: mov     ecx, [esp+254h+var_23C]
0x954098: call    sub_90D1F0
0x95409D: mov     ecx, [esp+254h+arg_8]
0x9540A4: mov     [esp+254h+var_244], eax
0x9540A8: call    sub_953130
0x9540AD: mov     ecx, [esp+254h+var_244]
0x9540B1: mov     edx, [edi]
0x9540B3: push    ecx
0x9540B4: mov     ecx, [edx+ebp*4]
0x9540B7: mov     edx, [eax]
0x9540B9: push    ecx
0x9540BA: mov     ecx, eax
0x9540BC: call    dword ptr [edx+1Ch]
0x9540BF: push    eax
0x9540C0: mov     ecx, esi
0x9540C2: call    sub_953680
0x9540C7: movzx   eax, byte ptr [ebx+0Ch]
0x9540CB: push    eax
0x9540CC: lea     ecx, [esp+250h+var_21C]
0x9540D0: push    ecx
0x9540D1: mov     ecx, [esp+254h+arg_10]
0x9540D8: call    sub_918390
0x9540DD: mov     eax, [edi+4]
0x9540E0: inc     ebp
0x9540E1: cmp     ebp, eax
0x9540E3: jl      short loc_954094
0x9540E5: jmp     loc_954000; jumptable 00953F05 cases 1-19,21,24
0x9540EA: cmp     dl, 19h
0x9540ED: jnz     loc_9541C7
0x9540F3: call    sub_953130
0x9540F8: mov     edx, [eax]
0x9540FA: mov     ecx, eax
0x9540FC: call    dword ptr [edx+1Ch]
0x9540FF: mov     edx, [esp+254h+arg_10]
0x954106: push    eax
0x954107: mov     [esp+258h+var_234], eax
0x95410B: movzx   eax, word ptr [ebp+12h]
0x95410F: add     eax, edx
0x954111: push    eax
0x954112: mov     ecx, esi
0x954114: call    sub_90D920
0x954119: mov     ecx, [esp+254h+var_23C]
0x95411D: call    sub_90D1F0
0x954122: mov     ecx, ebp
0x954124: mov     [esp+254h+var_244], eax
0x954128: call    sub_90D1F0
0x95412D: mov     ecx, [edi]
0x95412F: mov     [esp+254h+var_240], eax
0x954133: mov     eax, [edi+4]
0x954136: xor     ebp, ebp
0x954138: test    eax, eax
0x95413A: mov     [esp+254h+var_238], ecx
0x95413E: jle     short loc_95416E
0x954140: mov     edx, [esp+254h+var_240]
0x954144: mov     eax, [esp+254h+arg_8]
0x95414B: mov     ecx, [esp+254h+var_244]
0x95414F: push    edx
0x954150: push    eax
0x954151: push    ecx
0x954152: call    sub_953130
0x954157: imul    eax, ebp
0x95415A: add     eax, [esp+260h+var_238]
0x95415E: push    eax
0x95415F: mov     ecx, ebx
0x954161: call    sub_953A70
0x954166: mov     eax, [edi+4]
0x954169: inc     ebp
0x95416A: cmp     ebp, eax
0x95416C: jl      short loc_954140
0x95416E: mov     eax, [edi+4]
0x954171: xor     ebp, ebp
0x954173: test    eax, eax
0x954175: jle     loc_954000; jumptable 00953F05 cases 1-19,21,24
0x95417B: jmp     short loc_954180
0x95417D: align 10h
0x954180: mov     ecx, [esp+254h+var_240]
0x954184: push    esi
0x954185: call    sub_953130
0x95418A: imul    eax, ebp
0x95418D: mov     edx, [esp+258h+var_234]
0x954191: mov     ecx, [esp+258h+var_240]
0x954195: add     eax, edx
0x954197: mov     edx, [esp+258h+arg_8]
0x95419E: push    eax
0x95419F: push    ecx
0x9541A0: mov     ecx, [esp+260h+var_244]
0x9541A4: push    edx
0x9541A5: push    ecx
0x9541A6: call    sub_953130
0x9541AB: imul    eax, ebp
0x9541AE: add     eax, [esp+268h+var_238]
0x9541B2: push    eax
0x9541B3: mov     ecx, ebx
0x9541B5: call    sub_953E10
0x9541BA: mov     eax, [edi+4]
0x9541BD: inc     ebp
0x9541BE: cmp     ebp, eax
0x9541C0: jl      short loc_954180
0x9541C2: jmp     loc_954000; jumptable 00953F05 cases 1-19,21,24
0x9541C7: cmp     dl, 1Ch
0x9541CA: jnz     loc_9542AE
0x9541D0: call    sub_953130
0x9541D5: mov     edx, [eax]
0x9541D7: mov     ecx, eax
0x9541D9: call    dword ptr [edx+1Ch]
0x9541DC: push    eax
0x9541DD: mov     [esp+258h+var_244], eax
0x9541E1: movzx   eax, word ptr [ebp+12h]
0x9541E5: add     eax, [esp+258h+arg_10]
0x9541EC: push    eax
0x9541ED: mov     ecx, esi
0x9541EF: call    sub_90D920
0x9541F4: mov     ecx, [edi+4]
0x9541F7: xor     eax, eax
0x9541F9: xor     ebp, ebp
0x9541FB: cmp     ecx, eax
0x9541FD: jle     short loc_954235
0x9541FF: jmp     short loc_954203
0x954201: xor     eax, eax
0x954203: movzx   ecx, byte ptr [ebx+0Ch]
0x954207: push    2
0x954209: push    ecx
0x95420A: mov     ecx, [esp+25Ch+arg_8]
0x954211: lea     edx, [esp+25Ch+var_21C]
0x954215: push    edx
0x954216: mov     [esp+260h+var_21C], eax
0x95421A: mov     [esp+260h+var_218], eax
0x95421E: mov     [esp+260h+var_214], eax
0x954222: mov     [esp+260h+var_210], eax
0x954226: call    sub_9181D0
0x95422B: mov     eax, [edi+4]
0x95422E: inc     ebp
0x95422F: cmp     ebp, eax
0x954231: jl      short loc_954201
0x954233: xor     eax, eax
0x954235: cmp     [edi+4], eax
0x954238: mov     [esp+254h+var_23C], eax
0x95423C: jle     loc_954000; jumptable 00953F05 cases 1-19,21,24
0x954242: jmp     short loc_954250
0x954244: mov     eax, [esp+254h+var_23C]
0x954248: jmp     short loc_954250
0x95424A: align 10h
0x954250: movzx   ebp, byte ptr [ebx+0Ch]
0x954254: mov     ecx, [edi]
0x954256: imul    ebp, eax
0x954259: mov     edx, [ecx+eax*8+4]
0x95425D: lea     eax, [ecx+eax*8]
0x954260: mov     eax, [eax]
0x954262: mov     ecx, [esp+254h+var_244]
0x954266: push    edx
0x954267: shl     ebp, 1
0x954269: lea     edx, [ecx+ebp]
0x95426C: push    eax
0x95426D: push    edx
0x95426E: mov     ecx, esi
0x954270: call    sub_953680
0x954275: mov     eax, [edi]
0x954277: mov     ecx, [esp+254h+var_23C]
0x95427B: mov     edx, [eax+ecx*8+4]
0x95427F: movzx   eax, byte ptr [ebx+0Ch]
0x954283: mov     ecx, [esp+254h+var_244]
0x954287: push    offset dword_BA8788
0x95428C: add     eax, ebp
0x95428E: add     eax, ecx
0x954290: push    edx
0x954291: push    eax
0x954292: mov     ecx, esi
0x954294: call    sub_953680
0x954299: mov     eax, [esp+254h+var_23C]
0x95429D: mov     ecx, [edi+4]
0x9542A0: inc     eax
0x9542A1: cmp     eax, ecx
0x9542A3: mov     [esp+254h+var_23C], eax
0x9542A7: jl      short loc_954244
0x9542A9: jmp     loc_954000; jumptable 00953F05 cases 1-19,21,24
0x9542AE: call    sub_953130
0x9542B3: movzx   ecx, word ptr [ebp+12h]
0x9542B7: mov     edx, [eax]
0x9542B9: mov     [esp+254h+var_234], ecx
0x9542BD: mov     ecx, eax
0x9542BF: call    dword ptr [edx+1Ch]
0x9542C2: mov     ecx, [esp+254h+arg_10]
0x9542C9: push    eax
0x9542CA: mov     eax, [esp+258h+var_234]
0x9542CE: add     eax, ecx
0x9542D0: push    eax
0x9542D1: mov     ecx, esi
0x9542D3: call    sub_90D920
0x9542D8: movzx   edx, byte ptr [ebp+0Dh]
0x9542DC: mov     eax, [edi]
0x9542DE: push    eax
0x9542DF: mov     ecx, ebp
0x9542E1: mov     [esp+258h+var_234], edx
0x9542E5: call    sub_940CF0
0x9542EA: mov     ecx, [esp+258h+arg_8]
0x9542F1: push    ecx
0x9542F2: mov     ecx, [edi+4]
0x9542F5: mov     edx, eax
0x9542F7: mov     eax, [esp+25Ch+var_234]
0x9542FB: call    sub_9535B0
0x954300: add     esp, 8
0x954303: jmp     loc_954000; jumptable 00953F05 cases 1-19,21,24
0x954308: mov     eax, [edi]; jumptable 00953F05 case 27
0x95430A: mov     edx, [ebx]
0x95430C: push    eax
0x95430D: mov     ecx, ebx
0x95430F: mov     [esp+258h+var_244], eax
0x954313: call    dword ptr [edx+0Ch]
0x954316: test    eax, eax
0x954318: mov     [esp+254h+var_240], eax
0x95431C: jz      loc_954000; jumptable 00953F05 cases 1-19,21,24
0x954322: mov     eax, [edi]
0x954324: movzx   ecx, word ptr [ebp+12h]
0x954328: push    offset dword_BA8788
0x95432D: push    eax
0x95432E: add     ecx, [esp+25Ch+arg_10]
0x954335: push    ecx
0x954336: mov     ecx, esi
0x954338: call    sub_953680
0x95433D: mov     ecx, [esp+254h+arg_8]
0x954344: call    sub_953130
0x954349: mov     edx, [eax]
0x95434B: mov     ecx, eax
0x95434D: call    dword ptr [edx+1Ch]
0x954350: movzx   ecx, word ptr [ebp+12h]
0x954354: mov     edx, [esp+254h+arg_10]
0x95435B: push    eax
0x95435C: mov     [esp+258h+var_234], eax
0x954360: movzx   eax, byte ptr [ebx+0Ch]
0x954364: add     eax, edx
0x954366: add     ecx, eax
0x954368: push    ecx
0x954369: mov     ecx, esi
0x95436B: call    sub_90D920
0x954370: mov     eax, [edi+8]
0x954373: mov     edx, [edi+4]
0x954376: xor     ebp, ebp
0x954378: test    eax, eax
0x95437A: mov     [esp+254h+var_238], edx
0x95437E: jle     short loc_9543AE
0x954380: mov     eax, [esp+254h+var_240]
0x954384: mov     ecx, [esp+254h+arg_8]
0x95438B: push    eax
0x95438C: push    ecx
0x95438D: mov     ecx, [esp+25Ch+var_244]
0x954391: push    ecx
0x954392: call    sub_953130
0x954397: imul    eax, ebp
0x95439A: add     eax, [esp+260h+var_238]
0x95439E: push    eax
0x95439F: mov     ecx, ebx
0x9543A1: call    sub_953A70
0x9543A6: mov     eax, [edi+8]
0x9543A9: inc     ebp
0x9543AA: cmp     ebp, eax
0x9543AC: jl      short loc_954380
0x9543AE: mov     eax, [edi+8]
0x9543B1: xor     ebp, ebp
0x9543B3: test    eax, eax
0x9543B5: jle     loc_954000; jumptable 00953F05 cases 1-19,21,24
0x9543BB: jmp     short loc_9543C0
0x9543BD: align 10h
0x9543C0: mov     ecx, [esp+254h+var_240]
0x9543C4: push    esi
0x9543C5: call    sub_953130
0x9543CA: imul    eax, ebp
0x9543CD: mov     edx, [esp+258h+var_234]
0x9543D1: mov     ecx, [esp+258h+var_244]
0x9543D5: add     eax, edx
0x9543D7: mov     edx, [esp+258h+var_240]
0x9543DB: push    eax
0x9543DC: mov     eax, [esp+25Ch+arg_8]
0x9543E3: push    edx
0x9543E4: push    eax
0x9543E5: push    ecx
0x9543E6: call    sub_953130
0x9543EB: imul    eax, ebp
0x9543EE: add     eax, [esp+268h+var_238]
0x9543F2: push    eax
0x9543F3: mov     ecx, ebx
0x9543F5: call    sub_953E10
0x9543FA: mov     eax, [edi+8]
0x9543FD: inc     ebp
0x9543FE: cmp     ebp, eax
0x954400: jl      short loc_9543C0
0x954402: jmp     loc_954000; jumptable 00953F05 cases 1-19,21,24
0x954407: mov     ecx, eax; jumptable 00953F05 case 25
0x954409: call    sub_90D1F0
0x95440E: mov     ecx, ebp
0x954410: mov     [esp+254h+var_238], eax
0x954414: call    sub_90D1F0
0x954419: mov     esi, [esp+254h+arg_10]
0x954420: mov     [esp+254h+var_244], eax
0x954424: movzx   eax, word ptr [ebp+12h]
0x954428: add     eax, esi
0x95442A: mov     esi, [esp+254h+var_23C]
0x95442E: mov     [esp+254h+var_228], eax
0x954432: call    sub_953560
0x954437: mov     esi, ebp
0x954439: mov     [esp+254h+var_234], eax
0x95443D: call    sub_953560
0x954442: mov     ecx, [esp+254h+var_234]
0x954446: cmp     ecx, eax
0x954448: mov     [esp+254h+var_240], ecx
0x95444C: jl      short loc_954452
0x95444E: mov     [esp+254h+var_240], eax
0x954452: mov     eax, [esp+254h+var_240]
0x954456: xor     ebp, ebp
0x954458: test    eax, eax
0x95445A: jle     loc_953FF9
0x954460: mov     ecx, [esp+254h+var_238]
0x954464: call    sub_953130
0x954469: mov     ecx, [esp+254h+arg_14]
0x954470: mov     esi, eax
0x954472: imul    esi, ebp
0x954475: push    ecx
0x954476: mov     ecx, [esp+258h+var_244]
0x95447A: add     esi, edi
0x95447C: call    sub_953130
0x954481: imul    eax, ebp
0x954484: mov     edx, [esp+258h+var_228]
0x954488: mov     ecx, [esp+258h+var_238]
0x95448C: add     eax, edx
0x95448E: mov     edx, [esp+258h+var_244]
0x954492: push    eax
0x954493: mov     eax, [esp+25Ch+arg_8]
0x95449A: push    edx
0x95449B: push    eax
0x95449C: push    ecx
0x95449D: push    esi
0x95449E: mov     ecx, ebx
0x9544A0: call    sub_953E10
0x9544A5: mov     eax, [esp+254h+var_240]
0x9544A9: inc     ebp
0x9544AA: cmp     ebp, eax
0x9544AC: jl      short loc_954460
0x9544AE: jmp     loc_953FF9
0x9544B3: mov     esi, eax; jumptable 00953F05 case 28
0x9544B5: call    sub_953560
0x9544BA: mov     esi, ebp
0x9544BC: mov     [esp+254h+var_228], eax
0x9544C0: call    sub_953560
0x9544C5: mov     ecx, [esp+254h+var_228]
0x9544C9: cmp     ecx, eax
0x9544CB: mov     [esp+254h+var_240], ecx
0x9544CF: jl      short loc_9544D5
0x9544D1: mov     [esp+254h+var_240], eax
0x9544D5: mov     eax, [esp+254h+var_240]
0x9544D9: xor     edx, edx
0x9544DB: test    eax, eax
0x9544DD: mov     [esp+254h+var_244], edx
0x9544E1: jle     loc_953FF9
0x9544E7: mov     [esp+254h+var_23C], 1
0x9544EF: nop
0x9544F0: movzx   eax, byte ptr [ebx+8]
0x9544F4: mov     ecx, eax
0x9544F6: imul    eax, [esp+254h+var_23C]
0x9544FB: mov     esi, [eax+edi]
0x9544FE: imul    ecx, edx
0x954501: mov     ecx, [edi+ecx*2]
0x954504: test    ecx, ecx
0x954506: jz      loc_954567
0x95450C: test    esi, esi
0x95450E: jz      loc_954567
0x954514: movzx   eax, byte ptr [ebx+0Ch]
0x954518: imul    eax, edx
0x95451B: mov     edx, [esp+254h+arg_10]
0x954522: push    esi
0x954523: push    ecx
0x954524: movzx   ecx, word ptr [ebp+12h]
0x954528: add     ecx, edx
0x95452A: lea     edx, [ecx+eax*2]
0x95452D: mov     ecx, [esp+25Ch+arg_14]
0x954534: push    edx
0x954535: call    sub_953680
0x95453A: movzx   eax, byte ptr [ebx+0Ch]
0x95453E: imul    eax, [esp+254h+var_23C]
0x954543: movzx   ecx, word ptr [ebp+12h]
0x954547: push    offset dword_BA8788
0x95454C: push    esi
0x95454D: add     eax, [esp+25Ch+arg_10]
0x954554: add     ecx, eax
0x954556: push    ecx
0x954557: mov     ecx, [esp+260h+arg_14]
0x95455E: call    sub_953680
0x954563: mov     edx, [esp+254h+var_244]
0x954567: mov     ecx, [esp+254h+var_23C]
0x95456B: mov     eax, [esp+254h+var_240]
0x95456F: inc     edx
0x954570: add     ecx, 2
0x954573: cmp     edx, eax
0x954575: mov     [esp+254h+var_244], edx
0x954579: mov     [esp+254h+var_23C], ecx
0x95457D: jl      loc_9544F0
0x954583: jmp     loc_953FF9
