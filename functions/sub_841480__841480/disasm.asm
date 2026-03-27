0x841480: push    0FFFFFFFFh
0x841482: push    offset SEH_882120
0x841487: mov     eax, large fs:0
0x84148D: push    eax
0x84148E: push    ebx
0x84148F: push    ebp
0x841490: push    esi
0x841491: push    edi
0x841492: mov     eax, ds:0B30AACh
0x841497: xor     eax, esp
0x841499: push    eax
0x84149A: lea     eax, [esp+20h+var_C]
0x84149E: mov     large fs:0, eax
0x8414A4: mov     esi, ecx
0x8414A6: mov     edi, [esp+20h+arg_8]
0x8414AA: mov     eax, [edi+10h]
0x8414AD: mov     ebx, ds:0B45908h
0x8414B3: push    eax
0x8414B4: call    sub_848DA0
0x8414B9: mov     ebp, [edi+0Ch]
0x8414BC: push    ebp
0x8414BD: mov     ecx, esi
0x8414BF: call    sub_848E50
0x8414C4: mov     edi, [edi+10h]
0x8414C7: mov     ecx, [esp+20h+arg_0]
0x8414CB: mov     eax, [esi]
0x8414CD: mov     edx, [eax+0BCh]
0x8414D3: push    edi
0x8414D4: push    ebp
0x8414D5: push    ecx
0x8414D6: mov     ecx, esi
0x8414D8: call    edx
0x8414DA: mov     eax, [ebx+24h]
0x8414DD: mov     edi, [esp+20h+arg_C]
0x8414E1: mov     ebp, [eax]
0x8414E3: mov     edx, [edi]
0x8414E5: mov     eax, [edx+88h]
0x8414EB: push    0
0x8414ED: mov     ecx, edi
0x8414EF: mov     [esp+24h+arg_8], ebp
0x8414F3: call    eax
0x8414F5: mov     ebp, [ebp+4]
0x8414F8: cmp     ebp, eax
0x8414FA: mov     [esp+20h+arg_0], eax
0x8414FE: jz      short loc_84153A
0x841500: test    ebp, ebp
0x841502: jz      short loc_841525
0x841504: lea     ecx, [ebp+4]
0x841507: push    ecx; lpAddend
0x841508: call    dword ptr ds:0A2807Ch
0x84150E: test    eax, eax
0x841510: jnz     short loc_841521
0x841512: test    ebp, ebp
0x841514: jz      short loc_841521
0x841516: mov     edx, [ebp+0]
0x841519: mov     eax, [edx]
0x84151B: push    1
0x84151D: mov     ecx, ebp
0x84151F: call    eax
0x841521: mov     eax, [esp+20h+arg_0]
0x841525: test    eax, eax
0x841527: mov     ecx, [esp+20h+arg_8]
0x84152B: mov     [ecx+4], eax
0x84152E: jz      short loc_84153A
0x841530: add     eax, 4
0x841533: push    eax; lpAddend
0x841534: call    dword ptr ds:0A28078h
0x84153A: mov     edx, [esp+20h+arg_8]
0x84153E: push    edi
0x84153F: push    edx
0x841540: mov     ecx, esi
0x841542: call    sub_848FA0
0x841547: mov     eax, [ebx+24h]
0x84154A: mov     ebp, [eax+4]
0x84154D: push    0
0x84154F: push    edi
0x841550: mov     ecx, esi
0x841552: mov     [esp+28h+arg_8], ebp
0x841556: call    sub_848FD0
0x84155B: mov     ebp, [ebp+4]
0x84155E: cmp     ebp, eax
0x841560: mov     [esp+20h+arg_0], eax
0x841564: jz      short loc_8415A0
0x841566: test    ebp, ebp
0x841568: jz      short loc_84158B
0x84156A: lea     ecx, [ebp+4]
0x84156D: push    ecx; lpAddend
0x84156E: call    dword ptr ds:0A2807Ch
0x841574: test    eax, eax
0x841576: jnz     short loc_841587
0x841578: test    ebp, ebp
0x84157A: jz      short loc_841587
0x84157C: mov     edx, [ebp+0]
0x84157F: mov     eax, [edx]
0x841581: push    1
0x841583: mov     ecx, ebp
0x841585: call    eax
0x841587: mov     eax, [esp+20h+arg_0]
0x84158B: test    eax, eax
0x84158D: mov     ecx, [esp+20h+arg_8]
0x841591: mov     [ecx+4], eax
0x841594: jz      short loc_8415A0
0x841596: add     eax, 4
0x841599: push    eax; lpAddend
0x84159A: call    dword ptr ds:0A28078h
0x8415A0: mov     edx, [esp+20h+arg_8]
0x8415A4: push    edi
0x8415A5: push    edx
0x8415A6: mov     ecx, esi
0x8415A8: call    sub_848FA0
0x8415AD: mov     eax, [ebx+24h]
0x8415B0: mov     ebp, [eax+10h]
0x8415B3: mov     edx, [edi]
0x8415B5: mov     eax, [edx+90h]
0x8415BB: push    0
0x8415BD: mov     ecx, edi
0x8415BF: mov     [esp+24h+arg_8], ebp
0x8415C3: call    eax
0x8415C5: mov     ebp, [ebp+4]
0x8415C8: cmp     ebp, eax
0x8415CA: mov     [esp+20h+arg_0], eax
0x8415CE: jz      short loc_84160A
0x8415D0: test    ebp, ebp
0x8415D2: jz      short loc_8415F5
0x8415D4: lea     ecx, [ebp+4]
0x8415D7: push    ecx; lpAddend
0x8415D8: call    dword ptr ds:0A2807Ch
0x8415DE: test    eax, eax
0x8415E0: jnz     short loc_8415F1
0x8415E2: test    ebp, ebp
0x8415E4: jz      short loc_8415F1
0x8415E6: mov     edx, [ebp+0]
0x8415E9: mov     eax, [edx]
0x8415EB: push    1
0x8415ED: mov     ecx, ebp
0x8415EF: call    eax
0x8415F1: mov     eax, [esp+20h+arg_0]
0x8415F5: test    eax, eax
0x8415F7: mov     ecx, [esp+20h+arg_8]
0x8415FB: mov     [ecx+4], eax
0x8415FE: jz      short loc_84160A
0x841600: add     eax, 4
0x841603: push    eax; lpAddend
0x841604: call    dword ptr ds:0A28078h
0x84160A: mov     edx, [esp+20h+arg_8]
0x84160E: push    edi
0x84160F: push    edx
0x841610: mov     ecx, esi
0x841612: call    sub_848FA0
0x841617: mov     ecx, [ebx+24h]
0x84161A: mov     edi, [ecx+18h]
0x84161D: mov     eax, ds:0B43108h
0x841622: mov     ebp, [edi+4]
0x841625: add     edi, 4
0x841628: cmp     ebp, eax
0x84162A: mov     [esp+20h+arg_8], eax
0x84162E: jz      short loc_841665
0x841630: test    ebp, ebp
0x841632: jz      short loc_841655
0x841634: lea     edx, [ebp+4]
0x841637: push    edx; lpAddend
0x841638: call    dword ptr ds:0A2807Ch
0x84163E: test    eax, eax
0x841640: jnz     short loc_841651
0x841642: test    ebp, ebp
0x841644: jz      short loc_841651
0x841646: mov     eax, [ebp+0]
0x841649: mov     edx, [eax]
0x84164B: push    1
0x84164D: mov     ecx, ebp
0x84164F: call    edx
0x841651: mov     eax, [esp+20h+arg_8]
0x841655: test    eax, eax
0x841657: mov     [edi], eax
0x841659: jz      short loc_841665
0x84165B: add     eax, 4
0x84165E: push    eax; lpAddend
0x84165F: call    dword ptr ds:0A28078h
0x841665: mov     eax, [ebx+24h]
0x841668: mov     ebp, [eax+1Ch]
0x84166B: mov     eax, ds:0B4310Ch
0x841670: mov     edi, [ebp+4]
0x841673: cmp     edi, eax
0x841675: mov     ecx, eax
0x841677: mov     [esp+20h+arg_8], ecx
0x84167B: jz      short loc_8416B2
0x84167D: test    edi, edi
0x84167F: jz      short loc_8416A1
0x841681: lea     ecx, [edi+4]
0x841684: push    ecx; lpAddend
0x841685: call    dword ptr ds:0A2807Ch
0x84168B: test    eax, eax
0x84168D: jnz     short loc_84169D
0x84168F: test    edi, edi
0x841691: jz      short loc_84169D
0x841693: mov     edx, [edi]
0x841695: mov     eax, [edx]
0x841697: push    1
0x841699: mov     ecx, edi
0x84169B: call    eax
0x84169D: mov     ecx, [esp+20h+arg_8]
0x8416A1: test    ecx, ecx
0x8416A3: mov     [ebp+4], ecx
0x8416A6: jz      short loc_8416B2
0x8416A8: add     ecx, 4
0x8416AB: push    ecx; lpAddend
0x8416AC: call    dword ptr ds:0A28078h
0x8416B2: mov     edi, 1
0x8416B7: add     [ebx+60h], edi
0x8416BA: mov     [esp+20h+arg_8], ebx
0x8416BE: mov     edx, [esi+38h]
0x8416C1: lea     ecx, [esp+20h+arg_8]
0x8416C5: push    ecx
0x8416C6: push    edx
0x8416C7: lea     ecx, [esi+40h]
0x8416CA: mov     [esp+28h+var_4], 0
0x8416D2: call    sub_76CE40
0x8416D7: or      eax, 0FFFFFFFFh
0x8416DA: add     [ebx+60h], eax
0x8416DD: mov     [esp+20h+var_4], eax
0x8416E1: jnz     short loc_8416EA
0x8416E3: mov     ecx, ebx
0x8416E5: call    sub_7604D0
0x8416EA: add     [esi+38h], edi
0x8416ED: mov     ecx, [esp+20h+var_C]
0x8416F1: mov     large fs:0, ecx
0x8416F8: pop     ecx
0x8416F9: pop     edi
0x8416FA: pop     esi
0x8416FB: pop     ebp
0x8416FC: pop     ebx
0x8416FD: add     esp, 0Ch
0x841700: retn    10h
