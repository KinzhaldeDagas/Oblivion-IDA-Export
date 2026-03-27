0x55B000: push    0FFFFFFFFh
0x55B002: push    offset ??0BSFaceGenMorphDataHead@@QAE@XZ_SEH
0x55B007: mov     eax, large fs:0
0x55B00D: push    eax
0x55B00E: sub     esp, 4Ch
0x55B011: push    ebx
0x55B012: push    ebp
0x55B013: push    esi
0x55B014: push    edi
0x55B015: mov     eax, ds:0B30AACh
0x55B01A: xor     eax, esp
0x55B01C: push    eax
0x55B01D: lea     eax, [esp+6Ch+var_C]
0x55B021: mov     large fs:0, eax
0x55B027: mov     ebp, ecx
0x55B029: mov     [esp+6Ch+var_58], ebp
0x55B02D: xor     ebx, ebx
0x55B02F: push    offset NiRefObject_objcount; lpAddend
0x55B034: mov     dword ptr [ebp+0], offset ??_7NiRefObject@@6B@; const NiRefObject::`vftable'
0x55B03B: mov     [ebp+4], ebx
0x55B03E: call    dword ptr ds:0A28078h
0x55B044: mov     esi, [esp+6Ch+arg_0]
0x55B048: cmp     esi, ebx
0x55B04A: mov     [esp+6Ch+var_4], ebx
0x55B04E: mov     dword ptr [ebp+0], offset ??_7BSFaceGenMorphDataHead@@6B@; const BSFaceGenMorphDataHead::`vftable'
0x55B055: mov     [ebp+8], ebx
0x55B058: mov     [ebp+0Ch], ebx
0x55B05B: mov     [ebp+10h], ebx
0x55B05E: mov     [ebp+14h], ebx
0x55B061: jz      loc_55C3B8
0x55B067: xor     edi, edi
0x55B069: mov     eax, [esi+84h]
0x55B06F: cmp     eax, ebx
0x55B071: mov     [esp+6Ch+arg_0], edi
0x55B075: jz      loc_55BC1A
0x55B07B: mov     ecx, [esi+88h]
0x55B081: sub     ecx, eax
0x55B083: mov     eax, 2E8BA2E9h
0x55B088: imul    ecx
0x55B08A: sar     edx, 3
0x55B08D: mov     eax, edx
0x55B08F: shr     eax, 1Fh
0x55B092: add     eax, edx
0x55B094: cmp     edi, eax
0x55B096: jnb     loc_55BC1A
0x55B09C: mov     ebp, edi
0x55B09E: xor     ebx, ebx
0x55B0A0: imul    ebp, 2Ch ; ','
0x55B0A3: mov     [esp+6Ch+var_50], ebp
0x55B0A7: mov     eax, [esi+84h]
0x55B0AD: test    eax, eax
0x55B0AF: jz      short loc_55B0CE
0x55B0B1: mov     ecx, [esi+88h]
0x55B0B7: sub     ecx, eax
0x55B0B9: mov     eax, 2E8BA2E9h
0x55B0BE: imul    ecx
0x55B0C0: sar     edx, 3
0x55B0C3: mov     eax, edx
0x55B0C5: shr     eax, 1Fh
0x55B0C8: add     eax, edx
0x55B0CA: cmp     edi, eax
0x55B0CC: jb      short loc_55B0D3
0x55B0CE: call    __invalid_parameter_noinfo
0x55B0D3: mov     eax, [esi+84h]
0x55B0D9: add     eax, ebp
0x55B0DB: cmp     dword ptr [eax+18h], 10h
0x55B0DF: jb      short loc_55B0E6
0x55B0E1: mov     eax, [eax+4]
0x55B0E4: jmp     short loc_55B0E9
0x55B0E6: add     eax, 4
0x55B0E9: mov     ecx, ds:0B11FF0h[ebx*4]
0x55B0F0: push    eax; Str2
0x55B0F1: push    ecx; Str1
0x55B0F2: call    __strcmp
0x55B0F7: add     esp, 8
0x55B0FA: test    eax, eax
0x55B0FC: jz      short loc_55B14E
0x55B0FE: add     ebx, 1
0x55B101: cmp     ebx, 0Dh
0x55B104: jl      short loc_55B0A7
0x55B106: xor     ebx, ebx
0x55B108: mov     eax, [esi+84h]
0x55B10E: test    eax, eax
0x55B110: jz      short loc_55B12F
0x55B112: mov     ecx, [esi+88h]
0x55B118: sub     ecx, eax
0x55B11A: mov     eax, 2E8BA2E9h
0x55B11F: imul    ecx
0x55B121: sar     edx, 3
0x55B124: mov     eax, edx
0x55B126: shr     eax, 1Fh
0x55B129: add     eax, edx
0x55B12B: cmp     edi, eax
0x55B12D: jb      short loc_55B134
0x55B12F: call    __invalid_parameter_noinfo
0x55B134: mov     eax, [esi+84h]
0x55B13A: add     eax, ebp
0x55B13C: cmp     dword ptr [eax+18h], 10h
0x55B140: jb      loc_55B3C3
0x55B146: mov     eax, [eax+4]
0x55B149: jmp     loc_55B3C6
0x55B14E: mov     eax, [esp+6Ch+var_58]
0x55B152: cmp     dword ptr [eax+8], 0
0x55B156: jnz     short loc_55B173
0x55B158: push    34h ; '4'; Size
0x55B15A: call    FormHeapAlloc
0x55B15F: mov     ecx, [esp+70h+var_58]
0x55B163: push    34h ; '4'
0x55B165: push    0
0x55B167: push    eax
0x55B168: mov     [ecx+8], eax
0x55B16B: call    __memset
0x55B170: add     esp, 10h
0x55B173: mov     eax, [esi+84h]
0x55B179: test    eax, eax
0x55B17B: jz      short loc_55B19A
0x55B17D: mov     ecx, [esi+88h]
0x55B183: sub     ecx, eax
0x55B185: mov     eax, 2E8BA2E9h
0x55B18A: imul    ecx
0x55B18C: sar     edx, 3
0x55B18F: mov     eax, edx
0x55B191: shr     eax, 1Fh
0x55B194: add     eax, edx
0x55B196: cmp     edi, eax
0x55B198: jb      short loc_55B19F
0x55B19A: call    __invalid_parameter_noinfo
0x55B19F: mov     edx, [esi+84h]
0x55B1A5: lea     eax, [edx+ebp+1Ch]
0x55B1A9: mov     edx, [eax+4]
0x55B1AC: test    edx, edx
0x55B1AE: jnz     short loc_55B1B4
0x55B1B0: xor     ebp, ebp
0x55B1B2: jmp     short loc_55B1C9
0x55B1B4: mov     ecx, [eax+8]
0x55B1B7: sub     ecx, edx
0x55B1B9: mov     eax, 2AAAAAABh
0x55B1BE: imul    ecx
0x55B1C0: sar     edx, 1
0x55B1C2: mov     ebp, edx
0x55B1C4: shr     ebp, 1Fh
0x55B1C7: add     ebp, edx
0x55B1C9: push    0Ch; Size
0x55B1CB: mov     [esp+70h+var_54], ebp
0x55B1CF: call    FormHeapAlloc
0x55B1D4: add     esp, 4
0x55B1D7: mov     [esp+6Ch+var_40], eax
0x55B1DB: test    eax, eax
0x55B1DD: mov     byte ptr [esp+6Ch+var_4], 1
0x55B1E2: jz      short loc_55B1EE
0x55B1E4: push    ebp
0x55B1E5: mov     ecx, eax
0x55B1E7: call    sub_55A0C0
0x55B1EC: jmp     short loc_55B1F0
0x55B1EE: xor     eax, eax
0x55B1F0: mov     ecx, [esp+6Ch+var_58]
0x55B1F4: mov     edx, [ecx+8]
0x55B1F7: mov     [edx+ebx*4], eax
0x55B1FA: mov     eax, [ecx+8]
0x55B1FD: mov     eax, [eax+ebx*4]
0x55B200: mov     ecx, [eax+4]
0x55B203: xor     ebx, ebx
0x55B205: test    ebp, ebp
0x55B207: mov     byte ptr [esp+6Ch+var_4], 0
0x55B20C: mov     [esp+6Ch+var_4C], ecx
0x55B210: jbe     loc_55BC08
0x55B216: xor     ebp, ebp
0x55B218: jmp     short loc_55B224
0x55B21A: align 10h
0x55B220: mov     edi, [esp+6Ch+arg_0]
0x55B224: mov     eax, [esi+84h]
0x55B22A: test    eax, eax
0x55B22C: jz      short loc_55B24B
0x55B22E: mov     ecx, [esi+88h]
0x55B234: sub     ecx, eax
0x55B236: mov     eax, 2E8BA2E9h
0x55B23B: imul    ecx
0x55B23D: sar     edx, 3
0x55B240: mov     eax, edx
0x55B242: shr     eax, 1Fh
0x55B245: add     eax, edx
0x55B247: cmp     edi, eax
0x55B249: jb      short loc_55B250
0x55B24B: call    __invalid_parameter_noinfo
0x55B250: mov     edi, [esi+84h]
0x55B256: add     edi, [esp+6Ch+var_50]
0x55B25A: mov     eax, [edi+20h]
0x55B25D: test    eax, eax
0x55B25F: jz      short loc_55B27A
0x55B261: mov     ecx, [edi+24h]
0x55B264: sub     ecx, eax
0x55B266: mov     eax, 2AAAAAABh
0x55B26B: imul    ecx
0x55B26D: sar     edx, 1
0x55B26F: mov     eax, edx
0x55B271: shr     eax, 1Fh
0x55B274: add     eax, edx
0x55B276: cmp     ebx, eax
0x55B278: jb      short loc_55B27F
0x55B27A: call    __invalid_parameter_noinfo
0x55B27F: mov     edi, [edi+20h]
0x55B282: mov     eax, [esi+84h]
0x55B288: add     edi, ebp
0x55B28A: test    eax, eax
0x55B28C: mov     [esp+6Ch+var_44], edi
0x55B290: jz      short loc_55B2B1
0x55B292: mov     ecx, [esi+88h]
0x55B298: sub     ecx, eax
0x55B29A: mov     eax, 2E8BA2E9h
0x55B29F: imul    ecx
0x55B2A1: sar     edx, 3
0x55B2A4: mov     eax, edx
0x55B2A6: shr     eax, 1Fh
0x55B2A9: add     eax, edx
0x55B2AB: cmp     [esp+6Ch+arg_0], eax
0x55B2AF: jb      short loc_55B2B6
0x55B2B1: call    __invalid_parameter_noinfo
0x55B2B6: mov     edi, [esi+84h]
0x55B2BC: add     edi, [esp+6Ch+var_50]
0x55B2C0: mov     eax, [edi+20h]
0x55B2C3: test    eax, eax
0x55B2C5: jz      short loc_55B2E0
0x55B2C7: mov     ecx, [edi+24h]
0x55B2CA: sub     ecx, eax
0x55B2CC: mov     eax, 2AAAAAABh
0x55B2D1: imul    ecx
0x55B2D3: sar     edx, 1
0x55B2D5: mov     eax, edx
0x55B2D7: shr     eax, 1Fh
0x55B2DA: add     eax, edx
0x55B2DC: cmp     ebx, eax
0x55B2DE: jb      short loc_55B2E5
0x55B2E0: call    __invalid_parameter_noinfo
0x55B2E5: mov     edi, [edi+20h]
0x55B2E8: mov     eax, [esi+84h]
0x55B2EE: add     edi, ebp
0x55B2F0: test    eax, eax
0x55B2F2: mov     [esp+6Ch+var_48], edi
0x55B2F6: jz      short loc_55B317
0x55B2F8: mov     ecx, [esi+88h]
0x55B2FE: sub     ecx, eax
0x55B300: mov     eax, 2E8BA2E9h
0x55B305: imul    ecx
0x55B307: sar     edx, 3
0x55B30A: mov     eax, edx
0x55B30C: shr     eax, 1Fh
0x55B30F: add     eax, edx
0x55B311: cmp     [esp+6Ch+arg_0], eax
0x55B315: jb      short loc_55B31C
0x55B317: call    __invalid_parameter_noinfo
0x55B31C: mov     edi, [esi+84h]
0x55B322: add     edi, [esp+6Ch+var_50]
0x55B326: mov     eax, [edi+20h]
0x55B329: test    eax, eax
0x55B32B: jz      short loc_55B346
0x55B32D: mov     ecx, [edi+24h]
0x55B330: sub     ecx, eax
0x55B332: mov     eax, 2AAAAAABh
0x55B337: imul    ecx
0x55B339: sar     edx, 1
0x55B33B: mov     eax, edx
0x55B33D: shr     eax, 1Fh
0x55B340: add     eax, edx
0x55B342: cmp     ebx, eax
0x55B344: jb      short loc_55B34B
0x55B346: call    __invalid_parameter_noinfo
0x55B34B: mov     eax, [edi+20h]
0x55B34E: fld     dword ptr [eax+ebp]
0x55B351: mov     edx, [esp+6Ch+var_48]
0x55B355: fstp    [esp+6Ch+var_40]
0x55B359: add     eax, ebp
0x55B35B: fld     dword ptr [edx+4]
0x55B35E: mov     eax, [esp+6Ch+var_44]
0x55B362: fstp    [esp+6Ch+var_48]
0x55B366: add     ebx, 1
0x55B369: fld     dword ptr [eax+8]
0x55B36C: mov     eax, [esp+6Ch+var_4C]
0x55B370: fstp    [esp+6Ch+var_44]
0x55B374: add     ebp, 0Ch
0x55B377: cmp     ebx, [esp+6Ch+var_54]
0x55B37B: fld     [esp+6Ch+var_40]
0x55B37F: fstp    [esp+6Ch+var_3C]
0x55B383: mov     ecx, [esp+6Ch+var_3C]
0x55B387: fld     [esp+6Ch+var_48]
0x55B38B: mov     [eax+ebp-0Ch], ecx
0x55B38F: fstp    [esp+6Ch+var_38]
0x55B393: mov     edx, [esp+6Ch+var_38]
0x55B397: fld     [esp+6Ch+var_44]
0x55B39B: mov     [eax+ebp-8], edx
0x55B39F: fstp    [esp+6Ch+var_34]
0x55B3A3: mov     ecx, [esp+6Ch+var_34]
0x55B3A7: mov     [eax+ebp-4], ecx
0x55B3AB: jb      loc_55B220
0x55B3B1: mov     edi, [esp+6Ch+arg_0]
0x55B3B5: mov     ebp, [esp+6Ch+var_58]
0x55B3B9: add     edi, 1
0x55B3BC: xor     ebx, ebx
0x55B3BE: jmp     loc_55B069
0x55B3C3: add     eax, 4
0x55B3C6: mov     ecx, ds:0B12028h[ebx*4]
0x55B3CD: push    eax; Str2
0x55B3CE: push    ecx; Str1
0x55B3CF: call    __strcmp
0x55B3D4: add     esp, 8
0x55B3D7: test    eax, eax
0x55B3D9: jz      short loc_55B42F
0x55B3DB: add     ebx, 1
0x55B3DE: cmp     ebx, 11h
0x55B3E1: jl      loc_55B108
0x55B3E7: xor     ebx, ebx
0x55B3E9: mov     eax, [esi+84h]
0x55B3EF: test    eax, eax
0x55B3F1: jz      short loc_55B410
0x55B3F3: mov     ecx, [esi+88h]
0x55B3F9: sub     ecx, eax
0x55B3FB: mov     eax, 2E8BA2E9h
0x55B400: imul    ecx
0x55B402: sar     edx, 3
0x55B405: mov     eax, edx
0x55B407: shr     eax, 1Fh
0x55B40A: add     eax, edx
0x55B40C: cmp     edi, eax
0x55B40E: jb      short loc_55B415
0x55B410: call    __invalid_parameter_noinfo
0x55B415: mov     eax, [esi+84h]
0x55B41B: add     eax, ebp
0x55B41D: cmp     dword ptr [eax+18h], 10h
0x55B421: jb      loc_55B69C
0x55B427: mov     eax, [eax+4]
0x55B42A: jmp     loc_55B69F
0x55B42F: mov     edx, [esp+6Ch+var_58]
0x55B433: cmp     dword ptr [edx+0Ch], 0
0x55B437: jnz     short loc_55B454
0x55B439: push    44h ; 'D'; Size
0x55B43B: call    FormHeapAlloc
0x55B440: mov     ecx, [esp+70h+var_58]
0x55B444: push    44h ; 'D'
0x55B446: push    0
0x55B448: push    eax
0x55B449: mov     [ecx+0Ch], eax
0x55B44C: call    __memset
0x55B451: add     esp, 10h
0x55B454: mov     eax, [esi+84h]
0x55B45A: test    eax, eax
0x55B45C: jz      short loc_55B47B
0x55B45E: mov     ecx, [esi+88h]
0x55B464: sub     ecx, eax
0x55B466: mov     eax, 2E8BA2E9h
0x55B46B: imul    ecx
0x55B46D: sar     edx, 3
0x55B470: mov     eax, edx
0x55B472: shr     eax, 1Fh
0x55B475: add     eax, edx
0x55B477: cmp     edi, eax
0x55B479: jb      short loc_55B480
0x55B47B: call    __invalid_parameter_noinfo
0x55B480: mov     edx, [esi+84h]
0x55B486: lea     eax, [edx+ebp+1Ch]
0x55B48A: mov     edx, [eax+4]
0x55B48D: test    edx, edx
0x55B48F: jnz     short loc_55B495
0x55B491: xor     edi, edi
0x55B493: jmp     short loc_55B4AA
0x55B495: mov     ecx, [eax+8]
0x55B498: sub     ecx, edx
0x55B49A: mov     eax, 2AAAAAABh
0x55B49F: imul    ecx
0x55B4A1: sar     edx, 1
0x55B4A3: mov     edi, edx
0x55B4A5: shr     edi, 1Fh
0x55B4A8: add     edi, edx
0x55B4AA: push    0Ch; Size
0x55B4AC: mov     [esp+70h+var_54], edi
0x55B4B0: call    FormHeapAlloc
0x55B4B5: add     esp, 4
0x55B4B8: mov     [esp+6Ch+var_40], eax
0x55B4BC: test    eax, eax
0x55B4BE: mov     byte ptr [esp+6Ch+var_4], 2
0x55B4C3: jz      short loc_55B4CF
0x55B4C5: push    edi
0x55B4C6: mov     ecx, eax
0x55B4C8: call    sub_55A0C0
0x55B4CD: jmp     short loc_55B4D1
0x55B4CF: xor     eax, eax
0x55B4D1: mov     ecx, [esp+6Ch+var_58]
0x55B4D5: mov     edx, [ecx+0Ch]
0x55B4D8: mov     [edx+ebx*4], eax
0x55B4DB: mov     eax, [ecx+0Ch]
0x55B4DE: mov     eax, [eax+ebx*4]
0x55B4E1: mov     ecx, [eax+4]
0x55B4E4: xor     ebx, ebx
0x55B4E6: cmp     [esp+6Ch+var_54], ebx
0x55B4EA: mov     byte ptr [esp+6Ch+var_4], 0
0x55B4EF: mov     [esp+6Ch+var_4C], ecx
0x55B4F3: jbe     loc_55BC08
0x55B4F9: xor     ebp, ebp
0x55B4FB: mov     eax, [esi+84h]
0x55B501: test    eax, eax
0x55B503: jz      short loc_55B524
0x55B505: mov     ecx, [esi+88h]
0x55B50B: sub     ecx, eax
0x55B50D: mov     eax, 2E8BA2E9h
0x55B512: imul    ecx
0x55B514: sar     edx, 3
0x55B517: mov     eax, edx
0x55B519: shr     eax, 1Fh
0x55B51C: add     eax, edx
0x55B51E: cmp     [esp+6Ch+arg_0], eax
0x55B522: jb      short loc_55B529
0x55B524: call    __invalid_parameter_noinfo
0x55B529: mov     edi, [esi+84h]
0x55B52F: add     edi, [esp+6Ch+var_50]
0x55B533: mov     eax, [edi+20h]
0x55B536: test    eax, eax
0x55B538: jz      short loc_55B553
0x55B53A: mov     ecx, [edi+24h]
0x55B53D: sub     ecx, eax
0x55B53F: mov     eax, 2AAAAAABh
0x55B544: imul    ecx
0x55B546: sar     edx, 1
0x55B548: mov     eax, edx
0x55B54A: shr     eax, 1Fh
0x55B54D: add     eax, edx
0x55B54F: cmp     ebx, eax
0x55B551: jb      short loc_55B558
0x55B553: call    __invalid_parameter_noinfo
0x55B558: mov     edi, [edi+20h]
0x55B55B: mov     eax, [esi+84h]
0x55B561: add     edi, ebp
0x55B563: test    eax, eax
0x55B565: mov     [esp+6Ch+var_44], edi
0x55B569: jz      short loc_55B58A
0x55B56B: mov     ecx, [esi+88h]
0x55B571: sub     ecx, eax
0x55B573: mov     eax, 2E8BA2E9h
0x55B578: imul    ecx
0x55B57A: sar     edx, 3
0x55B57D: mov     eax, edx
0x55B57F: shr     eax, 1Fh
0x55B582: add     eax, edx
0x55B584: cmp     [esp+6Ch+arg_0], eax
0x55B588: jb      short loc_55B58F
0x55B58A: call    __invalid_parameter_noinfo
0x55B58F: mov     edi, [esi+84h]
0x55B595: add     edi, [esp+6Ch+var_50]
0x55B599: mov     eax, [edi+20h]
0x55B59C: test    eax, eax
0x55B59E: jz      short loc_55B5B9
0x55B5A0: mov     ecx, [edi+24h]
0x55B5A3: sub     ecx, eax
0x55B5A5: mov     eax, 2AAAAAABh
0x55B5AA: imul    ecx
0x55B5AC: sar     edx, 1
0x55B5AE: mov     eax, edx
0x55B5B0: shr     eax, 1Fh
0x55B5B3: add     eax, edx
0x55B5B5: cmp     ebx, eax
0x55B5B7: jb      short loc_55B5BE
0x55B5B9: call    __invalid_parameter_noinfo
0x55B5BE: mov     edi, [edi+20h]
0x55B5C1: mov     eax, [esi+84h]
0x55B5C7: add     edi, ebp
0x55B5C9: test    eax, eax
0x55B5CB: mov     [esp+6Ch+var_40], edi
0x55B5CF: jz      short loc_55B5F0
0x55B5D1: mov     ecx, [esi+88h]
0x55B5D7: sub     ecx, eax
0x55B5D9: mov     eax, 2E8BA2E9h
0x55B5DE: imul    ecx
0x55B5E0: sar     edx, 3
0x55B5E3: mov     eax, edx
0x55B5E5: shr     eax, 1Fh
0x55B5E8: add     eax, edx
0x55B5EA: cmp     [esp+6Ch+arg_0], eax
0x55B5EE: jb      short loc_55B5F5
0x55B5F0: call    __invalid_parameter_noinfo
0x55B5F5: mov     edi, [esi+84h]
0x55B5FB: add     edi, [esp+6Ch+var_50]
0x55B5FF: mov     eax, [edi+20h]
0x55B602: test    eax, eax
0x55B604: jz      short loc_55B61F
0x55B606: mov     ecx, [edi+24h]
0x55B609: sub     ecx, eax
0x55B60B: mov     eax, 2AAAAAABh
0x55B610: imul    ecx
0x55B612: sar     edx, 1
0x55B614: mov     eax, edx
0x55B616: shr     eax, 1Fh
0x55B619: add     eax, edx
0x55B61B: cmp     ebx, eax
0x55B61D: jb      short loc_55B624
0x55B61F: call    __invalid_parameter_noinfo
0x55B624: mov     eax, [edi+20h]
0x55B627: fld     dword ptr [eax+ebp]
0x55B62A: mov     edx, [esp+6Ch+var_40]
0x55B62E: fstp    [esp+6Ch+var_48]
0x55B632: add     eax, ebp
0x55B634: fld     dword ptr [edx+4]
0x55B637: mov     eax, [esp+6Ch+var_44]
0x55B63B: fstp    [esp+6Ch+var_40]
0x55B63F: add     ebx, 1
0x55B642: fld     dword ptr [eax+8]
0x55B645: mov     eax, [esp+6Ch+var_4C]
0x55B649: fstp    [esp+6Ch+var_44]
0x55B64D: add     ebp, 0Ch
0x55B650: cmp     ebx, [esp+6Ch+var_54]
0x55B654: fld     [esp+6Ch+var_48]
0x55B658: fstp    [esp+6Ch+var_30]
0x55B65C: mov     ecx, [esp+6Ch+var_30]
0x55B660: fld     [esp+6Ch+var_40]
0x55B664: mov     [eax+ebp-0Ch], ecx
0x55B668: fstp    [esp+6Ch+var_2C]
0x55B66C: mov     edx, [esp+6Ch+var_2C]
0x55B670: fld     [esp+6Ch+var_44]
0x55B674: mov     [eax+ebp-8], edx
0x55B678: fstp    [esp+6Ch+var_28]
0x55B67C: mov     ecx, [esp+6Ch+var_28]
0x55B680: mov     [eax+ebp-4], ecx
0x55B684: jb      loc_55B4FB
0x55B68A: mov     edi, [esp+6Ch+arg_0]
0x55B68E: mov     ebp, [esp+6Ch+var_58]
0x55B692: add     edi, 1
0x55B695: xor     ebx, ebx
0x55B697: jmp     loc_55B069
0x55B69C: add     eax, 4
0x55B69F: mov     ecx, ds:0B12070h[ebx*4]
0x55B6A6: push    eax; Str2
0x55B6A7: push    ecx; Str1
0x55B6A8: call    __strcmp
0x55B6AD: add     esp, 8
0x55B6B0: test    eax, eax
0x55B6B2: jz      short loc_55B708
0x55B6B4: add     ebx, 1
0x55B6B7: cmp     ebx, 10h
0x55B6BA: jl      loc_55B3E9
0x55B6C0: xor     ebx, ebx
0x55B6C2: mov     eax, [esi+84h]
0x55B6C8: test    eax, eax
0x55B6CA: jz      short loc_55B6E9
0x55B6CC: mov     ecx, [esi+88h]
0x55B6D2: sub     ecx, eax
0x55B6D4: mov     eax, 2E8BA2E9h
0x55B6D9: imul    ecx
0x55B6DB: sar     edx, 3
0x55B6DE: mov     eax, edx
0x55B6E0: shr     eax, 1Fh
0x55B6E3: add     eax, edx
0x55B6E5: cmp     edi, eax
0x55B6E7: jb      short loc_55B6EE
0x55B6E9: call    __invalid_parameter_noinfo
0x55B6EE: mov     eax, [esi+84h]
0x55B6F4: add     eax, ebp
0x55B6F6: cmp     dword ptr [eax+18h], 10h
0x55B6FA: jb      loc_55B975
0x55B700: mov     eax, [eax+4]
0x55B703: jmp     loc_55B978
0x55B708: mov     edx, [esp+6Ch+var_58]
0x55B70C: cmp     dword ptr [edx+10h], 0
0x55B710: jnz     short loc_55B72D
0x55B712: push    40h ; '@'; Size
0x55B714: call    FormHeapAlloc
0x55B719: mov     ecx, [esp+70h+var_58]
0x55B71D: push    40h ; '@'
0x55B71F: push    0
0x55B721: push    eax
0x55B722: mov     [ecx+10h], eax
0x55B725: call    __memset
0x55B72A: add     esp, 10h
0x55B72D: mov     eax, [esi+84h]
0x55B733: test    eax, eax
0x55B735: jz      short loc_55B754
0x55B737: mov     ecx, [esi+88h]
0x55B73D: sub     ecx, eax
0x55B73F: mov     eax, 2E8BA2E9h
0x55B744: imul    ecx
0x55B746: sar     edx, 3
0x55B749: mov     eax, edx
0x55B74B: shr     eax, 1Fh
0x55B74E: add     eax, edx
0x55B750: cmp     edi, eax
0x55B752: jb      short loc_55B759
0x55B754: call    __invalid_parameter_noinfo
0x55B759: mov     edx, [esi+84h]
0x55B75F: lea     eax, [edx+ebp+1Ch]
0x55B763: mov     edx, [eax+4]
0x55B766: test    edx, edx
0x55B768: jnz     short loc_55B76E
0x55B76A: xor     edi, edi
0x55B76C: jmp     short loc_55B783
0x55B76E: mov     ecx, [eax+8]
0x55B771: sub     ecx, edx
0x55B773: mov     eax, 2AAAAAABh
0x55B778: imul    ecx
0x55B77A: sar     edx, 1
0x55B77C: mov     edi, edx
0x55B77E: shr     edi, 1Fh
0x55B781: add     edi, edx
0x55B783: push    0Ch; Size
0x55B785: mov     [esp+70h+var_54], edi
0x55B789: call    FormHeapAlloc
0x55B78E: add     esp, 4
0x55B791: mov     [esp+6Ch+var_40], eax
0x55B795: test    eax, eax
0x55B797: mov     byte ptr [esp+6Ch+var_4], 3
0x55B79C: jz      short loc_55B7A8
0x55B79E: push    edi
0x55B79F: mov     ecx, eax
0x55B7A1: call    sub_55A0C0
0x55B7A6: jmp     short loc_55B7AA
0x55B7A8: xor     eax, eax
0x55B7AA: mov     ecx, [esp+6Ch+var_58]
0x55B7AE: mov     edx, [ecx+10h]
0x55B7B1: mov     [edx+ebx*4], eax
0x55B7B4: mov     eax, [ecx+10h]
0x55B7B7: mov     eax, [eax+ebx*4]
0x55B7BA: mov     ecx, [eax+4]
0x55B7BD: xor     ebx, ebx
0x55B7BF: cmp     [esp+6Ch+var_54], ebx
0x55B7C3: mov     byte ptr [esp+6Ch+var_4], 0
0x55B7C8: mov     [esp+6Ch+var_4C], ecx
0x55B7CC: jbe     loc_55BC08
0x55B7D2: xor     ebp, ebp
0x55B7D4: mov     eax, [esi+84h]
0x55B7DA: test    eax, eax
0x55B7DC: jz      short loc_55B7FD
0x55B7DE: mov     ecx, [esi+88h]
0x55B7E4: sub     ecx, eax
0x55B7E6: mov     eax, 2E8BA2E9h
0x55B7EB: imul    ecx
0x55B7ED: sar     edx, 3
0x55B7F0: mov     eax, edx
0x55B7F2: shr     eax, 1Fh
0x55B7F5: add     eax, edx
0x55B7F7: cmp     [esp+6Ch+arg_0], eax
0x55B7FB: jb      short loc_55B802
0x55B7FD: call    __invalid_parameter_noinfo
0x55B802: mov     edi, [esi+84h]
0x55B808: add     edi, [esp+6Ch+var_50]
0x55B80C: mov     eax, [edi+20h]
0x55B80F: test    eax, eax
0x55B811: jz      short loc_55B82C
0x55B813: mov     ecx, [edi+24h]
0x55B816: sub     ecx, eax
0x55B818: mov     eax, 2AAAAAABh
0x55B81D: imul    ecx
0x55B81F: sar     edx, 1
0x55B821: mov     eax, edx
0x55B823: shr     eax, 1Fh
0x55B826: add     eax, edx
0x55B828: cmp     ebx, eax
0x55B82A: jb      short loc_55B831
0x55B82C: call    __invalid_parameter_noinfo
0x55B831: mov     edi, [edi+20h]
0x55B834: mov     eax, [esi+84h]
0x55B83A: add     edi, ebp
0x55B83C: test    eax, eax
0x55B83E: mov     [esp+6Ch+var_44], edi
0x55B842: jz      short loc_55B863
0x55B844: mov     ecx, [esi+88h]
0x55B84A: sub     ecx, eax
0x55B84C: mov     eax, 2E8BA2E9h
0x55B851: imul    ecx
0x55B853: sar     edx, 3
0x55B856: mov     eax, edx
0x55B858: shr     eax, 1Fh
0x55B85B: add     eax, edx
0x55B85D: cmp     [esp+6Ch+arg_0], eax
0x55B861: jb      short loc_55B868
0x55B863: call    __invalid_parameter_noinfo
0x55B868: mov     edi, [esi+84h]
0x55B86E: add     edi, [esp+6Ch+var_50]
0x55B872: mov     eax, [edi+20h]
0x55B875: test    eax, eax
0x55B877: jz      short loc_55B892
0x55B879: mov     ecx, [edi+24h]
0x55B87C: sub     ecx, eax
0x55B87E: mov     eax, 2AAAAAABh
0x55B883: imul    ecx
0x55B885: sar     edx, 1
0x55B887: mov     eax, edx
0x55B889: shr     eax, 1Fh
0x55B88C: add     eax, edx
0x55B88E: cmp     ebx, eax
0x55B890: jb      short loc_55B897
0x55B892: call    __invalid_parameter_noinfo
0x55B897: mov     edi, [edi+20h]
0x55B89A: mov     eax, [esi+84h]
0x55B8A0: add     edi, ebp
0x55B8A2: test    eax, eax
0x55B8A4: mov     [esp+6Ch+var_40], edi
0x55B8A8: jz      short loc_55B8C9
0x55B8AA: mov     ecx, [esi+88h]
0x55B8B0: sub     ecx, eax
0x55B8B2: mov     eax, 2E8BA2E9h
0x55B8B7: imul    ecx
0x55B8B9: sar     edx, 3
0x55B8BC: mov     eax, edx
0x55B8BE: shr     eax, 1Fh
0x55B8C1: add     eax, edx
0x55B8C3: cmp     [esp+6Ch+arg_0], eax
0x55B8C7: jb      short loc_55B8CE
0x55B8C9: call    __invalid_parameter_noinfo
0x55B8CE: mov     edi, [esi+84h]
0x55B8D4: add     edi, [esp+6Ch+var_50]
0x55B8D8: mov     eax, [edi+20h]
0x55B8DB: test    eax, eax
0x55B8DD: jz      short loc_55B8F8
0x55B8DF: mov     ecx, [edi+24h]
0x55B8E2: sub     ecx, eax
0x55B8E4: mov     eax, 2AAAAAABh
0x55B8E9: imul    ecx
0x55B8EB: sar     edx, 1
0x55B8ED: mov     eax, edx
0x55B8EF: shr     eax, 1Fh
0x55B8F2: add     eax, edx
0x55B8F4: cmp     ebx, eax
0x55B8F6: jb      short loc_55B8FD
0x55B8F8: call    __invalid_parameter_noinfo
0x55B8FD: mov     eax, [edi+20h]
0x55B900: fld     dword ptr [eax+ebp]
0x55B903: mov     edx, [esp+6Ch+var_40]
0x55B907: fstp    [esp+6Ch+var_48]
0x55B90B: add     eax, ebp
0x55B90D: fld     dword ptr [edx+4]
0x55B910: mov     eax, [esp+6Ch+var_44]
0x55B914: fstp    [esp+6Ch+var_40]
0x55B918: add     ebx, 1
0x55B91B: fld     dword ptr [eax+8]
0x55B91E: mov     eax, [esp+6Ch+var_4C]
0x55B922: fstp    [esp+6Ch+var_44]
0x55B926: add     ebp, 0Ch
0x55B929: cmp     ebx, [esp+6Ch+var_54]
0x55B92D: fld     [esp+6Ch+var_48]
0x55B931: fstp    [esp+6Ch+var_24]
0x55B935: mov     ecx, [esp+6Ch+var_24]
0x55B939: fld     [esp+6Ch+var_40]
0x55B93D: mov     [eax+ebp-0Ch], ecx
0x55B941: fstp    [esp+6Ch+var_20]
0x55B945: mov     edx, [esp+6Ch+var_20]
0x55B949: fld     [esp+6Ch+var_44]
0x55B94D: mov     [eax+ebp-8], edx
0x55B951: fstp    [esp+6Ch+var_1C]
0x55B955: mov     ecx, [esp+6Ch+var_1C]
0x55B959: mov     [eax+ebp-4], ecx
0x55B95D: jb      loc_55B7D4
0x55B963: mov     edi, [esp+6Ch+arg_0]
0x55B967: mov     ebp, [esp+6Ch+var_58]
0x55B96B: add     edi, 1
0x55B96E: xor     ebx, ebx
0x55B970: jmp     loc_55B069
0x55B975: add     eax, 4
0x55B978: mov     ecx, ds:0B12024h[ebx*4]
0x55B97F: push    eax; Str2
0x55B980: push    ecx; Str1
0x55B981: call    __strcmp
0x55B986: add     esp, 8
0x55B989: test    eax, eax
0x55B98B: jz      short loc_55B9AB
0x55B98D: add     ebx, 1
0x55B990: cmp     ebx, 1
0x55B993: jl      loc_55B6C2
0x55B999: mov     edi, [esp+6Ch+arg_0]
0x55B99D: mov     ebp, [esp+6Ch+var_58]
0x55B9A1: add     edi, 1
0x55B9A4: xor     ebx, ebx
0x55B9A6: jmp     loc_55B069
0x55B9AB: mov     edx, [esp+6Ch+var_58]
0x55B9AF: cmp     dword ptr [edx+14h], 0
0x55B9B3: jnz     short loc_55B9CC
0x55B9B5: push    4; Size
0x55B9B7: call    FormHeapAlloc
0x55B9BC: mov     ecx, [esp+70h+var_58]
0x55B9C0: mov     [ecx+14h], eax
0x55B9C3: add     esp, 4
0x55B9C6: mov     dword ptr [eax], 0
0x55B9CC: mov     eax, [esi+84h]
0x55B9D2: test    eax, eax
0x55B9D4: jz      short loc_55B9F3
0x55B9D6: mov     ecx, [esi+88h]
0x55B9DC: sub     ecx, eax
0x55B9DE: mov     eax, 2E8BA2E9h
0x55B9E3: imul    ecx
0x55B9E5: sar     edx, 3
0x55B9E8: mov     eax, edx
0x55B9EA: shr     eax, 1Fh
0x55B9ED: add     eax, edx
0x55B9EF: cmp     edi, eax
0x55B9F1: jb      short loc_55B9F8
0x55B9F3: call    __invalid_parameter_noinfo
0x55B9F8: mov     edx, [esi+84h]
0x55B9FE: lea     eax, [edx+ebp+1Ch]
0x55BA02: mov     edx, [eax+4]
0x55BA05: test    edx, edx
0x55BA07: jnz     short loc_55BA11
0x55BA09: xor     edi, edi
0x55BA0B: mov     [esp+6Ch+var_54], edi
0x55BA0F: jmp     short loc_55BA2C
0x55BA11: mov     ecx, [eax+8]
0x55BA14: sub     ecx, edx
0x55BA16: mov     eax, 2AAAAAABh
0x55BA1B: imul    ecx
0x55BA1D: sar     edx, 1
0x55BA1F: mov     eax, edx
0x55BA21: shr     eax, 1Fh
0x55BA24: add     eax, edx
0x55BA26: mov     [esp+6Ch+var_54], eax
0x55BA2A: mov     edi, eax
0x55BA2C: push    0Ch; Size
0x55BA2E: call    FormHeapAlloc
0x55BA33: add     esp, 4
0x55BA36: mov     [esp+6Ch+var_40], eax
0x55BA3A: test    eax, eax
0x55BA3C: mov     byte ptr [esp+6Ch+var_4], 4
0x55BA41: jz      short loc_55BA4D
0x55BA43: push    edi
0x55BA44: mov     ecx, eax
0x55BA46: call    sub_55A0C0
0x55BA4B: jmp     short loc_55BA4F
0x55BA4D: xor     eax, eax
0x55BA4F: test    edi, edi
0x55BA51: mov     ecx, [esp+6Ch+var_58]
0x55BA55: mov     edx, [ecx+14h]
0x55BA58: mov     [edx+ebx*4], eax
0x55BA5B: mov     eax, [ecx+14h]
0x55BA5E: mov     ecx, [eax+ebx*4]
0x55BA61: mov     edx, [ecx+4]
0x55BA64: mov     byte ptr [esp+6Ch+var_4], 0
0x55BA69: mov     [esp+6Ch+var_4C], edx
0x55BA6D: mov     [esp+6Ch+var_48], 0
0x55BA75: jbe     loc_55BC08
0x55BA7B: xor     edi, edi
0x55BA7D: lea     ecx, [ecx+0]
0x55BA80: mov     eax, [esi+84h]
0x55BA86: test    eax, eax
0x55BA88: mov     ebx, [esp+6Ch+arg_0]
0x55BA8C: jz      short loc_55BAAB
0x55BA8E: mov     ecx, [esi+88h]
0x55BA94: sub     ecx, eax
0x55BA96: mov     eax, 2E8BA2E9h
0x55BA9B: imul    ecx
0x55BA9D: sar     edx, 3
0x55BAA0: mov     eax, edx
0x55BAA2: shr     eax, 1Fh
0x55BAA5: add     eax, edx
0x55BAA7: cmp     ebx, eax
0x55BAA9: jb      short loc_55BAB0
0x55BAAB: call    __invalid_parameter_noinfo
0x55BAB0: mov     eax, [esi+84h]
0x55BAB6: mov     ecx, [esp+6Ch+var_50]
0x55BABA: lea     ebp, [ecx+eax+1Ch]
0x55BABE: mov     eax, [ebp+4]
0x55BAC1: test    eax, eax
0x55BAC3: jz      short loc_55BAE0
0x55BAC5: mov     ecx, [ebp+8]
0x55BAC8: sub     ecx, eax
0x55BACA: mov     eax, 2AAAAAABh
0x55BACF: imul    ecx
0x55BAD1: sar     edx, 1
0x55BAD3: mov     eax, edx
0x55BAD5: shr     eax, 1Fh
0x55BAD8: add     eax, edx
0x55BADA: cmp     [esp+6Ch+var_48], eax
0x55BADE: jb      short loc_55BAE5
0x55BAE0: call    __invalid_parameter_noinfo
0x55BAE5: mov     ebp, [ebp+4]
0x55BAE8: mov     eax, [esi+84h]
0x55BAEE: add     ebp, edi
0x55BAF0: test    eax, eax
0x55BAF2: mov     [esp+6Ch+var_40], ebp
0x55BAF6: jz      short loc_55BB15
0x55BAF8: mov     ecx, [esi+88h]
0x55BAFE: sub     ecx, eax
0x55BB00: mov     eax, 2E8BA2E9h
0x55BB05: imul    ecx
0x55BB07: sar     edx, 3
0x55BB0A: mov     eax, edx
0x55BB0C: shr     eax, 1Fh
0x55BB0F: add     eax, edx
0x55BB11: cmp     ebx, eax
0x55BB13: jb      short loc_55BB1A
0x55BB15: call    __invalid_parameter_noinfo
0x55BB1A: mov     eax, [esp+6Ch+var_50]
0x55BB1E: mov     edx, [esi+84h]
0x55BB24: lea     ebp, [eax+edx+1Ch]
0x55BB28: mov     eax, [ebp+4]
0x55BB2B: test    eax, eax
0x55BB2D: jz      short loc_55BB4A
0x55BB2F: mov     ecx, [ebp+8]
0x55BB32: sub     ecx, eax
0x55BB34: mov     eax, 2AAAAAABh
0x55BB39: imul    ecx
0x55BB3B: sar     edx, 1
0x55BB3D: mov     eax, edx
0x55BB3F: shr     eax, 1Fh
0x55BB42: add     eax, edx
0x55BB44: cmp     [esp+6Ch+var_48], eax
0x55BB48: jb      short loc_55BB4F
0x55BB4A: call    __invalid_parameter_noinfo
0x55BB4F: mov     ebx, [ebp+4]
0x55BB52: mov     eax, [esi+84h]
0x55BB58: add     ebx, edi
0x55BB5A: test    eax, eax
0x55BB5C: jz      short loc_55BB7D
0x55BB5E: mov     ecx, [esi+88h]
0x55BB64: sub     ecx, eax
0x55BB66: mov     eax, 2E8BA2E9h
0x55BB6B: imul    ecx
0x55BB6D: sar     edx, 3
0x55BB70: mov     eax, edx
0x55BB72: shr     eax, 1Fh
0x55BB75: add     eax, edx
0x55BB77: cmp     [esp+6Ch+arg_0], eax
0x55BB7B: jb      short loc_55BB82
0x55BB7D: call    __invalid_parameter_noinfo
0x55BB82: mov     ecx, [esi+84h]
0x55BB88: mov     edx, [esp+6Ch+var_50]
0x55BB8C: mov     eax, [edx+ecx+20h]
0x55BB90: test    eax, eax
0x55BB92: lea     ebp, [edx+ecx+1Ch]
0x55BB96: jz      short loc_55BBB3
0x55BB98: mov     ecx, [ebp+8]
0x55BB9B: sub     ecx, eax
0x55BB9D: mov     eax, 2AAAAAABh
0x55BBA2: imul    ecx
0x55BBA4: sar     edx, 1
0x55BBA6: mov     eax, edx
0x55BBA8: shr     eax, 1Fh
0x55BBAB: add     eax, edx
0x55BBAD: cmp     [esp+6Ch+var_48], eax
0x55BBB1: jb      short loc_55BBB8
0x55BBB3: call    __invalid_parameter_noinfo
0x55BBB8: mov     eax, [ebp+4]
0x55BBBB: fld     dword ptr [edi+eax]
0x55BBBE: mov     ecx, [esp+6Ch+var_40]
0x55BBC2: mov     eax, [esp+6Ch+var_4C]
0x55BBC6: fstp    [esp+6Ch+var_18]
0x55BBCA: fld     dword ptr [ebx+4]
0x55BBCD: mov     edx, [esp+6Ch+var_18]
0x55BBD1: fstp    [esp+6Ch+var_14]
0x55BBD5: add     edi, 0Ch
0x55BBD8: fld     dword ptr [ecx+8]
0x55BBDB: mov     ecx, [esp+6Ch+var_14]
0x55BBDF: mov     [edi+eax-0Ch], edx
0x55BBE3: fstp    [esp+6Ch+var_10]
0x55BBE7: mov     edx, [esp+6Ch+var_10]
0x55BBEB: mov     [edi+eax-8], ecx
0x55BBEF: mov     [edi+eax-4], edx
0x55BBF3: mov     eax, [esp+6Ch+var_48]
0x55BBF7: add     eax, 1
0x55BBFA: cmp     eax, [esp+6Ch+var_54]
0x55BBFE: mov     [esp+6Ch+var_48], eax
0x55BC02: jb      loc_55BA80
0x55BC08: mov     edi, [esp+6Ch+arg_0]
0x55BC0C: mov     ebp, [esp+6Ch+var_58]
0x55BC10: add     edi, 1
0x55BC13: xor     ebx, ebx
0x55BC15: jmp     loc_55B069
0x55BC1A: mov     [esp+6Ch+arg_0], ebx
0x55BC1E: mov     edi, edi
0x55BC20: mov     eax, [esi+94h]
0x55BC26: test    eax, eax
0x55BC28: jz      loc_55C3B8
0x55BC2E: mov     ecx, [esi+98h]
0x55BC34: sub     ecx, eax
0x55BC36: mov     eax, 2AAAAAABh
0x55BC3B: imul    ecx
0x55BC3D: sar     edx, 3
0x55BC40: mov     eax, edx
0x55BC42: shr     eax, 1Fh
0x55BC45: add     eax, edx
0x55BC47: cmp     ebx, eax
0x55BC49: jnb     loc_55C3B8
0x55BC4F: lea     ebp, [ebx+ebx*2]
0x55BC52: xor     edi, edi
0x55BC54: shl     ebp, 4
0x55BC57: mov     [esp+6Ch+var_48], ebp
0x55BC5B: mov     eax, [esi+94h]
0x55BC61: test    eax, eax
0x55BC63: jz      short loc_55BC82
0x55BC65: mov     ecx, [esi+98h]
0x55BC6B: sub     ecx, eax
0x55BC6D: mov     eax, 2AAAAAABh
0x55BC72: imul    ecx
0x55BC74: sar     edx, 3
0x55BC77: mov     eax, edx
0x55BC79: shr     eax, 1Fh
0x55BC7C: add     eax, edx
0x55BC7E: cmp     ebx, eax
0x55BC80: jb      short loc_55BC87
0x55BC82: call    __invalid_parameter_noinfo
0x55BC87: mov     eax, [esi+94h]
0x55BC8D: add     eax, ebp
0x55BC8F: cmp     dword ptr [eax+18h], 10h
0x55BC93: jb      short loc_55BC9A
0x55BC95: mov     eax, [eax+4]
0x55BC98: jmp     short loc_55BC9D
0x55BC9A: add     eax, 4
0x55BC9D: mov     ecx, ds:0B11FF0h[edi*4]
0x55BCA4: push    eax; Str2
0x55BCA5: push    ecx; Str1
0x55BCA6: call    __strcmp
0x55BCAB: add     esp, 8
0x55BCAE: test    eax, eax
0x55BCB0: jz      short loc_55BD02
0x55BCB2: add     edi, 1
0x55BCB5: cmp     edi, 0Dh
0x55BCB8: jl      short loc_55BC5B
0x55BCBA: xor     edi, edi
0x55BCBC: mov     eax, [esi+94h]
0x55BCC2: test    eax, eax
0x55BCC4: jz      short loc_55BCE3
0x55BCC6: mov     ecx, [esi+98h]
0x55BCCC: sub     ecx, eax
0x55BCCE: mov     eax, 2AAAAAABh
0x55BCD3: imul    ecx
0x55BCD5: sar     edx, 3
0x55BCD8: mov     eax, edx
0x55BCDA: shr     eax, 1Fh
0x55BCDD: add     eax, edx
0x55BCDF: cmp     ebx, eax
0x55BCE1: jb      short loc_55BCE8
0x55BCE3: call    __invalid_parameter_noinfo
0x55BCE8: mov     eax, [esi+94h]
0x55BCEE: add     eax, ebp
0x55BCF0: cmp     dword ptr [eax+18h], 10h
0x55BCF4: jb      loc_55BE6E
0x55BCFA: mov     eax, [eax+4]
0x55BCFD: jmp     loc_55BE71
0x55BD02: mov     eax, [esp+6Ch+var_58]
0x55BD06: cmp     dword ptr [eax+8], 0
0x55BD0A: jnz     short loc_55BD27
0x55BD0C: push    34h ; '4'; Size
0x55BD0E: call    FormHeapAlloc
0x55BD13: mov     ecx, [esp+70h+var_58]
0x55BD17: push    34h ; '4'
0x55BD19: push    0
0x55BD1B: push    eax
0x55BD1C: mov     [ecx+8], eax
0x55BD1F: call    __memset
0x55BD24: add     esp, 10h
0x55BD27: mov     edx, [esp+6Ch+var_58]
0x55BD2B: mov     eax, [edx+8]
0x55BD2E: cmp     dword ptr [eax+edi*4], 0
0x55BD32: jz      short loc_55BD9A
0x55BD34: mov     eax, [esi+94h]
0x55BD3A: test    eax, eax
0x55BD3C: jz      short loc_55BD5B
0x55BD3E: mov     ecx, [esi+98h]
0x55BD44: sub     ecx, eax
0x55BD46: mov     eax, 2AAAAAABh
0x55BD4B: imul    ecx
0x55BD4D: sar     edx, 3
0x55BD50: mov     eax, edx
0x55BD52: shr     eax, 1Fh
0x55BD55: add     eax, edx
0x55BD57: cmp     ebx, eax
0x55BD59: jb      short loc_55BD60
0x55BD5B: call    __invalid_parameter_noinfo
0x55BD60: mov     eax, [esi+94h]
0x55BD66: add     eax, ebp
0x55BD68: cmp     dword ptr [eax+18h], 10h
0x55BD6C: jb      short loc_55BD73
0x55BD6E: mov     eax, [eax+4]
0x55BD71: jmp     short loc_55BD76
0x55BD73: add     eax, 4
0x55BD76: push    eax; ArgList
0x55BD77: push    offset aStatisticalAnd; "Statistical and Differential FaceGen mo"...
0x55BD7C: call    PrintError
0x55BD81: mov     ecx, [esp+74h+var_58]
0x55BD85: mov     edx, [ecx+8]
0x55BD88: mov     ecx, [edx+edi*4]
0x55BD8B: add     esp, 8
0x55BD8E: test    ecx, ecx
0x55BD90: jz      short loc_55BD9A
0x55BD92: mov     eax, [ecx]
0x55BD94: mov     edx, [eax]
0x55BD96: push    1
0x55BD98: call    edx
0x55BD9A: mov     eax, [esi+94h]
0x55BDA0: test    eax, eax
0x55BDA2: jz      short loc_55BDC1
0x55BDA4: mov     ecx, [esi+98h]
0x55BDAA: sub     ecx, eax
0x55BDAC: mov     eax, 2AAAAAABh
0x55BDB1: imul    ecx
0x55BDB3: sar     edx, 3
0x55BDB6: mov     eax, edx
0x55BDB8: shr     eax, 1Fh
0x55BDBB: add     eax, edx
0x55BDBD: cmp     ebx, eax
0x55BDBF: jb      short loc_55BDC6
0x55BDC1: call    __invalid_parameter_noinfo
0x55BDC6: mov     ebp, [esi+94h]
0x55BDCC: add     ebp, [esp+6Ch+var_48]
0x55BDD0: mov     eax, [ebp+24h]
0x55BDD3: test    eax, eax
0x55BDD5: jnz     short loc_55BDDB
0x55BDD7: xor     ebx, ebx
0x55BDD9: jmp     short loc_55BDE3
0x55BDDB: mov     ebx, [ebp+28h]
0x55BDDE: sub     ebx, eax
0x55BDE0: sar     ebx, 2
0x55BDE3: push    10h; Size
0x55BDE5: call    FormHeapAlloc
0x55BDEA: add     esp, 4
0x55BDED: mov     [esp+6Ch+var_40], eax
0x55BDF1: test    eax, eax
0x55BDF3: mov     byte ptr [esp+6Ch+var_4], 5
0x55BDF8: jz      short loc_55BE08
0x55BDFA: mov     ecx, [ebp+1Ch]
0x55BDFD: push    ecx
0x55BDFE: push    ebx
0x55BDFF: mov     ecx, eax
0x55BE01: call    sub_55A010
0x55BE06: jmp     short loc_55BE0A
0x55BE08: xor     eax, eax
0x55BE0A: mov     ecx, [esp+6Ch+var_58]
0x55BE0E: mov     edx, [ecx+8]
0x55BE11: mov     [edx+edi*4], eax
0x55BE14: mov     eax, [ecx+8]
0x55BE17: mov     eax, [eax+edi*4]
0x55BE1A: mov     ecx, [eax+4]
0x55BE1D: xor     edi, edi
0x55BE1F: test    ebx, ebx
0x55BE21: mov     byte ptr [esp+6Ch+var_4], 0
0x55BE26: mov     [esp+6Ch+var_4C], ecx
0x55BE2A: jbe     loc_55C3A6
0x55BE30: mov     ecx, [ebp+24h]
0x55BE33: test    ecx, ecx
0x55BE35: jz      short loc_55BE43
0x55BE37: mov     eax, [ebp+28h]
0x55BE3A: sub     eax, ecx
0x55BE3C: sar     eax, 2
0x55BE3F: cmp     edi, eax
0x55BE41: jb      short loc_55BE48
0x55BE43: call    __invalid_parameter_noinfo
0x55BE48: mov     edx, [ebp+24h]
0x55BE4B: mov     eax, [edx+edi*4]
0x55BE4E: mov     ecx, [esp+6Ch+var_4C]
0x55BE52: mov     [ecx+edi*4], eax
0x55BE55: add     edi, 1
0x55BE58: cmp     edi, ebx
0x55BE5A: jb      short loc_55BE30
0x55BE5C: add     [esp+6Ch+arg_0], 1
0x55BE61: mov     ebx, [esp+6Ch+arg_0]
0x55BE65: mov     ebp, [esp+6Ch+var_58]
0x55BE69: jmp     loc_55BC20
0x55BE6E: add     eax, 4
0x55BE71: mov     ecx, ds:0B12028h[edi*4]
0x55BE78: push    eax; Str2
0x55BE79: push    ecx; Str1
0x55BE7A: call    __strcmp
0x55BE7F: add     esp, 8
0x55BE82: test    eax, eax
0x55BE84: jz      short loc_55BEDA
0x55BE86: add     edi, 1
0x55BE89: cmp     edi, 11h
0x55BE8C: jl      loc_55BCBC
0x55BE92: xor     edi, edi
0x55BE94: mov     eax, [esi+94h]
0x55BE9A: test    eax, eax
0x55BE9C: jz      short loc_55BEBB
0x55BE9E: mov     ecx, [esi+98h]
0x55BEA4: sub     ecx, eax
0x55BEA6: mov     eax, 2AAAAAABh
0x55BEAB: imul    ecx
0x55BEAD: sar     edx, 3
0x55BEB0: mov     eax, edx
0x55BEB2: shr     eax, 1Fh
0x55BEB5: add     eax, edx
0x55BEB7: cmp     ebx, eax
0x55BEB9: jb      short loc_55BEC0
0x55BEBB: call    __invalid_parameter_noinfo
0x55BEC0: mov     eax, [esi+94h]
0x55BEC6: add     eax, ebp
0x55BEC8: cmp     dword ptr [eax+18h], 10h
0x55BECC: jb      loc_55C046
0x55BED2: mov     eax, [eax+4]
0x55BED5: jmp     loc_55C049
0x55BEDA: mov     edx, [esp+6Ch+var_58]
0x55BEDE: cmp     dword ptr [edx+0Ch], 0
0x55BEE2: jnz     short loc_55BEFF
0x55BEE4: push    44h ; 'D'; Size
0x55BEE6: call    FormHeapAlloc
0x55BEEB: mov     ecx, [esp+70h+var_58]
0x55BEEF: push    44h ; 'D'
0x55BEF1: push    0
0x55BEF3: push    eax
0x55BEF4: mov     [ecx+0Ch], eax
0x55BEF7: call    __memset
0x55BEFC: add     esp, 10h
0x55BEFF: mov     edx, [esp+6Ch+var_58]
0x55BF03: mov     eax, [edx+0Ch]
0x55BF06: cmp     dword ptr [eax+edi*4], 0
0x55BF0A: jz      short loc_55BF72
0x55BF0C: mov     eax, [esi+94h]
0x55BF12: test    eax, eax
0x55BF14: jz      short loc_55BF33
0x55BF16: mov     ecx, [esi+98h]
0x55BF1C: sub     ecx, eax
0x55BF1E: mov     eax, 2AAAAAABh
0x55BF23: imul    ecx
0x55BF25: sar     edx, 3
0x55BF28: mov     eax, edx
0x55BF2A: shr     eax, 1Fh
0x55BF2D: add     eax, edx
0x55BF2F: cmp     ebx, eax
0x55BF31: jb      short loc_55BF38
0x55BF33: call    __invalid_parameter_noinfo
0x55BF38: mov     eax, [esi+94h]
0x55BF3E: add     eax, ebp
0x55BF40: cmp     dword ptr [eax+18h], 10h
0x55BF44: jb      short loc_55BF4B
0x55BF46: mov     eax, [eax+4]
0x55BF49: jmp     short loc_55BF4E
0x55BF4B: add     eax, 4
0x55BF4E: push    eax; ArgList
0x55BF4F: push    offset aStatisticalA_0; "Statistical and Differential FaceGen mo"...
0x55BF54: call    PrintError
0x55BF59: mov     ecx, [esp+74h+var_58]
0x55BF5D: mov     edx, [ecx+0Ch]
0x55BF60: mov     ecx, [edx+edi*4]
0x55BF63: add     esp, 8
0x55BF66: test    ecx, ecx
0x55BF68: jz      short loc_55BF72
0x55BF6A: mov     eax, [ecx]
0x55BF6C: mov     edx, [eax]
0x55BF6E: push    1
0x55BF70: call    edx
0x55BF72: mov     eax, [esi+94h]
0x55BF78: test    eax, eax
0x55BF7A: jz      short loc_55BF99
0x55BF7C: mov     ecx, [esi+98h]
0x55BF82: sub     ecx, eax
0x55BF84: mov     eax, 2AAAAAABh
0x55BF89: imul    ecx
0x55BF8B: sar     edx, 3
0x55BF8E: mov     eax, edx
0x55BF90: shr     eax, 1Fh
0x55BF93: add     eax, edx
0x55BF95: cmp     ebx, eax
0x55BF97: jb      short loc_55BF9E
0x55BF99: call    __invalid_parameter_noinfo
0x55BF9E: mov     ebp, [esi+94h]
0x55BFA4: add     ebp, [esp+6Ch+var_48]
0x55BFA8: mov     eax, [ebp+24h]
0x55BFAB: test    eax, eax
0x55BFAD: jnz     short loc_55BFB3
0x55BFAF: xor     ebx, ebx
0x55BFB1: jmp     short loc_55BFBB
0x55BFB3: mov     ebx, [ebp+28h]
0x55BFB6: sub     ebx, eax
0x55BFB8: sar     ebx, 2
0x55BFBB: push    10h; Size
0x55BFBD: call    FormHeapAlloc
0x55BFC2: add     esp, 4
0x55BFC5: mov     [esp+6Ch+var_40], eax
0x55BFC9: test    eax, eax
0x55BFCB: mov     byte ptr [esp+6Ch+var_4], 6
0x55BFD0: jz      short loc_55BFE0
0x55BFD2: mov     ecx, [ebp+1Ch]
0x55BFD5: push    ecx
0x55BFD6: push    ebx
0x55BFD7: mov     ecx, eax
0x55BFD9: call    sub_55A010
0x55BFDE: jmp     short loc_55BFE2
0x55BFE0: xor     eax, eax
0x55BFE2: mov     ecx, [esp+6Ch+var_58]
0x55BFE6: mov     edx, [ecx+0Ch]
0x55BFE9: mov     [edx+edi*4], eax
0x55BFEC: mov     eax, [ecx+0Ch]
0x55BFEF: mov     eax, [eax+edi*4]
0x55BFF2: mov     ecx, [eax+4]
0x55BFF5: xor     edi, edi
0x55BFF7: test    ebx, ebx
0x55BFF9: mov     byte ptr [esp+6Ch+var_4], 0
0x55BFFE: mov     [esp+6Ch+var_4C], ecx
0x55C002: jbe     loc_55C3A6
0x55C008: mov     ecx, [ebp+24h]
0x55C00B: test    ecx, ecx
0x55C00D: jz      short loc_55C01B
0x55C00F: mov     eax, [ebp+28h]
0x55C012: sub     eax, ecx
0x55C014: sar     eax, 2
0x55C017: cmp     edi, eax
0x55C019: jb      short loc_55C020
0x55C01B: call    __invalid_parameter_noinfo
0x55C020: mov     edx, [ebp+24h]
0x55C023: mov     eax, [edx+edi*4]
0x55C026: mov     ecx, [esp+6Ch+var_4C]
0x55C02A: mov     [ecx+edi*4], eax
0x55C02D: add     edi, 1
0x55C030: cmp     edi, ebx
0x55C032: jb      short loc_55C008
0x55C034: add     [esp+6Ch+arg_0], 1
0x55C039: mov     ebx, [esp+6Ch+arg_0]
0x55C03D: mov     ebp, [esp+6Ch+var_58]
0x55C041: jmp     loc_55BC20
0x55C046: add     eax, 4
0x55C049: mov     ecx, ds:0B12070h[edi*4]
0x55C050: push    eax; Str2
0x55C051: push    ecx; Str1
0x55C052: call    __strcmp
0x55C057: add     esp, 8
0x55C05A: test    eax, eax
0x55C05C: jz      short loc_55C0B2
0x55C05E: add     edi, 1
0x55C061: cmp     edi, 10h
0x55C064: jl      loc_55BE94
0x55C06A: xor     edi, edi
0x55C06C: mov     eax, [esi+94h]
0x55C072: test    eax, eax
0x55C074: jz      short loc_55C093
0x55C076: mov     ecx, [esi+98h]
0x55C07C: sub     ecx, eax
0x55C07E: mov     eax, 2AAAAAABh
0x55C083: imul    ecx
0x55C085: sar     edx, 3
0x55C088: mov     eax, edx
0x55C08A: shr     eax, 1Fh
0x55C08D: add     eax, edx
0x55C08F: cmp     ebx, eax
0x55C091: jb      short loc_55C098
0x55C093: call    __invalid_parameter_noinfo
0x55C098: mov     eax, [esi+94h]
0x55C09E: add     eax, ebp
0x55C0A0: cmp     dword ptr [eax+18h], 10h
0x55C0A4: jb      loc_55C21E
0x55C0AA: mov     eax, [eax+4]
0x55C0AD: jmp     loc_55C221
0x55C0B2: mov     edx, [esp+6Ch+var_58]
0x55C0B6: cmp     dword ptr [edx+10h], 0
0x55C0BA: jnz     short loc_55C0D7
0x55C0BC: push    40h ; '@'; Size
0x55C0BE: call    FormHeapAlloc
0x55C0C3: mov     ecx, [esp+70h+var_58]
0x55C0C7: push    40h ; '@'
0x55C0C9: push    0
0x55C0CB: push    eax
0x55C0CC: mov     [ecx+10h], eax
0x55C0CF: call    __memset
0x55C0D4: add     esp, 10h
0x55C0D7: mov     edx, [esp+6Ch+var_58]
0x55C0DB: mov     eax, [edx+10h]
0x55C0DE: cmp     dword ptr [eax+edi*4], 0
0x55C0E2: jz      short loc_55C14A
0x55C0E4: mov     eax, [esi+94h]
0x55C0EA: test    eax, eax
0x55C0EC: jz      short loc_55C10B
0x55C0EE: mov     ecx, [esi+98h]
0x55C0F4: sub     ecx, eax
0x55C0F6: mov     eax, 2AAAAAABh
0x55C0FB: imul    ecx
0x55C0FD: sar     edx, 3
0x55C100: mov     eax, edx
0x55C102: shr     eax, 1Fh
0x55C105: add     eax, edx
0x55C107: cmp     ebx, eax
0x55C109: jb      short loc_55C110
0x55C10B: call    __invalid_parameter_noinfo
0x55C110: mov     eax, [esi+94h]
0x55C116: add     eax, ebp
0x55C118: cmp     dword ptr [eax+18h], 10h
0x55C11C: jb      short loc_55C123
0x55C11E: mov     eax, [eax+4]
0x55C121: jmp     short loc_55C126
0x55C123: add     eax, 4
0x55C126: push    eax; ArgList
0x55C127: push    offset aStatisticalA_1; "Statistical and Differential FaceGen mo"...
0x55C12C: call    PrintError
0x55C131: mov     ecx, [esp+74h+var_58]
0x55C135: mov     edx, [ecx+10h]
0x55C138: mov     ecx, [edx+edi*4]
0x55C13B: add     esp, 8
0x55C13E: test    ecx, ecx
0x55C140: jz      short loc_55C14A
0x55C142: mov     eax, [ecx]
0x55C144: mov     edx, [eax]
0x55C146: push    1
0x55C148: call    edx
0x55C14A: mov     eax, [esi+94h]
0x55C150: test    eax, eax
0x55C152: jz      short loc_55C171
0x55C154: mov     ecx, [esi+98h]
0x55C15A: sub     ecx, eax
0x55C15C: mov     eax, 2AAAAAABh
0x55C161: imul    ecx
0x55C163: sar     edx, 3
0x55C166: mov     eax, edx
0x55C168: shr     eax, 1Fh
0x55C16B: add     eax, edx
0x55C16D: cmp     ebx, eax
0x55C16F: jb      short loc_55C176
0x55C171: call    __invalid_parameter_noinfo
0x55C176: mov     ebp, [esi+94h]
0x55C17C: add     ebp, [esp+6Ch+var_48]
0x55C180: mov     eax, [ebp+24h]
0x55C183: test    eax, eax
0x55C185: jnz     short loc_55C18B
0x55C187: xor     ebx, ebx
0x55C189: jmp     short loc_55C193
0x55C18B: mov     ebx, [ebp+28h]
0x55C18E: sub     ebx, eax
0x55C190: sar     ebx, 2
0x55C193: push    10h; Size
0x55C195: call    FormHeapAlloc
0x55C19A: add     esp, 4
0x55C19D: mov     [esp+6Ch+var_40], eax
0x55C1A1: test    eax, eax
0x55C1A3: mov     byte ptr [esp+6Ch+var_4], 7
0x55C1A8: jz      short loc_55C1B8
0x55C1AA: mov     ecx, [ebp+1Ch]
0x55C1AD: push    ecx
0x55C1AE: push    ebx
0x55C1AF: mov     ecx, eax
0x55C1B1: call    sub_55A010
0x55C1B6: jmp     short loc_55C1BA
0x55C1B8: xor     eax, eax
0x55C1BA: mov     ecx, [esp+6Ch+var_58]
0x55C1BE: mov     edx, [ecx+10h]
0x55C1C1: mov     [edx+edi*4], eax
0x55C1C4: mov     eax, [ecx+10h]
0x55C1C7: mov     eax, [eax+edi*4]
0x55C1CA: mov     ecx, [eax+4]
0x55C1CD: xor     edi, edi
0x55C1CF: test    ebx, ebx
0x55C1D1: mov     byte ptr [esp+6Ch+var_4], 0
0x55C1D6: mov     [esp+6Ch+var_4C], ecx
0x55C1DA: jbe     loc_55C3A6
0x55C1E0: mov     ecx, [ebp+24h]
0x55C1E3: test    ecx, ecx
0x55C1E5: jz      short loc_55C1F3
0x55C1E7: mov     eax, [ebp+28h]
0x55C1EA: sub     eax, ecx
0x55C1EC: sar     eax, 2
0x55C1EF: cmp     edi, eax
0x55C1F1: jb      short loc_55C1F8
0x55C1F3: call    __invalid_parameter_noinfo
0x55C1F8: mov     edx, [ebp+24h]
0x55C1FB: mov     eax, [edx+edi*4]
0x55C1FE: mov     ecx, [esp+6Ch+var_4C]
0x55C202: mov     [ecx+edi*4], eax
0x55C205: add     edi, 1
0x55C208: cmp     edi, ebx
0x55C20A: jb      short loc_55C1E0
0x55C20C: add     [esp+6Ch+arg_0], 1
0x55C211: mov     ebx, [esp+6Ch+arg_0]
0x55C215: mov     ebp, [esp+6Ch+var_58]
0x55C219: jmp     loc_55BC20
0x55C21E: add     eax, 4
0x55C221: mov     ecx, ds:0B12024h[edi*4]
0x55C228: push    eax; Str2
0x55C229: push    ecx; Str1
0x55C22A: call    __strcmp
0x55C22F: add     esp, 8
0x55C232: test    eax, eax
0x55C234: jz      short loc_55C254
0x55C236: add     edi, 1
0x55C239: cmp     edi, 1
0x55C23C: jl      loc_55C06C
0x55C242: add     [esp+6Ch+arg_0], 1
0x55C247: mov     ebx, [esp+6Ch+arg_0]
0x55C24B: mov     ebp, [esp+6Ch+var_58]
0x55C24F: jmp     loc_55BC20
0x55C254: mov     edx, [esp+6Ch+var_58]
0x55C258: cmp     dword ptr [edx+14h], 0
0x55C25C: jnz     short loc_55C275
0x55C25E: push    4; Size
0x55C260: call    FormHeapAlloc
0x55C265: mov     ecx, [esp+70h+var_58]
0x55C269: mov     [ecx+14h], eax
0x55C26C: add     esp, 4
0x55C26F: mov     dword ptr [eax], 0
0x55C275: mov     edx, [esp+6Ch+var_58]
0x55C279: mov     eax, [edx+14h]
0x55C27C: cmp     dword ptr [eax+edi*4], 0
0x55C280: jz      short loc_55C2E8
0x55C282: mov     eax, [esi+94h]
0x55C288: test    eax, eax
0x55C28A: jz      short loc_55C2A9
0x55C28C: mov     ecx, [esi+98h]
0x55C292: sub     ecx, eax
0x55C294: mov     eax, 2AAAAAABh
0x55C299: imul    ecx
0x55C29B: sar     edx, 3
0x55C29E: mov     eax, edx
0x55C2A0: shr     eax, 1Fh
0x55C2A3: add     eax, edx
0x55C2A5: cmp     ebx, eax
0x55C2A7: jb      short loc_55C2AE
0x55C2A9: call    __invalid_parameter_noinfo
0x55C2AE: mov     eax, [esi+94h]
0x55C2B4: add     eax, ebp
0x55C2B6: cmp     dword ptr [eax+18h], 10h
0x55C2BA: jb      short loc_55C2C1
0x55C2BC: mov     eax, [eax+4]
0x55C2BF: jmp     short loc_55C2C4
0x55C2C1: add     eax, 4
0x55C2C4: push    eax; ArgList
0x55C2C5: push    offset aStatisticalA_2; "Statistical and Differential FaceGen mo"...
0x55C2CA: call    PrintError
0x55C2CF: mov     ecx, [esp+74h+var_58]
0x55C2D3: mov     edx, [ecx+14h]
0x55C2D6: mov     ecx, [edx+edi*4]
0x55C2D9: add     esp, 8
0x55C2DC: test    ecx, ecx
0x55C2DE: jz      short loc_55C2E8
0x55C2E0: mov     eax, [ecx]
0x55C2E2: mov     edx, [eax]
0x55C2E4: push    1
0x55C2E6: call    edx
0x55C2E8: mov     eax, [esi+94h]
0x55C2EE: test    eax, eax
0x55C2F0: jz      short loc_55C30F
0x55C2F2: mov     ecx, [esi+98h]
0x55C2F8: sub     ecx, eax
0x55C2FA: mov     eax, 2AAAAAABh
0x55C2FF: imul    ecx
0x55C301: sar     edx, 3
0x55C304: mov     eax, edx
0x55C306: shr     eax, 1Fh
0x55C309: add     eax, edx
0x55C30B: cmp     ebx, eax
0x55C30D: jb      short loc_55C314
0x55C30F: call    __invalid_parameter_noinfo
0x55C314: mov     ebp, [esi+94h]
0x55C31A: add     ebp, [esp+6Ch+var_48]
0x55C31E: mov     eax, [ebp+24h]
0x55C321: test    eax, eax
0x55C323: jnz     short loc_55C329
0x55C325: xor     ebx, ebx
0x55C327: jmp     short loc_55C331
0x55C329: mov     ebx, [ebp+28h]
0x55C32C: sub     ebx, eax
0x55C32E: sar     ebx, 2
0x55C331: push    10h; Size
0x55C333: call    FormHeapAlloc
0x55C338: add     esp, 4
0x55C33B: mov     [esp+6Ch+var_40], eax
0x55C33F: test    eax, eax
0x55C341: mov     byte ptr [esp+6Ch+var_4], 8
0x55C346: jz      short loc_55C356
0x55C348: mov     ecx, [ebp+1Ch]
0x55C34B: push    ecx
0x55C34C: push    ebx
0x55C34D: mov     ecx, eax
0x55C34F: call    sub_55A010
0x55C354: jmp     short loc_55C358
0x55C356: xor     eax, eax
0x55C358: mov     ecx, [esp+6Ch+var_58]
0x55C35C: mov     edx, [ecx+14h]
0x55C35F: mov     [edx+edi*4], eax
0x55C362: mov     eax, [ecx+14h]
0x55C365: mov     ecx, [eax+edi*4]
0x55C368: mov     edx, [ecx+4]
0x55C36B: xor     edi, edi
0x55C36D: test    ebx, ebx
0x55C36F: mov     byte ptr [esp+6Ch+var_4], 0
0x55C374: mov     [esp+6Ch+var_4C], edx
0x55C378: jbe     short loc_55C3A6
0x55C37A: mov     ecx, [ebp+24h]
0x55C37D: test    ecx, ecx
0x55C37F: jz      short loc_55C38D
0x55C381: mov     eax, [ebp+28h]
0x55C384: sub     eax, ecx
0x55C386: sar     eax, 2
0x55C389: cmp     edi, eax
0x55C38B: jb      short loc_55C392
0x55C38D: call    __invalid_parameter_noinfo
0x55C392: mov     eax, [ebp+24h]
0x55C395: mov     ecx, [eax+edi*4]
0x55C398: mov     edx, [esp+6Ch+var_4C]
0x55C39C: mov     [edx+edi*4], ecx
0x55C39F: add     edi, 1
0x55C3A2: cmp     edi, ebx
0x55C3A4: jb      short loc_55C37A
0x55C3A6: add     [esp+6Ch+arg_0], 1
0x55C3AB: mov     ebx, [esp+6Ch+arg_0]
0x55C3AF: mov     ebp, [esp+6Ch+var_58]
0x55C3B3: jmp     loc_55BC20
0x55C3B8: mov     eax, ebp
0x55C3BA: mov     ecx, [esp+6Ch+var_C]
0x55C3BE: mov     large fs:0, ecx
0x55C3C5: pop     ecx
0x55C3C6: pop     edi
0x55C3C7: pop     esi
0x55C3C8: pop     ebp
0x55C3C9: pop     ebx
0x55C3CA: add     esp, 58h
0x55C3CD: retn    4
