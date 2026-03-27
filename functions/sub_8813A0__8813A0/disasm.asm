0x8813A0: push    0FFFFFFFFh
0x8813A2: push    offset SEH_882120
0x8813A7: mov     eax, large fs:0
0x8813AD: push    eax
0x8813AE: push    ebx
0x8813AF: push    ebp
0x8813B0: push    esi
0x8813B1: push    edi
0x8813B2: mov     eax, ds:0B30AACh
0x8813B7: xor     eax, esp
0x8813B9: push    eax
0x8813BA: lea     eax, [esp+20h+var_C]
0x8813BE: mov     large fs:0, eax
0x8813C4: mov     esi, ecx
0x8813C6: mov     ebx, [esp+20h+arg_8]
0x8813CA: mov     eax, [ebx+10h]
0x8813CD: mov     edi, ds:0B47748h
0x8813D3: push    eax
0x8813D4: call    sub_848C40
0x8813D9: mov     ebx, [ebx+0Ch]
0x8813DC: push    ebx
0x8813DD: mov     ecx, esi
0x8813DF: call    sub_848E50
0x8813E4: mov     ecx, [esp+20h+arg_0]
0x8813E8: mov     eax, [esi]
0x8813EA: mov     edx, [eax+0BCh]
0x8813F0: push    0
0x8813F2: push    ebx
0x8813F3: push    ecx
0x8813F4: mov     ecx, esi
0x8813F6: call    edx
0x8813F8: mov     eax, [edi+24h]
0x8813FB: mov     ebp, [esp+20h+arg_C]
0x8813FF: mov     ebx, [eax]
0x881401: mov     edx, [ebp+0]
0x881404: mov     eax, [edx+88h]
0x88140A: push    0
0x88140C: mov     ecx, ebp
0x88140E: mov     [esp+24h+arg_8], ebx
0x881412: call    eax
0x881414: mov     ebx, [ebx+4]
0x881417: cmp     ebx, eax
0x881419: mov     [esp+20h+arg_0], eax
0x88141D: jz      short loc_881458
0x88141F: test    ebx, ebx
0x881421: jz      short loc_881443
0x881423: lea     ecx, [ebx+4]
0x881426: push    ecx; lpAddend
0x881427: call    dword ptr ds:0A2807Ch
0x88142D: test    eax, eax
0x88142F: jnz     short loc_88143F
0x881431: test    ebx, ebx
0x881433: jz      short loc_88143F
0x881435: mov     edx, [ebx]
0x881437: mov     eax, [edx]
0x881439: push    1
0x88143B: mov     ecx, ebx
0x88143D: call    eax
0x88143F: mov     eax, [esp+20h+arg_0]
0x881443: test    eax, eax
0x881445: mov     ecx, [esp+20h+arg_8]
0x881449: mov     [ecx+4], eax
0x88144C: jz      short loc_881458
0x88144E: add     eax, 4
0x881451: push    eax; lpAddend
0x881452: call    dword ptr ds:0A28078h
0x881458: mov     edx, [edi+24h]
0x88145B: mov     ebx, [edx+4]
0x88145E: push    0
0x881460: push    ebp
0x881461: mov     ecx, esi
0x881463: mov     [esp+28h+arg_8], ebx
0x881467: call    sub_848FD0
0x88146C: mov     ebx, [ebx+4]
0x88146F: cmp     ebx, eax
0x881471: mov     [esp+20h+arg_0], eax
0x881475: jz      short loc_8814B0
0x881477: test    ebx, ebx
0x881479: jz      short loc_88149B
0x88147B: lea     eax, [ebx+4]
0x88147E: push    eax; lpAddend
0x88147F: call    dword ptr ds:0A2807Ch
0x881485: test    eax, eax
0x881487: jnz     short loc_881497
0x881489: test    ebx, ebx
0x88148B: jz      short loc_881497
0x88148D: mov     edx, [ebx]
0x88148F: mov     eax, [edx]
0x881491: push    1
0x881493: mov     ecx, ebx
0x881495: call    eax
0x881497: mov     eax, [esp+20h+arg_0]
0x88149B: test    eax, eax
0x88149D: mov     ecx, [esp+20h+arg_8]
0x8814A1: mov     [ecx+4], eax
0x8814A4: jz      short loc_8814B0
0x8814A6: add     eax, 4
0x8814A9: push    eax; lpAddend
0x8814AA: call    dword ptr ds:0A28078h
0x8814B0: mov     edx, [edi+24h]
0x8814B3: mov     ebx, [edx+8]
0x8814B6: mov     eax, [ebp+0]
0x8814B9: mov     edx, [eax+88h]
0x8814BF: push    1
0x8814C1: mov     ecx, ebp
0x8814C3: mov     [esp+24h+arg_8], ebx
0x8814C7: call    edx
0x8814C9: mov     ebx, [ebx+4]
0x8814CC: cmp     ebx, eax
0x8814CE: mov     [esp+20h+arg_0], eax
0x8814D2: jz      short loc_88150D
0x8814D4: test    ebx, ebx
0x8814D6: jz      short loc_8814F8
0x8814D8: lea     eax, [ebx+4]
0x8814DB: push    eax; lpAddend
0x8814DC: call    dword ptr ds:0A2807Ch
0x8814E2: test    eax, eax
0x8814E4: jnz     short loc_8814F4
0x8814E6: test    ebx, ebx
0x8814E8: jz      short loc_8814F4
0x8814EA: mov     edx, [ebx]
0x8814EC: mov     eax, [edx]
0x8814EE: push    1
0x8814F0: mov     ecx, ebx
0x8814F2: call    eax
0x8814F4: mov     eax, [esp+20h+arg_0]
0x8814F8: test    eax, eax
0x8814FA: mov     ecx, [esp+20h+arg_8]
0x8814FE: mov     [ecx+4], eax
0x881501: jz      short loc_88150D
0x881503: add     eax, 4
0x881506: push    eax; lpAddend
0x881507: call    dword ptr ds:0A28078h
0x88150D: mov     edx, [edi+24h]
0x881510: mov     eax, [edx+0Ch]
0x881513: push    1
0x881515: push    ebp
0x881516: mov     ecx, esi
0x881518: mov     [esp+28h+arg_8], eax
0x88151C: call    sub_848FD0
0x881521: mov     ecx, [esp+20h+arg_8]
0x881525: mov     ebp, [ecx+4]
0x881528: mov     ebx, eax
0x88152A: cmp     ebp, ebx
0x88152C: jz      short loc_881564
0x88152E: test    ebp, ebp
0x881530: jz      short loc_88154F
0x881532: lea     edx, [ebp+4]
0x881535: push    edx; lpAddend
0x881536: call    dword ptr ds:0A2807Ch
0x88153C: test    eax, eax
0x88153E: jnz     short loc_88154F
0x881540: test    ebp, ebp
0x881542: jz      short loc_88154F
0x881544: mov     eax, [ebp+0]
0x881547: mov     edx, [eax]
0x881549: push    1
0x88154B: mov     ecx, ebp
0x88154D: call    edx
0x88154F: test    ebx, ebx
0x881551: mov     eax, [esp+20h+arg_8]
0x881555: mov     [eax+4], ebx
0x881558: jz      short loc_881564
0x88155A: add     ebx, 4
0x88155D: push    ebx; lpAddend
0x88155E: call    dword ptr ds:0A28078h
0x881564: mov     ecx, [edi+24h]
0x881567: mov     ebx, [ecx+14h]
0x88156A: mov     eax, ds:0B43110h
0x88156F: mov     ebp, [ebx+4]
0x881572: cmp     ebp, eax
0x881574: mov     ecx, eax
0x881576: mov     [esp+20h+arg_8], ecx
0x88157A: jz      short loc_8815B2
0x88157C: test    ebp, ebp
0x88157E: jz      short loc_8815A1
0x881580: lea     edx, [ebp+4]
0x881583: push    edx; lpAddend
0x881584: call    dword ptr ds:0A2807Ch
0x88158A: test    eax, eax
0x88158C: jnz     short loc_88159D
0x88158E: test    ebp, ebp
0x881590: jz      short loc_88159D
0x881592: mov     eax, [ebp+0]
0x881595: mov     edx, [eax]
0x881597: push    1
0x881599: mov     ecx, ebp
0x88159B: call    edx
0x88159D: mov     ecx, [esp+20h+arg_8]
0x8815A1: test    ecx, ecx
0x8815A3: mov     [ebx+4], ecx
0x8815A6: jz      short loc_8815B2
0x8815A8: add     ecx, 4
0x8815AB: push    ecx; lpAddend
0x8815AC: call    dword ptr ds:0A28078h
0x8815B2: mov     ebx, 1
0x8815B7: add     [edi+60h], ebx
0x8815BA: mov     [esp+20h+arg_8], edi
0x8815BE: mov     ecx, [esi+38h]
0x8815C1: lea     eax, [esp+20h+arg_8]
0x8815C5: push    eax
0x8815C6: push    ecx
0x8815C7: lea     ecx, [esi+40h]
0x8815CA: mov     [esp+28h+var_4], 0
0x8815D2: call    sub_76CE40
0x8815D7: or      eax, 0FFFFFFFFh
0x8815DA: add     [edi+60h], eax
0x8815DD: mov     [esp+20h+var_4], eax
0x8815E1: jnz     short loc_8815EA
0x8815E3: mov     ecx, edi
0x8815E5: call    sub_7604D0
0x8815EA: add     [esi+38h], ebx
0x8815ED: mov     ecx, [esp+20h+var_C]
0x8815F1: mov     large fs:0, ecx
0x8815F8: pop     ecx
0x8815F9: pop     edi
0x8815FA: pop     esi
0x8815FB: pop     ebp
0x8815FC: pop     ebx
0x8815FD: add     esp, 0Ch
0x881600: retn    10h
