0x8420A0: push    0FFFFFFFFh
0x8420A2: push    offset SEH_882120
0x8420A7: mov     eax, large fs:0
0x8420AD: push    eax
0x8420AE: push    ebx
0x8420AF: push    ebp
0x8420B0: push    esi
0x8420B1: push    edi
0x8420B2: mov     eax, ds:0B30AACh
0x8420B7: xor     eax, esp
0x8420B9: push    eax
0x8420BA: lea     eax, [esp+20h+var_C]
0x8420BE: mov     large fs:0, eax
0x8420C4: mov     esi, ecx
0x8420C6: mov     ebx, [esp+20h+arg_8]
0x8420CA: mov     eax, [ebx+10h]
0x8420CD: mov     edi, ds:0B456F4h
0x8420D3: push    eax
0x8420D4: call    sub_848C40
0x8420D9: mov     ebx, [ebx+0Ch]
0x8420DC: push    ebx
0x8420DD: mov     ecx, esi
0x8420DF: call    sub_848E50
0x8420E4: mov     ecx, [esp+20h+arg_0]
0x8420E8: mov     eax, [esi]
0x8420EA: mov     edx, [eax+0BCh]
0x8420F0: push    0
0x8420F2: push    ebx
0x8420F3: push    ecx
0x8420F4: mov     ecx, esi
0x8420F6: call    edx
0x8420F8: mov     eax, [edi+24h]
0x8420FB: mov     ebx, [esp+20h+arg_C]
0x8420FF: mov     ebp, [eax]
0x842101: mov     edx, [ebx]
0x842103: mov     eax, [edx+88h]
0x842109: push    0
0x84210B: mov     ecx, ebx
0x84210D: mov     [esp+24h+arg_8], ebp
0x842111: call    eax
0x842113: mov     ebp, [ebp+4]
0x842116: cmp     ebp, eax
0x842118: mov     [esp+20h+arg_0], eax
0x84211C: jz      short loc_842158
0x84211E: test    ebp, ebp
0x842120: jz      short loc_842143
0x842122: lea     ecx, [ebp+4]
0x842125: push    ecx; lpAddend
0x842126: call    dword ptr ds:0A2807Ch
0x84212C: test    eax, eax
0x84212E: jnz     short loc_84213F
0x842130: test    ebp, ebp
0x842132: jz      short loc_84213F
0x842134: mov     edx, [ebp+0]
0x842137: mov     eax, [edx]
0x842139: push    1
0x84213B: mov     ecx, ebp
0x84213D: call    eax
0x84213F: mov     eax, [esp+20h+arg_0]
0x842143: test    eax, eax
0x842145: mov     ecx, [esp+20h+arg_8]
0x842149: mov     [ecx+4], eax
0x84214C: jz      short loc_842158
0x84214E: add     eax, 4
0x842151: push    eax; lpAddend
0x842152: call    dword ptr ds:0A28078h
0x842158: mov     edx, [esp+20h+arg_8]
0x84215C: push    ebx
0x84215D: push    edx
0x84215E: mov     ecx, esi
0x842160: call    sub_848FA0
0x842165: mov     eax, [edi+24h]
0x842168: mov     ebp, [eax+4]
0x84216B: push    0
0x84216D: push    ebx
0x84216E: mov     ecx, esi
0x842170: mov     [esp+28h+arg_8], ebp
0x842174: call    sub_848FD0
0x842179: mov     ebp, [ebp+4]
0x84217C: cmp     ebp, eax
0x84217E: mov     [esp+20h+arg_0], eax
0x842182: jz      short loc_8421BE
0x842184: test    ebp, ebp
0x842186: jz      short loc_8421A9
0x842188: lea     ecx, [ebp+4]
0x84218B: push    ecx; lpAddend
0x84218C: call    dword ptr ds:0A2807Ch
0x842192: test    eax, eax
0x842194: jnz     short loc_8421A5
0x842196: test    ebp, ebp
0x842198: jz      short loc_8421A5
0x84219A: mov     edx, [ebp+0]
0x84219D: mov     eax, [edx]
0x84219F: push    1
0x8421A1: mov     ecx, ebp
0x8421A3: call    eax
0x8421A5: mov     eax, [esp+20h+arg_0]
0x8421A9: test    eax, eax
0x8421AB: mov     ecx, [esp+20h+arg_8]
0x8421AF: mov     [ecx+4], eax
0x8421B2: jz      short loc_8421BE
0x8421B4: add     eax, 4
0x8421B7: push    eax; lpAddend
0x8421B8: call    dword ptr ds:0A28078h
0x8421BE: mov     edx, [esp+20h+arg_8]
0x8421C2: push    ebx
0x8421C3: push    edx
0x8421C4: mov     ecx, esi
0x8421C6: call    sub_848FA0
0x8421CB: mov     ecx, [edi+24h]
0x8421CE: mov     ebx, [ecx+14h]
0x8421D1: mov     eax, ds:0B43108h
0x8421D6: mov     ebp, [ebx+4]
0x8421D9: add     ebx, 4
0x8421DC: cmp     ebp, eax
0x8421DE: mov     [esp+20h+arg_8], eax
0x8421E2: jz      short loc_842219
0x8421E4: test    ebp, ebp
0x8421E6: jz      short loc_842209
0x8421E8: lea     edx, [ebp+4]
0x8421EB: push    edx; lpAddend
0x8421EC: call    dword ptr ds:0A2807Ch
0x8421F2: test    eax, eax
0x8421F4: jnz     short loc_842205
0x8421F6: test    ebp, ebp
0x8421F8: jz      short loc_842205
0x8421FA: mov     eax, [ebp+0]
0x8421FD: mov     edx, [eax]
0x8421FF: push    1
0x842201: mov     ecx, ebp
0x842203: call    edx
0x842205: mov     eax, [esp+20h+arg_8]
0x842209: test    eax, eax
0x84220B: mov     [ebx], eax
0x84220D: jz      short loc_842219
0x84220F: add     eax, 4
0x842212: push    eax; lpAddend
0x842213: call    dword ptr ds:0A28078h
0x842219: mov     eax, [edi+24h]
0x84221C: mov     ebp, [eax+18h]
0x84221F: mov     eax, ds:0B4310Ch
0x842224: mov     ebx, [ebp+4]
0x842227: cmp     ebx, eax
0x842229: mov     ecx, eax
0x84222B: mov     [esp+20h+arg_8], ecx
0x84222F: jz      short loc_842266
0x842231: test    ebx, ebx
0x842233: jz      short loc_842255
0x842235: lea     ecx, [ebx+4]
0x842238: push    ecx; lpAddend
0x842239: call    dword ptr ds:0A2807Ch
0x84223F: test    eax, eax
0x842241: jnz     short loc_842251
0x842243: test    ebx, ebx
0x842245: jz      short loc_842251
0x842247: mov     edx, [ebx]
0x842249: mov     eax, [edx]
0x84224B: push    1
0x84224D: mov     ecx, ebx
0x84224F: call    eax
0x842251: mov     ecx, [esp+20h+arg_8]
0x842255: test    ecx, ecx
0x842257: mov     [ebp+4], ecx
0x84225A: jz      short loc_842266
0x84225C: add     ecx, 4
0x84225F: push    ecx; lpAddend
0x842260: call    dword ptr ds:0A28078h
0x842266: mov     ebx, 1
0x84226B: add     [edi+60h], ebx
0x84226E: mov     [esp+20h+arg_8], edi
0x842272: mov     edx, [esi+38h]
0x842275: lea     ecx, [esp+20h+arg_8]
0x842279: push    ecx
0x84227A: push    edx
0x84227B: lea     ecx, [esi+40h]
0x84227E: mov     [esp+28h+var_4], 0
0x842286: call    sub_76CE40
0x84228B: or      eax, 0FFFFFFFFh
0x84228E: add     [edi+60h], eax
0x842291: mov     [esp+20h+var_4], eax
0x842295: jnz     short loc_84229E
0x842297: mov     ecx, edi
0x842299: call    sub_7604D0
0x84229E: add     [esi+38h], ebx
0x8422A1: mov     ecx, [esp+20h+var_C]
0x8422A5: mov     large fs:0, ecx
0x8422AC: pop     ecx
0x8422AD: pop     edi
0x8422AE: pop     esi
0x8422AF: pop     ebp
0x8422B0: pop     ebx
0x8422B1: add     esp, 0Ch
0x8422B4: retn    10h
