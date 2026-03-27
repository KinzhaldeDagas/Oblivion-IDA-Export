0x874550: push    0FFFFFFFFh
0x874552: push    offset SEH_879360
0x874557: mov     eax, large fs:0
0x87455D: push    eax
0x87455E: push    ecx
0x87455F: push    ebx
0x874560: push    ebp
0x874561: push    esi
0x874562: push    edi
0x874563: mov     eax, ds:0B30AACh
0x874568: xor     eax, esp
0x87456A: push    eax
0x87456B: lea     eax, [esp+24h+var_C]
0x87456F: mov     large fs:0, eax
0x874575: mov     ebx, ecx
0x874577: mov     [esp+24h+var_10], ebx
0x87457B: mov     eax, [esp+24h+arg_8]
0x87457F: mov     edi, [eax+0Ch]
0x874582: mov     esi, ds:0B4763Ch
0x874588: push    edi
0x874589: call    sub_848E50
0x87458E: mov     edx, [ebx]
0x874590: mov     eax, [esp+24h+arg_0]
0x874594: mov     edx, [edx+0BCh]
0x87459A: push    0
0x87459C: push    edi
0x87459D: push    eax
0x87459E: mov     ecx, ebx
0x8745A0: call    edx
0x8745A2: mov     eax, [esi+24h]
0x8745A5: mov     ebx, [esp+24h+arg_C]
0x8745A9: mov     edi, [eax]
0x8745AB: mov     edx, [ebx]
0x8745AD: mov     eax, [edx+88h]
0x8745B3: push    0
0x8745B5: mov     ecx, ebx
0x8745B7: mov     [esp+28h+arg_8], edi
0x8745BB: call    eax
0x8745BD: mov     edi, [edi+4]
0x8745C0: mov     ebp, eax
0x8745C2: cmp     edi, ebp
0x8745C4: jz      short loc_8745FB
0x8745C6: test    edi, edi
0x8745C8: jz      short loc_8745E6
0x8745CA: lea     ecx, [edi+4]
0x8745CD: push    ecx; lpAddend
0x8745CE: call    dword ptr ds:0A2807Ch
0x8745D4: test    eax, eax
0x8745D6: jnz     short loc_8745E6
0x8745D8: test    edi, edi
0x8745DA: jz      short loc_8745E6
0x8745DC: mov     edx, [edi]
0x8745DE: mov     eax, [edx]
0x8745E0: push    1
0x8745E2: mov     ecx, edi
0x8745E4: call    eax
0x8745E6: test    ebp, ebp
0x8745E8: mov     ecx, [esp+24h+arg_8]
0x8745EC: mov     [ecx+4], ebp
0x8745EF: jz      short loc_8745FB
0x8745F1: add     ebp, 4
0x8745F4: push    ebp; lpAddend
0x8745F5: call    dword ptr ds:0A28078h
0x8745FB: mov     edx, [esi+24h]
0x8745FE: mov     edi, [edx+4]
0x874601: mov     ecx, [esp+24h+var_10]
0x874605: push    0
0x874607: push    ebx
0x874608: mov     [esp+2Ch+arg_8], edi
0x87460C: call    sub_848FD0
0x874611: mov     edi, [edi+4]
0x874614: mov     ebp, eax
0x874616: cmp     edi, ebp
0x874618: jz      short loc_87464F
0x87461A: test    edi, edi
0x87461C: jz      short loc_87463A
0x87461E: lea     eax, [edi+4]
0x874621: push    eax; lpAddend
0x874622: call    dword ptr ds:0A2807Ch
0x874628: test    eax, eax
0x87462A: jnz     short loc_87463A
0x87462C: test    edi, edi
0x87462E: jz      short loc_87463A
0x874630: mov     edx, [edi]
0x874632: mov     eax, [edx]
0x874634: push    1
0x874636: mov     ecx, edi
0x874638: call    eax
0x87463A: test    ebp, ebp
0x87463C: mov     ecx, [esp+24h+arg_8]
0x874640: mov     [ecx+4], ebp
0x874643: jz      short loc_87464F
0x874645: add     ebp, 4
0x874648: push    ebp; lpAddend
0x874649: call    dword ptr ds:0A28078h
0x87464F: mov     edx, [esi+24h]
0x874652: mov     eax, [ebx]
0x874654: mov     ebp, [edx+0Ch]
0x874657: mov     edx, [eax+90h]
0x87465D: push    0
0x87465F: mov     ecx, ebx
0x874661: call    edx
0x874663: mov     edi, [ebp+4]
0x874666: mov     ebx, eax
0x874668: cmp     edi, ebx
0x87466A: jz      short loc_87469D
0x87466C: test    edi, edi
0x87466E: jz      short loc_87468C
0x874670: lea     eax, [edi+4]
0x874673: push    eax; lpAddend
0x874674: call    dword ptr ds:0A2807Ch
0x87467A: test    eax, eax
0x87467C: jnz     short loc_87468C
0x87467E: test    edi, edi
0x874680: jz      short loc_87468C
0x874682: mov     edx, [edi]
0x874684: mov     eax, [edx]
0x874686: push    1
0x874688: mov     ecx, edi
0x87468A: call    eax
0x87468C: test    ebx, ebx
0x87468E: mov     [ebp+4], ebx
0x874691: jz      short loc_87469D
0x874693: add     ebx, 4
0x874696: push    ebx; lpAddend
0x874697: call    dword ptr ds:0A28078h
0x87469D: mov     ecx, [esi+24h]
0x8746A0: mov     edi, [ecx+10h]
0x8746A3: mov     eax, ds:0B43110h
0x8746A8: mov     ebx, [edi+4]
0x8746AB: add     edi, 4
0x8746AE: cmp     ebx, eax
0x8746B0: mov     ebp, eax
0x8746B2: jz      short loc_8746E4
0x8746B4: test    ebx, ebx
0x8746B6: jz      short loc_8746D4
0x8746B8: lea     edx, [ebx+4]
0x8746BB: push    edx; lpAddend
0x8746BC: call    dword ptr ds:0A2807Ch
0x8746C2: test    eax, eax
0x8746C4: jnz     short loc_8746D4
0x8746C6: test    ebx, ebx
0x8746C8: jz      short loc_8746D4
0x8746CA: mov     eax, [ebx]
0x8746CC: mov     edx, [eax]
0x8746CE: push    1
0x8746D0: mov     ecx, ebx
0x8746D2: call    edx
0x8746D4: test    ebp, ebp
0x8746D6: mov     [edi], ebp
0x8746D8: jz      short loc_8746E4
0x8746DA: add     ebp, 4
0x8746DD: push    ebp; lpAddend
0x8746DE: call    dword ptr ds:0A28078h
0x8746E4: mov     ecx, [esi+24h]
0x8746E7: mov     edi, [ecx+14h]
0x8746EA: mov     eax, ds:0B43108h
0x8746EF: mov     ebx, [edi+4]
0x8746F2: add     edi, 4
0x8746F5: cmp     ebx, eax
0x8746F7: mov     ebp, eax
0x8746F9: jz      short loc_87472B
0x8746FB: test    ebx, ebx
0x8746FD: jz      short loc_87471B
0x8746FF: lea     edx, [ebx+4]
0x874702: push    edx; lpAddend
0x874703: call    dword ptr ds:0A2807Ch
0x874709: test    eax, eax
0x87470B: jnz     short loc_87471B
0x87470D: test    ebx, ebx
0x87470F: jz      short loc_87471B
0x874711: mov     eax, [ebx]
0x874713: mov     edx, [eax]
0x874715: push    1
0x874717: mov     ecx, ebx
0x874719: call    edx
0x87471B: test    ebp, ebp
0x87471D: mov     [edi], ebp
0x87471F: jz      short loc_87472B
0x874721: add     ebp, 4
0x874724: push    ebp; lpAddend
0x874725: call    dword ptr ds:0A28078h
0x87472B: mov     eax, [esi+24h]
0x87472E: mov     ebx, [eax+18h]
0x874731: mov     eax, ds:0B4310Ch
0x874736: mov     edi, [ebx+4]
0x874739: cmp     edi, eax
0x87473B: mov     ebp, eax
0x87473D: jz      short loc_874770
0x87473F: test    edi, edi
0x874741: jz      short loc_87475F
0x874743: lea     ecx, [edi+4]
0x874746: push    ecx; lpAddend
0x874747: call    dword ptr ds:0A2807Ch
0x87474D: test    eax, eax
0x87474F: jnz     short loc_87475F
0x874751: test    edi, edi
0x874753: jz      short loc_87475F
0x874755: mov     edx, [edi]
0x874757: mov     eax, [edx]
0x874759: push    1
0x87475B: mov     ecx, edi
0x87475D: call    eax
0x87475F: test    ebp, ebp
0x874761: mov     [ebx+4], ebp
0x874764: jz      short loc_874770
0x874766: add     ebp, 4
0x874769: push    ebp; lpAddend
0x87476A: call    dword ptr ds:0A28078h
0x874770: mov     ebx, 1
0x874775: add     [esi+60h], ebx
0x874778: mov     [esp+24h+arg_8], esi
0x87477C: mov     edi, [esp+24h+var_10]
0x874780: mov     edx, [edi+38h]
0x874783: lea     ecx, [esp+24h+arg_8]
0x874787: push    ecx
0x874788: push    edx
0x874789: lea     ecx, [edi+40h]
0x87478C: mov     [esp+2Ch+var_4], 0
0x874794: call    sub_76CE40
0x874799: or      eax, 0FFFFFFFFh
0x87479C: add     [esi+60h], eax
0x87479F: mov     [esp+24h+var_4], eax
0x8747A3: jnz     short loc_8747AC
0x8747A5: mov     ecx, esi
0x8747A7: call    sub_7604D0
0x8747AC: add     [edi+38h], ebx
0x8747AF: mov     ecx, [esp+24h+var_C]
0x8747B3: mov     large fs:0, ecx
0x8747BA: pop     ecx
0x8747BB: pop     edi
0x8747BC: pop     esi
0x8747BD: pop     ebp
0x8747BE: pop     ebx
0x8747BF: add     esp, 10h
0x8747C2: retn    10h
