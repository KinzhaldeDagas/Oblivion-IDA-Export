0x774550: sub     esp, 8
0x774553: push    ebp
0x774554: push    esi
0x774555: mov     esi, [esp+10h+a3]
0x774559: xor     ebp, ebp
0x77455B: lea     ecx, [esi+7A4h]; void *
0x774561: xor     eax, eax
0x774563: cmp     [ecx+eax*4], ebp
0x774566: jnz     short loc_77457B
0x774568: cmp     [ecx+eax*4+4], ebp
0x77456C: jnz     short loc_774578
0x77456E: add     eax, 2
0x774571: cmp     eax, 16h
0x774574: jb      short loc_774563
0x774576: jmp     short loc_77457B
0x774578: add     eax, 1
0x77457B: cmp     eax, 16h
0x77457E: jnz     short loc_774595
0x774580: push    offset aNidx9sourcecub; "NiDX9SourceCubeMapData::Create> No Cube"...
0x774585: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x77458A: add     esp, 4
0x77458D: pop     esi
0x77458E: xor     eax, eax
0x774590: pop     ebp
0x774591: add     esp, 8
0x774594: retn
0x774595: push    ebx
0x774596: push    edi
0x774597: push    80h ; '€'; Size
0x77459C: call    FormHeapAlloc
0x7745A1: mov     edi, [esp+1Ch+a2]
0x7745A5: mov     ebx, eax
0x7745A7: add     esp, 4
0x7745AA: cmp     ebx, ebp
0x7745AC: jz      short loc_7745C5
0x7745AE: push    esi; a3
0x7745AF: push    edi; a2
0x7745B0: mov     ecx, ebx; this
0x7745B2: call    sub_760BF0
0x7745B7: mov     dword ptr [ebx], offset ??_7NiDX9SourceCubeMapData@@6B@; const NiDX9SourceCubeMapData::`vftable'
0x7745BD: mov     [ebx+7Ch], ebp
0x7745C0: mov     [ebx+60h], ebp
0x7745C3: jmp     short loc_7745C7
0x7745C5: xor     ebx, ebx
0x7745C7: mov     ebp, [edi+3Ch]
0x7745CA: test    ebp, ebp
0x7745CC: jz      short loc_7745D8
0x7745CE: lea     eax, [ebp+4]
0x7745D1: push    eax; lpAddend
0x7745D2: call    dword ptr ds:0A28078h
0x7745D8: test    ebp, ebp
0x7745DA: lea     ecx, [ebp+8]
0x7745DD: mov     [esp+18h+var_4], ecx
0x7745E1: mov     [esp+18h+var_5], 0
0x7745E6: jnz     short loc_774636
0x7745E8: mov     esi, [edi+38h]
0x7745EB: test    esi, esi
0x7745ED: jz      short loc_774611
0x7745EF: call    sub_71B280
0x7745F4: mov     edx, [eax]
0x7745F6: push    ebp
0x7745F7: mov     ecx, eax
0x7745F9: mov     eax, [edx+8]
0x7745FC: push    esi
0x7745FD: call    eax
0x7745FF: test    eax, eax
0x774601: jz      short loc_774636
0x774603: mov     ebp, eax
0x774605: add     eax, 4
0x774608: push    eax; lpAddend
0x774609: call    dword ptr ds:0A28078h
0x77460F: jmp     short loc_774636
0x774611: push    1
0x774613: push    80000008h
0x774618: push    edi
0x774619: call    sub_701400
0x77461E: add     esp, 0Ch
0x774621: test    eax, eax
0x774623: jz      short loc_774631
0x774625: mov     ebp, eax
0x774627: add     eax, 4
0x77462A: push    eax; lpAddend
0x77462B: call    dword ptr ds:0A28078h
0x774631: mov     [esp+18h+var_5], 1
0x774636: mov     ecx, [ebp+54h]
0x774639: mov     eax, [ecx]
0x77463B: mov     edx, [ebp+58h]
0x77463E: cmp     eax, [edx]
0x774640: jnz     short loc_774652
0x774642: test    eax, eax
0x774644: jz      short loc_774652
0x774646: lea     ecx, [eax-1]
0x774649: test    eax, ecx
0x77464B: setz    al
0x77464E: test    al, al
0x774650: jnz     short loc_77469D
0x774652: cmp     [esp+18h+var_5], 0
0x774657: jnz     short loc_774698
0x774659: push    1
0x77465B: push    80000009h
0x774660: push    edi
0x774661: call    sub_701400
0x774666: mov     esi, eax
0x774668: add     esp, 0Ch
0x77466B: cmp     ebp, esi
0x77466D: jz      short loc_774698
0x77466F: lea     edx, [ebp+4]
0x774672: push    edx; lpAddend
0x774673: call    dword ptr ds:0A2807Ch
0x774679: test    eax, eax
0x77467B: jnz     short loc_774688
0x77467D: mov     eax, [ebp+0]
0x774680: mov     edx, [eax]
0x774682: push    1
0x774684: mov     ecx, ebp
0x774686: call    edx
0x774688: test    esi, esi
0x77468A: mov     ebp, esi
0x77468C: jz      short loc_774698
0x77468E: add     esi, 4
0x774691: push    esi; lpAddend
0x774692: call    dword ptr ds:0A28078h
0x774698: mov     [esp+18h+var_5], 1
0x77469D: add     edi, 18h
0x7746A0: cmp     [esp+18h+var_5], 0
0x7746A5: jnz     short loc_7746D3
0x7746A7: mov     eax, [esp+18h+a3]
0x7746AB: mov     esi, [esp+18h+var_4]
0x7746AF: add     eax, 7A4h
0x7746B4: push    eax
0x7746B5: push    edi
0x7746B6: push    esi
0x7746B7: mov     ecx, ebx
0x7746B9: call    sub_773BA0
0x7746BE: test    eax, eax
0x7746C0: mov     [esp+18h+var_4], eax
0x7746C4: jz      short loc_7746D3
0x7746C6: mov     ecx, [esi+4]
0x7746C9: cmp     ecx, 2
0x7746CC: jz      short loc_7746D3
0x7746CE: cmp     ecx, 3
0x7746D1: jnz     short loc_774736
0x7746D3: mov     eax, [esp+18h+a2]
0x7746D7: push    1
0x7746D9: push    80000007h
0x7746DE: push    eax
0x7746DF: mov     [esp+24h+var_5], 1
0x7746E4: call    sub_701400
0x7746E9: mov     esi, eax
0x7746EB: add     esp, 0Ch
0x7746EE: cmp     ebp, esi
0x7746F0: jz      short loc_77471F
0x7746F2: test    ebp, ebp
0x7746F4: jz      short loc_77470F
0x7746F6: lea     ecx, [ebp+4]
0x7746F9: push    ecx; lpAddend
0x7746FA: call    dword ptr ds:0A2807Ch
0x774700: test    eax, eax
0x774702: jnz     short loc_77470F
0x774704: mov     edx, [ebp+0]
0x774707: mov     eax, [edx]
0x774709: push    1
0x77470B: mov     ecx, ebp
0x77470D: call    eax
0x77470F: test    esi, esi
0x774711: mov     ebp, esi
0x774713: jz      short loc_77471F
0x774715: add     esi, 4
0x774718: push    esi; lpAddend
0x774719: call    dword ptr ds:0A28078h
0x77471F: mov     ecx, [esp+18h+a3]
0x774723: mov     edx, [ecx+874h]
0x774729: mov     eax, [ecx+edx*4+6F4h]
0x774730: mov     [esp+18h+var_4], eax
0x774734: jmp     short loc_774740
0x774736: cmp     dword ptr [edi+8], 1
0x77473A: jz      short loc_774758
0x77473C: mov     ecx, [esp+18h+a3]
0x774740: cmp     dword ptr [edi+8], 2
0x774744: jnz     short loc_77475E
0x774746: cmp     byte ptr ds:0B3F708h, 0
0x77474D: jz      short loc_77475E
0x77474F: cmp     byte ptr [ecx+6E8h], 0
0x774756: jz      short loc_77475E
0x774758: mov     byte ptr [ebx+65h], 1
0x77475C: jmp     short loc_774762
0x77475E: mov     byte ptr [ebx+65h], 0
0x774762: mov     esi, eax
0x774764: lea     edi, [ebx+0Ch]
0x774767: mov     ecx, 11h
0x77476C: rep movsd
0x77476E: mov     ecx, [ebp+54h]
0x774771: mov     eax, [ecx]
0x774773: xor     esi, esi
0x774775: cmp     [esp+18h+var_5], 0
0x77477A: mov     [ebx+58h], eax
0x77477D: mov     [ebx+54h], eax
0x774780: jz      short loc_774790
0x774782: lea     edx, [ebp+4]
0x774785: push    edx; lpAddend
0x774786: mov     esi, ebp
0x774788: call    dword ptr ds:0A28078h
0x77478E: jmp     short loc_7747F5
0x774790: call    sub_71B280
0x774795: movzx   ecx, byte ptr [ebx+65h]
0x774799: mov     edx, [eax]
0x77479B: mov     edx, [edx+10h]
0x77479E: push    ecx
0x77479F: mov     ecx, [esp+1Ch+var_4]
0x7747A3: push    ebp
0x7747A4: push    ecx
0x7747A5: push    ebp
0x7747A6: mov     ecx, eax
0x7747A8: call    edx
0x7747AA: test    eax, eax
0x7747AC: jz      short loc_7747BC
0x7747AE: mov     esi, eax
0x7747B0: add     eax, 4
0x7747B3: push    eax; lpAddend
0x7747B4: call    dword ptr ds:0A28078h
0x7747BA: jmp     short loc_7747E5
0x7747BC: mov     eax, [esp+18h+a2]
0x7747C0: push    1
0x7747C2: push    80000007h
0x7747C7: push    eax
0x7747C8: call    sub_701400
0x7747CD: add     esp, 0Ch
0x7747D0: test    eax, eax
0x7747D2: jz      short loc_7747E0
0x7747D4: mov     esi, eax
0x7747D6: add     eax, 4
0x7747D9: push    eax; lpAddend
0x7747DA: call    dword ptr ds:0A28078h
0x7747E0: mov     [esp+18h+var_5], 1
0x7747E5: mov     ecx, [esi+60h]
0x7747E8: mov     edx, [esi+5Ch]
0x7747EB: mov     eax, [edx+ecx*4]
0x7747EE: imul    eax, [esi+6Ch]
0x7747F2: mov     [ebx+68h], eax
0x7747F5: cmp     [esp+18h+var_5], 0
0x7747FA: jz      short loc_77481B
0x7747FC: mov     ecx, [esi+54h]
0x7747FF: mov     eax, [ecx]
0x774801: mov     [ebx+58h], eax
0x774804: mov     [ebx+54h], eax
0x774807: mov     edx, [esi+60h]
0x77480A: mov     eax, [esi+5Ch]
0x77480D: mov     ecx, [eax+edx*4]
0x774810: imul    ecx, [esi+6Ch]
0x774814: mov     [ebx+68h], ecx
0x774817: mov     byte ptr [ebx+64h], 1
0x77481B: mov     edx, [esp+18h+a3]
0x77481F: cmp     byte ptr [edx+6E8h], 0
0x774826: jz      short loc_77482D
0x774828: mov     eax, [esi+60h]
0x77482B: jmp     short loc_774832
0x77482D: mov     eax, 1
0x774832: mov     [ebx+5Ch], eax
0x774835: mov     eax, [esi+68h]
0x774838: mov     ecx, ebx
0x77483A: mov     [ebx+7Ch], eax
0x77483D: call    sub_774420
0x774842: test    al, al
0x774844: jz      short loc_7748AB
0x774846: cmp     dword ptr [ebx+50h], 0
0x77484A: jz      short loc_7748AB
0x77484C: xor     edi, edi
0x77484E: mov     edi, edi
0x774850: push    edi
0x774851: push    esi
0x774852: mov     ecx, ebx
0x774854: call    sub_7744D0
0x774859: add     edi, 1
0x77485C: cmp     edi, 6
0x77485F: jb      short loc_774850
0x774861: mov     ecx, [esi+4Ch]
0x774864: push    ecx
0x774865: mov     ecx, ebx
0x774867: call    sub_760D70
0x77486C: mov     edx, [ebx+4]
0x77486F: mov     edi, ds:0A2807Ch
0x774875: lea     eax, [esi+4]
0x774878: push    eax; lpAddend
0x774879: mov     [edx+24h], ebx
0x77487C: call    edi ; InterlockedDecrement
0x77487E: test    eax, eax
0x774880: jnz     short loc_77488C
0x774882: mov     edx, [esi]
0x774884: mov     eax, [edx]
0x774886: push    1
0x774888: mov     ecx, esi
0x77488A: call    eax
0x77488C: lea     ecx, [ebp+4]
0x77488F: push    ecx; lpAddend
0x774890: call    edi ; InterlockedDecrement
0x774892: test    eax, eax
0x774894: jnz     short loc_7748A1
0x774896: mov     edx, [ebp+0]
0x774899: mov     eax, [edx]
0x77489B: push    1
0x77489D: mov     ecx, ebp
0x77489F: call    eax
0x7748A1: pop     edi
0x7748A2: mov     eax, ebx
0x7748A4: pop     ebx
0x7748A5: pop     esi
0x7748A6: pop     ebp
0x7748A7: add     esp, 8
0x7748AA: retn
0x7748AB: mov     edx, [ebx]
0x7748AD: mov     eax, [edx]
0x7748AF: push    1
0x7748B1: mov     ecx, ebx
0x7748B3: call    eax
0x7748B5: mov     edi, ds:0A2807Ch
0x7748BB: lea     ecx, [esi+4]
0x7748BE: push    ecx; lpAddend
0x7748BF: call    edi ; InterlockedDecrement
0x7748C1: test    eax, eax
0x7748C3: jnz     short loc_7748CF
0x7748C5: mov     edx, [esi]
0x7748C7: mov     eax, [edx]
0x7748C9: push    1
0x7748CB: mov     ecx, esi
0x7748CD: call    eax
0x7748CF: lea     ecx, [ebp+4]
0x7748D2: push    ecx; lpAddend
0x7748D3: call    edi ; InterlockedDecrement
0x7748D5: test    eax, eax
0x7748D7: jnz     short loc_7748E4
0x7748D9: mov     edx, [ebp+0]
0x7748DC: mov     eax, [edx]
0x7748DE: push    1
0x7748E0: mov     ecx, ebp
0x7748E2: call    eax
0x7748E4: pop     edi
0x7748E5: pop     ebx
0x7748E6: pop     esi
0x7748E7: xor     eax, eax
0x7748E9: pop     ebp
0x7748EA: add     esp, 8
0x7748ED: retn
