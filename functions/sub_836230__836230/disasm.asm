0x836230: push    0FFFFFFFFh
0x836232: push    offset SEH_81EA70
0x836237: mov     eax, large fs:0
0x83623D: push    eax
0x83623E: sub     esp, 0Ch
0x836241: push    ebx
0x836242: push    ebp
0x836243: push    esi
0x836244: push    edi
0x836245: mov     eax, ds:0B30AACh
0x83624A: xor     eax, esp
0x83624C: push    eax
0x83624D: lea     eax, [esp+2Ch+var_C]
0x836251: mov     large fs:0, eax
0x836257: xor     esi, esi
0x836259: mov     [esp+2Ch+var_14], esi
0x83625D: xor     edi, edi
0x83625F: mov     [esp+2Ch+var_4], esi
0x836263: mov     [esp+2Ch+var_18], edi
0x836267: mov     eax, ds:0B45BC8h
0x83626C: test    eax, eax
0x83626E: mov     ebx, 1
0x836273: mov     byte ptr [esp+2Ch+var_4], bl
0x836277: jz      short loc_836286
0x836279: mov     esi, eax
0x83627B: test    esi, esi
0x83627D: mov     [esp+2Ch+var_14], esi
0x836281: jz      short loc_836286
0x836283: add     [esi+60h], ebx
0x836286: mov     eax, [esi+18h]
0x836289: cmp     eax, 2
0x83628C: jnb     loc_83635A
0x836292: lea     eax, [esp+2Ch+var_10]
0x836296: push    eax
0x836297: call    sub_772630
0x83629C: add     esp, 4
0x83629F: mov     eax, [eax]
0x8362A1: test    eax, eax
0x8362A3: jz      short loc_8362AE
0x8362A5: mov     edi, eax
0x8362A7: add     [edi+5Ch], ebx
0x8362AA: mov     [esp+2Ch+var_18], edi
0x8362AE: mov     eax, [esp+2Ch+var_10]
0x8362B2: test    eax, eax
0x8362B4: mov     byte ptr [esp+2Ch+var_4], 1
0x8362B9: jz      short loc_8362CE
0x8362BB: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8362BF: mov     ecx, eax
0x8362C1: add     eax, 5Ch ; '\'
0x8362C4: cmp     dword ptr [eax], 0
0x8362C7: jnz     short loc_8362CE
0x8362C9: call    sub_772560
0x8362CE: push    2
0x8362D0: push    ebx
0x8362D1: push    0
0x8362D3: push    edi
0x8362D4: call    sub_801110
0x8362D9: mov     ecx, [esi+14h]
0x8362DC: add     esp, 10h
0x8362DF: push    edi; a3
0x8362E0: push    ecx; a2
0x8362E1: mov     ecx, esi; this
0x8362E3: call    sub_760010
0x8362E8: lea     edx, [esp+2Ch+var_10]
0x8362EC: push    edx
0x8362ED: call    sub_772630
0x8362F2: add     esp, 4
0x8362F5: mov     ebp, eax
0x8362F7: cmp     edi, [ebp+0]
0x8362FA: mov     byte ptr [esp+2Ch+var_4], 3
0x8362FF: jz      short loc_836320
0x836301: test    edi, edi
0x836303: jz      short loc_836312
0x836305: add     dword ptr [edi+5Ch], 0FFFFFFFFh
0x836309: jnz     short loc_836312
0x83630B: mov     ecx, edi
0x83630D: call    sub_772560
0x836312: mov     edi, [ebp+0]
0x836315: test    edi, edi
0x836317: mov     [esp+2Ch+var_18], edi
0x83631B: jz      short loc_836320
0x83631D: add     [edi+5Ch], ebx
0x836320: mov     eax, [esp+2Ch+var_10]
0x836324: test    eax, eax
0x836326: mov     byte ptr [esp+2Ch+var_4], 1
0x83632B: jz      short loc_836340
0x83632D: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x836331: mov     ecx, eax
0x836333: add     eax, 5Ch ; '\'
0x836336: cmp     dword ptr [eax], 0
0x836339: jnz     short loc_836340
0x83633B: call    sub_772560
0x836340: push    2
0x836342: push    3
0x836344: push    ebx
0x836345: push    edi
0x836346: call    sub_801110
0x83634B: mov     eax, [esi+14h]
0x83634E: add     esp, 10h
0x836351: push    edi; a3
0x836352: push    eax; a2
0x836353: mov     ecx, esi; this
0x836355: call    sub_760010
0x83635A: mov     eax, ds:0B45404h
0x83635F: mov     ebp, [esi+58h]
0x836362: cmp     ebp, eax
0x836364: mov     ebx, eax
0x836366: jz      short loc_83639A
0x836368: test    ebp, ebp
0x83636A: jz      short loc_836389
0x83636C: lea     ecx, [ebp+4]
0x83636F: push    ecx; lpAddend
0x836370: call    dword ptr ds:0A2807Ch
0x836376: test    eax, eax
0x836378: jnz     short loc_836389
0x83637A: test    ebp, ebp
0x83637C: jz      short loc_836389
0x83637E: mov     edx, [ebp+0]
0x836381: mov     eax, [edx]
0x836383: push    1
0x836385: mov     ecx, ebp
0x836387: call    eax
0x836389: test    ebx, ebx
0x83638B: mov     [esi+58h], ebx
0x83638E: jz      short loc_83639A
0x836390: add     ebx, 4
0x836393: push    ebx; lpAddend
0x836394: call    dword ptr ds:0A28078h
0x83639A: mov     eax, ds:0B451FCh
0x83639F: mov     ebp, [esi+44h]
0x8363A2: cmp     ebp, eax
0x8363A4: mov     ebx, eax
0x8363A6: jz      short loc_8363DA
0x8363A8: test    ebp, ebp
0x8363AA: jz      short loc_8363C9
0x8363AC: lea     ecx, [ebp+4]
0x8363AF: push    ecx; lpAddend
0x8363B0: call    dword ptr ds:0A2807Ch
0x8363B6: test    eax, eax
0x8363B8: jnz     short loc_8363C9
0x8363BA: test    ebp, ebp
0x8363BC: jz      short loc_8363C9
0x8363BE: mov     edx, [ebp+0]
0x8363C1: mov     eax, [edx]
0x8363C3: push    1
0x8363C5: mov     ecx, ebp
0x8363C7: call    eax
0x8363C9: test    ebx, ebx
0x8363CB: mov     [esi+44h], ebx
0x8363CE: jz      short loc_8363DA
0x8363D0: add     ebx, 4
0x8363D3: push    ebx; lpAddend
0x8363D4: call    dword ptr ds:0A28078h
0x8363DA: cmp     dword ptr [esi+30h], 0
0x8363DE: jnz     short loc_8363E8
0x8363E0: call    sub_772DF0
0x8363E5: mov     [esi+30h], eax
0x8363E8: mov     ecx, [esi+30h]
0x8363EB: push    0
0x8363ED: push    1
0x8363EF: push    1Bh
0x8363F1: call    sub_772CD0
0x8363F6: cmp     dword ptr [esi+30h], 0
0x8363FA: jnz     short loc_836404
0x8363FC: call    sub_772DF0
0x836401: mov     [esi+30h], eax
0x836404: mov     ecx, [esi+30h]
0x836407: push    0
0x836409: push    9
0x83640B: push    13h
0x83640D: call    sub_772CD0
0x836412: cmp     dword ptr [esi+30h], 0
0x836416: jnz     short loc_836420
0x836418: call    sub_772DF0
0x83641D: mov     [esi+30h], eax
0x836420: mov     ecx, [esi+30h]
0x836423: push    0
0x836425: push    6
0x836427: push    14h
0x836429: call    sub_772CD0
0x83642E: cmp     dword ptr [esi+30h], 0
0x836432: jnz     short loc_83643C
0x836434: call    sub_772DF0
0x836439: mov     [esi+30h], eax
0x83643C: mov     ecx, [esi+30h]
0x83643F: push    0
0x836441: push    1
0x836443: push    0Fh
0x836445: call    sub_772CD0
0x83644A: cmp     dword ptr [esi+30h], 0
0x83644E: jnz     short loc_836458
0x836450: call    sub_772DF0
0x836455: mov     [esi+30h], eax
0x836458: mov     ecx, [esi+30h]
0x83645B: push    0
0x83645D: push    5
0x83645F: push    19h
0x836461: call    sub_772CD0
0x836466: cmp     dword ptr [esi+30h], 0
0x83646A: jnz     short loc_836474
0x83646C: call    sub_772DF0
0x836471: mov     [esi+30h], eax
0x836474: mov     ecx, [esi+30h]
0x836477: push    0
0x836479: push    0
0x83647B: push    18h
0x83647D: call    sub_772CD0
0x836482: cmp     dword ptr [esi+30h], 0
0x836486: jnz     short loc_836490
0x836488: call    sub_772DF0
0x83648D: mov     [esi+30h], eax
0x836490: mov     ecx, [esi+30h]
0x836493: push    0
0x836495: push    1
0x836497: push    7
0x836499: call    sub_772CD0
0x83649E: cmp     dword ptr [esi+30h], 0
0x8364A2: jnz     short loc_8364AC
0x8364A4: call    sub_772DF0
0x8364A9: mov     [esi+30h], eax
0x8364AC: mov     ecx, [esi+30h]
0x8364AF: push    0
0x8364B1: push    4
0x8364B3: push    17h
0x8364B5: call    sub_772CD0
0x8364BA: cmp     dword ptr [esi+30h], 0
0x8364BE: jnz     short loc_8364C8
0x8364C0: call    sub_772DF0
0x8364C5: mov     [esi+30h], eax
0x8364C8: mov     ecx, [esi+30h]
0x8364CB: push    0
0x8364CD: push    0
0x8364CF: push    0Eh
0x8364D1: call    sub_772CD0
0x8364D6: cmp     dword ptr [esi+30h], 0
0x8364DA: jnz     short loc_8364E4
0x8364DC: call    sub_772DF0
0x8364E1: mov     [esi+30h], eax
0x8364E4: mov     ecx, [esi+30h]
0x8364E7: push    0
0x8364E9: push    0
0x8364EB: push    34h ; '4'
0x8364ED: call    sub_772CD0
0x8364F2: mov     ebp, 2
0x8364F7: or      ebx, 0FFFFFFFFh
0x8364FA: cmp     esi, ds:0B45BCCh
0x836500: mov     ds:0B44148h, ebp
0x836506: mov     dword ptr ds:0B447D8h, 0
0x836510: jz      short loc_836530
0x836512: add     [esi+60h], ebx
0x836515: jnz     short loc_83651E
0x836517: mov     ecx, esi
0x836519: call    sub_7604D0
0x83651E: mov     esi, ds:0B45BCCh
0x836524: test    esi, esi
0x836526: mov     [esp+2Ch+var_14], esi
0x83652A: jz      short loc_836530
0x83652C: add     dword ptr [esi+60h], 1
0x836530: cmp     [esi+18h], ebp
0x836533: jnb     loc_83661D
0x836539: lea     ecx, [esp+2Ch+var_10]
0x83653D: push    ecx
0x83653E: call    sub_772630
0x836543: add     esp, 4
0x836546: mov     ebp, eax
0x836548: cmp     edi, [ebp+0]
0x83654B: mov     byte ptr [esp+2Ch+var_4], 4
0x836550: jz      short loc_836571
0x836552: test    edi, edi
0x836554: jz      short loc_836562
0x836556: add     [edi+5Ch], ebx
0x836559: jnz     short loc_836562
0x83655B: mov     ecx, edi
0x83655D: call    sub_772560
0x836562: mov     edi, [ebp+0]
0x836565: test    edi, edi
0x836567: mov     [esp+2Ch+var_18], edi
0x83656B: jz      short loc_836571
0x83656D: add     dword ptr [edi+5Ch], 1
0x836571: mov     eax, [esp+2Ch+var_10]
0x836575: test    eax, eax
0x836577: mov     byte ptr [esp+2Ch+var_4], 1
0x83657C: jz      short loc_836590
0x83657E: add     [eax+5Ch], ebx
0x836581: mov     ecx, eax
0x836583: add     eax, 5Ch ; '\'
0x836586: cmp     dword ptr [eax], 0
0x836589: jnz     short loc_836590
0x83658B: call    sub_772560
0x836590: push    2
0x836592: push    1
0x836594: push    0
0x836596: push    edi
0x836597: call    sub_801110
0x83659C: mov     edx, [esi+14h]
0x83659F: add     esp, 10h
0x8365A2: push    edi; a3
0x8365A3: push    edx; a2
0x8365A4: mov     ecx, esi; this
0x8365A6: call    sub_760010
0x8365AB: lea     eax, [esp+2Ch+var_10]
0x8365AF: push    eax
0x8365B0: call    sub_772630
0x8365B5: add     esp, 4
0x8365B8: mov     ebp, eax
0x8365BA: cmp     edi, [ebp+0]
0x8365BD: mov     byte ptr [esp+2Ch+var_4], 5
0x8365C2: jz      short loc_8365E3
0x8365C4: test    edi, edi
0x8365C6: jz      short loc_8365D4
0x8365C8: add     [edi+5Ch], ebx
0x8365CB: jnz     short loc_8365D4
0x8365CD: mov     ecx, edi
0x8365CF: call    sub_772560
0x8365D4: mov     edi, [ebp+0]
0x8365D7: test    edi, edi
0x8365D9: mov     [esp+2Ch+var_18], edi
0x8365DD: jz      short loc_8365E3
0x8365DF: add     dword ptr [edi+5Ch], 1
0x8365E3: mov     eax, [esp+2Ch+var_10]
0x8365E7: test    eax, eax
0x8365E9: mov     byte ptr [esp+2Ch+var_4], 1
0x8365EE: jz      short loc_836602
0x8365F0: add     [eax+5Ch], ebx
0x8365F3: mov     ecx, eax
0x8365F5: add     eax, 5Ch ; '\'
0x8365F8: cmp     dword ptr [eax], 0
0x8365FB: jnz     short loc_836602
0x8365FD: call    sub_772560
0x836602: push    2
0x836604: push    3
0x836606: push    1
0x836608: push    edi
0x836609: call    sub_801110
0x83660E: mov     ecx, [esi+14h]
0x836611: add     esp, 10h
0x836614: push    edi; a3
0x836615: push    ecx; a2
0x836616: mov     ecx, esi; this
0x836618: call    sub_760010
0x83661D: mov     eax, ds:0B45408h
0x836622: mov     ebp, [esi+58h]
0x836625: cmp     ebp, eax
0x836627: mov     ebx, eax
0x836629: jz      short loc_83665D
0x83662B: test    ebp, ebp
0x83662D: jz      short loc_83664C
0x83662F: lea     edx, [ebp+4]
0x836632: push    edx; lpAddend
0x836633: call    dword ptr ds:0A2807Ch
0x836639: test    eax, eax
0x83663B: jnz     short loc_83664C
0x83663D: test    ebp, ebp
0x83663F: jz      short loc_83664C
0x836641: mov     eax, [ebp+0]
0x836644: mov     edx, [eax]
0x836646: push    1
0x836648: mov     ecx, ebp
0x83664A: call    edx
0x83664C: test    ebx, ebx
0x83664E: mov     [esi+58h], ebx
0x836651: jz      short loc_83665D
0x836653: add     ebx, 4
0x836656: push    ebx; lpAddend
0x836657: call    dword ptr ds:0A28078h
0x83665D: mov     eax, ds:0B45200h
0x836662: mov     ebp, [esi+44h]
0x836665: cmp     ebp, eax
0x836667: mov     ebx, eax
0x836669: jz      short loc_83669D
0x83666B: test    ebp, ebp
0x83666D: jz      short loc_83668C
0x83666F: lea     eax, [ebp+4]
0x836672: push    eax; lpAddend
0x836673: call    dword ptr ds:0A2807Ch
0x836679: test    eax, eax
0x83667B: jnz     short loc_83668C
0x83667D: test    ebp, ebp
0x83667F: jz      short loc_83668C
0x836681: mov     edx, [ebp+0]
0x836684: mov     eax, [edx]
0x836686: push    1
0x836688: mov     ecx, ebp
0x83668A: call    eax
0x83668C: test    ebx, ebx
0x83668E: mov     [esi+44h], ebx
0x836691: jz      short loc_83669D
0x836693: add     ebx, 4
0x836696: push    ebx; lpAddend
0x836697: call    dword ptr ds:0A28078h
0x83669D: cmp     dword ptr [esi+30h], 0
0x8366A1: jnz     short loc_8366AB
0x8366A3: call    sub_772DF0
0x8366A8: mov     [esi+30h], eax
0x8366AB: mov     ecx, [esi+30h]
0x8366AE: push    0
0x8366B0: push    1
0x8366B2: push    1Bh
0x8366B4: call    sub_772CD0
0x8366B9: cmp     dword ptr [esi+30h], 0
0x8366BD: jnz     short loc_8366C7
0x8366BF: call    sub_772DF0
0x8366C4: mov     [esi+30h], eax
0x8366C7: mov     ecx, [esi+30h]
0x8366CA: push    0
0x8366CC: push    9
0x8366CE: push    13h
0x8366D0: call    sub_772CD0
0x8366D5: cmp     dword ptr [esi+30h], 0
0x8366D9: jnz     short loc_8366E3
0x8366DB: call    sub_772DF0
0x8366E0: mov     [esi+30h], eax
0x8366E3: mov     ecx, [esi+30h]
0x8366E6: push    0
0x8366E8: push    6
0x8366EA: push    14h
0x8366EC: call    sub_772CD0
0x8366F1: cmp     dword ptr [esi+30h], 0
0x8366F5: jnz     short loc_8366FF
0x8366F7: call    sub_772DF0
0x8366FC: mov     [esi+30h], eax
0x8366FF: mov     ecx, [esi+30h]
0x836702: push    0
0x836704: push    1
0x836706: push    0Fh
0x836708: call    sub_772CD0
0x83670D: cmp     dword ptr [esi+30h], 0
0x836711: jnz     short loc_83671B
0x836713: call    sub_772DF0
0x836718: mov     [esi+30h], eax
0x83671B: mov     ecx, [esi+30h]
0x83671E: push    0
0x836720: push    5
0x836722: push    19h
0x836724: call    sub_772CD0
0x836729: cmp     dword ptr [esi+30h], 0
0x83672D: jnz     short loc_836737
0x83672F: call    sub_772DF0
0x836734: mov     [esi+30h], eax
0x836737: mov     ecx, [esi+30h]
0x83673A: push    0
0x83673C: push    0
0x83673E: push    18h
0x836740: call    sub_772CD0
0x836745: cmp     dword ptr [esi+30h], 0
0x836749: jnz     short loc_836753
0x83674B: call    sub_772DF0
0x836750: mov     [esi+30h], eax
0x836753: mov     ecx, [esi+30h]
0x836756: push    0
0x836758: push    1
0x83675A: push    7
0x83675C: call    sub_772CD0
0x836761: cmp     dword ptr [esi+30h], 0
0x836765: jnz     short loc_83676F
0x836767: call    sub_772DF0
0x83676C: mov     [esi+30h], eax
0x83676F: mov     ecx, [esi+30h]
0x836772: push    0
0x836774: push    4
0x836776: push    17h
0x836778: call    sub_772CD0
0x83677D: cmp     dword ptr [esi+30h], 0
0x836781: jnz     short loc_83678B
0x836783: call    sub_772DF0
0x836788: mov     [esi+30h], eax
0x83678B: mov     ecx, [esi+30h]
0x83678E: push    0
0x836790: push    0
0x836792: push    0Eh
0x836794: call    sub_772CD0
0x836799: cmp     dword ptr [esi+30h], 0
0x83679D: jnz     short loc_8367A7
0x83679F: call    sub_772DF0
0x8367A4: mov     [esi+30h], eax
0x8367A7: mov     ecx, [esi+30h]
0x8367AA: push    0
0x8367AC: push    0
0x8367AE: push    34h ; '4'
0x8367B0: call    sub_772CD0
0x8367B5: or      ebx, 0FFFFFFFFh
0x8367B8: test    edi, edi
0x8367BA: mov     dword ptr ds:0B4414Ch, 2
0x8367C4: mov     dword ptr ds:0B447DCh, 0
0x8367CE: mov     byte ptr [esp+2Ch+var_4], 0
0x8367D3: jz      short loc_8367E1
0x8367D5: add     [edi+5Ch], ebx
0x8367D8: jnz     short loc_8367E1
0x8367DA: mov     ecx, edi
0x8367DC: call    sub_772560
0x8367E1: add     [esi+60h], ebx
0x8367E4: mov     [esp+2Ch+var_4], ebx
0x8367E8: jnz     short loc_8367F1
0x8367EA: mov     ecx, esi
0x8367EC: call    sub_7604D0
0x8367F1: mov     ecx, dword ptr [esp+2Ch+var_C]
0x8367F5: mov     large fs:0, ecx
0x8367FC: pop     ecx
0x8367FD: pop     edi
0x8367FE: pop     esi
0x8367FF: pop     ebp
0x836800: pop     ebx
0x836801: add     esp, 18h
0x836804: retn
