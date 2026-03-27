0x85D160: push    0FFFFFFFFh
0x85D162: push    offset SEH_85E160
0x85D167: mov     eax, large fs:0
0x85D16D: push    eax
0x85D16E: push    ebx
0x85D16F: push    ebp
0x85D170: push    esi
0x85D171: push    edi
0x85D172: mov     eax, ds:0B30AACh
0x85D177: xor     eax, esp
0x85D179: push    eax
0x85D17A: lea     eax, [esp+20h+var_C]
0x85D17E: mov     large fs:0, eax
0x85D184: mov     esi, ecx
0x85D186: mov     ebx, [esp+20h+arg_8]
0x85D18A: mov     eax, [ebx+10h]
0x85D18D: mov     edi, ds:0B477DCh
0x85D193: push    eax
0x85D194: call    sub_848C40
0x85D199: mov     ebp, [ebx+0Ch]
0x85D19C: push    ebp
0x85D19D: mov     ecx, esi
0x85D19F: call    sub_848E50
0x85D1A4: mov     ebx, [ebx+10h]
0x85D1A7: mov     ecx, [esp+20h+arg_0]
0x85D1AB: mov     eax, [esi]
0x85D1AD: mov     edx, [eax+0BCh]
0x85D1B3: push    ebx
0x85D1B4: push    ebp
0x85D1B5: push    ecx
0x85D1B6: mov     ecx, esi
0x85D1B8: call    edx
0x85D1BA: mov     eax, [edi+24h]
0x85D1BD: mov     ebx, [esp+20h+arg_C]
0x85D1C1: mov     ebp, [eax]
0x85D1C3: mov     edx, [ebx]
0x85D1C5: mov     eax, [edx+88h]
0x85D1CB: push    0
0x85D1CD: mov     ecx, ebx
0x85D1CF: mov     [esp+24h+arg_8], ebp
0x85D1D3: call    eax
0x85D1D5: mov     ebp, [ebp+4]
0x85D1D8: cmp     ebp, eax
0x85D1DA: mov     [esp+20h+arg_0], eax
0x85D1DE: jz      short loc_85D21A
0x85D1E0: test    ebp, ebp
0x85D1E2: jz      short loc_85D205
0x85D1E4: lea     ecx, [ebp+4]
0x85D1E7: push    ecx; lpAddend
0x85D1E8: call    dword ptr ds:0A2807Ch
0x85D1EE: test    eax, eax
0x85D1F0: jnz     short loc_85D201
0x85D1F2: test    ebp, ebp
0x85D1F4: jz      short loc_85D201
0x85D1F6: mov     edx, [ebp+0]
0x85D1F9: mov     eax, [edx]
0x85D1FB: push    1
0x85D1FD: mov     ecx, ebp
0x85D1FF: call    eax
0x85D201: mov     eax, [esp+20h+arg_0]
0x85D205: test    eax, eax
0x85D207: mov     ecx, [esp+20h+arg_8]
0x85D20B: mov     [ecx+4], eax
0x85D20E: jz      short loc_85D21A
0x85D210: add     eax, 4
0x85D213: push    eax; lpAddend
0x85D214: call    dword ptr ds:0A28078h
0x85D21A: mov     edx, [esp+20h+arg_8]
0x85D21E: push    ebx
0x85D21F: push    edx
0x85D220: mov     ecx, esi
0x85D222: call    sub_848FA0
0x85D227: mov     eax, [edi+24h]
0x85D22A: mov     ebp, [eax+4]
0x85D22D: push    0
0x85D22F: push    ebx
0x85D230: mov     ecx, esi
0x85D232: mov     [esp+28h+arg_8], ebp
0x85D236: call    sub_848FD0
0x85D23B: mov     ebp, [ebp+4]
0x85D23E: cmp     ebp, eax
0x85D240: mov     [esp+20h+arg_0], eax
0x85D244: jz      short loc_85D280
0x85D246: test    ebp, ebp
0x85D248: jz      short loc_85D26B
0x85D24A: lea     ecx, [ebp+4]
0x85D24D: push    ecx; lpAddend
0x85D24E: call    dword ptr ds:0A2807Ch
0x85D254: test    eax, eax
0x85D256: jnz     short loc_85D267
0x85D258: test    ebp, ebp
0x85D25A: jz      short loc_85D267
0x85D25C: mov     edx, [ebp+0]
0x85D25F: mov     eax, [edx]
0x85D261: push    1
0x85D263: mov     ecx, ebp
0x85D265: call    eax
0x85D267: mov     eax, [esp+20h+arg_0]
0x85D26B: test    eax, eax
0x85D26D: mov     ecx, [esp+20h+arg_8]
0x85D271: mov     [ecx+4], eax
0x85D274: jz      short loc_85D280
0x85D276: add     eax, 4
0x85D279: push    eax; lpAddend
0x85D27A: call    dword ptr ds:0A28078h
0x85D280: mov     edx, [esp+20h+arg_8]
0x85D284: push    ebx
0x85D285: push    edx
0x85D286: mov     ecx, esi
0x85D288: call    sub_848FA0
0x85D28D: mov     ecx, [edi+24h]
0x85D290: mov     ebx, [ecx+18h]
0x85D293: mov     eax, ds:0B43108h
0x85D298: mov     ebp, [ebx+4]
0x85D29B: add     ebx, 4
0x85D29E: cmp     ebp, eax
0x85D2A0: mov     [esp+20h+arg_8], eax
0x85D2A4: jz      short loc_85D2DB
0x85D2A6: test    ebp, ebp
0x85D2A8: jz      short loc_85D2CB
0x85D2AA: lea     edx, [ebp+4]
0x85D2AD: push    edx; lpAddend
0x85D2AE: call    dword ptr ds:0A2807Ch
0x85D2B4: test    eax, eax
0x85D2B6: jnz     short loc_85D2C7
0x85D2B8: test    ebp, ebp
0x85D2BA: jz      short loc_85D2C7
0x85D2BC: mov     eax, [ebp+0]
0x85D2BF: mov     edx, [eax]
0x85D2C1: push    1
0x85D2C3: mov     ecx, ebp
0x85D2C5: call    edx
0x85D2C7: mov     eax, [esp+20h+arg_8]
0x85D2CB: test    eax, eax
0x85D2CD: mov     [ebx], eax
0x85D2CF: jz      short loc_85D2DB
0x85D2D1: add     eax, 4
0x85D2D4: push    eax; lpAddend
0x85D2D5: call    dword ptr ds:0A28078h
0x85D2DB: mov     eax, [edi+24h]
0x85D2DE: mov     ebp, [eax+1Ch]
0x85D2E1: mov     eax, ds:0B4310Ch
0x85D2E6: mov     ebx, [ebp+4]
0x85D2E9: cmp     ebx, eax
0x85D2EB: mov     ecx, eax
0x85D2ED: mov     [esp+20h+arg_8], ecx
0x85D2F1: jz      short loc_85D328
0x85D2F3: test    ebx, ebx
0x85D2F5: jz      short loc_85D317
0x85D2F7: lea     ecx, [ebx+4]
0x85D2FA: push    ecx; lpAddend
0x85D2FB: call    dword ptr ds:0A2807Ch
0x85D301: test    eax, eax
0x85D303: jnz     short loc_85D313
0x85D305: test    ebx, ebx
0x85D307: jz      short loc_85D313
0x85D309: mov     edx, [ebx]
0x85D30B: mov     eax, [edx]
0x85D30D: push    1
0x85D30F: mov     ecx, ebx
0x85D311: call    eax
0x85D313: mov     ecx, [esp+20h+arg_8]
0x85D317: test    ecx, ecx
0x85D319: mov     [ebp+4], ecx
0x85D31C: jz      short loc_85D328
0x85D31E: add     ecx, 4
0x85D321: push    ecx; lpAddend
0x85D322: call    dword ptr ds:0A28078h
0x85D328: cmp     byte ptr [esp+20h+arg_10], 0
0x85D32D: jnz     short loc_85D36A
0x85D32F: mov     ebx, 1
0x85D334: add     [edi+60h], ebx
0x85D337: mov     [esp+20h+arg_10], edi
0x85D33B: mov     edx, [esi+38h]
0x85D33E: lea     ecx, [esp+20h+arg_10]
0x85D342: push    ecx
0x85D343: push    edx
0x85D344: lea     ecx, [esi+40h]
0x85D347: mov     [esp+28h+var_4], 0
0x85D34F: call    sub_76CE40
0x85D354: or      eax, 0FFFFFFFFh
0x85D357: add     [edi+60h], eax
0x85D35A: mov     [esp+20h+var_4], eax
0x85D35E: jnz     short loc_85D367
0x85D360: mov     ecx, edi
0x85D362: call    sub_7604D0
0x85D367: add     [esi+38h], ebx
0x85D36A: mov     ecx, [esp+20h+var_C]
0x85D36E: mov     large fs:0, ecx
0x85D375: pop     ecx
0x85D376: pop     edi
0x85D377: pop     esi
0x85D378: pop     ebp
0x85D379: pop     ebx
0x85D37A: add     esp, 0Ch
0x85D37D: retn    14h
