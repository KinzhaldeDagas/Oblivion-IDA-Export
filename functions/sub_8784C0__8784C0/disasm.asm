0x8784C0: push    0FFFFFFFFh
0x8784C2: push    offset SEH_880560
0x8784C7: mov     eax, large fs:0
0x8784CD: push    eax
0x8784CE: push    ebx
0x8784CF: push    ebp
0x8784D0: push    esi
0x8784D1: push    edi
0x8784D2: mov     eax, ds:0B30AACh
0x8784D7: xor     eax, esp
0x8784D9: push    eax
0x8784DA: lea     eax, [esp+20h+var_C]
0x8784DE: mov     large fs:0, eax
0x8784E4: mov     esi, ecx
0x8784E6: mov     ebx, [esp+20h+arg_8]
0x8784EA: mov     eax, [ebx+10h]
0x8784ED: mov     edi, ds:0B476B8h
0x8784F3: push    eax
0x8784F4: call    sub_848C40
0x8784F9: mov     ebp, [ebx+0Ch]
0x8784FC: push    ebp
0x8784FD: mov     ecx, esi
0x8784FF: call    sub_848E50
0x878504: mov     ebx, [ebx+10h]
0x878507: mov     ecx, [esp+20h+arg_0]
0x87850B: mov     eax, [esi]
0x87850D: mov     edx, [eax+0BCh]
0x878513: push    ebx
0x878514: push    ebp
0x878515: push    ecx
0x878516: mov     ecx, esi
0x878518: call    edx
0x87851A: mov     eax, [edi+24h]
0x87851D: mov     ecx, [esp+20h+arg_C]
0x878521: mov     ebx, [eax]
0x878523: mov     edx, [ecx]
0x878525: mov     eax, [edx+88h]
0x87852B: push    0
0x87852D: mov     [esp+24h+arg_8], ebx
0x878531: call    eax
0x878533: mov     ebx, [ebx+4]
0x878536: mov     ebp, eax
0x878538: cmp     ebx, ebp
0x87853A: jz      short loc_878571
0x87853C: test    ebx, ebx
0x87853E: jz      short loc_87855C
0x878540: lea     ecx, [ebx+4]
0x878543: push    ecx; lpAddend
0x878544: call    dword ptr ds:0A2807Ch
0x87854A: test    eax, eax
0x87854C: jnz     short loc_87855C
0x87854E: test    ebx, ebx
0x878550: jz      short loc_87855C
0x878552: mov     edx, [ebx]
0x878554: mov     eax, [edx]
0x878556: push    1
0x878558: mov     ecx, ebx
0x87855A: call    eax
0x87855C: test    ebp, ebp
0x87855E: mov     ecx, [esp+20h+arg_8]
0x878562: mov     [ecx+4], ebp
0x878565: jz      short loc_878571
0x878567: add     ebp, 4
0x87856A: push    ebp; lpAddend
0x87856B: call    dword ptr ds:0A28078h
0x878571: mov     edx, [edi+24h]
0x878574: mov     eax, [esp+20h+arg_C]
0x878578: mov     ebx, [edx+4]
0x87857B: push    0
0x87857D: push    eax
0x87857E: mov     ecx, esi
0x878580: mov     [esp+28h+arg_8], ebx
0x878584: call    sub_848FD0
0x878589: mov     ebx, [ebx+4]
0x87858C: mov     ebp, eax
0x87858E: cmp     ebx, ebp
0x878590: jz      short loc_8785C7
0x878592: test    ebx, ebx
0x878594: jz      short loc_8785B2
0x878596: lea     ecx, [ebx+4]
0x878599: push    ecx; lpAddend
0x87859A: call    dword ptr ds:0A2807Ch
0x8785A0: test    eax, eax
0x8785A2: jnz     short loc_8785B2
0x8785A4: test    ebx, ebx
0x8785A6: jz      short loc_8785B2
0x8785A8: mov     edx, [ebx]
0x8785AA: mov     eax, [edx]
0x8785AC: push    1
0x8785AE: mov     ecx, ebx
0x8785B0: call    eax
0x8785B2: test    ebp, ebp
0x8785B4: mov     ecx, [esp+20h+arg_8]
0x8785B8: mov     [ecx+4], ebp
0x8785BB: jz      short loc_8785C7
0x8785BD: add     ebp, 4
0x8785C0: push    ebp; lpAddend
0x8785C1: call    dword ptr ds:0A28078h
0x8785C7: mov     edx, [edi+24h]
0x8785CA: mov     ebx, [edx+14h]
0x8785CD: mov     eax, ds:0B43110h
0x8785D2: mov     ebp, [ebx+4]
0x8785D5: add     ebx, 4
0x8785D8: cmp     ebp, eax
0x8785DA: mov     [esp+20h+arg_C], eax
0x8785DE: jz      short loc_878615
0x8785E0: test    ebp, ebp
0x8785E2: jz      short loc_878605
0x8785E4: lea     eax, [ebp+4]
0x8785E7: push    eax; lpAddend
0x8785E8: call    dword ptr ds:0A2807Ch
0x8785EE: test    eax, eax
0x8785F0: jnz     short loc_878601
0x8785F2: test    ebp, ebp
0x8785F4: jz      short loc_878601
0x8785F6: mov     edx, [ebp+0]
0x8785F9: mov     eax, [edx]
0x8785FB: push    1
0x8785FD: mov     ecx, ebp
0x8785FF: call    eax
0x878601: mov     eax, [esp+20h+arg_C]
0x878605: test    eax, eax
0x878607: mov     [ebx], eax
0x878609: jz      short loc_878615
0x87860B: add     eax, 4
0x87860E: push    eax; lpAddend
0x87860F: call    dword ptr ds:0A28078h
0x878615: mov     ecx, [edi+24h]
0x878618: mov     ebx, [ecx+18h]
0x87861B: mov     eax, ds:0B43108h
0x878620: mov     ebp, [ebx+4]
0x878623: add     ebx, 4
0x878626: cmp     ebp, eax
0x878628: mov     [esp+20h+arg_C], eax
0x87862C: jz      short loc_878663
0x87862E: test    ebp, ebp
0x878630: jz      short loc_878653
0x878632: lea     edx, [ebp+4]
0x878635: push    edx; lpAddend
0x878636: call    dword ptr ds:0A2807Ch
0x87863C: test    eax, eax
0x87863E: jnz     short loc_87864F
0x878640: test    ebp, ebp
0x878642: jz      short loc_87864F
0x878644: mov     eax, [ebp+0]
0x878647: mov     edx, [eax]
0x878649: push    1
0x87864B: mov     ecx, ebp
0x87864D: call    edx
0x87864F: mov     eax, [esp+20h+arg_C]
0x878653: test    eax, eax
0x878655: mov     [ebx], eax
0x878657: jz      short loc_878663
0x878659: add     eax, 4
0x87865C: push    eax; lpAddend
0x87865D: call    dword ptr ds:0A28078h
0x878663: mov     eax, [edi+24h]
0x878666: mov     ebp, [eax+1Ch]
0x878669: mov     eax, ds:0B4310Ch
0x87866E: mov     ebx, [ebp+4]
0x878671: cmp     ebx, eax
0x878673: mov     ecx, eax
0x878675: mov     [esp+20h+arg_C], ecx
0x878679: jz      short loc_8786B0
0x87867B: test    ebx, ebx
0x87867D: jz      short loc_87869F
0x87867F: lea     ecx, [ebx+4]
0x878682: push    ecx; lpAddend
0x878683: call    dword ptr ds:0A2807Ch
0x878689: test    eax, eax
0x87868B: jnz     short loc_87869B
0x87868D: test    ebx, ebx
0x87868F: jz      short loc_87869B
0x878691: mov     edx, [ebx]
0x878693: mov     eax, [edx]
0x878695: push    1
0x878697: mov     ecx, ebx
0x878699: call    eax
0x87869B: mov     ecx, [esp+20h+arg_C]
0x87869F: test    ecx, ecx
0x8786A1: mov     [ebp+4], ecx
0x8786A4: jz      short loc_8786B0
0x8786A6: add     ecx, 4
0x8786A9: push    ecx; lpAddend
0x8786AA: call    dword ptr ds:0A28078h
0x8786B0: mov     ebx, 1
0x8786B5: add     [edi+60h], ebx
0x8786B8: mov     [esp+20h+arg_C], edi
0x8786BC: mov     edx, [esi+38h]
0x8786BF: lea     ecx, [esp+20h+arg_C]
0x8786C3: push    ecx
0x8786C4: push    edx
0x8786C5: lea     ecx, [esi+40h]
0x8786C8: mov     [esp+28h+var_4], 0
0x8786D0: call    sub_76CE40
0x8786D5: or      eax, 0FFFFFFFFh
0x8786D8: add     [edi+60h], eax
0x8786DB: mov     [esp+20h+var_4], eax
0x8786DF: jnz     short loc_8786E8
0x8786E1: mov     ecx, edi
0x8786E3: call    sub_7604D0
0x8786E8: add     [esi+38h], ebx
0x8786EB: mov     ecx, [esp+20h+var_C]
0x8786EF: mov     large fs:0, ecx
0x8786F6: pop     ecx
0x8786F7: pop     edi
0x8786F8: pop     esi
0x8786F9: pop     ebp
0x8786FA: pop     ebx
0x8786FB: add     esp, 0Ch
0x8786FE: retn    10h
