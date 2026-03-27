0x8422C0: push    0FFFFFFFFh
0x8422C2: push    offset SEH_882120
0x8422C7: mov     eax, large fs:0
0x8422CD: push    eax
0x8422CE: push    ebx
0x8422CF: push    ebp
0x8422D0: push    esi
0x8422D1: push    edi
0x8422D2: mov     eax, ds:0B30AACh
0x8422D7: xor     eax, esp
0x8422D9: push    eax
0x8422DA: lea     eax, [esp+20h+var_C]
0x8422DE: mov     large fs:0, eax
0x8422E4: mov     esi, ecx
0x8422E6: mov     edi, [esp+20h+arg_8]
0x8422EA: mov     eax, [edi+10h]
0x8422ED: mov     ebx, ds:0B456F8h
0x8422F3: push    eax
0x8422F4: call    sub_848DA0
0x8422F9: mov     edi, [edi+0Ch]
0x8422FC: push    edi
0x8422FD: mov     ecx, esi
0x8422FF: call    sub_848E50
0x842304: mov     ecx, [esp+20h+arg_0]
0x842308: mov     eax, [esi]
0x84230A: mov     edx, [eax+0BCh]
0x842310: push    0
0x842312: push    edi
0x842313: push    ecx
0x842314: mov     ecx, esi
0x842316: call    edx
0x842318: mov     eax, [ebx+24h]
0x84231B: mov     edi, [esp+20h+arg_C]
0x84231F: mov     ebp, [eax]
0x842321: mov     edx, [edi]
0x842323: mov     eax, [edx+88h]
0x842329: push    0
0x84232B: mov     ecx, edi
0x84232D: mov     [esp+24h+arg_8], ebp
0x842331: call    eax
0x842333: mov     ebp, [ebp+4]
0x842336: cmp     ebp, eax
0x842338: mov     [esp+20h+arg_0], eax
0x84233C: jz      short loc_842378
0x84233E: test    ebp, ebp
0x842340: jz      short loc_842363
0x842342: lea     ecx, [ebp+4]
0x842345: push    ecx; lpAddend
0x842346: call    dword ptr ds:0A2807Ch
0x84234C: test    eax, eax
0x84234E: jnz     short loc_84235F
0x842350: test    ebp, ebp
0x842352: jz      short loc_84235F
0x842354: mov     edx, [ebp+0]
0x842357: mov     eax, [edx]
0x842359: push    1
0x84235B: mov     ecx, ebp
0x84235D: call    eax
0x84235F: mov     eax, [esp+20h+arg_0]
0x842363: test    eax, eax
0x842365: mov     ecx, [esp+20h+arg_8]
0x842369: mov     [ecx+4], eax
0x84236C: jz      short loc_842378
0x84236E: add     eax, 4
0x842371: push    eax; lpAddend
0x842372: call    dword ptr ds:0A28078h
0x842378: mov     edx, [esp+20h+arg_8]
0x84237C: push    edi
0x84237D: push    edx
0x84237E: mov     ecx, esi
0x842380: call    sub_848FA0
0x842385: mov     eax, [ebx+24h]
0x842388: mov     ebp, [eax+4]
0x84238B: push    0
0x84238D: push    edi
0x84238E: mov     ecx, esi
0x842390: mov     [esp+28h+arg_8], ebp
0x842394: call    sub_848FD0
0x842399: mov     ebp, [ebp+4]
0x84239C: cmp     ebp, eax
0x84239E: mov     [esp+20h+arg_0], eax
0x8423A2: jz      short loc_8423DE
0x8423A4: test    ebp, ebp
0x8423A6: jz      short loc_8423C9
0x8423A8: lea     ecx, [ebp+4]
0x8423AB: push    ecx; lpAddend
0x8423AC: call    dword ptr ds:0A2807Ch
0x8423B2: test    eax, eax
0x8423B4: jnz     short loc_8423C5
0x8423B6: test    ebp, ebp
0x8423B8: jz      short loc_8423C5
0x8423BA: mov     edx, [ebp+0]
0x8423BD: mov     eax, [edx]
0x8423BF: push    1
0x8423C1: mov     ecx, ebp
0x8423C3: call    eax
0x8423C5: mov     eax, [esp+20h+arg_0]
0x8423C9: test    eax, eax
0x8423CB: mov     ecx, [esp+20h+arg_8]
0x8423CF: mov     [ecx+4], eax
0x8423D2: jz      short loc_8423DE
0x8423D4: add     eax, 4
0x8423D7: push    eax; lpAddend
0x8423D8: call    dword ptr ds:0A28078h
0x8423DE: mov     edx, [esp+20h+arg_8]
0x8423E2: push    edi
0x8423E3: push    edx
0x8423E4: mov     ecx, esi
0x8423E6: call    sub_848FA0
0x8423EB: mov     eax, [ebx+24h]
0x8423EE: mov     ebp, [eax+0Ch]
0x8423F1: mov     edx, [edi]
0x8423F3: mov     eax, [edx+90h]
0x8423F9: push    0
0x8423FB: mov     ecx, edi
0x8423FD: mov     [esp+24h+arg_8], ebp
0x842401: call    eax
0x842403: mov     ebp, [ebp+4]
0x842406: cmp     ebp, eax
0x842408: mov     [esp+20h+arg_0], eax
0x84240C: jz      short loc_842448
0x84240E: test    ebp, ebp
0x842410: jz      short loc_842433
0x842412: lea     ecx, [ebp+4]
0x842415: push    ecx; lpAddend
0x842416: call    dword ptr ds:0A2807Ch
0x84241C: test    eax, eax
0x84241E: jnz     short loc_84242F
0x842420: test    ebp, ebp
0x842422: jz      short loc_84242F
0x842424: mov     edx, [ebp+0]
0x842427: mov     eax, [edx]
0x842429: push    1
0x84242B: mov     ecx, ebp
0x84242D: call    eax
0x84242F: mov     eax, [esp+20h+arg_0]
0x842433: test    eax, eax
0x842435: mov     ecx, [esp+20h+arg_8]
0x842439: mov     [ecx+4], eax
0x84243C: jz      short loc_842448
0x84243E: add     eax, 4
0x842441: push    eax; lpAddend
0x842442: call    dword ptr ds:0A28078h
0x842448: mov     edx, [esp+20h+arg_8]
0x84244C: push    edi
0x84244D: push    edx
0x84244E: mov     ecx, esi
0x842450: call    sub_848FA0
0x842455: mov     ecx, [ebx+24h]
0x842458: mov     edi, [ecx+14h]
0x84245B: mov     eax, ds:0B43108h
0x842460: mov     ebp, [edi+4]
0x842463: add     edi, 4
0x842466: cmp     ebp, eax
0x842468: mov     [esp+20h+arg_8], eax
0x84246C: jz      short loc_8424A3
0x84246E: test    ebp, ebp
0x842470: jz      short loc_842493
0x842472: lea     edx, [ebp+4]
0x842475: push    edx; lpAddend
0x842476: call    dword ptr ds:0A2807Ch
0x84247C: test    eax, eax
0x84247E: jnz     short loc_84248F
0x842480: test    ebp, ebp
0x842482: jz      short loc_84248F
0x842484: mov     eax, [ebp+0]
0x842487: mov     edx, [eax]
0x842489: push    1
0x84248B: mov     ecx, ebp
0x84248D: call    edx
0x84248F: mov     eax, [esp+20h+arg_8]
0x842493: test    eax, eax
0x842495: mov     [edi], eax
0x842497: jz      short loc_8424A3
0x842499: add     eax, 4
0x84249C: push    eax; lpAddend
0x84249D: call    dword ptr ds:0A28078h
0x8424A3: mov     eax, [ebx+24h]
0x8424A6: mov     ebp, [eax+18h]
0x8424A9: mov     eax, ds:0B4310Ch
0x8424AE: mov     edi, [ebp+4]
0x8424B1: cmp     edi, eax
0x8424B3: mov     ecx, eax
0x8424B5: mov     [esp+20h+arg_8], ecx
0x8424B9: jz      short loc_8424F0
0x8424BB: test    edi, edi
0x8424BD: jz      short loc_8424DF
0x8424BF: lea     ecx, [edi+4]
0x8424C2: push    ecx; lpAddend
0x8424C3: call    dword ptr ds:0A2807Ch
0x8424C9: test    eax, eax
0x8424CB: jnz     short loc_8424DB
0x8424CD: test    edi, edi
0x8424CF: jz      short loc_8424DB
0x8424D1: mov     edx, [edi]
0x8424D3: mov     eax, [edx]
0x8424D5: push    1
0x8424D7: mov     ecx, edi
0x8424D9: call    eax
0x8424DB: mov     ecx, [esp+20h+arg_8]
0x8424DF: test    ecx, ecx
0x8424E1: mov     [ebp+4], ecx
0x8424E4: jz      short loc_8424F0
0x8424E6: add     ecx, 4
0x8424E9: push    ecx; lpAddend
0x8424EA: call    dword ptr ds:0A28078h
0x8424F0: mov     edi, 1
0x8424F5: add     [ebx+60h], edi
0x8424F8: mov     [esp+20h+arg_8], ebx
0x8424FC: mov     edx, [esi+38h]
0x8424FF: lea     ecx, [esp+20h+arg_8]
0x842503: push    ecx
0x842504: push    edx
0x842505: lea     ecx, [esi+40h]
0x842508: mov     [esp+28h+var_4], 0
0x842510: call    sub_76CE40
0x842515: or      eax, 0FFFFFFFFh
0x842518: add     [ebx+60h], eax
0x84251B: mov     [esp+20h+var_4], eax
0x84251F: jnz     short loc_842528
0x842521: mov     ecx, ebx
0x842523: call    sub_7604D0
0x842528: add     [esi+38h], edi
0x84252B: mov     ecx, [esp+20h+var_C]
0x84252F: mov     large fs:0, ecx
0x842536: pop     ecx
0x842537: pop     edi
0x842538: pop     esi
0x842539: pop     ebp
0x84253A: pop     ebx
0x84253B: add     esp, 0Ch
0x84253E: retn    10h
