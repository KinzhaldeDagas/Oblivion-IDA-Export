0x81B120: push    0FFFFFFFFh
0x81B122: push    offset SEH_81B120
0x81B127: mov     eax, large fs:0
0x81B12D: push    eax
0x81B12E: sub     esp, 0Ch
0x81B131: push    ebx
0x81B132: push    ebp
0x81B133: push    esi
0x81B134: push    edi
0x81B135: mov     eax, ds:0B30AACh
0x81B13A: xor     eax, esp
0x81B13C: push    eax
0x81B13D: lea     eax, [esp+2Ch+var_C]
0x81B141: mov     large fs:0, eax
0x81B147: xor     esi, esi
0x81B149: mov     [esp+2Ch+var_14], esi
0x81B14D: xor     edi, edi
0x81B14F: mov     [esp+2Ch+var_4], esi
0x81B153: mov     [esp+2Ch+var_18], edi
0x81B157: mov     eax, ds:0B45928h
0x81B15C: test    eax, eax
0x81B15E: mov     ebx, 1
0x81B163: mov     byte ptr [esp+2Ch+var_4], bl
0x81B167: jz      short loc_81B176
0x81B169: mov     esi, eax
0x81B16B: test    esi, esi
0x81B16D: mov     [esp+2Ch+var_14], esi
0x81B171: jz      short loc_81B176
0x81B173: add     [esi+60h], ebx
0x81B176: mov     eax, [esi+18h]
0x81B179: cmp     eax, ebx
0x81B17B: jnb     short loc_81B1D3
0x81B17D: lea     eax, [esp+2Ch+var_10]
0x81B181: push    eax
0x81B182: call    sub_772630
0x81B187: add     esp, 4
0x81B18A: mov     eax, [eax]
0x81B18C: test    eax, eax
0x81B18E: jz      short loc_81B199
0x81B190: mov     edi, eax
0x81B192: add     [edi+5Ch], ebx
0x81B195: mov     [esp+2Ch+var_18], edi
0x81B199: mov     eax, [esp+2Ch+var_10]
0x81B19D: test    eax, eax
0x81B19F: mov     byte ptr [esp+2Ch+var_4], 1
0x81B1A4: jz      short loc_81B1B9
0x81B1A6: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x81B1AA: mov     ecx, eax
0x81B1AC: add     eax, 5Ch ; '\'
0x81B1AF: cmp     dword ptr [eax], 0
0x81B1B2: jnz     short loc_81B1B9
0x81B1B4: call    sub_772560
0x81B1B9: push    2
0x81B1BB: push    ebx
0x81B1BC: push    0
0x81B1BE: push    edi
0x81B1BF: call    sub_801110
0x81B1C4: mov     ecx, [esi+14h]
0x81B1C7: add     esp, 10h
0x81B1CA: push    edi; a3
0x81B1CB: push    ecx; a2
0x81B1CC: mov     ecx, esi; this
0x81B1CE: call    sub_760010
0x81B1D3: mov     eax, ds:0B452A0h
0x81B1D8: mov     ebp, [esi+58h]
0x81B1DB: cmp     ebp, eax
0x81B1DD: mov     ebx, eax
0x81B1DF: jz      short loc_81B213
0x81B1E1: test    ebp, ebp
0x81B1E3: jz      short loc_81B202
0x81B1E5: lea     edx, [ebp+4]
0x81B1E8: push    edx; lpAddend
0x81B1E9: call    dword ptr ds:0A2807Ch
0x81B1EF: test    eax, eax
0x81B1F1: jnz     short loc_81B202
0x81B1F3: test    ebp, ebp
0x81B1F5: jz      short loc_81B202
0x81B1F7: mov     eax, [ebp+0]
0x81B1FA: mov     edx, [eax]
0x81B1FC: push    1
0x81B1FE: mov     ecx, ebp
0x81B200: call    edx
0x81B202: test    ebx, ebx
0x81B204: mov     [esi+58h], ebx
0x81B207: jz      short loc_81B213
0x81B209: add     ebx, 4
0x81B20C: push    ebx; lpAddend
0x81B20D: call    dword ptr ds:0A28078h
0x81B213: mov     eax, ds:0B45090h
0x81B218: mov     ebp, [esi+44h]
0x81B21B: cmp     ebp, eax
0x81B21D: mov     ebx, eax
0x81B21F: jz      short loc_81B253
0x81B221: test    ebp, ebp
0x81B223: jz      short loc_81B242
0x81B225: lea     eax, [ebp+4]
0x81B228: push    eax; lpAddend
0x81B229: call    dword ptr ds:0A2807Ch
0x81B22F: test    eax, eax
0x81B231: jnz     short loc_81B242
0x81B233: test    ebp, ebp
0x81B235: jz      short loc_81B242
0x81B237: mov     edx, [ebp+0]
0x81B23A: mov     eax, [edx]
0x81B23C: push    1
0x81B23E: mov     ecx, ebp
0x81B240: call    eax
0x81B242: test    ebx, ebx
0x81B244: mov     [esi+44h], ebx
0x81B247: jz      short loc_81B253
0x81B249: add     ebx, 4
0x81B24C: push    ebx; lpAddend
0x81B24D: call    dword ptr ds:0A28078h
0x81B253: cmp     dword ptr [esi+30h], 0
0x81B257: jnz     short loc_81B261
0x81B259: call    sub_772DF0
0x81B25E: mov     [esi+30h], eax
0x81B261: mov     ecx, [esi+30h]
0x81B264: push    0
0x81B266: mov     ebp, 1
0x81B26B: push    ebp
0x81B26C: push    1Bh
0x81B26E: call    sub_772CD0
0x81B273: cmp     dword ptr [esi+30h], 0
0x81B277: jnz     short loc_81B281
0x81B279: call    sub_772DF0
0x81B27E: mov     [esi+30h], eax
0x81B281: mov     ecx, [esi+30h]
0x81B284: push    0
0x81B286: push    2
0x81B288: push    13h
0x81B28A: call    sub_772CD0
0x81B28F: cmp     dword ptr [esi+30h], 0
0x81B293: jnz     short loc_81B29D
0x81B295: call    sub_772DF0
0x81B29A: mov     [esi+30h], eax
0x81B29D: mov     ecx, [esi+30h]
0x81B2A0: push    0
0x81B2A2: push    2
0x81B2A4: push    14h
0x81B2A6: call    sub_772CD0
0x81B2AB: cmp     dword ptr [esi+30h], 0
0x81B2AF: jnz     short loc_81B2B9
0x81B2B1: call    sub_772DF0
0x81B2B6: mov     [esi+30h], eax
0x81B2B9: mov     ecx, [esi+30h]
0x81B2BC: push    0
0x81B2BE: push    0
0x81B2C0: push    0Fh
0x81B2C2: call    sub_772CD0
0x81B2C7: cmp     dword ptr [esi+30h], 0
0x81B2CB: jnz     short loc_81B2D5
0x81B2CD: call    sub_772DF0
0x81B2D2: mov     [esi+30h], eax
0x81B2D5: mov     ecx, [esi+30h]
0x81B2D8: push    0
0x81B2DA: push    ebp
0x81B2DB: push    7
0x81B2DD: call    sub_772CD0
0x81B2E2: cmp     dword ptr [esi+30h], 0
0x81B2E6: jnz     short loc_81B2F0
0x81B2E8: call    sub_772DF0
0x81B2ED: mov     [esi+30h], eax
0x81B2F0: mov     ecx, [esi+30h]
0x81B2F3: push    0
0x81B2F5: push    3
0x81B2F7: push    17h
0x81B2F9: call    sub_772CD0
0x81B2FE: cmp     dword ptr [esi+30h], 0
0x81B302: jnz     short loc_81B30C
0x81B304: call    sub_772DF0
0x81B309: mov     [esi+30h], eax
0x81B30C: mov     ecx, [esi+30h]
0x81B30F: push    0
0x81B311: push    0
0x81B313: push    0Eh
0x81B315: call    sub_772CD0
0x81B31A: cmp     dword ptr [esi+30h], 0
0x81B31E: jnz     short loc_81B328
0x81B320: call    sub_772DF0
0x81B325: mov     [esi+30h], eax
0x81B328: mov     ecx, [esi+30h]
0x81B32B: push    0
0x81B32D: push    0
0x81B32F: push    34h ; '4'
0x81B331: call    sub_772CD0
0x81B336: cmp     esi, ds:0B45930h
0x81B33C: mov     eax, 8
0x81B341: mov     dword ptr ds:0B43EA8h, 82h ; '‚'
0x81B34B: mov     ds:0B44538h, eax
0x81B350: mov     ds:0B44BC8h, eax
0x81B355: jz      short loc_81B375
0x81B357: add     dword ptr [esi+60h], 0FFFFFFFFh
0x81B35B: jnz     short loc_81B364
0x81B35D: mov     ecx, esi
0x81B35F: call    sub_7604D0
0x81B364: mov     esi, ds:0B45930h
0x81B36A: test    esi, esi
0x81B36C: mov     [esp+2Ch+var_14], esi
0x81B370: jz      short loc_81B375
0x81B372: add     [esi+60h], ebp
0x81B375: cmp     [esi+18h], ebp
0x81B378: jnb     short loc_81B3EA
0x81B37A: lea     ecx, [esp+2Ch+var_10]
0x81B37E: push    ecx
0x81B37F: call    sub_772630
0x81B384: add     esp, 4
0x81B387: mov     ebx, eax
0x81B389: cmp     edi, [ebx]
0x81B38B: mov     byte ptr [esp+2Ch+var_4], 3
0x81B390: jz      short loc_81B3B0
0x81B392: test    edi, edi
0x81B394: jz      short loc_81B3A3
0x81B396: add     dword ptr [edi+5Ch], 0FFFFFFFFh
0x81B39A: jnz     short loc_81B3A3
0x81B39C: mov     ecx, edi
0x81B39E: call    sub_772560
0x81B3A3: mov     edi, [ebx]
0x81B3A5: test    edi, edi
0x81B3A7: mov     [esp+2Ch+var_18], edi
0x81B3AB: jz      short loc_81B3B0
0x81B3AD: add     [edi+5Ch], ebp
0x81B3B0: mov     eax, [esp+2Ch+var_10]
0x81B3B4: test    eax, eax
0x81B3B6: mov     byte ptr [esp+2Ch+var_4], 1
0x81B3BB: jz      short loc_81B3D0
0x81B3BD: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x81B3C1: mov     ecx, eax
0x81B3C3: add     eax, 5Ch ; '\'
0x81B3C6: cmp     dword ptr [eax], 0
0x81B3C9: jnz     short loc_81B3D0
0x81B3CB: call    sub_772560
0x81B3D0: push    2
0x81B3D2: push    ebp
0x81B3D3: push    0
0x81B3D5: push    edi
0x81B3D6: call    sub_801110
0x81B3DB: mov     edx, [esi+14h]
0x81B3DE: add     esp, 10h
0x81B3E1: push    edi; a3
0x81B3E2: push    edx; a2
0x81B3E3: mov     ecx, esi; this
0x81B3E5: call    sub_760010
0x81B3EA: mov     eax, ds:0B4531Ch
0x81B3EF: mov     ebp, [esi+58h]
0x81B3F2: cmp     ebp, eax
0x81B3F4: mov     ebx, eax
0x81B3F6: jz      short loc_81B42A
0x81B3F8: test    ebp, ebp
0x81B3FA: jz      short loc_81B419
0x81B3FC: lea     eax, [ebp+4]
0x81B3FF: push    eax; lpAddend
0x81B400: call    dword ptr ds:0A2807Ch
0x81B406: test    eax, eax
0x81B408: jnz     short loc_81B419
0x81B40A: test    ebp, ebp
0x81B40C: jz      short loc_81B419
0x81B40E: mov     edx, [ebp+0]
0x81B411: mov     eax, [edx]
0x81B413: push    1
0x81B415: mov     ecx, ebp
0x81B417: call    eax
0x81B419: test    ebx, ebx
0x81B41B: mov     [esi+58h], ebx
0x81B41E: jz      short loc_81B42A
0x81B420: add     ebx, 4
0x81B423: push    ebx; lpAddend
0x81B424: call    dword ptr ds:0A28078h
0x81B42A: mov     eax, ds:0B45090h
0x81B42F: mov     ebp, [esi+44h]
0x81B432: cmp     ebp, eax
0x81B434: mov     ebx, eax
0x81B436: jz      short loc_81B46A
0x81B438: test    ebp, ebp
0x81B43A: jz      short loc_81B459
0x81B43C: lea     ecx, [ebp+4]
0x81B43F: push    ecx; lpAddend
0x81B440: call    dword ptr ds:0A2807Ch
0x81B446: test    eax, eax
0x81B448: jnz     short loc_81B459
0x81B44A: test    ebp, ebp
0x81B44C: jz      short loc_81B459
0x81B44E: mov     edx, [ebp+0]
0x81B451: mov     eax, [edx]
0x81B453: push    1
0x81B455: mov     ecx, ebp
0x81B457: call    eax
0x81B459: test    ebx, ebx
0x81B45B: mov     [esi+44h], ebx
0x81B45E: jz      short loc_81B46A
0x81B460: add     ebx, 4
0x81B463: push    ebx; lpAddend
0x81B464: call    dword ptr ds:0A28078h
0x81B46A: cmp     dword ptr [esi+30h], 0
0x81B46E: jnz     short loc_81B478
0x81B470: call    sub_772DF0
0x81B475: mov     [esi+30h], eax
0x81B478: mov     ecx, [esi+30h]
0x81B47B: push    0
0x81B47D: push    1
0x81B47F: push    1Bh
0x81B481: call    sub_772CD0
0x81B486: cmp     dword ptr [esi+30h], 0
0x81B48A: jnz     short loc_81B494
0x81B48C: call    sub_772DF0
0x81B491: mov     [esi+30h], eax
0x81B494: mov     ecx, [esi+30h]
0x81B497: push    0
0x81B499: push    2
0x81B49B: push    13h
0x81B49D: call    sub_772CD0
0x81B4A2: cmp     dword ptr [esi+30h], 0
0x81B4A6: jnz     short loc_81B4B0
0x81B4A8: call    sub_772DF0
0x81B4AD: mov     [esi+30h], eax
0x81B4B0: mov     ecx, [esi+30h]
0x81B4B3: push    0
0x81B4B5: push    2
0x81B4B7: push    14h
0x81B4B9: call    sub_772CD0
0x81B4BE: cmp     dword ptr [esi+30h], 0
0x81B4C2: jnz     short loc_81B4CC
0x81B4C4: call    sub_772DF0
0x81B4C9: mov     [esi+30h], eax
0x81B4CC: mov     ecx, [esi+30h]
0x81B4CF: push    0
0x81B4D1: push    0
0x81B4D3: push    0Fh
0x81B4D5: call    sub_772CD0
0x81B4DA: cmp     dword ptr [esi+30h], 0
0x81B4DE: jnz     short loc_81B4E8
0x81B4E0: call    sub_772DF0
0x81B4E5: mov     [esi+30h], eax
0x81B4E8: mov     ecx, [esi+30h]
0x81B4EB: push    0
0x81B4ED: push    1
0x81B4EF: push    7
0x81B4F1: call    sub_772CD0
0x81B4F6: cmp     dword ptr [esi+30h], 0
0x81B4FA: jnz     short loc_81B504
0x81B4FC: call    sub_772DF0
0x81B501: mov     [esi+30h], eax
0x81B504: mov     ecx, [esi+30h]
0x81B507: push    0
0x81B509: push    3
0x81B50B: push    17h
0x81B50D: call    sub_772CD0
0x81B512: cmp     dword ptr [esi+30h], 0
0x81B516: jnz     short loc_81B520
0x81B518: call    sub_772DF0
0x81B51D: mov     [esi+30h], eax
0x81B520: mov     ecx, [esi+30h]
0x81B523: push    0
0x81B525: push    0
0x81B527: push    0Eh
0x81B529: call    sub_772CD0
0x81B52E: cmp     dword ptr [esi+30h], 0
0x81B532: jnz     short loc_81B53C
0x81B534: call    sub_772DF0
0x81B539: mov     [esi+30h], eax
0x81B53C: mov     ecx, [esi+30h]
0x81B53F: push    0
0x81B541: push    0
0x81B543: push    34h ; '4'
0x81B545: call    sub_772CD0
0x81B54A: mov     eax, 8
0x81B54F: or      ebx, 0FFFFFFFFh
0x81B552: cmp     esi, ds:0B4592Ch
0x81B558: mov     dword ptr ds:0B43EB0h, 40808h
0x81B562: mov     ds:0B44540h, eax
0x81B567: mov     ds:0B44BD0h, eax
0x81B56C: jz      short loc_81B58C
0x81B56E: add     [esi+60h], ebx
0x81B571: jnz     short loc_81B57A
0x81B573: mov     ecx, esi
0x81B575: call    sub_7604D0
0x81B57A: mov     esi, ds:0B4592Ch
0x81B580: test    esi, esi
0x81B582: mov     [esp+2Ch+var_14], esi
0x81B586: jz      short loc_81B58C
0x81B588: add     dword ptr [esi+60h], 1
0x81B58C: mov     eax, [esi+18h]
0x81B58F: cmp     eax, 4
0x81B592: jnb     loc_81B78A
0x81B598: lea     ecx, [esp+2Ch+var_10]
0x81B59C: push    ecx
0x81B59D: call    sub_772630
0x81B5A2: add     esp, 4
0x81B5A5: mov     ebp, eax
0x81B5A7: cmp     edi, [ebp+0]
0x81B5AA: mov     byte ptr [esp+2Ch+var_4], 4
0x81B5AF: jz      short loc_81B5D0
0x81B5B1: test    edi, edi
0x81B5B3: jz      short loc_81B5C1
0x81B5B5: add     [edi+5Ch], ebx
0x81B5B8: jnz     short loc_81B5C1
0x81B5BA: mov     ecx, edi
0x81B5BC: call    sub_772560
0x81B5C1: mov     edi, [ebp+0]
0x81B5C4: test    edi, edi
0x81B5C6: mov     [esp+2Ch+var_18], edi
0x81B5CA: jz      short loc_81B5D0
0x81B5CC: add     dword ptr [edi+5Ch], 1
0x81B5D0: mov     eax, [esp+2Ch+var_10]
0x81B5D4: test    eax, eax
0x81B5D6: mov     byte ptr [esp+2Ch+var_4], 1
0x81B5DB: jz      short loc_81B5EF
0x81B5DD: add     [eax+5Ch], ebx
0x81B5E0: mov     ecx, eax
0x81B5E2: add     eax, 5Ch ; '\'
0x81B5E5: cmp     dword ptr [eax], 0
0x81B5E8: jnz     short loc_81B5EF
0x81B5EA: call    sub_772560
0x81B5EF: push    2
0x81B5F1: push    1
0x81B5F3: push    0
0x81B5F5: push    edi
0x81B5F6: call    sub_801110
0x81B5FB: mov     edx, [esi+14h]
0x81B5FE: add     esp, 10h
0x81B601: push    edi; a3
0x81B602: push    edx; a2
0x81B603: mov     ecx, esi; this
0x81B605: call    sub_760010
0x81B60A: lea     eax, [esp+2Ch+var_10]
0x81B60E: push    eax
0x81B60F: call    sub_772630
0x81B614: add     esp, 4
0x81B617: mov     ebp, eax
0x81B619: cmp     edi, [ebp+0]
0x81B61C: mov     byte ptr [esp+2Ch+var_4], 5
0x81B621: jz      short loc_81B642
0x81B623: test    edi, edi
0x81B625: jz      short loc_81B633
0x81B627: add     [edi+5Ch], ebx
0x81B62A: jnz     short loc_81B633
0x81B62C: mov     ecx, edi
0x81B62E: call    sub_772560
0x81B633: mov     edi, [ebp+0]
0x81B636: test    edi, edi
0x81B638: mov     [esp+2Ch+var_18], edi
0x81B63C: jz      short loc_81B642
0x81B63E: add     dword ptr [edi+5Ch], 1
0x81B642: mov     eax, [esp+2Ch+var_10]
0x81B646: test    eax, eax
0x81B648: mov     byte ptr [esp+2Ch+var_4], 1
0x81B64D: jz      short loc_81B661
0x81B64F: add     [eax+5Ch], ebx
0x81B652: mov     ecx, eax
0x81B654: add     eax, 5Ch ; '\'
0x81B657: cmp     dword ptr [eax], 0
0x81B65A: jnz     short loc_81B661
0x81B65C: call    sub_772560
0x81B661: push    2
0x81B663: push    3
0x81B665: push    1
0x81B667: push    edi
0x81B668: call    sub_801110
0x81B66D: mov     ecx, ds:0B43110h
0x81B673: add     esp, 10h
0x81B676: push    ecx; a2
0x81B677: mov     ecx, edi; this
0x81B679: call    sub_76C910
0x81B67E: mov     edx, [esi+14h]
0x81B681: push    edi; a3
0x81B682: push    edx; a2
0x81B683: mov     ecx, esi; this
0x81B685: call    sub_760010
0x81B68A: lea     eax, [esp+2Ch+var_10]
0x81B68E: push    eax
0x81B68F: call    sub_772630
0x81B694: add     esp, 4
0x81B697: mov     ebp, eax
0x81B699: cmp     edi, [ebp+0]
0x81B69C: mov     byte ptr [esp+2Ch+var_4], 6
0x81B6A1: jz      short loc_81B6C2
0x81B6A3: test    edi, edi
0x81B6A5: jz      short loc_81B6B3
0x81B6A7: add     [edi+5Ch], ebx
0x81B6AA: jnz     short loc_81B6B3
0x81B6AC: mov     ecx, edi
0x81B6AE: call    sub_772560
0x81B6B3: mov     edi, [ebp+0]
0x81B6B6: test    edi, edi
0x81B6B8: mov     [esp+2Ch+var_18], edi
0x81B6BC: jz      short loc_81B6C2
0x81B6BE: add     dword ptr [edi+5Ch], 1
0x81B6C2: mov     eax, [esp+2Ch+var_10]
0x81B6C6: test    eax, eax
0x81B6C8: mov     byte ptr [esp+2Ch+var_4], 1
0x81B6CD: jz      short loc_81B6E1
0x81B6CF: add     [eax+5Ch], ebx
0x81B6D2: mov     ecx, eax
0x81B6D4: add     eax, 5Ch ; '\'
0x81B6D7: cmp     dword ptr [eax], 0
0x81B6DA: jnz     short loc_81B6E1
0x81B6DC: call    sub_772560
0x81B6E1: push    2
0x81B6E3: push    3
0x81B6E5: push    2
0x81B6E7: push    edi
0x81B6E8: call    sub_801110
0x81B6ED: mov     ecx, ds:0B430D4h
0x81B6F3: add     esp, 10h
0x81B6F6: push    ecx; a2
0x81B6F7: mov     ecx, edi; this
0x81B6F9: call    sub_76C910
0x81B6FE: mov     edx, [esi+14h]
0x81B701: push    edi; a3
0x81B702: push    edx; a2
0x81B703: mov     ecx, esi; this
0x81B705: call    sub_760010
0x81B70A: lea     eax, [esp+2Ch+var_10]
0x81B70E: push    eax
0x81B70F: call    sub_772630
0x81B714: add     esp, 4
0x81B717: mov     ebp, eax
0x81B719: cmp     edi, [ebp+0]
0x81B71C: mov     byte ptr [esp+2Ch+var_4], 7
0x81B721: jz      short loc_81B742
0x81B723: test    edi, edi
0x81B725: jz      short loc_81B733
0x81B727: add     [edi+5Ch], ebx
0x81B72A: jnz     short loc_81B733
0x81B72C: mov     ecx, edi
0x81B72E: call    sub_772560
0x81B733: mov     edi, [ebp+0]
0x81B736: test    edi, edi
0x81B738: mov     [esp+2Ch+var_18], edi
0x81B73C: jz      short loc_81B742
0x81B73E: add     dword ptr [edi+5Ch], 1
0x81B742: mov     eax, [esp+2Ch+var_10]
0x81B746: test    eax, eax
0x81B748: mov     byte ptr [esp+2Ch+var_4], 1
0x81B74D: jz      short loc_81B761
0x81B74F: add     [eax+5Ch], ebx
0x81B752: mov     ecx, eax
0x81B754: add     eax, 5Ch ; '\'
0x81B757: cmp     dword ptr [eax], 0
0x81B75A: jnz     short loc_81B761
0x81B75C: call    sub_772560
0x81B761: push    2
0x81B763: push    1
0x81B765: push    3
0x81B767: push    edi
0x81B768: call    sub_801110
0x81B76D: mov     ecx, ds:0B430ECh
0x81B773: add     esp, 10h
0x81B776: push    ecx; a2
0x81B777: mov     ecx, edi; this
0x81B779: call    sub_76C910
0x81B77E: mov     edx, [esi+14h]
0x81B781: push    edi; a3
0x81B782: push    edx; a2
0x81B783: mov     ecx, esi; this
0x81B785: call    sub_760010
0x81B78A: mov     eax, ds:0B4529Ch
0x81B78F: mov     ebp, [esi+58h]
0x81B792: cmp     ebp, eax
0x81B794: mov     ebx, eax
0x81B796: jz      short loc_81B7CA
0x81B798: test    ebp, ebp
0x81B79A: jz      short loc_81B7B9
0x81B79C: lea     eax, [ebp+4]
0x81B79F: push    eax; lpAddend
0x81B7A0: call    dword ptr ds:0A2807Ch
0x81B7A6: test    eax, eax
0x81B7A8: jnz     short loc_81B7B9
0x81B7AA: test    ebp, ebp
0x81B7AC: jz      short loc_81B7B9
0x81B7AE: mov     edx, [ebp+0]
0x81B7B1: mov     eax, [edx]
0x81B7B3: push    1
0x81B7B5: mov     ecx, ebp
0x81B7B7: call    eax
0x81B7B9: test    ebx, ebx
0x81B7BB: mov     [esi+58h], ebx
0x81B7BE: jz      short loc_81B7CA
0x81B7C0: add     ebx, 4
0x81B7C3: push    ebx; lpAddend
0x81B7C4: call    dword ptr ds:0A28078h
0x81B7CA: mov     eax, ds:0B4508Ch
0x81B7CF: mov     ebp, [esi+44h]
0x81B7D2: cmp     ebp, eax
0x81B7D4: mov     ebx, eax
0x81B7D6: jz      short loc_81B80A
0x81B7D8: test    ebp, ebp
0x81B7DA: jz      short loc_81B7F9
0x81B7DC: lea     ecx, [ebp+4]
0x81B7DF: push    ecx; lpAddend
0x81B7E0: call    dword ptr ds:0A2807Ch
0x81B7E6: test    eax, eax
0x81B7E8: jnz     short loc_81B7F9
0x81B7EA: test    ebp, ebp
0x81B7EC: jz      short loc_81B7F9
0x81B7EE: mov     edx, [ebp+0]
0x81B7F1: mov     eax, [edx]
0x81B7F3: push    1
0x81B7F5: mov     ecx, ebp
0x81B7F7: call    eax
0x81B7F9: test    ebx, ebx
0x81B7FB: mov     [esi+44h], ebx
0x81B7FE: jz      short loc_81B80A
0x81B800: add     ebx, 4
0x81B803: push    ebx; lpAddend
0x81B804: call    dword ptr ds:0A28078h
0x81B80A: cmp     dword ptr [esi+30h], 0
0x81B80E: jnz     short loc_81B818
0x81B810: call    sub_772DF0
0x81B815: mov     [esi+30h], eax
0x81B818: mov     ecx, [esi+30h]
0x81B81B: push    0
0x81B81D: push    1
0x81B81F: push    1Bh
0x81B821: call    sub_772CD0
0x81B826: cmp     dword ptr [esi+30h], 0
0x81B82A: jnz     short loc_81B834
0x81B82C: call    sub_772DF0
0x81B831: mov     [esi+30h], eax
0x81B834: mov     ecx, [esi+30h]
0x81B837: push    0
0x81B839: push    2
0x81B83B: push    13h
0x81B83D: call    sub_772CD0
0x81B842: cmp     dword ptr [esi+30h], 0
0x81B846: jnz     short loc_81B850
0x81B848: call    sub_772DF0
0x81B84D: mov     [esi+30h], eax
0x81B850: mov     ecx, [esi+30h]
0x81B853: push    0
0x81B855: push    2
0x81B857: push    14h
0x81B859: call    sub_772CD0
0x81B85E: cmp     dword ptr [esi+30h], 0
0x81B862: jnz     short loc_81B86C
0x81B864: call    sub_772DF0
0x81B869: mov     [esi+30h], eax
0x81B86C: mov     ecx, [esi+30h]
0x81B86F: push    0
0x81B871: push    0
0x81B873: push    0Fh
0x81B875: call    sub_772CD0
0x81B87A: cmp     dword ptr [esi+30h], 0
0x81B87E: jnz     short loc_81B888
0x81B880: call    sub_772DF0
0x81B885: mov     [esi+30h], eax
0x81B888: mov     ecx, [esi+30h]
0x81B88B: push    0
0x81B88D: push    1
0x81B88F: push    7
0x81B891: call    sub_772CD0
0x81B896: cmp     dword ptr [esi+30h], 0
0x81B89A: jnz     short loc_81B8A4
0x81B89C: call    sub_772DF0
0x81B8A1: mov     [esi+30h], eax
0x81B8A4: mov     ecx, [esi+30h]
0x81B8A7: push    0
0x81B8A9: push    3
0x81B8AB: push    17h
0x81B8AD: call    sub_772CD0
0x81B8B2: cmp     dword ptr [esi+30h], 0
0x81B8B6: jnz     short loc_81B8C0
0x81B8B8: call    sub_772DF0
0x81B8BD: mov     [esi+30h], eax
0x81B8C0: mov     ecx, [esi+30h]
0x81B8C3: push    0
0x81B8C5: push    0
0x81B8C7: push    0Eh
0x81B8C9: call    sub_772CD0
0x81B8CE: cmp     dword ptr [esi+30h], 0
0x81B8D2: jnz     short loc_81B8DC
0x81B8D4: call    sub_772DF0
0x81B8D9: mov     [esi+30h], eax
0x81B8DC: mov     ecx, [esi+30h]
0x81B8DF: push    0
0x81B8E1: push    0
0x81B8E3: push    34h ; '4'
0x81B8E5: call    sub_772CD0
0x81B8EA: mov     eax, 8
0x81B8EF: or      ebx, 0FFFFFFFFh
0x81B8F2: cmp     esi, ds:0B45934h
0x81B8F8: mov     dword ptr ds:0B43EACh, 802h
0x81B902: mov     ds:0B4453Ch, eax
0x81B907: mov     ds:0B44BCCh, eax
0x81B90C: jz      short loc_81B92C
0x81B90E: add     [esi+60h], ebx
0x81B911: jnz     short loc_81B91A
0x81B913: mov     ecx, esi
0x81B915: call    sub_7604D0
0x81B91A: mov     esi, ds:0B45934h
0x81B920: test    esi, esi
0x81B922: mov     [esp+2Ch+var_14], esi
0x81B926: jz      short loc_81B92C
0x81B928: add     dword ptr [esi+60h], 1
0x81B92C: cmp     dword ptr [esi+18h], 4
0x81B930: jnb     loc_81BB28
0x81B936: lea     ecx, [esp+2Ch+var_10]
0x81B93A: push    ecx
0x81B93B: call    sub_772630
0x81B940: add     esp, 4
0x81B943: mov     ebp, eax
0x81B945: cmp     edi, [ebp+0]
0x81B948: mov     byte ptr [esp+2Ch+var_4], 8
0x81B94D: jz      short loc_81B96E
0x81B94F: test    edi, edi
0x81B951: jz      short loc_81B95F
0x81B953: add     [edi+5Ch], ebx
0x81B956: jnz     short loc_81B95F
0x81B958: mov     ecx, edi
0x81B95A: call    sub_772560
0x81B95F: mov     edi, [ebp+0]
0x81B962: test    edi, edi
0x81B964: mov     [esp+2Ch+var_18], edi
0x81B968: jz      short loc_81B96E
0x81B96A: add     dword ptr [edi+5Ch], 1
0x81B96E: mov     eax, [esp+2Ch+var_10]
0x81B972: test    eax, eax
0x81B974: mov     byte ptr [esp+2Ch+var_4], 1
0x81B979: jz      short loc_81B98D
0x81B97B: add     [eax+5Ch], ebx
0x81B97E: mov     ecx, eax
0x81B980: add     eax, 5Ch ; '\'
0x81B983: cmp     dword ptr [eax], 0
0x81B986: jnz     short loc_81B98D
0x81B988: call    sub_772560
0x81B98D: push    2
0x81B98F: push    1
0x81B991: push    0
0x81B993: push    edi
0x81B994: call    sub_801110
0x81B999: mov     edx, [esi+14h]
0x81B99C: add     esp, 10h
0x81B99F: push    edi; a3
0x81B9A0: push    edx; a2
0x81B9A1: mov     ecx, esi; this
0x81B9A3: call    sub_760010
0x81B9A8: lea     eax, [esp+2Ch+var_10]
0x81B9AC: push    eax
0x81B9AD: call    sub_772630
0x81B9B2: add     esp, 4
0x81B9B5: mov     ebp, eax
0x81B9B7: cmp     edi, [ebp+0]
0x81B9BA: mov     byte ptr [esp+2Ch+var_4], 9
0x81B9BF: jz      short loc_81B9E0
0x81B9C1: test    edi, edi
0x81B9C3: jz      short loc_81B9D1
0x81B9C5: add     [edi+5Ch], ebx
0x81B9C8: jnz     short loc_81B9D1
0x81B9CA: mov     ecx, edi
0x81B9CC: call    sub_772560
0x81B9D1: mov     edi, [ebp+0]
0x81B9D4: test    edi, edi
0x81B9D6: mov     [esp+2Ch+var_18], edi
0x81B9DA: jz      short loc_81B9E0
0x81B9DC: add     dword ptr [edi+5Ch], 1
0x81B9E0: mov     eax, [esp+2Ch+var_10]
0x81B9E4: test    eax, eax
0x81B9E6: mov     byte ptr [esp+2Ch+var_4], 1
0x81B9EB: jz      short loc_81B9FF
0x81B9ED: add     [eax+5Ch], ebx
0x81B9F0: mov     ecx, eax
0x81B9F2: add     eax, 5Ch ; '\'
0x81B9F5: cmp     dword ptr [eax], 0
0x81B9F8: jnz     short loc_81B9FF
0x81B9FA: call    sub_772560
0x81B9FF: push    2
0x81BA01: push    3
0x81BA03: push    1
0x81BA05: push    edi
0x81BA06: call    sub_801110
0x81BA0B: mov     ecx, ds:0B43110h
0x81BA11: add     esp, 10h
0x81BA14: push    ecx; a2
0x81BA15: mov     ecx, edi; this
0x81BA17: call    sub_76C910
0x81BA1C: mov     edx, [esi+14h]
0x81BA1F: push    edi; a3
0x81BA20: push    edx; a2
0x81BA21: mov     ecx, esi; this
0x81BA23: call    sub_760010
0x81BA28: lea     eax, [esp+2Ch+var_10]
0x81BA2C: push    eax
0x81BA2D: call    sub_772630
0x81BA32: add     esp, 4
0x81BA35: mov     ebp, eax
0x81BA37: cmp     edi, [ebp+0]
0x81BA3A: mov     byte ptr [esp+2Ch+var_4], 0Ah
0x81BA3F: jz      short loc_81BA60
0x81BA41: test    edi, edi
0x81BA43: jz      short loc_81BA51
0x81BA45: add     [edi+5Ch], ebx
0x81BA48: jnz     short loc_81BA51
0x81BA4A: mov     ecx, edi
0x81BA4C: call    sub_772560
0x81BA51: mov     edi, [ebp+0]
0x81BA54: test    edi, edi
0x81BA56: mov     [esp+2Ch+var_18], edi
0x81BA5A: jz      short loc_81BA60
0x81BA5C: add     dword ptr [edi+5Ch], 1
0x81BA60: mov     eax, [esp+2Ch+var_10]
0x81BA64: test    eax, eax
0x81BA66: mov     byte ptr [esp+2Ch+var_4], 1
0x81BA6B: jz      short loc_81BA7F
0x81BA6D: add     [eax+5Ch], ebx
0x81BA70: mov     ecx, eax
0x81BA72: add     eax, 5Ch ; '\'
0x81BA75: cmp     dword ptr [eax], 0
0x81BA78: jnz     short loc_81BA7F
0x81BA7A: call    sub_772560
0x81BA7F: push    2
0x81BA81: push    3
0x81BA83: push    2
0x81BA85: push    edi
0x81BA86: call    sub_801110
0x81BA8B: mov     ecx, ds:0B430D4h
0x81BA91: add     esp, 10h
0x81BA94: push    ecx; a2
0x81BA95: mov     ecx, edi; this
0x81BA97: call    sub_76C910
0x81BA9C: mov     edx, [esi+14h]
0x81BA9F: push    edi; a3
0x81BAA0: push    edx; a2
0x81BAA1: mov     ecx, esi; this
0x81BAA3: call    sub_760010
0x81BAA8: lea     eax, [esp+2Ch+var_10]
0x81BAAC: push    eax
0x81BAAD: call    sub_772630
0x81BAB2: add     esp, 4
0x81BAB5: mov     ebp, eax
0x81BAB7: cmp     edi, [ebp+0]
0x81BABA: mov     byte ptr [esp+2Ch+var_4], 0Bh
0x81BABF: jz      short loc_81BAE0
0x81BAC1: test    edi, edi
0x81BAC3: jz      short loc_81BAD1
0x81BAC5: add     [edi+5Ch], ebx
0x81BAC8: jnz     short loc_81BAD1
0x81BACA: mov     ecx, edi
0x81BACC: call    sub_772560
0x81BAD1: mov     edi, [ebp+0]
0x81BAD4: test    edi, edi
0x81BAD6: mov     [esp+2Ch+var_18], edi
0x81BADA: jz      short loc_81BAE0
0x81BADC: add     dword ptr [edi+5Ch], 1
0x81BAE0: mov     eax, [esp+2Ch+var_10]
0x81BAE4: test    eax, eax
0x81BAE6: mov     byte ptr [esp+2Ch+var_4], 1
0x81BAEB: jz      short loc_81BAFF
0x81BAED: add     [eax+5Ch], ebx
0x81BAF0: mov     ecx, eax
0x81BAF2: add     eax, 5Ch ; '\'
0x81BAF5: cmp     dword ptr [eax], 0
0x81BAF8: jnz     short loc_81BAFF
0x81BAFA: call    sub_772560
0x81BAFF: push    2
0x81BB01: push    1
0x81BB03: push    3
0x81BB05: push    edi
0x81BB06: call    sub_801110
0x81BB0B: mov     ecx, ds:0B430ECh
0x81BB11: add     esp, 10h
0x81BB14: push    ecx; a2
0x81BB15: mov     ecx, edi; this
0x81BB17: call    sub_76C910
0x81BB1C: mov     edx, [esi+14h]
0x81BB1F: push    edi; a3
0x81BB20: push    edx; a2
0x81BB21: mov     ecx, esi; this
0x81BB23: call    sub_760010
0x81BB28: mov     eax, ds:0B45318h
0x81BB2D: mov     ebp, [esi+58h]
0x81BB30: cmp     ebp, eax
0x81BB32: mov     ebx, eax
0x81BB34: jz      short loc_81BB68
0x81BB36: test    ebp, ebp
0x81BB38: jz      short loc_81BB57
0x81BB3A: lea     eax, [ebp+4]
0x81BB3D: push    eax; lpAddend
0x81BB3E: call    dword ptr ds:0A2807Ch
0x81BB44: test    eax, eax
0x81BB46: jnz     short loc_81BB57
0x81BB48: test    ebp, ebp
0x81BB4A: jz      short loc_81BB57
0x81BB4C: mov     edx, [ebp+0]
0x81BB4F: mov     eax, [edx]
0x81BB51: push    1
0x81BB53: mov     ecx, ebp
0x81BB55: call    eax
0x81BB57: test    ebx, ebx
0x81BB59: mov     [esi+58h], ebx
0x81BB5C: jz      short loc_81BB68
0x81BB5E: add     ebx, 4
0x81BB61: push    ebx; lpAddend
0x81BB62: call    dword ptr ds:0A28078h
0x81BB68: mov     eax, ds:0B4508Ch
0x81BB6D: mov     ebp, [esi+44h]
0x81BB70: cmp     ebp, eax
0x81BB72: mov     ebx, eax
0x81BB74: jz      short loc_81BBA8
0x81BB76: test    ebp, ebp
0x81BB78: jz      short loc_81BB97
0x81BB7A: lea     ecx, [ebp+4]
0x81BB7D: push    ecx; lpAddend
0x81BB7E: call    dword ptr ds:0A2807Ch
0x81BB84: test    eax, eax
0x81BB86: jnz     short loc_81BB97
0x81BB88: test    ebp, ebp
0x81BB8A: jz      short loc_81BB97
0x81BB8C: mov     edx, [ebp+0]
0x81BB8F: mov     eax, [edx]
0x81BB91: push    1
0x81BB93: mov     ecx, ebp
0x81BB95: call    eax
0x81BB97: test    ebx, ebx
0x81BB99: mov     [esi+44h], ebx
0x81BB9C: jz      short loc_81BBA8
0x81BB9E: add     ebx, 4
0x81BBA1: push    ebx; lpAddend
0x81BBA2: call    dword ptr ds:0A28078h
0x81BBA8: cmp     dword ptr [esi+30h], 0
0x81BBAC: jnz     short loc_81BBB6
0x81BBAE: call    sub_772DF0
0x81BBB3: mov     [esi+30h], eax
0x81BBB6: mov     ecx, [esi+30h]
0x81BBB9: push    0
0x81BBBB: push    1
0x81BBBD: push    1Bh
0x81BBBF: call    sub_772CD0
0x81BBC4: cmp     dword ptr [esi+30h], 0
0x81BBC8: jnz     short loc_81BBD2
0x81BBCA: call    sub_772DF0
0x81BBCF: mov     [esi+30h], eax
0x81BBD2: mov     ecx, [esi+30h]
0x81BBD5: push    0
0x81BBD7: push    2
0x81BBD9: push    13h
0x81BBDB: call    sub_772CD0
0x81BBE0: cmp     dword ptr [esi+30h], 0
0x81BBE4: jnz     short loc_81BBEE
0x81BBE6: call    sub_772DF0
0x81BBEB: mov     [esi+30h], eax
0x81BBEE: mov     ecx, [esi+30h]
0x81BBF1: push    0
0x81BBF3: push    2
0x81BBF5: push    14h
0x81BBF7: call    sub_772CD0
0x81BBFC: cmp     dword ptr [esi+30h], 0
0x81BC00: jnz     short loc_81BC0A
0x81BC02: call    sub_772DF0
0x81BC07: mov     [esi+30h], eax
0x81BC0A: mov     ecx, [esi+30h]
0x81BC0D: push    0
0x81BC0F: push    0
0x81BC11: push    0Fh
0x81BC13: call    sub_772CD0
0x81BC18: cmp     dword ptr [esi+30h], 0
0x81BC1C: jnz     short loc_81BC26
0x81BC1E: call    sub_772DF0
0x81BC23: mov     [esi+30h], eax
0x81BC26: mov     ecx, [esi+30h]
0x81BC29: push    0
0x81BC2B: push    1
0x81BC2D: push    7
0x81BC2F: call    sub_772CD0
0x81BC34: cmp     dword ptr [esi+30h], 0
0x81BC38: jnz     short loc_81BC42
0x81BC3A: call    sub_772DF0
0x81BC3F: mov     [esi+30h], eax
0x81BC42: mov     ecx, [esi+30h]
0x81BC45: push    0
0x81BC47: push    3
0x81BC49: push    17h
0x81BC4B: call    sub_772CD0
0x81BC50: cmp     dword ptr [esi+30h], 0
0x81BC54: jnz     short loc_81BC5E
0x81BC56: call    sub_772DF0
0x81BC5B: mov     [esi+30h], eax
0x81BC5E: mov     ecx, [esi+30h]
0x81BC61: push    0
0x81BC63: push    0
0x81BC65: push    0Eh
0x81BC67: call    sub_772CD0
0x81BC6C: cmp     dword ptr [esi+30h], 0
0x81BC70: jnz     short loc_81BC7A
0x81BC72: call    sub_772DF0
0x81BC77: mov     [esi+30h], eax
0x81BC7A: mov     ecx, [esi+30h]
0x81BC7D: push    0
0x81BC7F: push    0
0x81BC81: push    34h ; '4'
0x81BC83: call    sub_772CD0
0x81BC88: mov     eax, 8
0x81BC8D: or      ebx, 0FFFFFFFFh
0x81BC90: test    edi, edi
0x81BC92: mov     dword ptr ds:0B43EB4h, 40808h
0x81BC9C: mov     ds:0B44544h, eax
0x81BCA1: mov     ds:0B44BD4h, eax
0x81BCA6: mov     byte ptr [esp+2Ch+var_4], 0
0x81BCAB: jz      short loc_81BCB9
0x81BCAD: add     [edi+5Ch], ebx
0x81BCB0: jnz     short loc_81BCB9
0x81BCB2: mov     ecx, edi
0x81BCB4: call    sub_772560
0x81BCB9: add     [esi+60h], ebx
0x81BCBC: mov     [esp+2Ch+var_4], ebx
0x81BCC0: jnz     short loc_81BCC9
0x81BCC2: mov     ecx, esi
0x81BCC4: call    sub_7604D0
0x81BCC9: mov     ecx, dword ptr [esp+2Ch+var_C]
0x81BCCD: mov     large fs:0, ecx
0x81BCD4: pop     ecx
0x81BCD5: pop     edi
0x81BCD6: pop     esi
0x81BCD7: pop     ebp
0x81BCD8: pop     ebx
0x81BCD9: add     esp, 18h
0x81BCDC: retn
