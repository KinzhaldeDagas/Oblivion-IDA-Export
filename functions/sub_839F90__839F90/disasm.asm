0x839F90: push    0FFFFFFFFh
0x839F92: push    offset SEH_839F90
0x839F97: mov     eax, large fs:0
0x839F9D: push    eax
0x839F9E: sub     esp, 0Ch
0x839FA1: push    ebx
0x839FA2: push    ebp
0x839FA3: push    esi
0x839FA4: push    edi
0x839FA5: mov     eax, ds:0B30AACh
0x839FAA: xor     eax, esp
0x839FAC: push    eax
0x839FAD: lea     eax, [esp+2Ch+var_C]
0x839FB1: mov     large fs:0, eax
0x839FB7: xor     esi, esi
0x839FB9: xor     ebx, ebx
0x839FBB: mov     [esp+2Ch+var_14], esi
0x839FBF: xor     edi, edi
0x839FC1: mov     [esp+2Ch+var_4], ebx
0x839FC5: mov     [esp+2Ch+a3], edi
0x839FC9: mov     eax, ds:0B45B20h
0x839FCE: cmp     eax, ebx
0x839FD0: mov     ebp, 1
0x839FD5: mov     byte ptr [esp+2Ch+var_4], 1
0x839FDA: jz      short loc_839FE9
0x839FDC: mov     esi, eax
0x839FDE: cmp     esi, ebx
0x839FE0: mov     [esp+2Ch+var_14], esi
0x839FE4: jz      short loc_839FE9
0x839FE6: add     [esi+60h], ebp
0x839FE9: mov     eax, [esi+18h]
0x839FEC: cmp     eax, ebp
0x839FEE: jnb     short loc_83A044
0x839FF0: lea     eax, [esp+2Ch+var_10]
0x839FF4: push    eax
0x839FF5: call    sub_772630
0x839FFA: add     esp, 4
0x839FFD: mov     eax, [eax]
0x839FFF: cmp     eax, ebx
0x83A001: jz      short loc_83A00C
0x83A003: mov     edi, eax
0x83A005: add     [edi+5Ch], ebp
0x83A008: mov     [esp+2Ch+a3], edi
0x83A00C: mov     eax, [esp+2Ch+var_10]
0x83A010: cmp     eax, ebx
0x83A012: mov     byte ptr [esp+2Ch+var_4], 1
0x83A017: jz      short loc_83A02B
0x83A019: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x83A01D: mov     ecx, eax
0x83A01F: add     eax, 5Ch ; '\'
0x83A022: cmp     [eax], ebx
0x83A024: jnz     short loc_83A02B
0x83A026: call    sub_772560
0x83A02B: push    2
0x83A02D: push    ebp
0x83A02E: push    ebx
0x83A02F: push    edi
0x83A030: call    sub_801110
0x83A035: mov     ecx, [esi+14h]
0x83A038: add     esp, 10h
0x83A03B: push    edi; a3
0x83A03C: push    ecx; a2
0x83A03D: mov     ecx, esi; this
0x83A03F: call    sub_760010
0x83A044: mov     eax, ds:0B45448h
0x83A049: mov     edi, [esi+58h]
0x83A04C: cmp     edi, eax
0x83A04E: mov     ebp, eax
0x83A050: jz      short loc_83A083
0x83A052: cmp     edi, ebx
0x83A054: jz      short loc_83A072
0x83A056: lea     edx, [edi+4]
0x83A059: push    edx; lpAddend
0x83A05A: call    dword ptr ds:0A2807Ch
0x83A060: test    eax, eax
0x83A062: jnz     short loc_83A072
0x83A064: cmp     edi, ebx
0x83A066: jz      short loc_83A072
0x83A068: mov     eax, [edi]
0x83A06A: mov     edx, [eax]
0x83A06C: push    1
0x83A06E: mov     ecx, edi
0x83A070: call    edx
0x83A072: cmp     ebp, ebx
0x83A074: mov     [esi+58h], ebp
0x83A077: jz      short loc_83A083
0x83A079: add     ebp, 4
0x83A07C: push    ebp; lpAddend
0x83A07D: call    dword ptr ds:0A28078h
0x83A083: mov     eax, ds:0B45240h
0x83A088: mov     edi, [esi+44h]
0x83A08B: cmp     edi, eax
0x83A08D: mov     ebp, eax
0x83A08F: jz      short loc_83A0C2
0x83A091: cmp     edi, ebx
0x83A093: jz      short loc_83A0B1
0x83A095: lea     eax, [edi+4]
0x83A098: push    eax; lpAddend
0x83A099: call    dword ptr ds:0A2807Ch
0x83A09F: test    eax, eax
0x83A0A1: jnz     short loc_83A0B1
0x83A0A3: cmp     edi, ebx
0x83A0A5: jz      short loc_83A0B1
0x83A0A7: mov     edx, [edi]
0x83A0A9: mov     eax, [edx]
0x83A0AB: push    1
0x83A0AD: mov     ecx, edi
0x83A0AF: call    eax
0x83A0B1: cmp     ebp, ebx
0x83A0B3: mov     [esi+44h], ebp
0x83A0B6: jz      short loc_83A0C2
0x83A0B8: add     ebp, 4
0x83A0BB: push    ebp; lpAddend
0x83A0BC: call    dword ptr ds:0A28078h
0x83A0C2: cmp     [esi+30h], ebx
0x83A0C5: jnz     short loc_83A0CF
0x83A0C7: call    sub_772DF0
0x83A0CC: mov     [esi+30h], eax
0x83A0CF: mov     ecx, [esi+30h]
0x83A0D2: push    ebx
0x83A0D3: push    ebx
0x83A0D4: push    1Bh
0x83A0D6: call    sub_772CD0
0x83A0DB: cmp     [esi+30h], ebx
0x83A0DE: jnz     short loc_83A0E8
0x83A0E0: call    sub_772DF0
0x83A0E5: mov     [esi+30h], eax
0x83A0E8: mov     ecx, [esi+30h]
0x83A0EB: push    ebx
0x83A0EC: push    ebx
0x83A0ED: push    0Fh
0x83A0EF: call    sub_772CD0
0x83A0F4: cmp     [esi+30h], ebx
0x83A0F7: jnz     short loc_83A101
0x83A0F9: call    sub_772DF0
0x83A0FE: mov     [esi+30h], eax
0x83A101: mov     ecx, [esi+30h]
0x83A104: push    ebx
0x83A105: mov     edi, 1
0x83A10A: push    edi
0x83A10B: push    7
0x83A10D: call    sub_772CD0
0x83A112: cmp     [esi+30h], ebx
0x83A115: jnz     short loc_83A11F
0x83A117: call    sub_772DF0
0x83A11C: mov     [esi+30h], eax
0x83A11F: mov     ecx, [esi+30h]
0x83A122: push    ebx
0x83A123: push    4
0x83A125: push    17h
0x83A127: call    sub_772CD0
0x83A12C: cmp     [esi+30h], ebx
0x83A12F: jnz     short loc_83A139
0x83A131: call    sub_772DF0
0x83A136: mov     [esi+30h], eax
0x83A139: mov     ecx, [esi+30h]
0x83A13C: push    ebx
0x83A13D: push    edi
0x83A13E: push    0Eh
0x83A140: call    sub_772CD0
0x83A145: cmp     [esi+30h], ebx
0x83A148: jnz     short loc_83A152
0x83A14A: call    sub_772DF0
0x83A14F: mov     [esi+30h], eax
0x83A152: mov     ecx, [esi+30h]
0x83A155: push    ebx
0x83A156: push    ebx
0x83A157: push    34h ; '4'
0x83A159: call    sub_772CD0
0x83A15E: cmp     esi, ds:0B45B24h
0x83A164: mov     dword ptr ds:0B440A0h, 400002h
0x83A16E: mov     dword ptr ds:0B44730h, 20000h
0x83A178: jz      short loc_83A198
0x83A17A: add     dword ptr [esi+60h], 0FFFFFFFFh
0x83A17E: jnz     short loc_83A187
0x83A180: mov     ecx, esi
0x83A182: call    sub_7604D0
0x83A187: mov     esi, ds:0B45B24h
0x83A18D: cmp     esi, ebx
0x83A18F: mov     [esp+2Ch+var_14], esi
0x83A193: jz      short loc_83A198
0x83A195: add     [esi+60h], edi
0x83A198: cmp     [esi+18h], edi
0x83A19B: jnb     short loc_83A211
0x83A19D: lea     ecx, [esp+2Ch+var_10]
0x83A1A1: push    ecx
0x83A1A2: call    sub_772630
0x83A1A7: add     esp, 4
0x83A1AA: mov     edi, eax
0x83A1AC: mov     ebp, [esp+2Ch+a3]
0x83A1B0: cmp     ebp, [edi]
0x83A1B2: mov     byte ptr [esp+2Ch+var_4], 3
0x83A1B7: jz      short loc_83A1D8
0x83A1B9: cmp     ebp, ebx
0x83A1BB: jz      short loc_83A1CA
0x83A1BD: add     dword ptr [ebp+5Ch], 0FFFFFFFFh
0x83A1C1: jnz     short loc_83A1CA
0x83A1C3: mov     ecx, ebp
0x83A1C5: call    sub_772560
0x83A1CA: mov     ebp, [edi]
0x83A1CC: cmp     ebp, ebx
0x83A1CE: mov     [esp+2Ch+a3], ebp
0x83A1D2: jz      short loc_83A1D8
0x83A1D4: add     dword ptr [ebp+5Ch], 1
0x83A1D8: mov     eax, [esp+2Ch+var_10]
0x83A1DC: cmp     eax, ebx
0x83A1DE: mov     byte ptr [esp+2Ch+var_4], 1
0x83A1E3: jz      short loc_83A1F7
0x83A1E5: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x83A1E9: mov     ecx, eax
0x83A1EB: add     eax, 5Ch ; '\'
0x83A1EE: cmp     [eax], ebx
0x83A1F0: jnz     short loc_83A1F7
0x83A1F2: call    sub_772560
0x83A1F7: push    2
0x83A1F9: push    1
0x83A1FB: push    ebx
0x83A1FC: push    ebp
0x83A1FD: call    sub_801110
0x83A202: mov     edx, [esi+14h]
0x83A205: add     esp, 10h
0x83A208: push    ebp; a3
0x83A209: push    edx; a2
0x83A20A: mov     ecx, esi; this
0x83A20C: call    sub_760010
0x83A211: mov     eax, ds:0B4544Ch
0x83A216: mov     edi, [esi+58h]
0x83A219: cmp     edi, eax
0x83A21B: mov     ebp, eax
0x83A21D: jz      short loc_83A250
0x83A21F: cmp     edi, ebx
0x83A221: jz      short loc_83A23F
0x83A223: lea     eax, [edi+4]
0x83A226: push    eax; lpAddend
0x83A227: call    dword ptr ds:0A2807Ch
0x83A22D: test    eax, eax
0x83A22F: jnz     short loc_83A23F
0x83A231: cmp     edi, ebx
0x83A233: jz      short loc_83A23F
0x83A235: mov     edx, [edi]
0x83A237: mov     eax, [edx]
0x83A239: push    1
0x83A23B: mov     ecx, edi
0x83A23D: call    eax
0x83A23F: cmp     ebp, ebx
0x83A241: mov     [esi+58h], ebp
0x83A244: jz      short loc_83A250
0x83A246: add     ebp, 4
0x83A249: push    ebp; lpAddend
0x83A24A: call    dword ptr ds:0A28078h
0x83A250: mov     eax, ds:0B45240h
0x83A255: mov     edi, [esi+44h]
0x83A258: cmp     edi, eax
0x83A25A: mov     ebp, eax
0x83A25C: jz      short loc_83A28F
0x83A25E: cmp     edi, ebx
0x83A260: jz      short loc_83A27E
0x83A262: lea     ecx, [edi+4]
0x83A265: push    ecx; lpAddend
0x83A266: call    dword ptr ds:0A2807Ch
0x83A26C: test    eax, eax
0x83A26E: jnz     short loc_83A27E
0x83A270: cmp     edi, ebx
0x83A272: jz      short loc_83A27E
0x83A274: mov     edx, [edi]
0x83A276: mov     eax, [edx]
0x83A278: push    1
0x83A27A: mov     ecx, edi
0x83A27C: call    eax
0x83A27E: cmp     ebp, ebx
0x83A280: mov     [esi+44h], ebp
0x83A283: jz      short loc_83A28F
0x83A285: add     ebp, 4
0x83A288: push    ebp; lpAddend
0x83A289: call    dword ptr ds:0A28078h
0x83A28F: cmp     [esi+30h], ebx
0x83A292: jnz     short loc_83A29C
0x83A294: call    sub_772DF0
0x83A299: mov     [esi+30h], eax
0x83A29C: mov     ecx, [esi+30h]
0x83A29F: push    ebx
0x83A2A0: push    ebx
0x83A2A1: push    1Bh
0x83A2A3: call    sub_772CD0
0x83A2A8: cmp     [esi+30h], ebx
0x83A2AB: jnz     short loc_83A2B5
0x83A2AD: call    sub_772DF0
0x83A2B2: mov     [esi+30h], eax
0x83A2B5: mov     ecx, [esi+30h]
0x83A2B8: push    ebx
0x83A2B9: push    ebx
0x83A2BA: push    0Fh
0x83A2BC: call    sub_772CD0
0x83A2C1: cmp     [esi+30h], ebx
0x83A2C4: jnz     short loc_83A2CE
0x83A2C6: call    sub_772DF0
0x83A2CB: mov     [esi+30h], eax
0x83A2CE: mov     ecx, [esi+30h]
0x83A2D1: push    ebx
0x83A2D2: mov     edi, 1
0x83A2D7: push    edi
0x83A2D8: push    7
0x83A2DA: call    sub_772CD0
0x83A2DF: cmp     [esi+30h], ebx
0x83A2E2: jnz     short loc_83A2EC
0x83A2E4: call    sub_772DF0
0x83A2E9: mov     [esi+30h], eax
0x83A2EC: mov     ecx, [esi+30h]
0x83A2EF: push    ebx
0x83A2F0: push    4
0x83A2F2: push    17h
0x83A2F4: call    sub_772CD0
0x83A2F9: cmp     [esi+30h], ebx
0x83A2FC: jnz     short loc_83A306
0x83A2FE: call    sub_772DF0
0x83A303: mov     [esi+30h], eax
0x83A306: mov     ecx, [esi+30h]
0x83A309: push    ebx
0x83A30A: push    edi
0x83A30B: push    0Eh
0x83A30D: call    sub_772CD0
0x83A312: cmp     [esi+30h], ebx
0x83A315: jnz     short loc_83A31F
0x83A317: call    sub_772DF0
0x83A31C: mov     [esi+30h], eax
0x83A31F: mov     ecx, [esi+30h]
0x83A322: push    ebx
0x83A323: push    ebx
0x83A324: push    34h ; '4'
0x83A326: call    sub_772CD0
0x83A32B: cmp     esi, ds:0B45B28h
0x83A331: mov     dword ptr ds:0B440A4h, (offset loc_840007+1)
0x83A33B: mov     dword ptr ds:0B44734h, 20000h
0x83A345: jz      short loc_83A365
0x83A347: add     dword ptr [esi+60h], 0FFFFFFFFh
0x83A34B: jnz     short loc_83A354
0x83A34D: mov     ecx, esi
0x83A34F: call    sub_7604D0
0x83A354: mov     esi, ds:0B45B28h
0x83A35A: cmp     esi, ebx
0x83A35C: mov     [esp+2Ch+var_14], esi
0x83A360: jz      short loc_83A365
0x83A362: add     [esi+60h], edi
0x83A365: cmp     [esi+18h], edi
0x83A368: jnb     short loc_83A3DE
0x83A36A: lea     ecx, [esp+2Ch+var_10]
0x83A36E: push    ecx
0x83A36F: call    sub_772630
0x83A374: add     esp, 4
0x83A377: mov     edi, eax
0x83A379: mov     ebp, [esp+2Ch+a3]
0x83A37D: cmp     ebp, [edi]
0x83A37F: mov     byte ptr [esp+2Ch+var_4], 4
0x83A384: jz      short loc_83A3A5
0x83A386: cmp     ebp, ebx
0x83A388: jz      short loc_83A397
0x83A38A: add     dword ptr [ebp+5Ch], 0FFFFFFFFh
0x83A38E: jnz     short loc_83A397
0x83A390: mov     ecx, ebp
0x83A392: call    sub_772560
0x83A397: mov     ebp, [edi]
0x83A399: cmp     ebp, ebx
0x83A39B: mov     [esp+2Ch+a3], ebp
0x83A39F: jz      short loc_83A3A5
0x83A3A1: add     dword ptr [ebp+5Ch], 1
0x83A3A5: mov     eax, [esp+2Ch+var_10]
0x83A3A9: cmp     eax, ebx
0x83A3AB: mov     byte ptr [esp+2Ch+var_4], 1
0x83A3B0: jz      short loc_83A3C4
0x83A3B2: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x83A3B6: mov     ecx, eax
0x83A3B8: add     eax, 5Ch ; '\'
0x83A3BB: cmp     [eax], ebx
0x83A3BD: jnz     short loc_83A3C4
0x83A3BF: call    sub_772560
0x83A3C4: push    2
0x83A3C6: push    1
0x83A3C8: push    ebx
0x83A3C9: push    ebp
0x83A3CA: call    sub_801110
0x83A3CF: mov     edx, [esi+14h]
0x83A3D2: add     esp, 10h
0x83A3D5: push    ebp; a3
0x83A3D6: push    edx; a2
0x83A3D7: mov     ecx, esi; this
0x83A3D9: call    sub_760010
0x83A3DE: mov     eax, ds:0B45450h
0x83A3E3: mov     edi, [esi+58h]
0x83A3E6: cmp     edi, eax
0x83A3E8: mov     ebp, eax
0x83A3EA: jz      short loc_83A41D
0x83A3EC: cmp     edi, ebx
0x83A3EE: jz      short loc_83A40C
0x83A3F0: lea     eax, [edi+4]
0x83A3F3: push    eax; lpAddend
0x83A3F4: call    dword ptr ds:0A2807Ch
0x83A3FA: test    eax, eax
0x83A3FC: jnz     short loc_83A40C
0x83A3FE: cmp     edi, ebx
0x83A400: jz      short loc_83A40C
0x83A402: mov     edx, [edi]
0x83A404: mov     eax, [edx]
0x83A406: push    1
0x83A408: mov     ecx, edi
0x83A40A: call    eax
0x83A40C: cmp     ebp, ebx
0x83A40E: mov     [esi+58h], ebp
0x83A411: jz      short loc_83A41D
0x83A413: add     ebp, 4
0x83A416: push    ebp; lpAddend
0x83A417: call    dword ptr ds:0A28078h
0x83A41D: mov     eax, ds:0B45244h
0x83A422: mov     edi, [esi+44h]
0x83A425: cmp     edi, eax
0x83A427: mov     ebp, eax
0x83A429: jz      short loc_83A45C
0x83A42B: cmp     edi, ebx
0x83A42D: jz      short loc_83A44B
0x83A42F: lea     ecx, [edi+4]
0x83A432: push    ecx; lpAddend
0x83A433: call    dword ptr ds:0A2807Ch
0x83A439: test    eax, eax
0x83A43B: jnz     short loc_83A44B
0x83A43D: cmp     edi, ebx
0x83A43F: jz      short loc_83A44B
0x83A441: mov     edx, [edi]
0x83A443: mov     eax, [edx]
0x83A445: push    1
0x83A447: mov     ecx, edi
0x83A449: call    eax
0x83A44B: cmp     ebp, ebx
0x83A44D: mov     [esi+44h], ebp
0x83A450: jz      short loc_83A45C
0x83A452: add     ebp, 4
0x83A455: push    ebp; lpAddend
0x83A456: call    dword ptr ds:0A28078h
0x83A45C: cmp     [esi+30h], ebx
0x83A45F: jnz     short loc_83A469
0x83A461: call    sub_772DF0
0x83A466: mov     [esi+30h], eax
0x83A469: mov     ecx, [esi+30h]
0x83A46C: push    ebx
0x83A46D: push    1
0x83A46F: push    1Bh
0x83A471: call    sub_772CD0
0x83A476: cmp     [esi+30h], ebx
0x83A479: jnz     short loc_83A483
0x83A47B: call    sub_772DF0
0x83A480: mov     [esi+30h], eax
0x83A483: mov     ecx, [esi+30h]
0x83A486: push    ebx
0x83A487: push    5
0x83A489: push    13h
0x83A48B: call    sub_772CD0
0x83A490: cmp     [esi+30h], ebx
0x83A493: jnz     short loc_83A49D
0x83A495: call    sub_772DF0
0x83A49A: mov     [esi+30h], eax
0x83A49D: mov     ecx, [esi+30h]
0x83A4A0: push    ebx
0x83A4A1: push    6
0x83A4A3: push    14h
0x83A4A5: call    sub_772CD0
0x83A4AA: cmp     [esi+30h], ebx
0x83A4AD: jnz     short loc_83A4B7
0x83A4AF: call    sub_772DF0
0x83A4B4: mov     [esi+30h], eax
0x83A4B7: mov     ecx, [esi+30h]
0x83A4BA: push    ebx
0x83A4BB: push    ebx
0x83A4BC: push    0Fh
0x83A4BE: call    sub_772CD0
0x83A4C3: cmp     [esi+30h], ebx
0x83A4C6: jnz     short loc_83A4D0
0x83A4C8: call    sub_772DF0
0x83A4CD: mov     [esi+30h], eax
0x83A4D0: mov     ecx, [esi+30h]
0x83A4D3: push    ebx
0x83A4D4: push    1
0x83A4D6: push    7
0x83A4D8: call    sub_772CD0
0x83A4DD: cmp     [esi+30h], ebx
0x83A4E0: jnz     short loc_83A4EA
0x83A4E2: call    sub_772DF0
0x83A4E7: mov     [esi+30h], eax
0x83A4EA: mov     ecx, [esi+30h]
0x83A4ED: push    ebx
0x83A4EE: push    4
0x83A4F0: push    17h
0x83A4F2: call    sub_772CD0
0x83A4F7: cmp     [esi+30h], ebx
0x83A4FA: jnz     short loc_83A504
0x83A4FC: call    sub_772DF0
0x83A501: mov     [esi+30h], eax
0x83A504: mov     ecx, [esi+30h]
0x83A507: push    ebx
0x83A508: push    ebx
0x83A509: push    0Eh
0x83A50B: call    sub_772CD0
0x83A510: cmp     [esi+30h], ebx
0x83A513: jnz     short loc_83A51D
0x83A515: call    sub_772DF0
0x83A51A: mov     [esi+30h], eax
0x83A51D: mov     ecx, [esi+30h]
0x83A520: push    ebx
0x83A521: push    ebx
0x83A522: push    34h ; '4'
0x83A524: call    sub_772CD0
0x83A529: cmp     esi, ds:0B45B2Ch
0x83A52F: mov     dword ptr ds:0B440A8h, 1420002h
0x83A539: mov     dword ptr ds:0B44738h, 20000h
0x83A543: jz      short loc_83A564
0x83A545: add     dword ptr [esi+60h], 0FFFFFFFFh
0x83A549: jnz     short loc_83A552
0x83A54B: mov     ecx, esi
0x83A54D: call    sub_7604D0
0x83A552: mov     esi, ds:0B45B2Ch
0x83A558: cmp     esi, ebx
0x83A55A: mov     [esp+2Ch+var_14], esi
0x83A55E: jz      short loc_83A564
0x83A560: add     dword ptr [esi+60h], 1
0x83A564: mov     eax, ds:0B45454h
0x83A569: mov     edi, [esi+58h]
0x83A56C: cmp     edi, eax
0x83A56E: mov     ebp, eax
0x83A570: jz      short loc_83A5A3
0x83A572: cmp     edi, ebx
0x83A574: jz      short loc_83A592
0x83A576: lea     ecx, [edi+4]
0x83A579: push    ecx; lpAddend
0x83A57A: call    dword ptr ds:0A2807Ch
0x83A580: test    eax, eax
0x83A582: jnz     short loc_83A592
0x83A584: cmp     edi, ebx
0x83A586: jz      short loc_83A592
0x83A588: mov     edx, [edi]
0x83A58A: mov     eax, [edx]
0x83A58C: push    1
0x83A58E: mov     ecx, edi
0x83A590: call    eax
0x83A592: cmp     ebp, ebx
0x83A594: mov     [esi+58h], ebp
0x83A597: jz      short loc_83A5A3
0x83A599: add     ebp, 4
0x83A59C: push    ebp; lpAddend
0x83A59D: call    dword ptr ds:0A28078h
0x83A5A3: mov     eax, ds:0B45248h
0x83A5A8: mov     edi, [esi+44h]
0x83A5AB: cmp     edi, eax
0x83A5AD: mov     ebp, eax
0x83A5AF: jz      short loc_83A5E2
0x83A5B1: cmp     edi, ebx
0x83A5B3: jz      short loc_83A5D1
0x83A5B5: lea     ecx, [edi+4]
0x83A5B8: push    ecx; lpAddend
0x83A5B9: call    dword ptr ds:0A2807Ch
0x83A5BF: test    eax, eax
0x83A5C1: jnz     short loc_83A5D1
0x83A5C3: cmp     edi, ebx
0x83A5C5: jz      short loc_83A5D1
0x83A5C7: mov     edx, [edi]
0x83A5C9: mov     eax, [edx]
0x83A5CB: push    1
0x83A5CD: mov     ecx, edi
0x83A5CF: call    eax
0x83A5D1: cmp     ebp, ebx
0x83A5D3: mov     [esi+44h], ebp
0x83A5D6: jz      short loc_83A5E2
0x83A5D8: add     ebp, 4
0x83A5DB: push    ebp; lpAddend
0x83A5DC: call    dword ptr ds:0A28078h
0x83A5E2: cmp     [esi+30h], ebx
0x83A5E5: jnz     short loc_83A5EF
0x83A5E7: call    sub_772DF0
0x83A5EC: mov     [esi+30h], eax
0x83A5EF: mov     ecx, [esi+30h]
0x83A5F2: push    ebx
0x83A5F3: push    ebx
0x83A5F4: push    1Bh
0x83A5F6: call    sub_772CD0
0x83A5FB: cmp     [esi+30h], ebx
0x83A5FE: jnz     short loc_83A608
0x83A600: call    sub_772DF0
0x83A605: mov     [esi+30h], eax
0x83A608: mov     ecx, [esi+30h]
0x83A60B: push    ebx
0x83A60C: push    ebx
0x83A60D: push    0Fh
0x83A60F: call    sub_772CD0
0x83A614: cmp     [esi+30h], ebx
0x83A617: jnz     short loc_83A621
0x83A619: call    sub_772DF0
0x83A61E: mov     [esi+30h], eax
0x83A621: mov     ecx, [esi+30h]
0x83A624: push    ebx
0x83A625: push    ebx
0x83A626: push    7
0x83A628: call    sub_772CD0
0x83A62D: cmp     [esi+30h], ebx
0x83A630: jnz     short loc_83A63A
0x83A632: call    sub_772DF0
0x83A637: mov     [esi+30h], eax
0x83A63A: mov     ecx, [esi+30h]
0x83A63D: push    ebx
0x83A63E: push    ebx
0x83A63F: push    0Eh
0x83A641: call    sub_772CD0
0x83A646: cmp     [esi+30h], ebx
0x83A649: jnz     short loc_83A653
0x83A64B: call    sub_772DF0
0x83A650: mov     [esi+30h], eax
0x83A653: mov     ecx, [esi+30h]
0x83A656: push    ebx
0x83A657: push    ebx
0x83A658: push    34h ; '4'
0x83A65A: call    sub_772CD0
0x83A65F: cmp     esi, ds:0B45B30h
0x83A665: mov     dword ptr ds:0B440ACh, 2
0x83A66F: mov     ds:0B4473Ch, ebx
0x83A675: jz      short loc_83A696
0x83A677: add     dword ptr [esi+60h], 0FFFFFFFFh
0x83A67B: jnz     short loc_83A684
0x83A67D: mov     ecx, esi
0x83A67F: call    sub_7604D0
0x83A684: mov     esi, ds:0B45B30h
0x83A68A: cmp     esi, ebx
0x83A68C: mov     [esp+2Ch+var_14], esi
0x83A690: jz      short loc_83A696
0x83A692: add     dword ptr [esi+60h], 1
0x83A696: mov     eax, ds:0B45458h
0x83A69B: mov     edi, [esi+58h]
0x83A69E: cmp     edi, eax
0x83A6A0: mov     ebp, eax
0x83A6A2: jz      short loc_83A6D5
0x83A6A4: cmp     edi, ebx
0x83A6A6: jz      short loc_83A6C4
0x83A6A8: lea     ecx, [edi+4]
0x83A6AB: push    ecx; lpAddend
0x83A6AC: call    dword ptr ds:0A2807Ch
0x83A6B2: test    eax, eax
0x83A6B4: jnz     short loc_83A6C4
0x83A6B6: cmp     edi, ebx
0x83A6B8: jz      short loc_83A6C4
0x83A6BA: mov     edx, [edi]
0x83A6BC: mov     eax, [edx]
0x83A6BE: push    1
0x83A6C0: mov     ecx, edi
0x83A6C2: call    eax
0x83A6C4: cmp     ebp, ebx
0x83A6C6: mov     [esi+58h], ebp
0x83A6C9: jz      short loc_83A6D5
0x83A6CB: add     ebp, 4
0x83A6CE: push    ebp; lpAddend
0x83A6CF: call    dword ptr ds:0A28078h
0x83A6D5: mov     eax, ds:0B45248h
0x83A6DA: mov     edi, [esi+44h]
0x83A6DD: cmp     edi, eax
0x83A6DF: mov     ebp, eax
0x83A6E1: jz      short loc_83A714
0x83A6E3: cmp     edi, ebx
0x83A6E5: jz      short loc_83A703
0x83A6E7: lea     ecx, [edi+4]
0x83A6EA: push    ecx; lpAddend
0x83A6EB: call    dword ptr ds:0A2807Ch
0x83A6F1: test    eax, eax
0x83A6F3: jnz     short loc_83A703
0x83A6F5: cmp     edi, ebx
0x83A6F7: jz      short loc_83A703
0x83A6F9: mov     edx, [edi]
0x83A6FB: mov     eax, [edx]
0x83A6FD: push    1
0x83A6FF: mov     ecx, edi
0x83A701: call    eax
0x83A703: cmp     ebp, ebx
0x83A705: mov     [esi+44h], ebp
0x83A708: jz      short loc_83A714
0x83A70A: add     ebp, 4
0x83A70D: push    ebp; lpAddend
0x83A70E: call    dword ptr ds:0A28078h
0x83A714: cmp     [esi+30h], ebx
0x83A717: jnz     short loc_83A721
0x83A719: call    sub_772DF0
0x83A71E: mov     [esi+30h], eax
0x83A721: mov     ecx, [esi+30h]
0x83A724: push    ebx
0x83A725: push    ebx
0x83A726: push    1Bh
0x83A728: call    sub_772CD0
0x83A72D: cmp     [esi+30h], ebx
0x83A730: jnz     short loc_83A73A
0x83A732: call    sub_772DF0
0x83A737: mov     [esi+30h], eax
0x83A73A: mov     ecx, [esi+30h]
0x83A73D: push    ebx
0x83A73E: push    ebx
0x83A73F: push    0Fh
0x83A741: call    sub_772CD0
0x83A746: cmp     [esi+30h], ebx
0x83A749: jnz     short loc_83A753
0x83A74B: call    sub_772DF0
0x83A750: mov     [esi+30h], eax
0x83A753: mov     ecx, [esi+30h]
0x83A756: push    ebx
0x83A757: push    ebx
0x83A758: push    7
0x83A75A: call    sub_772CD0
0x83A75F: cmp     [esi+30h], ebx
0x83A762: jnz     short loc_83A76C
0x83A764: call    sub_772DF0
0x83A769: mov     [esi+30h], eax
0x83A76C: mov     ecx, [esi+30h]
0x83A76F: push    ebx
0x83A770: push    ebx
0x83A771: push    0Eh
0x83A773: call    sub_772CD0
0x83A778: cmp     [esi+30h], ebx
0x83A77B: jnz     short loc_83A785
0x83A77D: call    sub_772DF0
0x83A782: mov     [esi+30h], eax
0x83A785: mov     ecx, [esi+30h]
0x83A788: push    ebx
0x83A789: push    ebx
0x83A78A: push    34h ; '4'
0x83A78C: call    sub_772CD0
0x83A791: mov     ecx, [esp+2Ch+a3]
0x83A795: or      edi, 0FFFFFFFFh
0x83A798: cmp     ecx, ebx
0x83A79A: mov     dword ptr ds:0B440B0h, 40008h
0x83A7A4: mov     ds:0B44740h, ebx
0x83A7AA: mov     byte ptr [esp+2Ch+var_4], bl
0x83A7AE: jz      short loc_83A7BA
0x83A7B0: add     [ecx+5Ch], edi
0x83A7B3: jnz     short loc_83A7BA
0x83A7B5: call    sub_772560
0x83A7BA: add     [esi+60h], edi
0x83A7BD: mov     [esp+2Ch+var_4], edi
0x83A7C1: jnz     short loc_83A7CA
0x83A7C3: mov     ecx, esi
0x83A7C5: call    sub_7604D0
0x83A7CA: mov     ecx, dword ptr [esp+2Ch+var_C]
0x83A7CE: mov     large fs:0, ecx
0x83A7D5: pop     ecx
0x83A7D6: pop     edi
0x83A7D7: pop     esi
0x83A7D8: pop     ebp
0x83A7D9: pop     ebx
0x83A7DA: add     esp, 18h
0x83A7DD: retn
