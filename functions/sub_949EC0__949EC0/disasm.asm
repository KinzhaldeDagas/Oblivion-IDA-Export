0x949EC0: push    ebx
0x949EC1: push    esi
0x949EC2: push    edi
0x949EC3: mov     esi, ecx
0x949EC5: mov     ecx, ds:0BA7D98h
0x949ECB: mov     eax, [ecx]
0x949ECD: push    24h ; '$'
0x949ECF: push    18h
0x949ED1: call    dword ptr [eax+10h]
0x949ED4: xor     ecx, ecx
0x949ED6: cmp     eax, ecx
0x949ED8: jz      short loc_949EF4
0x949EDA: mov     edx, 80000000h
0x949EDF: mov     [eax], ecx
0x949EE1: mov     [eax+4], ecx
0x949EE4: mov     [eax+8], edx
0x949EE7: mov     [eax+0Ch], ecx
0x949EEA: mov     [eax+10h], ecx
0x949EED: mov     [eax+14h], edx
0x949EF0: mov     ebx, eax
0x949EF2: jmp     short loc_949EF6
0x949EF4: xor     ebx, ebx
0x949EF6: mov     [esi+50h], ebx
0x949EF9: mov     edi, [ebx+4]
0x949EFC: mov     eax, [ebx+8]
0x949EFF: push    ebp
0x949F00: lea     ebp, [edi+1]
0x949F03: and     eax, 3FFFFFFFh
0x949F08: cmp     eax, ebp
0x949F0A: jge     short loc_949F22
0x949F0C: add     eax, eax
0x949F0E: cmp     ebp, eax
0x949F10: jl      short loc_949F14
0x949F12: mov     eax, ebp
0x949F14: push    10h
0x949F16: push    eax
0x949F17: push    ebx
0x949F18: call    sub_8A6E40
0x949F1D: add     esp, 0Ch
0x949F20: xor     ecx, ecx
0x949F22: mov     [ebx+4], ebp
0x949F25: fld     dword ptr [esi+68h]
0x949F28: mov     ebp, [ebx]
0x949F2A: fld     dword ptr [esi+64h]
0x949F2D: fld     dword ptr [esi+60h]
0x949F30: shl     edi, 4
0x949F33: add     edi, ebp
0x949F35: fchs
0x949F37: fstp    dword ptr [edi]
0x949F39: fstp    dword ptr [edi+4]
0x949F3C: fstp    dword ptr [edi+8]
0x949F3F: mov     [edi+0Ch], ecx
0x949F42: mov     ebx, [esi+50h]
0x949F45: mov     edi, [ebx+4]
0x949F48: mov     eax, [ebx+8]
0x949F4B: lea     ebp, [edi+1]
0x949F4E: and     eax, 3FFFFFFFh
0x949F53: cmp     eax, ebp
0x949F55: jge     short loc_949F6B
0x949F57: add     eax, eax
0x949F59: cmp     ebp, eax
0x949F5B: jl      short loc_949F5F
0x949F5D: mov     eax, ebp
0x949F5F: push    10h
0x949F61: push    eax
0x949F62: push    ebx
0x949F63: call    sub_8A6E40
0x949F68: add     esp, 0Ch
0x949F6B: mov     [ebx+4], ebp
0x949F6E: fld     dword ptr [esi+68h]
0x949F71: mov     ebp, [ebx]
0x949F73: fld     dword ptr [esi+64h]
0x949F76: mov     ecx, [esi+60h]
0x949F79: shl     edi, 4
0x949F7C: add     edi, ebp
0x949F7E: mov     [edi], ecx
0x949F80: fstp    dword ptr [edi+4]
0x949F83: fstp    dword ptr [edi+8]
0x949F86: mov     dword ptr [edi+0Ch], 0
0x949F8D: mov     ebx, [esi+50h]
0x949F90: mov     edi, [ebx+4]
0x949F93: mov     eax, [ebx+8]
0x949F96: lea     ebp, [edi+1]
0x949F99: and     eax, 3FFFFFFFh
0x949F9E: cmp     eax, ebp
0x949FA0: jge     short loc_949FB6
0x949FA2: add     eax, eax
0x949FA4: cmp     ebp, eax
0x949FA6: jl      short loc_949FAA
0x949FA8: mov     eax, ebp
0x949FAA: push    10h
0x949FAC: push    eax
0x949FAD: push    ebx
0x949FAE: call    sub_8A6E40
0x949FB3: add     esp, 0Ch
0x949FB6: mov     [ebx+4], ebp
0x949FB9: fld     dword ptr [esi+68h]
0x949FBC: mov     ebp, [ebx]
0x949FBE: fld     dword ptr [esi+64h]
0x949FC1: mov     edx, [esi+60h]
0x949FC4: fchs
0x949FC6: shl     edi, 4
0x949FC9: add     edi, ebp
0x949FCB: mov     [edi], edx
0x949FCD: fstp    dword ptr [edi+4]
0x949FD0: fstp    dword ptr [edi+8]
0x949FD3: mov     dword ptr [edi+0Ch], 0
0x949FDA: mov     ebx, [esi+50h]
0x949FDD: mov     edi, [ebx+4]
0x949FE0: mov     eax, [ebx+8]
0x949FE3: lea     ebp, [edi+1]
0x949FE6: and     eax, 3FFFFFFFh
0x949FEB: cmp     eax, ebp
0x949FED: jge     short loc_94A003
0x949FEF: add     eax, eax
0x949FF1: cmp     ebp, eax
0x949FF3: jl      short loc_949FF7
0x949FF5: mov     eax, ebp
0x949FF7: push    10h
0x949FF9: push    eax
0x949FFA: push    ebx
0x949FFB: call    sub_8A6E40
0x94A000: add     esp, 0Ch
0x94A003: mov     [ebx+4], ebp
0x94A006: fld     dword ptr [esi+68h]
0x94A009: fld     dword ptr [esi+64h]
0x94A00C: mov     ebp, [ebx]
0x94A00E: fchs
0x94A010: shl     edi, 4
0x94A013: fld     dword ptr [esi+60h]
0x94A016: add     edi, ebp
0x94A018: fchs
0x94A01A: fstp    dword ptr [edi]
0x94A01C: fstp    dword ptr [edi+4]
0x94A01F: fstp    dword ptr [edi+8]
0x94A022: mov     dword ptr [edi+0Ch], 0
0x94A029: mov     ebx, [esi+50h]
0x94A02C: mov     edi, [ebx+4]
0x94A02F: mov     eax, [ebx+8]
0x94A032: lea     ebp, [edi+1]
0x94A035: and     eax, 3FFFFFFFh
0x94A03A: cmp     eax, ebp
0x94A03C: jge     short loc_94A052
0x94A03E: add     eax, eax
0x94A040: cmp     ebp, eax
0x94A042: jl      short loc_94A046
0x94A044: mov     eax, ebp
0x94A046: push    10h
0x94A048: push    eax
0x94A049: push    ebx
0x94A04A: call    sub_8A6E40
0x94A04F: add     esp, 0Ch
0x94A052: mov     [ebx+4], ebp
0x94A055: fld     dword ptr [esi+68h]
0x94A058: mov     ebp, [ebx]
0x94A05A: fchs
0x94A05C: fld     dword ptr [esi+64h]
0x94A05F: shl     edi, 4
0x94A062: fld     dword ptr [esi+60h]
0x94A065: add     edi, ebp
0x94A067: fchs
0x94A069: fstp    dword ptr [edi]
0x94A06B: fstp    dword ptr [edi+4]
0x94A06E: fstp    dword ptr [edi+8]
0x94A071: mov     dword ptr [edi+0Ch], 0
0x94A078: mov     ebx, [esi+50h]
0x94A07B: mov     edi, [ebx+4]
0x94A07E: mov     eax, [ebx+8]
0x94A081: lea     ebp, [edi+1]
0x94A084: and     eax, 3FFFFFFFh
0x94A089: cmp     eax, ebp
0x94A08B: jge     short loc_94A0A1
0x94A08D: add     eax, eax
0x94A08F: cmp     ebp, eax
0x94A091: jl      short loc_94A095
0x94A093: mov     eax, ebp
0x94A095: push    10h
0x94A097: push    eax
0x94A098: push    ebx
0x94A099: call    sub_8A6E40
0x94A09E: add     esp, 0Ch
0x94A0A1: mov     [ebx+4], ebp
0x94A0A4: fld     dword ptr [esi+68h]
0x94A0A7: mov     ebp, [ebx]
0x94A0A9: fchs
0x94A0AB: mov     eax, [esi+60h]
0x94A0AE: fld     dword ptr [esi+64h]
0x94A0B1: shl     edi, 4
0x94A0B4: add     edi, ebp
0x94A0B6: mov     [edi], eax
0x94A0B8: fstp    dword ptr [edi+4]
0x94A0BB: fstp    dword ptr [edi+8]
0x94A0BE: mov     dword ptr [edi+0Ch], 0
0x94A0C5: mov     ebx, [esi+50h]
0x94A0C8: mov     edi, [ebx+4]
0x94A0CB: mov     eax, [ebx+8]
0x94A0CE: lea     ebp, [edi+1]
0x94A0D1: and     eax, 3FFFFFFFh
0x94A0D6: cmp     eax, ebp
0x94A0D8: jge     short loc_94A0EE
0x94A0DA: add     eax, eax
0x94A0DC: cmp     ebp, eax
0x94A0DE: jl      short loc_94A0E2
0x94A0E0: mov     eax, ebp
0x94A0E2: push    10h
0x94A0E4: push    eax
0x94A0E5: push    ebx
0x94A0E6: call    sub_8A6E40
0x94A0EB: add     esp, 0Ch
0x94A0EE: mov     [ebx+4], ebp
0x94A0F1: fld     dword ptr [esi+68h]
0x94A0F4: mov     ebp, [ebx]
0x94A0F6: fchs
0x94A0F8: fld     dword ptr [esi+64h]
0x94A0FB: mov     ecx, [esi+60h]
0x94A0FE: shl     edi, 4
0x94A101: fchs
0x94A103: add     edi, ebp
0x94A105: mov     [edi], ecx
0x94A107: fstp    dword ptr [edi+4]
0x94A10A: fstp    dword ptr [edi+8]
0x94A10D: mov     dword ptr [edi+0Ch], 0
0x94A114: mov     ebx, [esi+50h]
0x94A117: mov     edi, [ebx+4]
0x94A11A: mov     eax, [ebx+8]
0x94A11D: lea     ebp, [edi+1]
0x94A120: and     eax, 3FFFFFFFh
0x94A125: cmp     eax, ebp
0x94A127: jge     short loc_94A13D
0x94A129: add     eax, eax
0x94A12B: cmp     ebp, eax
0x94A12D: jl      short loc_94A131
0x94A12F: mov     eax, ebp
0x94A131: push    10h
0x94A133: push    eax
0x94A134: push    ebx
0x94A135: call    sub_8A6E40
0x94A13A: add     esp, 0Ch
0x94A13D: mov     ecx, [ebx]
0x94A13F: mov     [ebx+4], ebp
0x94A142: fld     dword ptr [esi+68h]
0x94A145: fchs
0x94A147: shl     edi, 4
0x94A14A: fld     dword ptr [esi+64h]
0x94A14D: add     edi, ecx
0x94A14F: fchs
0x94A151: fld     dword ptr [esi+60h]
0x94A154: fchs
0x94A156: fstp    dword ptr [edi]
0x94A158: fstp    dword ptr [edi+4]
0x94A15B: fstp    dword ptr [edi+8]
0x94A15E: mov     dword ptr [edi+0Ch], 0
0x94A165: mov     edx, [esi+50h]
0x94A168: mov     eax, [edx+4]
0x94A16B: xor     edi, edi
0x94A16D: test    eax, eax
0x94A16F: jle     short loc_94A192
0x94A171: lea     ebp, [esi+10h]
0x94A174: xor     ebx, ebx
0x94A176: mov     eax, [esi+50h]
0x94A179: mov     ecx, [eax]
0x94A17B: add     ecx, ebx
0x94A17D: push    ecx
0x94A17E: push    ebp
0x94A17F: call    sub_88FCC0
0x94A184: mov     edx, [esi+50h]
0x94A187: mov     eax, [edx+4]
0x94A18A: inc     edi
0x94A18B: add     ebx, 10h
0x94A18E: cmp     edi, eax
0x94A190: jl      short loc_94A176
0x94A192: mov     edi, [esi+50h]
0x94A195: mov     ebx, [edi+10h]
0x94A198: mov     eax, [edi+14h]
0x94A19B: add     edi, 0Ch
0x94A19E: lea     ebp, [ebx+1]
0x94A1A1: and     eax, 3FFFFFFFh
0x94A1A6: cmp     eax, ebp
0x94A1A8: jge     short loc_94A1BE
0x94A1AA: add     eax, eax
0x94A1AC: cmp     ebp, eax
0x94A1AE: jl      short loc_94A1B2
0x94A1B0: mov     eax, ebp
0x94A1B2: push    0Ch
0x94A1B4: push    eax
0x94A1B5: push    edi
0x94A1B6: call    sub_8A6E40
0x94A1BB: add     esp, 0Ch
0x94A1BE: mov     ecx, [edi]
0x94A1C0: mov     [edi+4], ebp
0x94A1C3: lea     eax, [ebx+ebx*2]
0x94A1C6: lea     eax, [ecx+eax*4]
0x94A1C9: mov     dword ptr [eax], 3
0x94A1CF: mov     dword ptr [eax+4], 2
0x94A1D6: mov     dword ptr [eax+8], 1
0x94A1DD: mov     edi, [esi+50h]
0x94A1E0: mov     ebx, [edi+10h]
0x94A1E3: mov     eax, [edi+14h]
0x94A1E6: add     edi, 0Ch
0x94A1E9: lea     ebp, [ebx+1]
0x94A1EC: and     eax, 3FFFFFFFh
0x94A1F1: cmp     eax, ebp
0x94A1F3: jge     short loc_94A209
0x94A1F5: add     eax, eax
0x94A1F7: cmp     ebp, eax
0x94A1F9: jl      short loc_94A1FD
0x94A1FB: mov     eax, ebp
0x94A1FD: push    0Ch
0x94A1FF: push    eax
0x94A200: push    edi
0x94A201: call    sub_8A6E40
0x94A206: add     esp, 0Ch
0x94A209: mov     eax, [edi]
0x94A20B: mov     [edi+4], ebp
0x94A20E: lea     edx, [ebx+ebx*2]
0x94A211: lea     eax, [eax+edx*4]
0x94A214: mov     dword ptr [eax], 3
0x94A21A: mov     dword ptr [eax+4], 1
0x94A221: mov     dword ptr [eax+8], 0
0x94A228: mov     edi, [esi+50h]
0x94A22B: mov     ebx, [edi+10h]
0x94A22E: mov     eax, [edi+14h]
0x94A231: add     edi, 0Ch
0x94A234: lea     ebp, [ebx+1]
0x94A237: and     eax, 3FFFFFFFh
0x94A23C: cmp     eax, ebp
0x94A23E: jge     short loc_94A254
0x94A240: add     eax, eax
0x94A242: cmp     ebp, eax
0x94A244: jl      short loc_94A248
0x94A246: mov     eax, ebp
0x94A248: push    0Ch
0x94A24A: push    eax
0x94A24B: push    edi
0x94A24C: call    sub_8A6E40
0x94A251: add     esp, 0Ch
0x94A254: mov     edx, [edi]
0x94A256: mov     [edi+4], ebp
0x94A259: lea     ecx, [ebx+ebx*2]
0x94A25C: lea     eax, [edx+ecx*4]
0x94A25F: mov     dword ptr [eax], 6
0x94A265: mov     dword ptr [eax+4], 7
0x94A26C: mov     dword ptr [eax+8], 4
0x94A273: mov     edi, [esi+50h]
0x94A276: mov     ebx, [edi+10h]
0x94A279: mov     eax, [edi+14h]
0x94A27C: add     edi, 0Ch
0x94A27F: lea     ebp, [ebx+1]
0x94A282: and     eax, 3FFFFFFFh
0x94A287: cmp     eax, ebp
0x94A289: jge     short loc_94A29F
0x94A28B: add     eax, eax
0x94A28D: cmp     ebp, eax
0x94A28F: jl      short loc_94A293
0x94A291: mov     eax, ebp
0x94A293: push    0Ch
0x94A295: push    eax
0x94A296: push    edi
0x94A297: call    sub_8A6E40
0x94A29C: add     esp, 0Ch
0x94A29F: mov     ecx, [edi]
0x94A2A1: mov     [edi+4], ebp
0x94A2A4: lea     eax, [ebx+ebx*2]
0x94A2A7: lea     eax, [ecx+eax*4]
0x94A2AA: mov     dword ptr [eax], 6
0x94A2B0: mov     dword ptr [eax+4], 4
0x94A2B7: mov     dword ptr [eax+8], 5
0x94A2BE: mov     edi, [esi+50h]
0x94A2C1: mov     ebx, [edi+10h]
0x94A2C4: mov     eax, [edi+14h]
0x94A2C7: add     edi, 0Ch
0x94A2CA: lea     ebp, [ebx+1]
0x94A2CD: and     eax, 3FFFFFFFh
0x94A2D2: cmp     eax, ebp
0x94A2D4: jge     short loc_94A2EA
0x94A2D6: add     eax, eax
0x94A2D8: cmp     ebp, eax
0x94A2DA: jl      short loc_94A2DE
0x94A2DC: mov     eax, ebp
0x94A2DE: push    0Ch
0x94A2E0: push    eax
0x94A2E1: push    edi
0x94A2E2: call    sub_8A6E40
0x94A2E7: add     esp, 0Ch
0x94A2EA: mov     eax, [edi]
0x94A2EC: mov     [edi+4], ebp
0x94A2EF: lea     edx, [ebx+ebx*2]
0x94A2F2: lea     eax, [eax+edx*4]
0x94A2F5: mov     dword ptr [eax], 4
0x94A2FB: mov     dword ptr [eax+4], 7
0x94A302: mov     dword ptr [eax+8], 3
0x94A309: mov     edi, [esi+50h]
0x94A30C: mov     ebx, [edi+10h]
0x94A30F: mov     eax, [edi+14h]
0x94A312: add     edi, 0Ch
0x94A315: lea     ebp, [ebx+1]
0x94A318: and     eax, 3FFFFFFFh
0x94A31D: cmp     eax, ebp
0x94A31F: jge     short loc_94A335
0x94A321: add     eax, eax
0x94A323: cmp     ebp, eax
0x94A325: jl      short loc_94A329
0x94A327: mov     eax, ebp
0x94A329: push    0Ch
0x94A32B: push    eax
0x94A32C: push    edi
0x94A32D: call    sub_8A6E40
0x94A332: add     esp, 0Ch
0x94A335: mov     edx, [edi]
0x94A337: mov     [edi+4], ebp
0x94A33A: lea     ecx, [ebx+ebx*2]
0x94A33D: lea     eax, [edx+ecx*4]
0x94A340: mov     dword ptr [eax], 4
0x94A346: mov     dword ptr [eax+4], 3
0x94A34D: mov     dword ptr [eax+8], 0
0x94A354: mov     edi, [esi+50h]
0x94A357: mov     ebx, [edi+10h]
0x94A35A: mov     eax, [edi+14h]
0x94A35D: add     edi, 0Ch
0x94A360: lea     ebp, [ebx+1]
0x94A363: and     eax, 3FFFFFFFh
0x94A368: cmp     eax, ebp
0x94A36A: jge     short loc_94A380
0x94A36C: add     eax, eax
0x94A36E: cmp     ebp, eax
0x94A370: jl      short loc_94A374
0x94A372: mov     eax, ebp
0x94A374: push    0Ch
0x94A376: push    eax
0x94A377: push    edi
0x94A378: call    sub_8A6E40
0x94A37D: add     esp, 0Ch
0x94A380: mov     ecx, [edi]
0x94A382: mov     [edi+4], ebp
0x94A385: lea     eax, [ebx+ebx*2]
0x94A388: lea     eax, [ecx+eax*4]
0x94A38B: mov     dword ptr [eax], 2
0x94A391: mov     dword ptr [eax+4], 6
0x94A398: mov     dword ptr [eax+8], 5
0x94A39F: mov     edi, [esi+50h]
0x94A3A2: mov     ebx, [edi+10h]
0x94A3A5: mov     eax, [edi+14h]
0x94A3A8: add     edi, 0Ch
0x94A3AB: lea     ebp, [ebx+1]
0x94A3AE: and     eax, 3FFFFFFFh
0x94A3B3: cmp     eax, ebp
0x94A3B5: jge     short loc_94A3CB
0x94A3B7: add     eax, eax
0x94A3B9: cmp     ebp, eax
0x94A3BB: jl      short loc_94A3BF
0x94A3BD: mov     eax, ebp
0x94A3BF: push    0Ch
0x94A3C1: push    eax
0x94A3C2: push    edi
0x94A3C3: call    sub_8A6E40
0x94A3C8: add     esp, 0Ch
0x94A3CB: mov     eax, [edi]
0x94A3CD: mov     [edi+4], ebp
0x94A3D0: lea     edx, [ebx+ebx*2]
0x94A3D3: lea     eax, [eax+edx*4]
0x94A3D6: mov     dword ptr [eax], 2
0x94A3DC: mov     dword ptr [eax+4], 5
0x94A3E3: mov     dword ptr [eax+8], 1
0x94A3EA: mov     edi, [esi+50h]
0x94A3ED: mov     ebx, [edi+10h]
0x94A3F0: mov     eax, [edi+14h]
0x94A3F3: add     edi, 0Ch
0x94A3F6: lea     ebp, [ebx+1]
0x94A3F9: and     eax, 3FFFFFFFh
0x94A3FE: cmp     eax, ebp
0x94A400: jge     short loc_94A416
0x94A402: add     eax, eax
0x94A404: cmp     ebp, eax
0x94A406: jl      short loc_94A40A
0x94A408: mov     eax, ebp
0x94A40A: push    0Ch
0x94A40C: push    eax
0x94A40D: push    edi
0x94A40E: call    sub_8A6E40
0x94A413: add     esp, 0Ch
0x94A416: mov     edx, [edi]
0x94A418: mov     [edi+4], ebp
0x94A41B: lea     ecx, [ebx+ebx*2]
0x94A41E: lea     eax, [edx+ecx*4]
0x94A421: mov     dword ptr [eax], 7
0x94A427: mov     dword ptr [eax+4], 6
0x94A42E: mov     dword ptr [eax+8], 2
0x94A435: mov     edi, [esi+50h]
0x94A438: mov     ebx, [edi+10h]
0x94A43B: mov     eax, [edi+14h]
0x94A43E: add     edi, 0Ch
0x94A441: lea     ebp, [ebx+1]
0x94A444: and     eax, 3FFFFFFFh
0x94A449: cmp     eax, ebp
0x94A44B: jge     short loc_94A461
0x94A44D: add     eax, eax
0x94A44F: cmp     ebp, eax
0x94A451: jl      short loc_94A455
0x94A453: mov     eax, ebp
0x94A455: push    0Ch
0x94A457: push    eax
0x94A458: push    edi
0x94A459: call    sub_8A6E40
0x94A45E: add     esp, 0Ch
0x94A461: mov     ecx, [edi]
0x94A463: mov     [edi+4], ebp
0x94A466: lea     eax, [ebx+ebx*2]
0x94A469: lea     eax, [ecx+eax*4]
0x94A46C: mov     dword ptr [eax], 7
0x94A472: mov     dword ptr [eax+4], 2
0x94A479: mov     dword ptr [eax+8], 3
0x94A480: mov     edi, [esi+50h]
0x94A483: mov     ebx, [edi+10h]
0x94A486: mov     eax, [edi+14h]
0x94A489: add     edi, 0Ch
0x94A48C: lea     ebp, [ebx+1]
0x94A48F: and     eax, 3FFFFFFFh
0x94A494: cmp     eax, ebp
0x94A496: jge     short loc_94A4AC
0x94A498: add     eax, eax
0x94A49A: cmp     ebp, eax
0x94A49C: jl      short loc_94A4A0
0x94A49E: mov     eax, ebp
0x94A4A0: push    0Ch
0x94A4A2: push    eax
0x94A4A3: push    edi
0x94A4A4: call    sub_8A6E40
0x94A4A9: add     esp, 0Ch
0x94A4AC: mov     eax, [edi]
0x94A4AE: mov     [edi+4], ebp
0x94A4B1: lea     edx, [ebx+ebx*2]
0x94A4B4: lea     eax, [eax+edx*4]
0x94A4B7: mov     dword ptr [eax], 1
0x94A4BD: mov     dword ptr [eax+4], 5
0x94A4C4: mov     dword ptr [eax+8], 4
0x94A4CB: mov     esi, [esi+50h]
0x94A4CE: mov     ebx, [esi+10h]
0x94A4D1: mov     eax, [esi+14h]
0x94A4D4: add     esi, 0Ch
0x94A4D7: lea     edi, [ebx+1]
0x94A4DA: and     eax, 3FFFFFFFh
0x94A4DF: cmp     eax, edi
0x94A4E1: pop     ebp
0x94A4E2: jge     short loc_94A4F8
0x94A4E4: add     eax, eax
0x94A4E6: cmp     edi, eax
0x94A4E8: jl      short loc_94A4EC
0x94A4EA: mov     eax, edi
0x94A4EC: push    0Ch
0x94A4EE: push    eax
0x94A4EF: push    esi
0x94A4F0: call    sub_8A6E40
0x94A4F5: add     esp, 0Ch
0x94A4F8: mov     edx, [esi]
0x94A4FA: mov     [esi+4], edi
0x94A4FD: lea     ecx, [ebx+ebx*2]
0x94A500: pop     edi
0x94A501: lea     eax, [edx+ecx*4]
0x94A504: pop     esi
0x94A505: mov     dword ptr [eax], 1
0x94A50B: mov     dword ptr [eax+4], 4
0x94A512: mov     dword ptr [eax+8], 0
0x94A519: pop     ebx
0x94A51A: retn
