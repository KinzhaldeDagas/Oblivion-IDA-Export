0x94E0A0: push    ebp
0x94E0A1: mov     ebp, esp
0x94E0A3: and     esp, 0FFFFFFF0h
0x94E0A6: sub     esp, 144h
0x94E0AC: mov     eax, [ebp+arg_4]
0x94E0AF: push    ebx
0x94E0B0: mov     ebx, [ebp+arg_0]
0x94E0B3: push    esi
0x94E0B4: push    edi
0x94E0B5: mov     edi, [ebx+0Ch]
0x94E0B8: mov     esi, ecx
0x94E0BA: lea     ecx, [esi+0C0h]
0x94E0C0: push    eax
0x94E0C1: call    sub_958600
0x94E0C6: lea     ecx, [esp+150h+var_40]
0x94E0CD: push    ecx
0x94E0CE: lea     edx, [esp+154h+var_80]
0x94E0D5: push    edx
0x94E0D6: push    ebx
0x94E0D7: mov     ecx, esi
0x94E0D9: call    sub_94D100
0x94E0DE: lea     eax, [edi+40h]
0x94E0E1: push    eax
0x94E0E2: lea     ecx, [esp+154h+var_80]
0x94E0E9: lea     ebx, [esi+50h]
0x94E0EC: push    ecx
0x94E0ED: mov     ecx, ebx
0x94E0EF: call    sub_88FCC0
0x94E0F4: lea     edx, [edi+10h]
0x94E0F7: push    edx
0x94E0F8: lea     eax, [esp+154h+var_40]
0x94E0FF: lea     ecx, [esi+40h]
0x94E102: push    eax
0x94E103: call    sub_88FCC0
0x94E108: mov     ecx, [ebp+arg_8]
0x94E10B: push    ecx
0x94E10C: mov     ecx, esi
0x94E10E: call    sub_94CF30
0x94E113: lea     eax, [edi+60h]
0x94E116: lea     ecx, [esi+90h]
0x94E11C: push    eax
0x94E11D: push    ecx
0x94E11E: lea     ecx, [esp+158h+var_D0]
0x94E125: call    sub_88FE00
0x94E12A: movaps  xmm0, xmmword ptr [edi+50h]
0x94E12E: movaps  xmm1, xmmword ptr [edi+60h]
0x94E132: movaps  xmm2, xmm0
0x94E135: shufps  xmm2, xmm0, 0C9h ; 'É'
0x94E139: movaps  xmm3, xmm1
0x94E13C: shufps  xmm3, xmm1, 0D2h ; 'Ò'
0x94E140: mulps   xmm3, xmm2
0x94E143: movaps  xmm2, xmm0
0x94E146: shufps  xmm2, xmm0, 0D2h ; 'Ò'
0x94E14A: movaps  xmm0, xmm1
0x94E14D: shufps  xmm0, xmm1, 0C9h ; 'É'
0x94E151: movaps  xmm1, xmm0
0x94E154: mulps   xmm1, xmm2
0x94E157: subps   xmm1, xmm3
0x94E15A: movaps  xmm0, xmm1
0x94E15D: mulps   xmm0, xmm1
0x94E160: movaps  xmm2, xmm0
0x94E163: shufps  xmm2, xmm0, 55h ; 'U'
0x94E167: addss   xmm2, xmm0
0x94E16B: movaps  xmm3, xmm0
0x94E16E: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x94E172: movaps  xmm0, xmm3
0x94E175: addss   xmm0, xmm2
0x94E179: movaps  [esp+150h+var_130], xmm0
0x94E17E: rsqrtss xmm2, xmm0
0x94E182: mov     [esp+150h+var_138], 40400000h
0x94E18A: movss   xmm3, [esp+150h+var_138]
0x94E190: movss   dword ptr [esp+150h+var_130], xmm2
0x94E196: movaps  xmm2, [esp+150h+var_130]
0x94E19B: mulss   xmm0, xmm2
0x94E19F: mulss   xmm0, xmm2
0x94E1A3: mov     [esp+150h+var_138], 3F000000h
0x94E1AB: movss   xmm4, [esp+150h+var_138]
0x94E1B1: movaps  xmmword ptr [esp+150h+var_110], xmm3
0x94E1B6: movaps  [esp+150h+var_120], xmm4
0x94E1BB: mulss   xmm4, xmm2
0x94E1BF: subss   xmm3, xmm0
0x94E1C3: movaps  xmm0, xmm4
0x94E1C6: mulss   xmm0, xmm3
0x94E1CA: movaps  xmm2, xmm0
0x94E1CD: shufps  xmm2, xmm0, 0
0x94E1D1: lea     edx, [esp+150h+var_E0]
0x94E1D5: push    edx
0x94E1D6: lea     eax, [esi+90h]
0x94E1DC: mulps   xmm2, xmm1
0x94E1DF: push    eax
0x94E1E0: lea     ecx, [esp+158h+var_E0]
0x94E1E4: movaps  [esp+158h+var_E0], xmm2
0x94E1E9: call    sub_88FE00
0x94E1EE: lea     eax, [edi+50h]
0x94E1F1: push    eax
0x94E1F2: lea     eax, [esi+90h]
0x94E1F8: push    eax
0x94E1F9: lea     ecx, [esp+158h+var_F0]
0x94E1FD: call    sub_88FE00
0x94E202: movaps  xmm0, xmmword ptr [edi+30h]
0x94E206: movaps  xmm1, xmmword ptr [edi+20h]
0x94E20A: movaps  xmm2, xmm0
0x94E20D: shufps  xmm2, xmm0, 0C9h ; 'É'
0x94E211: movaps  xmm3, xmm1
0x94E214: shufps  xmm3, xmm1, 0D2h ; 'Ò'
0x94E218: mulps   xmm3, xmm2
0x94E21B: movaps  xmm2, xmm0
0x94E21E: shufps  xmm2, xmm0, 0D2h ; 'Ò'
0x94E222: movaps  xmm0, xmm1
0x94E225: shufps  xmm0, xmm1, 0C9h ; 'É'
0x94E229: movaps  xmm1, xmm0
0x94E22C: mulps   xmm1, xmm2
0x94E22F: subps   xmm1, xmm3
0x94E232: movaps  xmm0, xmm1
0x94E235: mulps   xmm0, xmm1
0x94E238: movaps  xmm2, xmm0
0x94E23B: shufps  xmm2, xmm0, 55h ; 'U'
0x94E23F: addss   xmm2, xmm0
0x94E243: movaps  xmm3, xmm0
0x94E246: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x94E24A: movaps  xmm0, xmm3
0x94E24D: addss   xmm0, xmm2
0x94E251: movaps  [esp+150h+var_130], xmm0
0x94E256: rsqrtss xmm2, xmm0
0x94E25A: movss   dword ptr [esp+150h+var_130], xmm2
0x94E260: movaps  xmm2, [esp+150h+var_130]
0x94E265: mulss   xmm0, xmm2
0x94E269: mulss   xmm0, xmm2
0x94E26D: movaps  xmm3, xmm0
0x94E270: movaps  xmm0, xmmword ptr [esp+150h+var_110]
0x94E275: subss   xmm0, xmm3
0x94E279: movaps  xmm3, xmm0
0x94E27C: movaps  xmm0, [esp+150h+var_120]
0x94E281: mulss   xmm0, xmm2
0x94E285: mulss   xmm0, xmm3
0x94E289: lea     ecx, [esp+150h+var_A0]
0x94E290: push    ecx
0x94E291: movaps  xmm2, xmm0
0x94E294: lea     eax, [esi+60h]
0x94E297: shufps  xmm2, xmm0, 0
0x94E29B: mulps   xmm2, xmm1
0x94E29E: push    eax
0x94E29F: lea     ecx, [esp+158h+var_C0]
0x94E2A6: movaps  [esp+158h+var_A0], xmm2
0x94E2AE: call    sub_88FE00
0x94E2B3: lea     eax, [edi+30h]
0x94E2B6: push    eax
0x94E2B7: lea     eax, [esi+60h]
0x94E2BA: push    eax
0x94E2BB: lea     ecx, [esp+158h+var_90]
0x94E2C2: call    sub_88FE00
0x94E2C7: mov     edx, [ebp+arg_8]
0x94E2CA: mov     eax, [esi+0Ch]
0x94E2CD: push    edx
0x94E2CE: push    eax
0x94E2CF: push    0FF008000h
0x94E2D4: lea     ecx, [esp+15Ch+var_E0]
0x94E2D8: push    ecx
0x94E2D9: lea     edx, [esp+160h+var_D0]
0x94E2E0: push    edx
0x94E2E1: push    ebx
0x94E2E2: lea     ecx, [esi+0C0h]
0x94E2E8: call    sub_958750
0x94E2ED: mov     eax, [ebp+arg_8]
0x94E2F0: mov     ecx, [esi+0Ch]
0x94E2F3: push    eax
0x94E2F4: push    ecx
0x94E2F5: push    0FFh
0x94E2FA: push    0
0x94E2FC: push    0FFh
0x94E301: push    0FFh
0x94E306: call    sub_8AEB80
0x94E30B: add     esp, 10h
0x94E30E: push    eax
0x94E30F: lea     edx, [esp+15Ch+var_C0]
0x94E316: push    edx
0x94E317: lea     eax, [esp+160h+var_90]
0x94E31E: push    eax
0x94E31F: lea     eax, [esi+40h]
0x94E322: push    eax
0x94E323: lea     ecx, [esi+0C0h]
0x94E329: call    sub_958750
0x94E32E: mov     eax, [edi+70h]
0x94E331: push    ebx
0x94E332: lea     edx, [esp+154h+var_D0]
0x94E339: push    edx
0x94E33A: push    18h
0x94E33C: push    3F000000h
0x94E341: lea     ecx, [esi+0D0h]
0x94E347: push    eax
0x94E348: mov     [esp+164h+var_F4], ecx
0x94E34C: call    sub_94DA90
0x94E351: lea     edx, [esp+150h+var_B0]
0x94E358: push    edx
0x94E359: push    ebx
0x94E35A: lea     eax, [esp+158h+var_E0]
0x94E35E: mov     [esp+158h+var_138], 3E800000h
0x94E366: movss   xmm0, [esp+158h+var_138]
0x94E36C: push    eax
0x94E36D: lea     edx, [esp+15Ch+var_F0]
0x94E371: lea     ecx, [esi+280h]
0x94E377: shufps  xmm0, xmm0, 0
0x94E37B: push    edx
0x94E37C: movaps  [esp+160h+var_B0], xmm0
0x94E384: mov     [esp+160h+var_134], ecx
0x94E388: call    sub_94D6D0
0x94E38D: fld     dword ptr [edi+78h]
0x94E390: mov     eax, [edi+74h]
0x94E393: fabs
0x94E395: push    ebx
0x94E396: lea     edx, [esp+154h+var_F0]
0x94E39A: push    edx
0x94E39B: push    18h
0x94E39D: lea     ecx, [esi+160h]
0x94E3A3: push    3F000000h
0x94E3A8: fsubr   dword ptr ds:0A3F3E0h
0x94E3AE: push    ecx
0x94E3AF: mov     [esp+164h+var_138], eax
0x94E3B3: fstp    [esp+164h+var_164]
0x94E3B6: mov     [esp+164h+var_F8], ecx
0x94E3BA: call    sub_94DA90
0x94E3BF: fld     [esp+150h+var_138]
0x94E3C3: movaps  xmm1, [esp+150h+var_F0]
0x94E3C8: fabs
0x94E3CA: movaps  xmm0, xmmword ptr ds:0A965C0h
0x94E3D1: push    ebx
0x94E3D2: lea     eax, [esp+154h+var_F0]
0x94E3D6: push    eax
0x94E3D7: push    18h
0x94E3D9: push    3F000000h
0x94E3DE: fsubr   dword ptr ds:0A3F3E0h
0x94E3E4: push    ecx
0x94E3E5: add     esi, 1F0h
0x94E3EB: xorps   xmm1, xmm0
0x94E3EE: fstp    [esp+164h+var_164]
0x94E3F1: mov     ecx, esi
0x94E3F3: movaps  [esp+164h+var_F0], xmm1
0x94E3F8: call    sub_94DA90
0x94E3FD: xor     edi, edi
0x94E3FF: mov     eax, 80000000h
0x94E404: mov     dword ptr [esp+150h+var_130], edi
0x94E408: mov     dword ptr [esp+150h+var_130+4], edi
0x94E40C: mov     dword ptr [esp+150h+var_130+8], eax
0x94E410: mov     dword ptr [esp+150h+var_120], edi
0x94E414: mov     dword ptr [esp+150h+var_120+4], edi
0x94E418: push    4
0x94E41A: mov     ebx, 1
0x94E41F: lea     ecx, [esp+154h+var_130]
0x94E423: push    ebx
0x94E424: push    ecx
0x94E425: mov     dword ptr [esp+15Ch+var_120+8], eax
0x94E429: mov     [esp+15Ch+var_110], edi
0x94E42D: mov     [esp+15Ch+var_110+4], edi
0x94E431: mov     [esp+15Ch+var_110+8], eax
0x94E435: call    sub_8A6E40
0x94E43A: mov     eax, [esp+15Ch+var_110+8]
0x94E43E: and     eax, 3FFFFFFFh
0x94E443: add     esp, 0Ch
0x94E446: cmp     eax, ebx
0x94E448: mov     dword ptr [esp+150h+var_130+4], ebx
0x94E44C: jge     short loc_94E466
0x94E44E: add     eax, eax
0x94E450: cmp     eax, ebx
0x94E452: jg      short loc_94E456
0x94E454: mov     eax, ebx
0x94E456: push    4
0x94E458: push    eax
0x94E459: lea     edx, [esp+158h+var_110]
0x94E45D: push    edx
0x94E45E: call    sub_8A6E40
0x94E463: add     esp, 0Ch
0x94E466: mov     eax, dword ptr [esp+150h+var_120+8]
0x94E46A: and     eax, 3FFFFFFFh
0x94E46F: cmp     eax, 2
0x94E472: mov     [esp+150h+var_110+4], ebx
0x94E476: jge     short loc_94E494
0x94E478: add     eax, eax
0x94E47A: cmp     eax, 2
0x94E47D: jg      short loc_94E484
0x94E47F: mov     eax, 2
0x94E484: push    4
0x94E486: push    eax
0x94E487: lea     eax, [esp+158h+var_120]
0x94E48B: push    eax
0x94E48C: call    sub_8A6E40
0x94E491: add     esp, 0Ch
0x94E494: mov     ecx, dword ptr [esp+150h+var_130]
0x94E498: mov     edx, [esp+150h+var_F4]
0x94E49C: mov     ebx, [ebp+arg_8]
0x94E49F: mov     dword ptr [esp+150h+var_120+4], 2
0x94E4A7: mov     [ecx], edx
0x94E4A9: mov     eax, dword ptr [esp+150h+var_120]
0x94E4AD: mov     ecx, [esp+150h+var_F8]
0x94E4B1: mov     [eax], ecx
0x94E4B3: mov     edx, dword ptr [esp+150h+var_120]
0x94E4B7: mov     ecx, [esp+150h+var_134]
0x94E4BB: mov     [edx+4], esi
0x94E4BE: mov     eax, [esp+150h+var_110]
0x94E4C2: mov     esi, [ebp+arg_4]
0x94E4C5: mov     [eax], ecx
0x94E4C7: mov     edx, [esi]
0x94E4C9: push    ebx
0x94E4CA: push    0FFFFFF00h
0x94E4CF: lea     eax, [esp+158h+var_130]
0x94E4D3: push    eax
0x94E4D4: mov     ecx, esi
0x94E4D6: call    dword ptr [edx+24h]
0x94E4D9: mov     edx, [esi]
0x94E4DB: push    ebx
0x94E4DC: push    0FFFF0000h
0x94E4E1: lea     eax, [esp+158h+var_120]
0x94E4E5: push    eax
0x94E4E6: mov     ecx, esi
0x94E4E8: call    dword ptr [edx+24h]
0x94E4EB: mov     eax, [esi]
0x94E4ED: push    ebx
0x94E4EE: push    0FFh
0x94E4F3: push    0FFh
0x94E4F8: push    edi
0x94E4F9: push    0FFh
0x94E4FE: mov     [esp+164h+var_134], eax
0x94E502: call    sub_8AEB80
0x94E507: add     esp, 10h
0x94E50A: push    eax
0x94E50B: mov     eax, [esp+158h+var_134]
0x94E50F: lea     ecx, [esp+158h+var_110]
0x94E513: push    ecx
0x94E514: mov     ecx, esi
0x94E516: call    dword ptr [eax+24h]
0x94E519: mov     eax, [esp+150h+var_110+8]
0x94E51D: test    eax, eax
0x94E51F: mov     esi, ds:0BA9DE4h
0x94E525: mov     ebx, large fs:2Ch
0x94E52C: js      short loc_94E556
0x94E52E: mov     edx, [ebx+esi*4]
0x94E531: mov     ecx, [edx+19Ch]
0x94E537: cmp     ecx, edi
0x94E539: jnz     short loc_94E541
0x94E53B: mov     ecx, ds:0BA7D9Ch
0x94E541: and     eax, 3FFFFFFFh
0x94E546: push    14h
0x94E548: shl     eax, 2
0x94E54B: push    eax
0x94E54C: mov     eax, [esp+158h+var_110]
0x94E550: push    eax
0x94E551: call    sub_8A75D0
0x94E556: mov     eax, dword ptr [esp+150h+var_120+8]
0x94E55A: test    eax, eax
0x94E55C: js      short loc_94E586
0x94E55E: mov     ecx, [ebx+esi*4]
0x94E561: mov     ecx, [ecx+19Ch]
0x94E567: cmp     ecx, edi
0x94E569: jnz     short loc_94E571
0x94E56B: mov     ecx, ds:0BA7D9Ch
0x94E571: mov     edx, dword ptr [esp+150h+var_120]
0x94E575: and     eax, 3FFFFFFFh
0x94E57A: push    14h
0x94E57C: shl     eax, 2
0x94E57F: push    eax
0x94E580: push    edx
0x94E581: call    sub_8A75D0
0x94E586: mov     eax, dword ptr [esp+150h+var_130+8]
0x94E58A: test    eax, eax
0x94E58C: js      short loc_94E5B6
0x94E58E: mov     ecx, [ebx+esi*4]
0x94E591: mov     ecx, [ecx+19Ch]
0x94E597: cmp     ecx, edi
0x94E599: jnz     short loc_94E5A1
0x94E59B: mov     ecx, ds:0BA7D9Ch
0x94E5A1: mov     edx, dword ptr [esp+150h+var_130]
0x94E5A5: and     eax, 3FFFFFFFh
0x94E5AA: push    14h
0x94E5AC: shl     eax, 2
0x94E5AF: push    eax
0x94E5B0: push    edx
0x94E5B1: call    sub_8A75D0
0x94E5B6: pop     edi
0x94E5B7: pop     esi
0x94E5B8: pop     ebx
0x94E5B9: mov     esp, ebp
0x94E5BB: pop     ebp
0x94E5BC: retn    0Ch
