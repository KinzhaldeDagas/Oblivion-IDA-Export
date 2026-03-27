0x98CF41: push    ebp
0x98CF42: mov     ebp, esp
0x98CF44: sub     esp, 0Ch
0x98CF47: mov     ecx, [ebp+arg_0]
0x98CF4A: mov     eax, [ecx+10h]
0x98CF4D: push    ebx
0x98CF4E: push    esi
0x98CF4F: mov     esi, [ebp+arg_8]
0x98CF52: push    edi
0x98CF53: mov     edi, [ebp+arg_4]
0x98CF56: mov     edx, edi
0x98CF58: sub     edx, [ecx+0Ch]
0x98CF5B: add     esi, 17h
0x98CF5E: shr     edx, 0Fh
0x98CF61: mov     ecx, edx
0x98CF63: imul    ecx, 204h
0x98CF69: lea     ecx, [ecx+eax+144h]
0x98CF70: mov     [ebp+var_C], ecx
0x98CF73: mov     ecx, [edi-4]
0x98CF76: and     esi, 0FFFFFFF0h
0x98CF79: dec     ecx
0x98CF7A: cmp     esi, ecx
0x98CF7C: lea     edi, [ecx+edi-4]
0x98CF80: mov     ebx, [edi]
0x98CF82: mov     [ebp+arg_8], ecx
0x98CF85: mov     [ebp+var_4], ebx
0x98CF88: jle     loc_98D0E3
0x98CF8E: test    bl, 1
0x98CF91: jnz     loc_98D0DC
0x98CF97: add     ebx, ecx
0x98CF99: cmp     esi, ebx
0x98CF9B: jg      loc_98D0DC
0x98CFA1: mov     ecx, [ebp+var_4]
0x98CFA4: sar     ecx, 4
0x98CFA7: dec     ecx
0x98CFA8: cmp     ecx, 3Fh ; '?'
0x98CFAB: mov     [ebp+var_8], ecx
0x98CFAE: jbe     short loc_98CFB6
0x98CFB0: push    3Fh ; '?'
0x98CFB2: pop     ecx
0x98CFB3: mov     [ebp+var_8], ecx
0x98CFB6: mov     ebx, [edi+4]
0x98CFB9: cmp     ebx, [edi+8]
0x98CFBC: jnz     short loc_98D001
0x98CFBE: cmp     ecx, 20h ; ' '
0x98CFC1: mov     ebx, 80000000h
0x98CFC6: jnb     short loc_98CFE2
0x98CFC8: shr     ebx, cl
0x98CFCA: mov     ecx, [ebp+var_8]
0x98CFCD: lea     ecx, [ecx+eax+4]
0x98CFD1: not     ebx
0x98CFD3: and     [eax+edx*4+44h], ebx
0x98CFD7: dec     byte ptr [ecx]
0x98CFD9: jnz     short loc_98D001
0x98CFDB: mov     ecx, [ebp+arg_0]
0x98CFDE: and     [ecx], ebx
0x98CFE0: jmp     short loc_98D001
0x98CFE2: add     ecx, 0FFFFFFE0h
0x98CFE5: shr     ebx, cl
0x98CFE7: mov     ecx, [ebp+var_8]
0x98CFEA: lea     ecx, [ecx+eax+4]
0x98CFEE: not     ebx
0x98CFF0: and     [eax+edx*4+0C4h], ebx
0x98CFF7: dec     byte ptr [ecx]
0x98CFF9: jnz     short loc_98D001
0x98CFFB: mov     ecx, [ebp+arg_0]
0x98CFFE: and     [ecx+4], ebx
0x98D001: mov     ecx, [edi+8]
0x98D004: mov     ebx, [edi+4]
0x98D007: mov     [ecx+4], ebx
0x98D00A: mov     ecx, [edi+4]
0x98D00D: mov     edi, [edi+8]
0x98D010: mov     [ecx+8], edi
0x98D013: mov     ecx, [ebp+arg_8]
0x98D016: sub     ecx, esi
0x98D018: add     [ebp+var_4], ecx
0x98D01B: cmp     [ebp+var_4], 0
0x98D01F: jle     loc_98D0CA
0x98D025: mov     edi, [ebp+var_4]
0x98D028: mov     ecx, [ebp+arg_4]
0x98D02B: sar     edi, 4
0x98D02E: dec     edi
0x98D02F: cmp     edi, 3Fh ; '?'
0x98D032: lea     ecx, [ecx+esi-4]
0x98D036: jbe     short loc_98D03B
0x98D038: push    3Fh ; '?'
0x98D03A: pop     edi
0x98D03B: mov     ebx, [ebp+var_C]
0x98D03E: lea     ebx, [ebx+edi*8]
0x98D041: mov     [ebp+arg_8], ebx
0x98D044: mov     ebx, [ebx+4]
0x98D047: mov     [ecx+4], ebx
0x98D04A: mov     ebx, [ebp+arg_8]
0x98D04D: mov     [ecx+8], ebx
0x98D050: mov     [ebx+4], ecx
0x98D053: mov     ebx, [ecx+4]
0x98D056: mov     [ebx+8], ecx
0x98D059: mov     ebx, [ecx+4]
0x98D05C: cmp     ebx, [ecx+8]
0x98D05F: jnz     short loc_98D0B8
0x98D061: mov     cl, [edi+eax+4]
0x98D065: mov     byte ptr [ebp+arg_8+3], cl
0x98D068: inc     cl
0x98D06A: cmp     edi, 20h ; ' '
0x98D06D: mov     [edi+eax+4], cl
0x98D071: jnb     short loc_98D08F
0x98D073: cmp     byte ptr [ebp+arg_8+3], 0
0x98D077: jnz     short loc_98D087
0x98D079: mov     ecx, edi
0x98D07B: mov     ebx, 80000000h
0x98D080: shr     ebx, cl
0x98D082: mov     ecx, [ebp+arg_0]
0x98D085: or      [ecx], ebx
0x98D087: lea     eax, [eax+edx*4+44h]
0x98D08B: mov     ecx, edi
0x98D08D: jmp     short loc_98D0AF
0x98D08F: cmp     byte ptr [ebp+arg_8+3], 0
0x98D093: jnz     short loc_98D0A5
0x98D095: lea     ecx, [edi-20h]
0x98D098: mov     ebx, 80000000h
0x98D09D: shr     ebx, cl
0x98D09F: mov     ecx, [ebp+arg_0]
0x98D0A2: or      [ecx+4], ebx
0x98D0A5: lea     eax, [eax+edx*4+0C4h]
0x98D0AC: lea     ecx, [edi-20h]
0x98D0AF: mov     edx, 80000000h
0x98D0B4: shr     edx, cl
0x98D0B6: or      [eax], edx
0x98D0B8: mov     edx, [ebp+arg_4]
0x98D0BB: mov     ecx, [ebp+var_4]
0x98D0BE: lea     eax, [edx+esi-4]
0x98D0C2: mov     [eax], ecx
0x98D0C4: mov     [ecx+eax-4], ecx
0x98D0C8: jmp     short loc_98D0CD
0x98D0CA: mov     edx, [ebp+arg_4]
0x98D0CD: lea     eax, [esi+1]
0x98D0D0: mov     [edx-4], eax
0x98D0D3: mov     [edx+esi-8], eax
0x98D0D7: jmp     loc_98D218
0x98D0DC: xor     eax, eax
0x98D0DE: jmp     loc_98D21B
0x98D0E3: jge     loc_98D218
0x98D0E9: mov     ebx, [ebp+arg_4]
0x98D0EC: sub     [ebp+arg_8], esi
0x98D0EF: lea     ecx, [esi+1]
0x98D0F2: mov     [ebx-4], ecx
0x98D0F5: lea     ebx, [ebx+esi-4]
0x98D0F9: mov     esi, [ebp+arg_8]
0x98D0FC: sar     esi, 4
0x98D0FF: dec     esi
0x98D100: cmp     esi, 3Fh ; '?'
0x98D103: mov     [ebp+arg_4], ebx
0x98D106: mov     [ebx-4], ecx
0x98D109: jbe     short loc_98D10E
0x98D10B: push    3Fh ; '?'
0x98D10D: pop     esi
0x98D10E: test    byte ptr [ebp+var_4], 1
0x98D112: jnz     loc_98D198
0x98D118: mov     esi, [ebp+var_4]
0x98D11B: sar     esi, 4
0x98D11E: dec     esi
0x98D11F: cmp     esi, 3Fh ; '?'
0x98D122: jbe     short loc_98D127
0x98D124: push    3Fh ; '?'
0x98D126: pop     esi
0x98D127: mov     ecx, [edi+4]
0x98D12A: cmp     ecx, [edi+8]
0x98D12D: jnz     short loc_98D171
0x98D12F: cmp     esi, 20h ; ' '
0x98D132: mov     ebx, 80000000h
0x98D137: jnb     short loc_98D152
0x98D139: mov     ecx, esi
0x98D13B: shr     ebx, cl
0x98D13D: lea     esi, [esi+eax+4]
0x98D141: not     ebx
0x98D143: and     [eax+edx*4+44h], ebx
0x98D147: dec     byte ptr [esi]
0x98D149: jnz     short loc_98D16E
0x98D14B: mov     ecx, [ebp+arg_0]
0x98D14E: and     [ecx], ebx
0x98D150: jmp     short loc_98D16E
0x98D152: lea     ecx, [esi-20h]
0x98D155: shr     ebx, cl
0x98D157: lea     ecx, [esi+eax+4]
0x98D15B: not     ebx
0x98D15D: and     [eax+edx*4+0C4h], ebx
0x98D164: dec     byte ptr [ecx]
0x98D166: jnz     short loc_98D16E
0x98D168: mov     ecx, [ebp+arg_0]
0x98D16B: and     [ecx+4], ebx
0x98D16E: mov     ebx, [ebp+arg_4]
0x98D171: mov     ecx, [edi+8]
0x98D174: mov     esi, [edi+4]
0x98D177: mov     [ecx+4], esi
0x98D17A: mov     esi, [edi+8]
0x98D17D: mov     ecx, [edi+4]
0x98D180: mov     [ecx+8], esi
0x98D183: mov     esi, [ebp+arg_8]
0x98D186: add     esi, [ebp+var_4]
0x98D189: mov     [ebp+arg_8], esi
0x98D18C: sar     esi, 4
0x98D18F: dec     esi
0x98D190: cmp     esi, 3Fh ; '?'
0x98D193: jbe     short loc_98D198
0x98D195: push    3Fh ; '?'
0x98D197: pop     esi
0x98D198: mov     ecx, [ebp+var_C]
0x98D19B: lea     ecx, [ecx+esi*8]
0x98D19E: mov     edi, [ecx+4]
0x98D1A1: mov     [ebx+8], ecx
0x98D1A4: mov     [ebx+4], edi
0x98D1A7: mov     [ecx+4], ebx
0x98D1AA: mov     ecx, [ebx+4]
0x98D1AD: mov     [ecx+8], ebx
0x98D1B0: mov     ecx, [ebx+4]
0x98D1B3: cmp     ecx, [ebx+8]
0x98D1B6: jnz     short loc_98D20F
0x98D1B8: mov     cl, [esi+eax+4]
0x98D1BC: mov     byte ptr [ebp+arg_4+3], cl
0x98D1BF: inc     cl
0x98D1C1: cmp     esi, 20h ; ' '
0x98D1C4: mov     [esi+eax+4], cl
0x98D1C8: jnb     short loc_98D1E6
0x98D1CA: cmp     byte ptr [ebp+arg_4+3], 0
0x98D1CE: jnz     short loc_98D1DE
0x98D1D0: mov     ecx, esi
0x98D1D2: mov     edi, 80000000h
0x98D1D7: shr     edi, cl
0x98D1D9: mov     ecx, [ebp+arg_0]
0x98D1DC: or      [ecx], edi
0x98D1DE: lea     eax, [eax+edx*4+44h]
0x98D1E2: mov     ecx, esi
0x98D1E4: jmp     short loc_98D206
0x98D1E6: cmp     byte ptr [ebp+arg_4+3], 0
0x98D1EA: jnz     short loc_98D1FC
0x98D1EC: lea     ecx, [esi-20h]
0x98D1EF: mov     edi, 80000000h
0x98D1F4: shr     edi, cl
0x98D1F6: mov     ecx, [ebp+arg_0]
0x98D1F9: or      [ecx+4], edi
0x98D1FC: lea     eax, [eax+edx*4+0C4h]
0x98D203: lea     ecx, [esi-20h]
0x98D206: mov     edx, 80000000h
0x98D20B: shr     edx, cl
0x98D20D: or      [eax], edx
0x98D20F: mov     eax, [ebp+arg_8]
0x98D212: mov     [ebx], eax
0x98D214: mov     [eax+ebx-4], eax
0x98D218: xor     eax, eax
0x98D21A: inc     eax
0x98D21B: pop     edi
0x98D21C: pop     esi
0x98D21D: pop     ebx
0x98D21E: leave
0x98D21F: retn
