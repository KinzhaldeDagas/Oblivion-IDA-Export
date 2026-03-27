0x742C7E: shr     ebx, 2; jumptable 00742C0B default case
0x742C81: mov     [esp+arg_14], ebx
0x742C85: sub     esi, 2
0x742C88: jmp     loc_7437A3
0x742C8D: mov     ecx, esi; jumptable 00742620 case 13
0x742C8F: and     ecx, 7
0x742C92: shr     ebx, cl
0x742C94: sub     esi, ecx
0x742C96: cmp     esi, 20h ; ' '
0x742C99: mov     [esp+arg_14], ebx
0x742C9D: jnb     short loc_742CC8
0x742C9F: nop
0x742CA0: test    eax, eax
0x742CA2: jz      loc_743801
0x742CA8: movzx   edx, byte ptr [ebp+0]
0x742CAC: mov     ecx, esi
0x742CAE: shl     edx, cl
0x742CB0: sub     eax, 1
0x742CB3: add     esi, 8
0x742CB6: add     ebp, 1
0x742CB9: add     ebx, edx
0x742CBB: cmp     esi, 20h ; ' '
0x742CBE: mov     [esp+arg_C], eax
0x742CC2: mov     [esp+arg_14], ebx
0x742CC6: jb      short loc_742CA0
0x742CC8: mov     edx, ebx
0x742CCA: mov     ecx, ebx
0x742CCC: not     edx
0x742CCE: and     ecx, 0FFFFh
0x742CD4: shr     edx, 10h
0x742CD7: cmp     ecx, edx
0x742CD9: jz      short loc_742CEB
0x742CDB: mov     ecx, [esp+arg_3C]
0x742CDF: mov     dword ptr [ecx+18h], offset aInvalidStoredB; "invalid stored block lengths"
0x742CE6: jmp     loc_74379D
0x742CEB: xor     ebx, ebx
0x742CED: mov     [edi+38h], ecx
0x742CF0: mov     [esp+arg_14], ebx
0x742CF4: xor     esi, esi
0x742CF6: mov     dword ptr [edi], 0Eh
0x742CFC: mov     ecx, [edi+38h]; jumptable 00742620 case 14
0x742CFF: test    ecx, ecx
0x742D01: mov     [esp+Size], ecx
0x742D05: jz      loc_7433B0
0x742D0B: cmp     ecx, eax
0x742D0D: jbe     short loc_742D15
0x742D0F: mov     ecx, eax
0x742D11: mov     [esp+Size], eax
0x742D15: mov     edx, [esp+arg_18]
0x742D19: cmp     ecx, edx
0x742D1B: jbe     short loc_742D23
0x742D1D: mov     ecx, edx
0x742D1F: mov     [esp+Size], ecx
0x742D23: test    ecx, ecx
0x742D25: jz      loc_743801
0x742D2B: mov     edx, [esp+Size]
0x742D2F: mov     eax, [esp+Dst]
0x742D33: push    edx; Size
0x742D34: push    ebp; Src
0x742D35: push    eax; Dst
0x742D36: call    _memcpy
0x742D3B: mov     eax, [esp+0Ch+Size]
0x742D3F: sub     [esp+0Ch+arg_C], eax
0x742D43: sub     [esp+0Ch+arg_18], eax
0x742D47: add     [esp+0Ch+Dst], eax
0x742D4B: add     ebp, eax
0x742D4D: add     esp, 0Ch
0x742D50: sub     [edi+38h], eax
0x742D53: mov     eax, [esp+arg_C]
0x742D57: jmp     loc_7437A3
0x742D5C: cmp     esi, 0Eh; jumptable 00742620 case 15
0x742D5F: jnb     short loc_742D85
0x742D61: test    eax, eax
0x742D63: jz      loc_743801
0x742D69: movzx   edx, byte ptr [ebp+0]
0x742D6D: mov     ecx, esi
0x742D6F: shl     edx, cl
0x742D71: sub     eax, 1
0x742D74: add     esi, 8
0x742D77: add     ebp, 1
0x742D7A: add     ebx, edx
0x742D7C: cmp     esi, 0Eh
0x742D7F: mov     [esp+arg_C], eax
0x742D83: jb      short loc_742D61
0x742D85: mov     ecx, ebx
0x742D87: and     ecx, 1Fh
0x742D8A: shr     ebx, 5
0x742D8D: add     ecx, 101h
0x742D93: mov     edx, ebx
0x742D95: mov     [edi+58h], ecx
0x742D98: shr     ebx, 5
0x742D9B: mov     ecx, ebx
0x742D9D: and     edx, 1Fh
0x742DA0: and     ecx, 0Fh
0x742DA3: add     edx, 1
0x742DA6: add     ecx, 4
0x742DA9: shr     ebx, 4
0x742DAC: sub     esi, 0Eh
0x742DAF: cmp     dword ptr [edi+58h], 11Eh
0x742DB6: mov     [edi+5Ch], edx
0x742DB9: mov     [edi+54h], ecx
0x742DBC: mov     [esp+arg_14], ebx
0x742DC0: ja      loc_742EB6
0x742DC6: cmp     edx, 1Eh
0x742DC9: ja      loc_742EB6
0x742DCF: mov     dword ptr [edi+60h], 0
0x742DD6: mov     dword ptr [edi], 10h
0x742DDC: mov     ecx, [edi+60h]; jumptable 00742620 case 16
0x742DDF: cmp     ecx, [edi+54h]
0x742DE2: jnb     short loc_742E40
0x742DE4: cmp     esi, 3
0x742DE7: jnb     short loc_742E14
0x742DE9: lea     esp, [esp+0]
0x742DF0: test    eax, eax
0x742DF2: jz      loc_743801
0x742DF8: movzx   edx, byte ptr [ebp+0]
0x742DFC: mov     ecx, esi
0x742DFE: shl     edx, cl
0x742E00: sub     eax, 1
0x742E03: add     esi, 8
0x742E06: add     ebp, 1
0x742E09: add     ebx, edx
0x742E0B: cmp     esi, 3
0x742E0E: mov     [esp+arg_C], eax
0x742E12: jb      short loc_742DF0
0x742E14: mov     edx, [edi+60h]
0x742E17: movzx   edx, word ptr ds:0A82528h[edx*2]
0x742E1F: movzx   ecx, bl
0x742E22: and     ecx, 7
0x742E25: mov     [edi+edx*2+68h], cx
0x742E2A: add     dword ptr [edi+60h], 1
0x742E2E: mov     ecx, [edi+60h]
0x742E31: shr     ebx, 3
0x742E34: sub     esi, 3
0x742E37: cmp     ecx, [edi+54h]
0x742E3A: mov     [esp+arg_14], ebx
0x742E3E: jb      short loc_742DE4
0x742E40: mov     eax, 13h
0x742E45: cmp     [edi+60h], eax
0x742E48: jnb     short loc_742E6A
0x742E4A: mov     ecx, 1
0x742E4F: nop
0x742E50: mov     edx, [edi+60h]
0x742E53: movzx   edx, word ptr ds:0A82528h[edx*2]
0x742E5B: mov     word ptr [edi+edx*2+68h], 0
0x742E62: add     [edi+60h], ecx
0x742E65: cmp     [edi+60h], eax
0x742E68: jb      short loc_742E50
0x742E6A: lea     eax, [edi+528h]
0x742E70: lea     ecx, [edi+64h]
0x742E73: mov     [ecx], eax
0x742E75: mov     [edi+44h], eax
0x742E78: lea     edx, [edi+2E8h]
0x742E7E: push    edx
0x742E7F: lea     eax, [edi+4Ch]
0x742E82: push    eax
0x742E83: push    ecx
0x742E84: mov     dword ptr [eax], 7
0x742E8A: push    13h
0x742E8C: lea     eax, [edi+68h]
0x742E8F: push    eax
0x742E90: push    0
0x742E92: call    sub_7454D0
0x742E97: add     esp, 18h
0x742E9A: mov     [esp+arg_2C], eax
0x742E9E: test    eax, eax
0x742EA0: mov     eax, [esp+arg_C]
0x742EA4: jz      short loc_742EC6
0x742EA6: mov     ecx, [esp+arg_3C]
0x742EAA: mov     dword ptr [ecx+18h], offset aInvalidCodeLen; "invalid code lengths set"
0x742EB1: jmp     loc_74379D
0x742EB6: mov     edx, [esp+arg_3C]
0x742EBA: mov     dword ptr [edx+18h], offset aTooManyLengthO; "too many length or distance symbols"
0x742EC1: jmp     loc_74379D
0x742EC6: mov     dword ptr [edi+60h], 0
0x742ECD: mov     dword ptr [edi], 11h
0x742ED3: mov     edx, [edi+5Ch]; jumptable 00742620 case 17
0x742ED6: add     edx, [edi+58h]
0x742ED9: cmp     [edi+60h], edx
0x742EDC: jnb     loc_743137
0x742EE2: mov     ecx, [edi+4Ch]
0x742EE5: mov     edx, 1
0x742EEA: shl     edx, cl
0x742EEC: mov     ecx, [edi+44h]
0x742EEF: sub     edx, 1
0x742EF2: and     edx, ebx
0x742EF4: mov     ecx, [ecx+edx*4]
0x742EF7: mov     edx, ecx
0x742EF9: shr     edx, 8
0x742EFC: movzx   edx, dl
0x742EFF: cmp     edx, esi
0x742F01: mov     [esp+Size], ecx
0x742F05: jbe     short loc_742F4B
0x742F07: test    eax, eax
0x742F09: jz      loc_743801
0x742F0F: movzx   edx, byte ptr [ebp+0]
0x742F13: mov     ecx, esi
0x742F15: shl     edx, cl
0x742F17: mov     ecx, [edi+4Ch]
0x742F1A: sub     eax, 1
0x742F1D: add     esi, 8
0x742F20: add     ebx, edx
0x742F22: mov     edx, 1
0x742F27: shl     edx, cl
0x742F29: mov     ecx, [edi+44h]
0x742F2C: add     ebp, 1
0x742F2F: mov     [esp+arg_C], eax
0x742F33: sub     edx, 1
0x742F36: and     edx, ebx
0x742F38: mov     ecx, [ecx+edx*4]
0x742F3B: mov     edx, ecx
0x742F3D: shr     edx, 8
0x742F40: movzx   edx, dl
0x742F43: cmp     edx, esi
0x742F45: mov     [esp+Size], ecx
0x742F49: ja      short loc_742F07
0x742F4B: mov     edx, ecx
0x742F4D: shr     edx, 10h
0x742F50: cmp     edx, 10h
0x742F53: jnb     short loc_742FAC
0x742F55: mov     edx, ecx
0x742F57: shr     edx, 8
0x742F5A: movzx   edx, dl
0x742F5D: cmp     esi, edx
0x742F5F: jnb     short loc_742F8B
0x742F61: test    eax, eax
0x742F63: jz      loc_743801
0x742F69: movzx   edx, byte ptr [ebp+0]
0x742F6D: mov     ecx, esi
0x742F6F: shl     edx, cl
0x742F71: mov     ecx, [esp+Size]
0x742F75: sub     eax, 1
0x742F78: add     esi, 8
0x742F7B: add     ebx, edx
0x742F7D: movzx   edx, ch
0x742F80: add     ebp, 1
0x742F83: cmp     esi, edx
0x742F85: mov     [esp+arg_C], eax
0x742F89: jb      short loc_742F61
0x742F8B: mov     dx, word ptr [esp+Size+2]
0x742F90: movzx   ecx, ch
0x742F93: shr     ebx, cl
0x742F95: sub     esi, ecx
0x742F97: mov     ecx, [edi+60h]
0x742F9A: mov     [edi+ecx*2+68h], dx
0x742F9F: add     dword ptr [edi+60h], 1
0x742FA3: mov     [esp+arg_14], ebx
0x742FA7: jmp     loc_743108
0x742FAC: mov     dx, word ptr [esp+Size+2]
0x742FB1: cmp     dx, 10h
0x742FB5: movzx   ecx, ch
0x742FB8: mov     [esp+arg_24], ecx
0x742FBC: jnz     short loc_743022
0x742FBE: lea     edx, [ecx+2]
0x742FC1: cmp     esi, edx
0x742FC3: jnb     short loc_742FEF
0x742FC5: test    eax, eax
0x742FC7: jz      loc_743801
0x742FCD: movzx   edx, byte ptr [ebp+0]
0x742FD1: mov     ecx, esi
0x742FD3: shl     edx, cl
0x742FD5: mov     ecx, [esp+arg_24]
0x742FD9: sub     eax, 1
0x742FDC: add     esi, 8
0x742FDF: add     ebx, edx
0x742FE1: lea     edx, [ecx+2]
0x742FE4: add     ebp, 1
0x742FE7: cmp     esi, edx
0x742FE9: mov     [esp+arg_C], eax
0x742FED: jb      short loc_742FC5
0x742FEF: shr     ebx, cl
0x742FF1: sub     esi, ecx
0x742FF3: mov     ecx, [edi+60h]
0x742FF6: test    ecx, ecx
0x742FF8: mov     [esp+arg_14], ebx
0x742FFC: jz      loc_743119
0x743002: movzx   ecx, word ptr [edi+ecx*2+66h]
0x743007: mov     [esp+arg_24], ecx
0x74300B: mov     ecx, ebx
0x74300D: and     ecx, 3
0x743010: add     ecx, 3
0x743013: shr     ebx, 2
0x743016: mov     [esp+Size], ecx
0x74301A: sub     esi, 2
0x74301D: jmp     loc_7430D0
0x743022: cmp     dx, 11h
0x743026: jnz     short loc_743072
0x743028: lea     edx, [ecx+3]
0x74302B: cmp     esi, edx
0x74302D: jnb     short loc_74305A
0x74302F: nop
0x743030: test    eax, eax
0x743032: jz      loc_743801
0x743038: movzx   edx, byte ptr [ebp+0]
0x74303C: mov     ecx, esi
0x74303E: shl     edx, cl
0x743040: mov     ecx, [esp+arg_24]
0x743044: sub     eax, 1
0x743047: add     esi, 8
0x74304A: add     ebx, edx
0x74304C: lea     edx, [ecx+3]
0x74304F: add     ebp, 1
0x743052: cmp     esi, edx
0x743054: mov     [esp+arg_C], eax
0x743058: jb      short loc_743030
0x74305A: shr     ebx, cl
0x74305C: mov     edx, ebx
0x74305E: and     edx, 7
0x743061: add     edx, 3
0x743064: mov     [esp+Size], edx
0x743068: shr     ebx, 3
0x74306B: mov     edx, 0FFFFFFFDh
0x743070: jmp     short loc_7430C0
0x743072: lea     edx, [ecx+7]
0x743075: cmp     esi, edx
0x743077: jnb     short loc_7430AA
0x743079: lea     esp, [esp+0]
0x743080: test    eax, eax
0x743082: jz      loc_743801
0x743088: movzx   edx, byte ptr [ebp+0]
0x74308C: mov     ecx, esi
0x74308E: shl     edx, cl
0x743090: mov     ecx, [esp+arg_24]
0x743094: sub     eax, 1
0x743097: add     esi, 8
0x74309A: add     ebx, edx
0x74309C: lea     edx, [ecx+7]
0x74309F: add     ebp, 1
0x7430A2: cmp     esi, edx
0x7430A4: mov     [esp+arg_C], eax
0x7430A8: jb      short loc_743080
0x7430AA: shr     ebx, cl
0x7430AC: mov     edx, ebx
0x7430AE: and     edx, 7Fh
0x7430B1: add     edx, 0Bh
0x7430B4: mov     [esp+Size], edx
0x7430B8: shr     ebx, 7
0x7430BB: mov     edx, 0FFFFFFF9h
0x7430C0: sub     edx, ecx
0x7430C2: mov     ecx, [esp+Size]
0x7430C6: add     esi, edx
0x7430C8: mov     [esp+arg_24], 0
0x7430D0: mov     edx, [edi+60h]
0x7430D3: add     edx, ecx
0x7430D5: mov     ecx, [edi+5Ch]
0x7430D8: add     ecx, [edi+58h]
0x7430DB: mov     [esp+arg_14], ebx
0x7430DF: cmp     edx, ecx
0x7430E1: ja      short loc_743126
0x7430E3: cmp     [esp+Size], 0
0x7430E8: jz      short loc_743108
0x7430EA: mov     ecx, [esp+arg_24]
0x7430EE: mov     edi, edi
0x7430F0: mov     edx, [edi+60h]
0x7430F3: sub     [esp+Size], 1
0x7430F8: mov     [edi+edx*2+68h], cx
0x7430FD: add     dword ptr [edi+60h], 1
0x743101: cmp     [esp+Size], 0
0x743106: jnz     short loc_7430F0
0x743108: mov     ecx, [edi+5Ch]
0x74310B: add     ecx, [edi+58h]
0x74310E: cmp     [edi+60h], ecx
0x743111: jb      loc_742EE2
0x743117: jmp     short loc_743137
0x743119: mov     edx, [esp+arg_3C]
0x74311D: mov     dword ptr [edx+18h], offset aInvalidBitLeng; "invalid bit length repeat"
0x743124: jmp     short loc_743131
0x743126: mov     eax, [esp+arg_3C]
0x74312A: mov     dword ptr [eax+18h], offset aInvalidBitLeng; "invalid bit length repeat"
0x743131: mov     dword ptr [edi], 1Bh
0x743137: lea     eax, [edi+528h]
0x74313D: lea     ecx, [edi+64h]
0x743140: mov     [ecx], eax
0x743142: lea     edx, [edi+2E8h]
0x743148: push    edx
0x743149: mov     [edi+44h], eax
0x74314C: lea     eax, [edi+4Ch]
0x74314F: push    eax
0x743150: push    ecx
0x743151: mov     ecx, [edi+58h]
0x743154: push    ecx
0x743155: lea     edx, [edi+68h]
0x743158: push    edx
0x743159: push    1
0x74315B: mov     dword ptr [eax], 9
0x743161: call    sub_7454D0
0x743166: add     esp, 18h
0x743169: test    eax, eax
0x74316B: mov     [esp+arg_2C], eax
0x74316F: jz      short loc_743185
0x743171: mov     eax, [esp+arg_3C]
0x743175: mov     dword ptr [eax+18h], offset aInvalidLiteral; "invalid literal/lengths set"
0x74317C: mov     eax, [esp+arg_C]
0x743180: jmp     loc_74379D
0x743185: mov     edx, [edi+64h]
0x743188: lea     ecx, [edi+64h]
0x74318B: mov     [edi+48h], edx
0x74318E: lea     edx, [edi+2E8h]
0x743194: push    edx
0x743195: lea     eax, [edi+50h]
0x743198: push    eax
0x743199: push    ecx
0x74319A: mov     ecx, [edi+58h]
0x74319D: mov     dword ptr [eax], 6
0x7431A3: mov     eax, [edi+5Ch]
0x7431A6: push    eax
0x7431A7: lea     edx, [edi+ecx*2+68h]
0x7431AB: push    edx
0x7431AC: push    2
0x7431AE: call    sub_7454D0
0x7431B3: add     esp, 18h
0x7431B6: test    eax, eax
0x7431B8: mov     [esp+arg_2C], eax
0x7431BC: jz      short loc_7431D2
0x7431BE: mov     eax, [esp+arg_3C]
0x7431C2: mov     dword ptr [eax+18h], offset aInvalidDistanc; "invalid distances set"
0x7431C9: mov     eax, [esp+arg_C]
0x7431CD: jmp     loc_74379D
0x7431D2: mov     eax, [esp+arg_C]
0x7431D6: mov     dword ptr [edi], 12h
0x7431DC: cmp     eax, 6; jumptable 00742620 case 18
0x7431DF: jb      short loc_743244
0x7431E1: cmp     [esp+arg_18], 102h
0x7431E9: jb      short loc_743244
0x7431EB: mov     eax, [esp+arg_3C]
0x7431EF: mov     edx, [esp+arg_18]
0x7431F3: mov     ecx, [esp+Dst]
0x7431F7: mov     [eax+10h], edx
0x7431FA: mov     edx, [esp+arg_28]
0x7431FE: mov     [eax+0Ch], ecx
0x743201: mov     ecx, [esp+arg_C]
0x743205: push    edx
0x743206: mov     [eax], ebp
0x743208: mov     [eax+4], ecx
0x74320B: push    eax
0x74320C: mov     [edi+30h], ebx
0x74320F: mov     [edi+34h], esi
0x743212: call    sub_745010
0x743217: mov     eax, [esp+8+arg_3C]
0x74321B: mov     ecx, [eax+0Ch]
0x74321E: mov     edx, [eax+10h]
0x743221: mov     ebp, [eax]
0x743223: mov     eax, [eax+4]
0x743226: mov     ebx, [edi+30h]
0x743229: mov     esi, [edi+34h]
0x74322C: add     esp, 8
0x74322F: mov     [esp+Dst], ecx
0x743233: mov     [esp+arg_18], edx
0x743237: mov     [esp+arg_C], eax
0x74323B: mov     [esp+arg_14], ebx
0x74323F: jmp     loc_7437A3
0x743244: mov     ecx, [edi+4Ch]
0x743247: mov     edx, 1
0x74324C: shl     edx, cl
0x74324E: mov     ecx, [edi+44h]
0x743251: sub     edx, 1
0x743254: and     edx, ebx
0x743256: mov     edx, [ecx+edx*4]
0x743259: mov     ecx, edx
0x74325B: shr     ecx, 8
0x74325E: movzx   ecx, cl
0x743261: cmp     ecx, esi
0x743263: mov     [esp+Size], edx
0x743267: jbe     short loc_7432B4
0x743269: lea     esp, [esp+0]
0x743270: test    eax, eax
0x743272: jz      loc_743801
0x743278: movzx   edx, byte ptr [ebp+0]
0x74327C: mov     ecx, esi
0x74327E: shl     edx, cl
0x743280: mov     ecx, [edi+4Ch]
0x743283: sub     eax, 1
0x743286: add     esi, 8
0x743289: add     ebx, edx
0x74328B: mov     edx, 1
0x743290: shl     edx, cl
0x743292: mov     ecx, [edi+44h]
0x743295: add     ebp, 1
0x743298: mov     [esp+arg_C], eax
0x74329C: sub     edx, 1
0x74329F: and     edx, ebx
0x7432A1: mov     edx, [ecx+edx*4]
0x7432A4: mov     ecx, edx
0x7432A6: shr     ecx, 8
0x7432A9: movzx   ecx, cl
0x7432AC: cmp     ecx, esi
0x7432AE: mov     [esp+Size], edx
0x7432B2: ja      short loc_743270
0x7432B4: test    dl, dl
0x7432B6: jz      loc_743380
0x7432BC: test    dl, 0F0h
0x7432BF: jnz     loc_743380
0x7432C5: mov     ecx, edx
0x7432C7: shr     ecx, 8
0x7432CA: mov     [esp+arg_30], ecx
0x7432CE: movzx   ecx, cl
0x7432D1: mov     [esp+arg_24], ecx
0x7432D5: movzx   ecx, dl
0x7432D8: add     ecx, [esp+arg_24]
0x7432DC: mov     [esp+arg_14], edx
0x7432E0: mov     edx, 1
0x7432E5: shl     edx, cl
0x7432E7: mov     ecx, [esp+arg_24]
0x7432EB: sub     edx, 1
0x7432EE: and     edx, ebx
0x7432F0: shr     edx, cl
0x7432F2: mov     ecx, [esp+Size]
0x7432F6: shr     ecx, 10h
0x7432F9: add     edx, ecx
0x7432FB: mov     ecx, [edi+44h]
0x7432FE: mov     ecx, [ecx+edx*4]
0x743301: mov     [esp+Size], ecx
0x743305: shr     ecx, 8
0x743308: movzx   edx, cl
0x74330B: movzx   ecx, byte ptr [esp+arg_30]
0x743310: add     edx, ecx
0x743312: cmp     edx, esi
0x743314: jbe     short loc_743373
0x743316: test    eax, eax
0x743318: jz      loc_743801
0x74331E: movzx   edx, byte ptr [ebp+0]
0x743322: mov     ecx, esi
0x743324: shl     edx, cl
0x743326: mov     ecx, [esp+arg_14]
0x74332A: sub     eax, 1
0x74332D: add     esi, 8
0x743330: add     ebx, edx
0x743332: movzx   edx, ch
0x743335: add     ecx, edx
0x743337: mov     [esp+arg_24], edx
0x74333B: mov     edx, 1
0x743340: shl     edx, cl
0x743342: mov     ecx, [esp+arg_24]
0x743346: add     ebp, 1
0x743349: mov     [esp+arg_C], eax
0x74334D: sub     edx, 1
0x743350: and     edx, ebx
0x743352: shr     edx, cl
0x743354: movzx   ecx, word ptr [esp+arg_14+2]
0x743359: add     edx, ecx
0x74335B: mov     ecx, [edi+44h]
0x74335E: mov     ecx, [ecx+edx*4]
0x743361: mov     [esp+Size], ecx
0x743365: shr     ecx, 8
0x743368: movzx   edx, cl
0x74336B: add     edx, [esp+arg_24]
0x74336F: cmp     edx, esi
0x743371: ja      short loc_743316
0x743373: movzx   ecx, byte ptr [esp+arg_14+1]
0x743378: mov     edx, [esp+Size]
0x74337C: shr     ebx, cl
0x74337E: sub     esi, ecx
0x743380: mov     ecx, edx
0x743382: shr     ecx, 8
0x743385: movzx   ecx, cl
0x743388: shr     ebx, cl
0x74338A: sub     esi, ecx
0x74338C: mov     [esp+arg_24], ecx
0x743390: mov     ecx, edx
0x743392: shr     ecx, 10h
0x743395: test    dl, dl
0x743397: mov     [esp+arg_14], ebx
0x74339B: mov     [edi+38h], ecx
0x74339E: jnz     short loc_7433AB
0x7433A0: mov     dword ptr [edi], 17h
0x7433A6: jmp     loc_7437A3
0x7433AB: test    dl, 20h
0x7433AE: jz      short loc_7433BB
0x7433B0: mov     dword ptr [edi], 0Bh
0x7433B6: jmp     loc_7437A3
0x7433BB: test    dl, 40h
0x7433BE: jz      short loc_7433D0
0x7433C0: mov     edx, [esp+arg_3C]
0x7433C4: mov     dword ptr [edx+18h], offset aInvalidLiter_0; "invalid literal/length code"
0x7433CB: jmp     loc_74379D
0x7433D0: and     edx, 0Fh
0x7433D3: mov     [edi+40h], edx
0x7433D6: mov     dword ptr [edi], 13h
0x7433DC: mov     ecx, [edi+40h]; jumptable 00742620 case 19
0x7433DF: test    ecx, ecx
0x7433E1: jz      short loc_743421
0x7433E3: cmp     esi, ecx
0x7433E5: jnb     short loc_74340B
0x7433E7: test    eax, eax
0x7433E9: jz      loc_743801
0x7433EF: movzx   edx, byte ptr [ebp+0]
0x7433F3: mov     ecx, esi
0x7433F5: shl     edx, cl
0x7433F7: sub     eax, 1
0x7433FA: add     esi, 8
0x7433FD: add     ebp, 1
0x743400: add     ebx, edx
0x743402: cmp     esi, [edi+40h]
0x743405: mov     [esp+arg_C], eax
0x743409: jb      short loc_7433E7
0x74340B: mov     ecx, [edi+40h]
0x74340E: mov     edx, 1
0x743413: shl     edx, cl
0x743415: sub     edx, 1
0x743418: and     edx, ebx
0x74341A: add     [edi+38h], edx
0x74341D: shr     ebx, cl
0x74341F: sub     esi, ecx
0x743421: mov     dword ptr [edi], 14h
0x743427: mov     ecx, [edi+50h]; jumptable 00742620 case 20
0x74342A: mov     edx, 1
0x74342F: shl     edx, cl
0x743431: mov     ecx, [edi+48h]
0x743434: sub     edx, 1
0x743437: and     edx, ebx
0x743439: mov     edx, [ecx+edx*4]
0x74343C: mov     ecx, edx
0x74343E: shr     ecx, 8
0x743441: movzx   ecx, cl
0x743444: cmp     ecx, esi
0x743446: mov     [esp+Size], edx
0x74344A: jbe     short loc_743494
0x74344C: lea     esp, [esp+0]
0x743450: test    eax, eax
0x743452: jz      loc_743801
0x743458: movzx   edx, byte ptr [ebp+0]
0x74345C: mov     ecx, esi
0x74345E: shl     edx, cl
0x743460: mov     ecx, [edi+50h]
0x743463: sub     eax, 1
0x743466: add     esi, 8
0x743469: add     ebx, edx
0x74346B: mov     edx, 1
0x743470: shl     edx, cl
0x743472: mov     ecx, [edi+48h]
0x743475: add     ebp, 1
0x743478: mov     [esp+arg_C], eax
0x74347C: sub     edx, 1
0x74347F: and     edx, ebx
0x743481: mov     edx, [ecx+edx*4]
0x743484: mov     ecx, edx
0x743486: shr     ecx, 8
0x743489: movzx   ecx, cl
0x74348C: cmp     ecx, esi
0x74348E: mov     [esp+Size], edx
0x743492: ja      short loc_743450
0x743494: test    dl, 0F0h
0x743497: jnz     loc_74355A
0x74349D: mov     ecx, edx
0x74349F: shr     ecx, 8
0x7434A2: mov     [esp+arg_30], ecx
0x7434A6: movzx   ecx, cl
0x7434A9: mov     [esp+arg_24], ecx
0x7434AD: movzx   ecx, dl
0x7434B0: add     ecx, [esp+arg_24]
0x7434B4: mov     [esp+arg_14], edx
0x7434B8: mov     edx, 1
0x7434BD: shl     edx, cl
0x7434BF: mov     ecx, [esp+arg_24]
0x7434C3: sub     edx, 1
0x7434C6: and     edx, ebx
0x7434C8: shr     edx, cl
0x7434CA: mov     ecx, [esp+Size]
0x7434CE: shr     ecx, 10h
0x7434D1: add     edx, ecx
0x7434D3: mov     ecx, [edi+48h]
0x7434D6: mov     ecx, [ecx+edx*4]
0x7434D9: mov     [esp+Size], ecx
0x7434DD: shr     ecx, 8
0x7434E0: movzx   edx, cl
0x7434E3: movzx   ecx, byte ptr [esp+arg_30]
0x7434E8: add     edx, ecx
0x7434EA: cmp     edx, esi
0x7434EC: jbe     short loc_74354D
0x7434EE: mov     edi, edi
0x7434F0: test    eax, eax
0x7434F2: jz      loc_743801
0x7434F8: movzx   edx, byte ptr [ebp+0]
0x7434FC: mov     ecx, esi
0x7434FE: shl     edx, cl
0x743500: mov     ecx, [esp+arg_14]
0x743504: sub     eax, 1
0x743507: add     esi, 8
0x74350A: add     ebx, edx
0x74350C: movzx   edx, ch
0x74350F: add     ecx, edx
0x743511: mov     [esp+arg_24], edx
0x743515: mov     edx, 1
0x74351A: shl     edx, cl
0x74351C: mov     ecx, [esp+arg_24]
0x743520: add     ebp, 1
0x743523: mov     [esp+arg_C], eax
0x743527: sub     edx, 1
0x74352A: and     edx, ebx
0x74352C: shr     edx, cl
0x74352E: movzx   ecx, word ptr [esp+arg_14+2]
0x743533: add     edx, ecx
0x743535: mov     ecx, [edi+48h]
0x743538: mov     ecx, [ecx+edx*4]
0x74353B: mov     [esp+Size], ecx
0x74353F: shr     ecx, 8
0x743542: movzx   edx, cl
0x743545: add     edx, [esp+arg_24]
0x743549: cmp     edx, esi
0x74354B: ja      short loc_7434F0
0x74354D: movzx   ecx, byte ptr [esp+arg_14+1]
0x743552: mov     edx, [esp+Size]
0x743556: shr     ebx, cl
0x743558: sub     esi, ecx
0x74355A: mov     ecx, edx
0x74355C: shr     ecx, 8
0x74355F: movzx   ecx, cl
0x743562: shr     ebx, cl
0x743564: sub     esi, ecx
0x743566: test    dl, 40h
0x743569: mov     [esp+arg_24], ecx
0x74356D: mov     [esp+arg_14], ebx
0x743571: jz      short loc_743583
0x743573: mov     edx, [esp+arg_3C]
0x743577: mov     dword ptr [edx+18h], offset aInvalidDista_0; "invalid distance code"
0x74357E: jmp     loc_74379D
0x743583: mov     ecx, edx
0x743585: shr     ecx, 10h
0x743588: and     edx, 0Fh
0x74358B: mov     [edi+3Ch], ecx
0x74358E: mov     [edi+40h], edx
0x743591: mov     dword ptr [edi], 15h
0x743597: mov     ecx, [edi+40h]; jumptable 00742620 case 21
0x74359A: test    ecx, ecx
0x74359C: jz      short loc_7435E0
0x74359E: cmp     esi, ecx
0x7435A0: jnb     short loc_7435C6
0x7435A2: test    eax, eax
0x7435A4: jz      loc_743801
0x7435AA: movzx   edx, byte ptr [ebp+0]
0x7435AE: mov     ecx, esi
0x7435B0: shl     edx, cl
0x7435B2: sub     eax, 1
0x7435B5: add     esi, 8
0x7435B8: add     ebp, 1
0x7435BB: add     ebx, edx
0x7435BD: cmp     esi, [edi+40h]
0x7435C0: mov     [esp+arg_C], eax
0x7435C4: jb      short loc_7435A2
0x7435C6: mov     ecx, [edi+40h]
0x7435C9: mov     edx, 1
0x7435CE: shl     edx, cl
0x7435D0: sub     edx, 1
0x7435D3: and     edx, ebx
0x7435D5: add     [edi+3Ch], edx
0x7435D8: shr     ebx, cl
0x7435DA: sub     esi, ecx
0x7435DC: mov     [esp+arg_14], ebx
0x7435E0: mov     ecx, [edi+24h]
0x7435E3: sub     ecx, [esp+arg_18]
0x7435E7: add     ecx, [esp+arg_28]
0x7435EB: cmp     [edi+3Ch], ecx
0x7435EE: jbe     short loc_743600
0x7435F0: mov     edx, [esp+arg_3C]
0x7435F4: mov     dword ptr [edx+18h], offset aInvalidDista_1; "invalid distance too far back"
0x7435FB: jmp     loc_74379D
0x743600: mov     dword ptr [edi], 16h
0x743606: cmp     [esp+arg_18], 0; jumptable 00742620 case 22
0x74360B: jz      loc_743801
0x743611: mov     edx, [esp+arg_28]
0x743615: sub     edx, [esp+arg_18]
0x743619: mov     ecx, [edi+3Ch]
0x74361C: cmp     ecx, edx
0x74361E: jbe     short loc_74365C
0x743620: sub     ecx, edx
0x743622: mov     edx, [edi+28h]
0x743625: cmp     ecx, edx
0x743627: mov     [esp+Size], ecx
0x74362B: jbe     short loc_74363D
0x74362D: sub     ecx, edx
0x74362F: mov     edx, [edi+2Ch]
0x743632: add     edx, [edi+20h]
0x743635: mov     [esp+Size], ecx
0x743639: sub     edx, ecx
0x74363B: jmp     short loc_743649
0x74363D: mov     edx, [edi+2Ch]
0x743640: sub     edx, ecx
0x743642: add     edx, [edi+28h]
0x743645: mov     ecx, [esp+Size]
0x743649: mov     [esp+arg_24], edx
0x74364D: mov     edx, [edi+38h]
0x743650: cmp     ecx, edx
0x743652: mov     [esp+arg_30], edx
0x743656: jbe     short loc_743671
0x743658: mov     ecx, edx
0x74365A: jmp     short loc_74366D
0x74365C: mov     edx, [esp+Dst]
0x743660: sub     edx, ecx
0x743662: mov     ecx, [edi+38h]
0x743665: mov     [esp+arg_24], edx
0x743669: mov     [esp+arg_30], ecx
0x74366D: mov     [esp+Size], ecx
0x743671: mov     edx, [esp+arg_18]
0x743675: cmp     ecx, edx
0x743677: jbe     short loc_74367F
0x743679: mov     ecx, edx
0x74367B: mov     [esp+Size], ecx
0x74367F: sub     edx, ecx
0x743681: mov     [esp+arg_18], edx
0x743685: mov     edx, [esp+arg_30]
0x743689: sub     edx, ecx
0x74368B: mov     ecx, [esp+Dst]
0x74368F: mov     [edi+38h], edx
0x743692: mov     edx, [esp+arg_24]
0x743696: mov     dl, [edx]
0x743698: add     [esp+arg_24], 1
0x74369D: mov     [ecx], dl
0x74369F: add     ecx, 1
0x7436A2: sub     [esp+Size], 1
0x7436A7: jnz     short loc_743692
0x7436A9: cmp     dword ptr [edi+38h], 0
0x7436AD: mov     [esp+Dst], ecx
0x7436B1: jnz     loc_7437A3
0x7436B7: mov     dword ptr [edi], 12h
0x7436BD: jmp     loc_7437A3
0x7436C2: cmp     [esp+arg_18], 0; jumptable 00742620 case 23
0x7436C7: jz      loc_743801
0x7436CD: mov     ecx, [esp+Dst]
0x7436D1: mov     dl, [edi+38h]
0x7436D4: mov     [ecx], dl
0x7436D6: add     ecx, 1
0x7436D9: sub     [esp+arg_18], 1
0x7436DE: mov     [esp+Dst], ecx
0x7436E2: mov     dword ptr [edi], 12h
0x7436E8: jmp     loc_7437A3
0x7436ED: cmp     dword ptr [edi+8], 0; jumptable 00742620 case 24
0x7436F1: jz      short loc_743746
0x7436F3: cmp     esi, 20h ; ' '
0x7436F6: jnb     short loc_74371C
0x7436F8: test    eax, eax
0x7436FA: jz      loc_743801
0x743700: movzx   edx, byte ptr [ebp+0]
0x743704: mov     ecx, esi
0x743706: shl     edx, cl
0x743708: sub     eax, 1
0x74370B: add     esi, 8
0x74370E: add     ebp, 1
0x743711: add     ebx, edx
0x743713: cmp     esi, 20h ; ' '
0x743716: mov     [esp+arg_C], eax
0x74371A: jb      short loc_7436F8
0x74371C: mov     ecx, [esp+arg_28]
0x743720: mov     esi, [esp+arg_18]
0x743724: mov     edx, [esp+arg_3C]
0x743728: sub     ecx, esi
0x74372A: add     [edx+14h], ecx
0x74372D: add     [edi+18h], ecx
0x743730: xor     ebx, ebx
0x743732: cmp     ecx, ebx
0x743734: jz      short loc_74373C
0x743736: mov     [edi+14h], ebx
0x743739: mov     [edx+30h], ebx
0x74373C: mov     [esp+arg_28], esi
0x743740: mov     [esp+arg_14], ebx
0x743744: xor     esi, esi
0x743746: mov     dword ptr [edi], 19h
0x74374C: cmp     dword ptr [edi+8], 0; jumptable 00742620 case 25
0x743750: jz      loc_7437E9
0x743756: cmp     dword ptr [edi+10h], 0
0x74375A: jz      loc_7437E9
0x743760: cmp     esi, 20h ; ' '
0x743763: jnb     short loc_74378D
0x743765: test    eax, eax
0x743767: jz      loc_743801
0x74376D: movzx   edx, byte ptr [ebp+0]
0x743771: mov     ecx, esi
0x743773: shl     edx, cl
0x743775: sub     eax, 1
0x743778: add     esi, 8
0x74377B: add     ebp, 1
0x74377E: add     ebx, edx
0x743780: cmp     esi, 20h ; ' '
0x743783: mov     [esp+arg_C], eax
0x743787: mov     [esp+arg_14], ebx
0x74378B: jb      short loc_743765
0x74378D: cmp     ebx, [edi+18h]
0x743790: jz      short loc_7437E5
0x743792: mov     ecx, [esp+arg_3C]
0x743796: mov     dword ptr [ecx+18h], offset aIncorrectLengt; "incorrect length check"
0x74379D: mov     dword ptr [edi], 1Bh
0x7437A3: mov     ecx, [edi]
0x7437A5: cmp     ecx, 1Ch
0x7437A8: jbe     loc_742620
