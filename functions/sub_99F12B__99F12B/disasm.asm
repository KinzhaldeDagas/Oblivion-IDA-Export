0x99F12B: push    ebp
0x99F12C: mov     ebp, esp
0x99F12E: sub     esp, 2Ch
0x99F131: mov     eax, [ebp+arg_0]
0x99F134: movzx   ecx, word ptr [eax+0Ah]
0x99F138: push    ebx
0x99F139: mov     ebx, ecx
0x99F13B: and     ecx, 8000h
0x99F141: mov     [ebp+var_14], ecx
0x99F144: mov     ecx, [eax+6]
0x99F147: mov     [ebp+var_20], ecx
0x99F14A: mov     ecx, [eax+2]
0x99F14D: movzx   eax, word ptr [eax]
0x99F150: and     ebx, 7FFFh
0x99F156: sub     ebx, 3FFFh
0x99F15C: shl     eax, 10h
0x99F15F: cmp     ebx, 0FFFFC001h
0x99F165: push    edi
0x99F166: mov     [ebp+var_1C], ecx
0x99F169: mov     [ebp+var_18], eax
0x99F16C: jnz     short loc_99F195
0x99F16E: xor     ebx, ebx
0x99F170: xor     eax, eax
0x99F172: cmp     [ebp+eax*4+var_20], ebx
0x99F176: jnz     short loc_99F185
0x99F178: inc     eax
0x99F179: cmp     eax, 3
0x99F17C: jl      short loc_99F172
0x99F17E: xor     eax, eax
0x99F180: jmp     loc_99F62A
0x99F185: xor     eax, eax
0x99F187: lea     edi, [ebp+var_20]
0x99F18A: stosd
0x99F18B: stosd
0x99F18C: push    2
0x99F18E: stosd
0x99F18F: pop     eax
0x99F190: jmp     loc_99F62A
0x99F195: and     [ebp+arg_0], 0
0x99F199: push    esi
0x99F19A: lea     esi, [ebp+var_20]
0x99F19D: lea     edi, [ebp+var_2C]
0x99F1A0: movsd
0x99F1A1: movsd
0x99F1A2: movsd
0x99F1A3: mov     esi, dword_B320F4
0x99F1A9: dec     esi
0x99F1AA: lea     ecx, [esi+1]
0x99F1AD: mov     eax, ecx
0x99F1AF: cdq
0x99F1B0: and     edx, 1Fh
0x99F1B3: add     eax, edx
0x99F1B5: sar     eax, 5
0x99F1B8: mov     edx, ecx
0x99F1BA: and     edx, 8000001Fh
0x99F1C0: mov     [ebp+var_10], ebx
0x99F1C3: mov     [ebp+var_C], eax
0x99F1C6: jns     short loc_99F1CD
0x99F1C8: dec     edx
0x99F1C9: or      edx, 0FFFFFFE0h
0x99F1CC: inc     edx
0x99F1CD: lea     edi, [ebp+eax*4+var_20]
0x99F1D1: push    1Fh
0x99F1D3: xor     eax, eax
0x99F1D5: pop     ecx
0x99F1D6: sub     ecx, edx
0x99F1D8: inc     eax
0x99F1D9: shl     eax, cl
0x99F1DB: mov     [ebp+var_8], ecx
0x99F1DE: test    [edi], eax
0x99F1E0: jz      loc_99F273
0x99F1E6: mov     eax, [ebp+var_C]
0x99F1E9: or      edx, 0FFFFFFFFh
0x99F1EC: shl     edx, cl
0x99F1EE: not     edx
0x99F1F0: test    [ebp+eax*4+var_20], edx
0x99F1F4: jmp     short loc_99F1FB
0x99F1F6: cmp     [ebp+eax*4+var_20], 0
0x99F1FB: jnz     short loc_99F205
0x99F1FD: inc     eax
0x99F1FE: cmp     eax, 3
0x99F201: jl      short loc_99F1F6
0x99F203: jmp     short loc_99F273
0x99F205: mov     eax, esi
0x99F207: cdq
0x99F208: push    1Fh
0x99F20A: pop     ecx
0x99F20B: and     edx, ecx
0x99F20D: add     eax, edx
0x99F20F: sar     eax, 5
0x99F212: and     esi, 8000001Fh
0x99F218: jns     short loc_99F21F
0x99F21A: dec     esi
0x99F21B: or      esi, 0FFFFFFE0h
0x99F21E: inc     esi
0x99F21F: and     [ebp+var_4], 0
0x99F223: sub     ecx, esi
0x99F225: xor     edx, edx
0x99F227: inc     edx
0x99F228: shl     edx, cl
0x99F22A: lea     ecx, [ebp+eax*4+var_20]
0x99F22E: mov     esi, [ecx]
0x99F230: add     esi, edx
0x99F232: mov     [ebp+arg_0], esi
0x99F235: mov     esi, [ecx]
0x99F237: cmp     [ebp+arg_0], esi
0x99F23A: jb      short loc_99F25E
0x99F23C: cmp     [ebp+arg_0], edx
0x99F23F: jmp     short loc_99F25C
0x99F241: test    ecx, ecx
0x99F243: jz      short loc_99F270
0x99F245: and     [ebp+var_4], 0
0x99F249: lea     ecx, [ebp+eax*4+var_20]
0x99F24D: mov     edx, [ecx]
0x99F24F: lea     esi, [edx+1]
0x99F252: cmp     esi, edx
0x99F254: mov     [ebp+arg_0], esi
0x99F257: jb      short loc_99F25E
0x99F259: cmp     esi, 1
0x99F25C: jnb     short loc_99F265
0x99F25E: mov     [ebp+var_4], 1
0x99F265: dec     eax
0x99F266: mov     edx, [ebp+arg_0]
0x99F269: mov     [ecx], edx
0x99F26B: mov     ecx, [ebp+var_4]
0x99F26E: jns     short loc_99F241
0x99F270: mov     [ebp+arg_0], ecx
0x99F273: mov     ecx, [ebp+var_8]
0x99F276: or      eax, 0FFFFFFFFh
0x99F279: shl     eax, cl
0x99F27B: and     [edi], eax
0x99F27D: mov     eax, [ebp+var_C]
0x99F280: inc     eax
0x99F281: cmp     eax, 3
0x99F284: jge     short loc_99F293
0x99F286: push    3
0x99F288: pop     ecx
0x99F289: lea     edi, [ebp+eax*4+var_20]
0x99F28D: sub     ecx, eax
0x99F28F: xor     eax, eax
0x99F291: rep stosd
0x99F293: cmp     [ebp+arg_0], 0
0x99F297: jz      short loc_99F29A
0x99F299: inc     ebx
0x99F29A: mov     eax, dword_B320F0
0x99F29F: mov     ecx, eax
0x99F2A1: sub     ecx, dword_B320F4
0x99F2A7: cmp     ebx, ecx
0x99F2A9: jge     short loc_99F2B8
0x99F2AB: xor     eax, eax
0x99F2AD: lea     edi, [ebp+var_20]
0x99F2B0: stosd
0x99F2B1: stosd
0x99F2B2: stosd
0x99F2B3: jmp     loc_99F4C5
0x99F2B8: cmp     ebx, eax
0x99F2BA: jg      loc_99F4CF
0x99F2C0: sub     eax, [ebp+var_10]
0x99F2C3: lea     esi, [ebp+var_2C]
0x99F2C6: mov     ecx, eax
0x99F2C8: lea     edi, [ebp+var_20]
0x99F2CB: movsd
0x99F2CC: cdq
0x99F2CD: and     edx, 1Fh
0x99F2D0: add     eax, edx
0x99F2D2: movsd
0x99F2D3: mov     edx, ecx
0x99F2D5: sar     eax, 5
0x99F2D8: and     edx, 8000001Fh
0x99F2DE: movsd
0x99F2DF: jns     short loc_99F2E6
0x99F2E1: dec     edx
0x99F2E2: or      edx, 0FFFFFFE0h
0x99F2E5: inc     edx
0x99F2E6: and     [ebp+var_C], 0
0x99F2EA: and     [ebp+arg_0], 0
0x99F2EE: or      edi, 0FFFFFFFFh
0x99F2F1: mov     ecx, edx
0x99F2F3: shl     edi, cl
0x99F2F5: mov     [ebp+var_4], 20h ; ' '
0x99F2FC: sub     [ebp+var_4], edx
0x99F2FF: not     edi
0x99F301: mov     ebx, [ebp+arg_0]
0x99F304: lea     ebx, [ebp+ebx*4+var_20]
0x99F308: mov     esi, [ebx]
0x99F30A: mov     ecx, esi
0x99F30C: and     ecx, edi
0x99F30E: mov     [ebp+var_10], ecx
0x99F311: mov     ecx, edx
0x99F313: shr     esi, cl
0x99F315: mov     ecx, [ebp+var_4]
0x99F318: or      esi, [ebp+var_C]
0x99F31B: mov     [ebx], esi
0x99F31D: mov     esi, [ebp+var_10]
0x99F320: shl     esi, cl
0x99F322: inc     [ebp+arg_0]
0x99F325: cmp     [ebp+arg_0], 3
0x99F329: mov     [ebp+var_C], esi
0x99F32C: jl      short loc_99F301
0x99F32E: mov     esi, eax
0x99F330: push    2
0x99F332: shl     esi, 2
0x99F335: lea     ecx, [ebp+var_18]
0x99F338: pop     edx
0x99F339: sub     ecx, esi
0x99F33B: cmp     edx, eax
0x99F33D: jl      short loc_99F347
0x99F33F: mov     esi, [ecx]
0x99F341: mov     [ebp+edx*4+var_20], esi
0x99F345: jmp     short loc_99F34C
0x99F347: and     [ebp+edx*4+var_20], 0
0x99F34C: dec     edx
0x99F34D: sub     ecx, 4
0x99F350: test    edx, edx
0x99F352: jge     short loc_99F33B
0x99F354: mov     esi, dword_B320F4
0x99F35A: dec     esi
0x99F35B: lea     ecx, [esi+1]
0x99F35E: mov     eax, ecx
0x99F360: cdq
0x99F361: and     edx, 1Fh
0x99F364: add     eax, edx
0x99F366: sar     eax, 5
0x99F369: mov     edx, ecx
0x99F36B: and     edx, 8000001Fh
0x99F371: mov     [ebp+var_C], eax
0x99F374: jns     short loc_99F37B
0x99F376: dec     edx
0x99F377: or      edx, 0FFFFFFE0h
0x99F37A: inc     edx
0x99F37B: push    1Fh
0x99F37D: pop     ecx
0x99F37E: sub     ecx, edx
0x99F380: xor     edx, edx
0x99F382: inc     edx
0x99F383: shl     edx, cl
0x99F385: lea     ebx, [ebp+eax*4+var_20]
0x99F389: mov     [ebp+var_10], ecx
0x99F38C: test    [ebx], edx
0x99F38E: jz      loc_99F416
0x99F394: or      edx, 0FFFFFFFFh
0x99F397: shl     edx, cl
0x99F399: not     edx
0x99F39B: test    [ebp+eax*4+var_20], edx
0x99F39F: jmp     short loc_99F3A6
0x99F3A1: cmp     [ebp+eax*4+var_20], 0
0x99F3A6: jnz     short loc_99F3B0
0x99F3A8: inc     eax
0x99F3A9: cmp     eax, 3
0x99F3AC: jl      short loc_99F3A1
0x99F3AE: jmp     short loc_99F416
0x99F3B0: mov     eax, esi
0x99F3B2: cdq
0x99F3B3: push    1Fh
0x99F3B5: pop     ecx
0x99F3B6: and     edx, ecx
0x99F3B8: add     eax, edx
0x99F3BA: sar     eax, 5
0x99F3BD: and     esi, 8000001Fh
0x99F3C3: jns     short loc_99F3CA
0x99F3C5: dec     esi
0x99F3C6: or      esi, 0FFFFFFE0h
0x99F3C9: inc     esi
0x99F3CA: and     [ebp+arg_0], 0
0x99F3CE: xor     edx, edx
0x99F3D0: sub     ecx, esi
0x99F3D2: inc     edx
0x99F3D3: shl     edx, cl
0x99F3D5: lea     ecx, [ebp+eax*4+var_20]
0x99F3D9: mov     esi, [ecx]
0x99F3DB: lea     edi, [esi+edx]
0x99F3DE: cmp     edi, esi
0x99F3E0: jb      short loc_99F3E6
0x99F3E2: cmp     edi, edx
0x99F3E4: jnb     short loc_99F3ED
0x99F3E6: mov     [ebp+arg_0], 1
0x99F3ED: mov     [ecx], edi
0x99F3EF: mov     ecx, [ebp+arg_0]
0x99F3F2: jmp     short loc_99F413
0x99F3F4: test    ecx, ecx
0x99F3F6: jz      short loc_99F416
0x99F3F8: lea     ecx, [ebp+eax*4+var_20]
0x99F3FC: mov     edx, [ecx]
0x99F3FE: lea     esi, [edx+1]
0x99F401: xor     edi, edi
0x99F403: cmp     esi, edx
0x99F405: jb      short loc_99F40C
0x99F407: cmp     esi, 1
0x99F40A: jnb     short loc_99F40F
0x99F40C: xor     edi, edi
0x99F40E: inc     edi
0x99F40F: mov     [ecx], esi
0x99F411: mov     ecx, edi
0x99F413: dec     eax
0x99F414: jns     short loc_99F3F4
0x99F416: mov     ecx, [ebp+var_10]
0x99F419: or      eax, 0FFFFFFFFh
0x99F41C: shl     eax, cl
0x99F41E: and     [ebx], eax
0x99F420: mov     eax, [ebp+var_C]
0x99F423: inc     eax
0x99F424: cmp     eax, 3
0x99F427: jge     short loc_99F436
0x99F429: push    3
0x99F42B: pop     ecx
0x99F42C: lea     edi, [ebp+eax*4+var_20]
0x99F430: sub     ecx, eax
0x99F432: xor     eax, eax
0x99F434: rep stosd
0x99F436: mov     ecx, dword_B320F8
0x99F43C: inc     ecx
0x99F43D: mov     eax, ecx
0x99F43F: cdq
0x99F440: and     edx, 1Fh
0x99F443: add     eax, edx
0x99F445: mov     edx, ecx
0x99F447: sar     eax, 5
0x99F44A: and     edx, 8000001Fh
0x99F450: jns     short loc_99F457
0x99F452: dec     edx
0x99F453: or      edx, 0FFFFFFE0h
0x99F456: inc     edx
0x99F457: and     [ebp+var_C], 0
0x99F45B: and     [ebp+arg_0], 0
0x99F45F: or      edi, 0FFFFFFFFh
0x99F462: mov     ecx, edx
0x99F464: shl     edi, cl
0x99F466: mov     [ebp+var_4], 20h ; ' '
0x99F46D: sub     [ebp+var_4], edx
0x99F470: not     edi
0x99F472: mov     ebx, [ebp+arg_0]
0x99F475: lea     ebx, [ebp+ebx*4+var_20]
0x99F479: mov     esi, [ebx]
0x99F47B: mov     ecx, esi
0x99F47D: and     ecx, edi
0x99F47F: mov     [ebp+var_10], ecx
0x99F482: mov     ecx, edx
0x99F484: shr     esi, cl
0x99F486: mov     ecx, [ebp+var_4]
0x99F489: or      esi, [ebp+var_C]
0x99F48C: mov     [ebx], esi
0x99F48E: mov     esi, [ebp+var_10]
0x99F491: shl     esi, cl
0x99F493: inc     [ebp+arg_0]
0x99F496: cmp     [ebp+arg_0], 3
0x99F49A: mov     [ebp+var_C], esi
0x99F49D: jl      short loc_99F472
0x99F49F: mov     esi, eax
0x99F4A1: push    2
0x99F4A3: shl     esi, 2
0x99F4A6: lea     ecx, [ebp+var_18]
0x99F4A9: pop     edx
0x99F4AA: sub     ecx, esi
0x99F4AC: cmp     edx, eax
0x99F4AE: jl      short loc_99F4B8
0x99F4B0: mov     esi, [ecx]
0x99F4B2: mov     [ebp+edx*4+var_20], esi
0x99F4B6: jmp     short loc_99F4BD
0x99F4B8: and     [ebp+edx*4+var_20], 0
0x99F4BD: dec     edx
0x99F4BE: sub     ecx, 4
0x99F4C1: test    edx, edx
0x99F4C3: jge     short loc_99F4AC
0x99F4C5: push    2
0x99F4C7: xor     ebx, ebx
0x99F4C9: pop     eax
0x99F4CA: jmp     loc_99F629
0x99F4CF: cmp     ebx, dword_B320EC
0x99F4D5: mov     ecx, dword_B320F8
0x99F4DB: jl      loc_99F58E
0x99F4E1: xor     eax, eax
0x99F4E3: lea     edi, [ebp+var_20]
0x99F4E6: stosd
0x99F4E7: stosd
0x99F4E8: stosd
0x99F4E9: or      [ebp+var_20], 80000000h
0x99F4F0: mov     eax, ecx
0x99F4F2: cdq
0x99F4F3: and     edx, 1Fh
0x99F4F6: add     eax, edx
0x99F4F8: mov     edx, ecx
0x99F4FA: sar     eax, 5
0x99F4FD: and     edx, 8000001Fh
0x99F503: jns     short loc_99F50A
0x99F505: dec     edx
0x99F506: or      edx, 0FFFFFFE0h
0x99F509: inc     edx
0x99F50A: and     [ebp+var_C], 0
0x99F50E: and     [ebp+arg_0], 0
0x99F512: or      edi, 0FFFFFFFFh
0x99F515: mov     ecx, edx
0x99F517: shl     edi, cl
0x99F519: mov     [ebp+var_4], 20h ; ' '
0x99F520: sub     [ebp+var_4], edx
0x99F523: not     edi
0x99F525: mov     ebx, [ebp+arg_0]
0x99F528: lea     ebx, [ebp+ebx*4+var_20]
0x99F52C: mov     esi, [ebx]
0x99F52E: mov     ecx, esi
0x99F530: and     ecx, edi
0x99F532: mov     [ebp+var_10], ecx
0x99F535: mov     ecx, edx
0x99F537: shr     esi, cl
0x99F539: mov     ecx, [ebp+var_4]
0x99F53C: or      esi, [ebp+var_C]
0x99F53F: mov     [ebx], esi
0x99F541: mov     esi, [ebp+var_10]
0x99F544: shl     esi, cl
0x99F546: inc     [ebp+arg_0]
0x99F549: cmp     [ebp+arg_0], 3
0x99F54D: mov     [ebp+var_C], esi
0x99F550: jl      short loc_99F525
0x99F552: mov     esi, eax
0x99F554: push    2
0x99F556: shl     esi, 2
0x99F559: lea     ecx, [ebp+var_18]
0x99F55C: pop     edx
0x99F55D: sub     ecx, esi
0x99F55F: cmp     edx, eax
0x99F561: jl      short loc_99F56B
0x99F563: mov     esi, [ecx]
0x99F565: mov     [ebp+edx*4+var_20], esi
0x99F569: jmp     short loc_99F570
0x99F56B: and     [ebp+edx*4+var_20], 0
0x99F570: dec     edx
0x99F571: sub     ecx, 4
0x99F574: test    edx, edx
0x99F576: jge     short loc_99F55F
0x99F578: mov     eax, dword_B320EC
0x99F57D: mov     ecx, dword_B32100
0x99F583: lea     ebx, [ecx+eax]
0x99F586: xor     eax, eax
0x99F588: inc     eax
0x99F589: jmp     loc_99F629
0x99F58E: mov     eax, dword_B32100
0x99F593: and     [ebp+var_20], 7FFFFFFFh
0x99F59A: add     ebx, eax
0x99F59C: mov     eax, ecx
0x99F59E: cdq
0x99F59F: and     edx, 1Fh
0x99F5A2: add     eax, edx
0x99F5A4: mov     edx, ecx
0x99F5A6: sar     eax, 5
0x99F5A9: and     edx, 8000001Fh
0x99F5AF: jns     short loc_99F5B6
0x99F5B1: dec     edx
0x99F5B2: or      edx, 0FFFFFFE0h
0x99F5B5: inc     edx
0x99F5B6: and     [ebp+var_C], 0
0x99F5BA: and     [ebp+arg_0], 0
0x99F5BE: or      esi, 0FFFFFFFFh
0x99F5C1: mov     ecx, edx
0x99F5C3: shl     esi, cl
0x99F5C5: mov     [ebp+var_4], 20h ; ' '
0x99F5CC: sub     [ebp+var_4], edx
0x99F5CF: not     esi
0x99F5D1: mov     ecx, [ebp+arg_0]
0x99F5D4: mov     edi, [ebp+ecx*4+var_20]
0x99F5D8: mov     ecx, edi
0x99F5DA: and     ecx, esi
0x99F5DC: mov     [ebp+var_10], ecx
0x99F5DF: mov     ecx, edx
0x99F5E1: shr     edi, cl
0x99F5E3: mov     ecx, [ebp+arg_0]
0x99F5E6: or      edi, [ebp+var_C]
0x99F5E9: mov     [ebp+ecx*4+var_20], edi
0x99F5ED: mov     edi, [ebp+var_10]
0x99F5F0: mov     ecx, [ebp+var_4]
0x99F5F3: shl     edi, cl
0x99F5F5: inc     [ebp+arg_0]
0x99F5F8: cmp     [ebp+arg_0], 3
0x99F5FC: mov     [ebp+var_C], edi
0x99F5FF: jl      short loc_99F5D1
0x99F601: mov     esi, eax
0x99F603: push    2
0x99F605: shl     esi, 2
0x99F608: lea     ecx, [ebp+var_18]
0x99F60B: pop     edx
0x99F60C: sub     ecx, esi
0x99F60E: cmp     edx, eax
0x99F610: jl      short loc_99F61A
0x99F612: mov     esi, [ecx]
0x99F614: mov     [ebp+edx*4+var_20], esi
0x99F618: jmp     short loc_99F61F
0x99F61A: and     [ebp+edx*4+var_20], 0
0x99F61F: dec     edx
0x99F620: sub     ecx, 4
0x99F623: test    edx, edx
0x99F625: jge     short loc_99F60E
0x99F627: xor     eax, eax
0x99F629: pop     esi
0x99F62A: push    1Fh
0x99F62C: pop     ecx
0x99F62D: sub     ecx, dword_B320F8
0x99F633: shl     ebx, cl
0x99F635: mov     ecx, [ebp+var_14]
0x99F638: neg     ecx
0x99F63A: sbb     ecx, ecx
0x99F63C: and     ecx, 80000000h
0x99F642: or      ebx, ecx
0x99F644: mov     ecx, dword_B320FC
0x99F64A: or      ebx, [ebp+var_20]
0x99F64D: cmp     ecx, 40h ; '@'
0x99F650: jnz     short loc_99F65F
0x99F652: mov     ecx, [ebp+arg_4]
0x99F655: mov     edx, [ebp+var_1C]
0x99F658: mov     [ecx+4], ebx
0x99F65B: mov     [ecx], edx
0x99F65D: jmp     short loc_99F669
0x99F65F: cmp     ecx, 20h ; ' '
0x99F662: jnz     short loc_99F669
0x99F664: mov     ecx, [ebp+arg_4]
0x99F667: mov     [ecx], ebx
0x99F669: pop     edi
0x99F66A: pop     ebx
0x99F66B: leave
0x99F66C: retn
