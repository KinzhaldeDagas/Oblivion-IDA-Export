0x7EBEE0: push    0FFFFFFFFh
0x7EBEE2: push    offset SEH_7EBEE0
0x7EBEE7: mov     eax, large fs:0
0x7EBEED: push    eax
0x7EBEEE: sub     esp, 0Ch
0x7EBEF1: push    ebx
0x7EBEF2: push    ebp
0x7EBEF3: push    esi
0x7EBEF4: push    edi
0x7EBEF5: mov     eax, ds:0B30AACh
0x7EBEFA: xor     eax, esp
0x7EBEFC: push    eax
0x7EBEFD: lea     eax, [esp+2Ch+var_C]
0x7EBF01: mov     large fs:0, eax
0x7EBF07: mov     esi, ecx
0x7EBF09: lea     eax, [esp+2Ch+var_14]
0x7EBF0D: push    eax
0x7EBF0E: call    sub_7606A0
0x7EBF13: add     esp, 4
0x7EBF16: mov     edi, eax
0x7EBF18: mov     ecx, [esi+70h]
0x7EBF1B: or      ebp, 0FFFFFFFFh
0x7EBF1E: cmp     ecx, [edi]
0x7EBF20: mov     [esp+2Ch+var_4], 0
0x7EBF28: mov     ebx, 1
0x7EBF2D: jz      short loc_7EBF49
0x7EBF2F: test    ecx, ecx
0x7EBF31: jz      short loc_7EBF3D
0x7EBF33: add     [ecx+60h], ebp
0x7EBF36: jnz     short loc_7EBF3D
0x7EBF38: call    sub_7604D0
0x7EBF3D: mov     eax, [edi]
0x7EBF3F: test    eax, eax
0x7EBF41: mov     [esi+70h], eax
0x7EBF44: jz      short loc_7EBF49
0x7EBF46: add     [eax+60h], ebx
0x7EBF49: mov     eax, [esp+2Ch+var_14]
0x7EBF4D: test    eax, eax
0x7EBF4F: mov     [esp+2Ch+var_4], ebp
0x7EBF53: jz      short loc_7EBF67
0x7EBF55: add     [eax+60h], ebp
0x7EBF58: mov     ecx, eax
0x7EBF5A: add     eax, 60h ; '`'
0x7EBF5D: cmp     dword ptr [eax], 0
0x7EBF60: jnz     short loc_7EBF67
0x7EBF62: call    sub_7604D0
0x7EBF67: lea     ecx, [esp+2Ch+a3]
0x7EBF6B: push    ecx
0x7EBF6C: call    sub_772630
0x7EBF71: mov     edx, [esp+30h+a3]
0x7EBF75: push    2
0x7EBF77: push    3
0x7EBF79: push    0
0x7EBF7B: push    edx
0x7EBF7C: mov     [esp+40h+var_4], ebx
0x7EBF80: call    sub_801110
0x7EBF85: mov     ecx, [esp+40h+a3]
0x7EBF89: add     esp, 14h
0x7EBF8C: push    0
0x7EBF8E: call    sub_771640
0x7EBF93: mov     ecx, [esi+70h]; this
0x7EBF96: mov     eax, [esp+2Ch+a3]
0x7EBF9A: mov     edx, [ecx+14h]
0x7EBF9D: push    eax; a3
0x7EBF9E: push    edx; a2
0x7EBF9F: call    sub_760010
0x7EBFA4: lea     eax, [esp+2Ch+var_14]
0x7EBFA8: push    eax
0x7EBFA9: call    sub_772630
0x7EBFAE: add     esp, 4
0x7EBFB1: mov     edi, eax
0x7EBFB3: mov     eax, [esp+2Ch+a3]
0x7EBFB7: cmp     eax, [edi]
0x7EBFB9: mov     byte ptr [esp+2Ch+var_4], 2
0x7EBFBE: jz      short loc_7EBFE7
0x7EBFC0: test    eax, eax
0x7EBFC2: jz      short loc_7EBFD6
0x7EBFC4: add     [eax+5Ch], ebp
0x7EBFC7: mov     ecx, eax
0x7EBFC9: add     eax, 5Ch ; '\'
0x7EBFCC: cmp     dword ptr [eax], 0
0x7EBFCF: jnz     short loc_7EBFD6
0x7EBFD1: call    sub_772560
0x7EBFD6: mov     eax, [edi]
0x7EBFD8: test    eax, eax
0x7EBFDA: mov     [esp+2Ch+a3], eax
0x7EBFDE: jz      short loc_7EBFE7
0x7EBFE0: add     [eax+5Ch], ebx
0x7EBFE3: mov     eax, [esp+2Ch+a3]
0x7EBFE7: mov     ecx, [esp+2Ch+var_14]
0x7EBFEB: test    ecx, ecx
0x7EBFED: mov     byte ptr [esp+2Ch+var_4], 1
0x7EBFF2: jz      short loc_7EC009
0x7EBFF4: add     [ecx+5Ch], ebp
0x7EBFF7: cmp     dword ptr [ecx+5Ch], 0
0x7EBFFB: lea     eax, [ecx+5Ch]
0x7EBFFE: jnz     short loc_7EC005
0x7EC000: call    sub_772560
0x7EC005: mov     eax, [esp+2Ch+a3]
0x7EC009: push    2
0x7EC00B: push    3
0x7EC00D: push    1
0x7EC00F: push    eax
0x7EC010: call    sub_801110
0x7EC015: mov     ecx, [esp+3Ch+a3]
0x7EC019: add     esp, 10h
0x7EC01C: push    1
0x7EC01E: call    sub_771640
0x7EC023: mov     ecx, [esi+70h]; this
0x7EC026: mov     edx, [esp+2Ch+a3]
0x7EC02A: mov     eax, [ecx+14h]
0x7EC02D: push    edx; a3
0x7EC02E: push    eax; a2
0x7EC02F: call    sub_760010
0x7EC034: mov     ebx, [esi+70h]
0x7EC037: mov     ebp, [esi+9Ch]
0x7EC03D: mov     edi, [ebx+58h]
0x7EC040: cmp     edi, ebp
0x7EC042: jz      short loc_7EC075
0x7EC044: test    edi, edi
0x7EC046: jz      short loc_7EC064
0x7EC048: lea     ecx, [edi+4]
0x7EC04B: push    ecx; lpAddend
0x7EC04C: call    dword ptr ds:0A2807Ch
0x7EC052: test    eax, eax
0x7EC054: jnz     short loc_7EC064
0x7EC056: test    edi, edi
0x7EC058: jz      short loc_7EC064
0x7EC05A: mov     edx, [edi]
0x7EC05C: mov     eax, [edx]
0x7EC05E: push    1
0x7EC060: mov     ecx, edi
0x7EC062: call    eax
0x7EC064: test    ebp, ebp
0x7EC066: mov     [ebx+58h], ebp
0x7EC069: jz      short loc_7EC075
0x7EC06B: add     ebp, 4
0x7EC06E: push    ebp; lpAddend
0x7EC06F: call    dword ptr ds:0A28078h
0x7EC075: mov     ebp, [esi+70h]
0x7EC078: mov     ebx, [esi+0A8h]
0x7EC07E: mov     edi, [ebp+44h]
0x7EC081: cmp     edi, ebx
0x7EC083: jz      short loc_7EC0B6
0x7EC085: test    edi, edi
0x7EC087: jz      short loc_7EC0A5
0x7EC089: lea     ecx, [edi+4]
0x7EC08C: push    ecx; lpAddend
0x7EC08D: call    dword ptr ds:0A2807Ch
0x7EC093: test    eax, eax
0x7EC095: jnz     short loc_7EC0A5
0x7EC097: test    edi, edi
0x7EC099: jz      short loc_7EC0A5
0x7EC09B: mov     edx, [edi]
0x7EC09D: mov     eax, [edx]
0x7EC09F: push    1
0x7EC0A1: mov     ecx, edi
0x7EC0A3: call    eax
0x7EC0A5: test    ebx, ebx
0x7EC0A7: mov     [ebp+44h], ebx
0x7EC0AA: jz      short loc_7EC0B6
0x7EC0AC: add     ebx, 4
0x7EC0AF: push    ebx; lpAddend
0x7EC0B0: call    dword ptr ds:0A28078h
0x7EC0B6: mov     edi, [esi+70h]
0x7EC0B9: cmp     dword ptr [edi+30h], 0
0x7EC0BD: jnz     short loc_7EC0C7
0x7EC0BF: call    sub_772DF0
0x7EC0C4: mov     [edi+30h], eax
0x7EC0C7: mov     ecx, [edi+30h]
0x7EC0CA: push    0
0x7EC0CC: push    0
0x7EC0CE: push    7
0x7EC0D0: call    sub_772CD0
0x7EC0D5: mov     edi, [esi+70h]
0x7EC0D8: cmp     dword ptr [edi+30h], 0
0x7EC0DC: jnz     short loc_7EC0E6
0x7EC0DE: call    sub_772DF0
0x7EC0E3: mov     [edi+30h], eax
0x7EC0E6: mov     ecx, [edi+30h]
0x7EC0E9: push    0
0x7EC0EB: push    0
0x7EC0ED: push    0Eh
0x7EC0EF: call    sub_772CD0
0x7EC0F4: mov     edi, [esi+70h]
0x7EC0F7: cmp     dword ptr [edi+30h], 0
0x7EC0FB: jnz     short loc_7EC105
0x7EC0FD: call    sub_772DF0
0x7EC102: mov     [edi+30h], eax
0x7EC105: mov     ecx, [edi+30h]
0x7EC108: push    0
0x7EC10A: push    0
0x7EC10C: push    1Bh
0x7EC10E: call    sub_772CD0
0x7EC113: mov     edi, [esi+70h]
0x7EC116: cmp     dword ptr [edi+30h], 0
0x7EC11A: jnz     short loc_7EC124
0x7EC11C: call    sub_772DF0
0x7EC121: mov     [edi+30h], eax
0x7EC124: mov     ecx, [edi+30h]
0x7EC127: push    0
0x7EC129: push    0
0x7EC12B: push    0Fh
0x7EC12D: call    sub_772CD0
0x7EC132: mov     edi, [esi+70h]
0x7EC135: cmp     dword ptr [edi+30h], 0
0x7EC139: jnz     short loc_7EC143
0x7EC13B: call    sub_772DF0
0x7EC140: mov     [edi+30h], eax
0x7EC143: mov     ecx, [edi+30h]
0x7EC146: push    0
0x7EC148: push    7
0x7EC14A: push    0A8h ; '¨'
0x7EC14F: call    sub_772CD0
0x7EC154: lea     ecx, [esp+2Ch+var_14]
0x7EC158: push    ecx
0x7EC159: call    sub_7606A0
0x7EC15E: add     esp, 4
0x7EC161: mov     edi, eax
0x7EC163: mov     ecx, [esi+0ACh]
0x7EC169: cmp     ecx, [edi]
0x7EC16B: mov     byte ptr [esp+2Ch+var_4], 3
0x7EC170: jz      short loc_7EC191
0x7EC172: test    ecx, ecx
0x7EC174: jz      short loc_7EC181
0x7EC176: add     dword ptr [ecx+60h], 0FFFFFFFFh
0x7EC17A: jnz     short loc_7EC181
0x7EC17C: call    sub_7604D0
0x7EC181: mov     edi, [edi]
0x7EC183: test    edi, edi
0x7EC185: mov     [esi+0ACh], edi
0x7EC18B: jz      short loc_7EC191
0x7EC18D: add     dword ptr [edi+60h], 1
0x7EC191: mov     eax, [esp+2Ch+var_14]
0x7EC195: test    eax, eax
0x7EC197: mov     byte ptr [esp+2Ch+var_4], 1
0x7EC19C: jz      short loc_7EC1B1
0x7EC19E: add     dword ptr [eax+60h], 0FFFFFFFFh
0x7EC1A2: mov     ecx, eax
0x7EC1A4: add     eax, 60h ; '`'
0x7EC1A7: cmp     dword ptr [eax], 0
0x7EC1AA: jnz     short loc_7EC1B1
0x7EC1AC: call    sub_7604D0
0x7EC1B1: lea     edx, [esp+2Ch+var_14]
0x7EC1B5: push    edx
0x7EC1B6: call    sub_772630
0x7EC1BB: add     esp, 4
0x7EC1BE: mov     edi, eax
0x7EC1C0: mov     eax, [esp+2Ch+a3]
0x7EC1C4: cmp     eax, [edi]
0x7EC1C6: mov     byte ptr [esp+2Ch+var_4], 4
0x7EC1CB: jz      short loc_7EC1F6
0x7EC1CD: test    eax, eax
0x7EC1CF: jz      short loc_7EC1E4
0x7EC1D1: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x7EC1D5: mov     ecx, eax
0x7EC1D7: add     eax, 5Ch ; '\'
0x7EC1DA: cmp     dword ptr [eax], 0
0x7EC1DD: jnz     short loc_7EC1E4
0x7EC1DF: call    sub_772560
0x7EC1E4: mov     eax, [edi]
0x7EC1E6: test    eax, eax
0x7EC1E8: mov     [esp+2Ch+a3], eax
0x7EC1EC: jz      short loc_7EC1F6
0x7EC1EE: add     dword ptr [eax+5Ch], 1
0x7EC1F2: mov     eax, [esp+2Ch+a3]
0x7EC1F6: mov     ecx, [esp+2Ch+var_14]
0x7EC1FA: test    ecx, ecx
0x7EC1FC: mov     byte ptr [esp+2Ch+var_4], 1
0x7EC201: jz      short loc_7EC219
0x7EC203: add     dword ptr [ecx+5Ch], 0FFFFFFFFh
0x7EC207: cmp     dword ptr [ecx+5Ch], 0
0x7EC20B: lea     eax, [ecx+5Ch]
0x7EC20E: jnz     short loc_7EC215
0x7EC210: call    sub_772560
0x7EC215: mov     eax, [esp+2Ch+a3]
0x7EC219: push    2
0x7EC21B: push    3
0x7EC21D: push    0
0x7EC21F: push    eax
0x7EC220: call    sub_801110
0x7EC225: mov     ecx, [esp+3Ch+a3]
0x7EC229: add     esp, 10h
0x7EC22C: push    1
0x7EC22E: call    sub_771640
0x7EC233: mov     ecx, [esi+0ACh]; this
0x7EC239: mov     eax, [esp+2Ch+a3]
0x7EC23D: mov     edx, [ecx+14h]
0x7EC240: push    eax; a3
0x7EC241: push    edx; a2
0x7EC242: call    sub_760010
0x7EC247: mov     ebx, [esi+0ACh]
0x7EC24D: mov     ebp, [esi+98h]
0x7EC253: mov     edi, [ebx+58h]
0x7EC256: cmp     edi, ebp
0x7EC258: jz      short loc_7EC28B
0x7EC25A: test    edi, edi
0x7EC25C: jz      short loc_7EC27A
0x7EC25E: lea     eax, [edi+4]
0x7EC261: push    eax; lpAddend
0x7EC262: call    dword ptr ds:0A2807Ch
0x7EC268: test    eax, eax
0x7EC26A: jnz     short loc_7EC27A
0x7EC26C: test    edi, edi
0x7EC26E: jz      short loc_7EC27A
0x7EC270: mov     edx, [edi]
0x7EC272: mov     eax, [edx]
0x7EC274: push    1
0x7EC276: mov     ecx, edi
0x7EC278: call    eax
0x7EC27A: test    ebp, ebp
0x7EC27C: mov     [ebx+58h], ebp
0x7EC27F: jz      short loc_7EC28B
0x7EC281: add     ebp, 4
0x7EC284: push    ebp; lpAddend
0x7EC285: call    dword ptr ds:0A28078h
0x7EC28B: mov     ebp, [esi+0ACh]
0x7EC291: mov     ebx, [esi+0A4h]
0x7EC297: mov     edi, [ebp+44h]
0x7EC29A: cmp     edi, ebx
0x7EC29C: jz      short loc_7EC2CF
0x7EC29E: test    edi, edi
0x7EC2A0: jz      short loc_7EC2BE
0x7EC2A2: lea     ecx, [edi+4]
0x7EC2A5: push    ecx; lpAddend
0x7EC2A6: call    dword ptr ds:0A2807Ch
0x7EC2AC: test    eax, eax
0x7EC2AE: jnz     short loc_7EC2BE
0x7EC2B0: test    edi, edi
0x7EC2B2: jz      short loc_7EC2BE
0x7EC2B4: mov     edx, [edi]
0x7EC2B6: mov     eax, [edx]
0x7EC2B8: push    1
0x7EC2BA: mov     ecx, edi
0x7EC2BC: call    eax
0x7EC2BE: test    ebx, ebx
0x7EC2C0: mov     [ebp+44h], ebx
0x7EC2C3: jz      short loc_7EC2CF
0x7EC2C5: add     ebx, 4
0x7EC2C8: push    ebx; lpAddend
0x7EC2C9: call    dword ptr ds:0A28078h
0x7EC2CF: mov     edi, [esi+0ACh]
0x7EC2D5: cmp     dword ptr [edi+30h], 0
0x7EC2D9: jnz     short loc_7EC2E3
0x7EC2DB: call    sub_772DF0
0x7EC2E0: mov     [edi+30h], eax
0x7EC2E3: mov     ecx, [edi+30h]
0x7EC2E6: push    0
0x7EC2E8: push    0
0x7EC2EA: push    7
0x7EC2EC: call    sub_772CD0
0x7EC2F1: mov     edi, [esi+0ACh]
0x7EC2F7: cmp     dword ptr [edi+30h], 0
0x7EC2FB: jnz     short loc_7EC305
0x7EC2FD: call    sub_772DF0
0x7EC302: mov     [edi+30h], eax
0x7EC305: mov     ecx, [edi+30h]
0x7EC308: push    0
0x7EC30A: push    0
0x7EC30C: push    0Eh
0x7EC30E: call    sub_772CD0
0x7EC313: mov     edi, [esi+0ACh]
0x7EC319: cmp     dword ptr [edi+30h], 0
0x7EC31D: jnz     short loc_7EC327
0x7EC31F: call    sub_772DF0
0x7EC324: mov     [edi+30h], eax
0x7EC327: mov     ecx, [edi+30h]
0x7EC32A: push    0
0x7EC32C: push    0
0x7EC32E: push    1Bh
0x7EC330: call    sub_772CD0
0x7EC335: mov     edi, [esi+0ACh]
0x7EC33B: cmp     dword ptr [edi+30h], 0
0x7EC33F: jnz     short loc_7EC349
0x7EC341: call    sub_772DF0
0x7EC346: mov     [edi+30h], eax
0x7EC349: mov     ecx, [edi+30h]
0x7EC34C: push    0
0x7EC34E: push    0
0x7EC350: push    0Fh
0x7EC352: call    sub_772CD0
0x7EC357: mov     edi, [esi+0ACh]
0x7EC35D: cmp     dword ptr [edi+30h], 0
0x7EC361: jnz     short loc_7EC36B
0x7EC363: call    sub_772DF0
0x7EC368: mov     [edi+30h], eax
0x7EC36B: mov     ecx, [edi+30h]
0x7EC36E: push    0
0x7EC370: push    7
0x7EC372: push    0A8h ; '¨'
0x7EC377: call    sub_772CD0
0x7EC37C: lea     ecx, [esp+2Ch+var_14]
0x7EC380: push    ecx
0x7EC381: call    sub_7606A0
0x7EC386: add     esp, 4
0x7EC389: mov     edi, eax
0x7EC38B: mov     ecx, [esi+0B0h]
0x7EC391: cmp     ecx, [edi]
0x7EC393: mov     byte ptr [esp+2Ch+var_4], 5
0x7EC398: jz      short loc_7EC3B9
0x7EC39A: test    ecx, ecx
0x7EC39C: jz      short loc_7EC3A9
0x7EC39E: add     dword ptr [ecx+60h], 0FFFFFFFFh
0x7EC3A2: jnz     short loc_7EC3A9
0x7EC3A4: call    sub_7604D0
0x7EC3A9: mov     eax, [edi]
0x7EC3AB: test    eax, eax
0x7EC3AD: mov     [esi+0B0h], eax
0x7EC3B3: jz      short loc_7EC3B9
0x7EC3B5: add     dword ptr [eax+60h], 1
0x7EC3B9: mov     eax, [esp+2Ch+var_14]
0x7EC3BD: test    eax, eax
0x7EC3BF: mov     byte ptr [esp+2Ch+var_4], 1
0x7EC3C4: jz      short loc_7EC3D9
0x7EC3C6: add     dword ptr [eax+60h], 0FFFFFFFFh
0x7EC3CA: mov     ecx, eax
0x7EC3CC: add     eax, 60h ; '`'
0x7EC3CF: cmp     dword ptr [eax], 0
0x7EC3D2: jnz     short loc_7EC3D9
0x7EC3D4: call    sub_7604D0
0x7EC3D9: lea     edx, [esp+2Ch+var_10]
0x7EC3DD: push    edx
0x7EC3DE: call    sub_772630
0x7EC3E3: add     esp, 4
0x7EC3E6: mov     edi, eax
0x7EC3E8: mov     eax, [esp+2Ch+a3]
0x7EC3EC: cmp     eax, [edi]
0x7EC3EE: mov     byte ptr [esp+2Ch+var_4], 6
0x7EC3F3: jz      short loc_7EC41E
0x7EC3F5: test    eax, eax
0x7EC3F7: jz      short loc_7EC40C
0x7EC3F9: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x7EC3FD: mov     ecx, eax
0x7EC3FF: add     eax, 5Ch ; '\'
0x7EC402: cmp     dword ptr [eax], 0
0x7EC405: jnz     short loc_7EC40C
0x7EC407: call    sub_772560
0x7EC40C: mov     eax, [edi]
0x7EC40E: test    eax, eax
0x7EC410: mov     [esp+2Ch+a3], eax
0x7EC414: jz      short loc_7EC41E
0x7EC416: add     dword ptr [eax+5Ch], 1
0x7EC41A: mov     eax, [esp+2Ch+a3]
0x7EC41E: mov     ecx, [esp+2Ch+var_10]
0x7EC422: test    ecx, ecx
0x7EC424: mov     byte ptr [esp+2Ch+var_4], 1
0x7EC429: jz      short loc_7EC441
0x7EC42B: add     dword ptr [ecx+5Ch], 0FFFFFFFFh
0x7EC42F: cmp     dword ptr [ecx+5Ch], 0
0x7EC433: lea     eax, [ecx+5Ch]
0x7EC436: jnz     short loc_7EC43D
0x7EC438: call    sub_772560
0x7EC43D: mov     eax, [esp+2Ch+a3]
0x7EC441: push    2
0x7EC443: push    3
0x7EC445: push    0
0x7EC447: push    eax
0x7EC448: call    sub_801110
0x7EC44D: mov     ecx, [esp+3Ch+a3]
0x7EC451: add     esp, 10h
0x7EC454: push    1
0x7EC456: call    sub_771640
0x7EC45B: mov     ecx, [esi+0B0h]; this
0x7EC461: mov     eax, [esp+2Ch+a3]
0x7EC465: mov     edx, [ecx+14h]
0x7EC468: push    eax; a3
0x7EC469: push    edx; a2
0x7EC46A: call    sub_760010
0x7EC46F: mov     ebx, [esi+0B0h]
0x7EC475: mov     ebp, [esi+94h]
0x7EC47B: mov     edi, [ebx+58h]
0x7EC47E: cmp     edi, ebp
0x7EC480: jz      short loc_7EC4B3
0x7EC482: test    edi, edi
0x7EC484: jz      short loc_7EC4A2
0x7EC486: lea     eax, [edi+4]
0x7EC489: push    eax; lpAddend
0x7EC48A: call    dword ptr ds:0A2807Ch
0x7EC490: test    eax, eax
0x7EC492: jnz     short loc_7EC4A2
0x7EC494: test    edi, edi
0x7EC496: jz      short loc_7EC4A2
0x7EC498: mov     edx, [edi]
0x7EC49A: mov     eax, [edx]
0x7EC49C: push    1
0x7EC49E: mov     ecx, edi
0x7EC4A0: call    eax
0x7EC4A2: test    ebp, ebp
0x7EC4A4: mov     [ebx+58h], ebp
0x7EC4A7: jz      short loc_7EC4B3
0x7EC4A9: add     ebp, 4
0x7EC4AC: push    ebp; lpAddend
0x7EC4AD: call    dword ptr ds:0A28078h
0x7EC4B3: mov     ebp, [esi+0B0h]
0x7EC4B9: mov     ebx, [esi+0A0h]
0x7EC4BF: mov     edi, [ebp+44h]
0x7EC4C2: cmp     edi, ebx
0x7EC4C4: jz      short loc_7EC4F7
0x7EC4C6: test    edi, edi
0x7EC4C8: jz      short loc_7EC4E6
0x7EC4CA: lea     ecx, [edi+4]
0x7EC4CD: push    ecx; lpAddend
0x7EC4CE: call    dword ptr ds:0A2807Ch
0x7EC4D4: test    eax, eax
0x7EC4D6: jnz     short loc_7EC4E6
0x7EC4D8: test    edi, edi
0x7EC4DA: jz      short loc_7EC4E6
0x7EC4DC: mov     edx, [edi]
0x7EC4DE: mov     eax, [edx]
0x7EC4E0: push    1
0x7EC4E2: mov     ecx, edi
0x7EC4E4: call    eax
0x7EC4E6: test    ebx, ebx
0x7EC4E8: mov     [ebp+44h], ebx
0x7EC4EB: jz      short loc_7EC4F7
0x7EC4ED: add     ebx, 4
0x7EC4F0: push    ebx; lpAddend
0x7EC4F1: call    dword ptr ds:0A28078h
0x7EC4F7: mov     edi, [esi+0B0h]
0x7EC4FD: cmp     dword ptr [edi+30h], 0
0x7EC501: jnz     short loc_7EC50B
0x7EC503: call    sub_772DF0
0x7EC508: mov     [edi+30h], eax
0x7EC50B: mov     ecx, [edi+30h]
0x7EC50E: push    0
0x7EC510: push    0
0x7EC512: push    7
0x7EC514: call    sub_772CD0
0x7EC519: mov     edi, [esi+0B0h]
0x7EC51F: cmp     dword ptr [edi+30h], 0
0x7EC523: jnz     short loc_7EC52D
0x7EC525: call    sub_772DF0
0x7EC52A: mov     [edi+30h], eax
0x7EC52D: mov     ecx, [edi+30h]
0x7EC530: push    0
0x7EC532: push    0
0x7EC534: push    0Eh
0x7EC536: call    sub_772CD0
0x7EC53B: mov     edi, [esi+0B0h]
0x7EC541: cmp     dword ptr [edi+30h], 0
0x7EC545: jnz     short loc_7EC54F
0x7EC547: call    sub_772DF0
0x7EC54C: mov     [edi+30h], eax
0x7EC54F: mov     ecx, [edi+30h]
0x7EC552: push    0
0x7EC554: push    0
0x7EC556: push    1Bh
0x7EC558: call    sub_772CD0
0x7EC55D: mov     edi, [esi+0B0h]
0x7EC563: cmp     dword ptr [edi+30h], 0
0x7EC567: jnz     short loc_7EC571
0x7EC569: call    sub_772DF0
0x7EC56E: mov     [edi+30h], eax
0x7EC571: mov     ecx, [edi+30h]
0x7EC574: push    0
0x7EC576: push    0
0x7EC578: push    0Fh
0x7EC57A: call    sub_772CD0
0x7EC57F: mov     esi, [esi+0B0h]
0x7EC585: cmp     dword ptr [esi+30h], 0
0x7EC589: jnz     short loc_7EC593
0x7EC58B: call    sub_772DF0
0x7EC590: mov     [esi+30h], eax
0x7EC593: mov     ecx, [esi+30h]
0x7EC596: push    0
0x7EC598: push    7
0x7EC59A: push    0A8h ; '¨'
0x7EC59F: call    sub_772CD0
0x7EC5A4: mov     eax, [esp+2Ch+a3]
0x7EC5A8: test    eax, eax
0x7EC5AA: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x7EC5B2: jz      short loc_7EC5C7
0x7EC5B4: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x7EC5B8: mov     ecx, eax
0x7EC5BA: add     eax, 5Ch ; '\'
0x7EC5BD: cmp     dword ptr [eax], 0
0x7EC5C0: jnz     short loc_7EC5C7
0x7EC5C2: call    sub_772560
0x7EC5C7: mov     al, 1
0x7EC5C9: mov     ecx, dword ptr [esp+2Ch+var_C]
0x7EC5CD: mov     large fs:0, ecx
0x7EC5D4: pop     ecx
0x7EC5D5: pop     edi
0x7EC5D6: pop     esi
0x7EC5D7: pop     ebp
0x7EC5D8: pop     ebx
0x7EC5D9: add     esp, 18h
0x7EC5DC: retn
