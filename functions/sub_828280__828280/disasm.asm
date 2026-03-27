0x828280: push    0FFFFFFFFh
0x828282: push    offset SEH_828280
0x828287: mov     eax, large fs:0
0x82828D: push    eax
0x82828E: sub     esp, 0Ch
0x828291: push    ebx
0x828292: push    ebp
0x828293: push    esi
0x828294: push    edi
0x828295: mov     eax, ds:0B30AACh
0x82829A: xor     eax, esp
0x82829C: push    eax
0x82829D: lea     eax, [esp+2Ch+var_C]
0x8282A1: mov     large fs:0, eax
0x8282A7: xor     esi, esi
0x8282A9: xor     edi, edi
0x8282AB: mov     [esp+2Ch+var_14], esi
0x8282AF: mov     [esp+2Ch+var_4], edi
0x8282B3: mov     [esp+2Ch+a3], edi
0x8282B7: mov     eax, ds:0B45850h
0x8282BC: cmp     eax, edi
0x8282BE: mov     ebp, 1
0x8282C3: mov     byte ptr [esp+2Ch+var_4], 1
0x8282C8: jz      short loc_8282D7
0x8282CA: mov     esi, eax
0x8282CC: cmp     esi, edi
0x8282CE: mov     [esp+2Ch+var_14], esi
0x8282D2: jz      short loc_8282D7
0x8282D4: add     [esi+60h], ebp
0x8282D7: mov     eax, [esi+18h]
0x8282DA: or      ebx, 0FFFFFFFFh
0x8282DD: cmp     eax, 8
0x8282E0: jnb     loc_828657
0x8282E6: lea     eax, [esp+2Ch+var_10]
0x8282EA: push    eax
0x8282EB: call    sub_772630
0x8282F0: add     esp, 4
0x8282F3: mov     eax, [eax]
0x8282F5: test    eax, eax
0x8282F7: jz      short loc_828302
0x8282F9: mov     edi, eax
0x8282FB: add     [edi+5Ch], ebp
0x8282FE: mov     [esp+2Ch+a3], edi
0x828302: mov     eax, [esp+2Ch+var_10]
0x828306: test    eax, eax
0x828308: mov     byte ptr [esp+2Ch+var_4], 1
0x82830D: jz      short loc_828321
0x82830F: add     [eax+5Ch], ebx
0x828312: mov     ecx, eax
0x828314: add     eax, 5Ch ; '\'
0x828317: cmp     dword ptr [eax], 0
0x82831A: jnz     short loc_828321
0x82831C: call    sub_772560
0x828321: push    2
0x828323: push    1
0x828325: push    0
0x828327: push    edi
0x828328: call    sub_801110
0x82832D: add     esp, 10h
0x828330: push    edi; a3
0x828331: push    0; a2
0x828333: mov     ecx, esi; this
0x828335: call    sub_760010
0x82833A: lea     ecx, [esp+2Ch+var_10]
0x82833E: push    ecx
0x82833F: call    sub_772630
0x828344: add     esp, 4
0x828347: mov     ebp, eax
0x828349: cmp     edi, [ebp+0]
0x82834C: mov     byte ptr [esp+2Ch+var_4], 3
0x828351: jz      short loc_828372
0x828353: test    edi, edi
0x828355: jz      short loc_828363
0x828357: add     [edi+5Ch], ebx
0x82835A: jnz     short loc_828363
0x82835C: mov     ecx, edi
0x82835E: call    sub_772560
0x828363: mov     edi, [ebp+0]
0x828366: test    edi, edi
0x828368: mov     [esp+2Ch+a3], edi
0x82836C: jz      short loc_828372
0x82836E: add     dword ptr [edi+5Ch], 1
0x828372: mov     eax, [esp+2Ch+var_10]
0x828376: test    eax, eax
0x828378: mov     byte ptr [esp+2Ch+var_4], 1
0x82837D: jz      short loc_828391
0x82837F: add     [eax+5Ch], ebx
0x828382: mov     ecx, eax
0x828384: add     eax, 5Ch ; '\'
0x828387: cmp     dword ptr [eax], 0
0x82838A: jnz     short loc_828391
0x82838C: call    sub_772560
0x828391: push    2
0x828393: push    1
0x828395: push    1
0x828397: push    edi
0x828398: call    sub_801110
0x82839D: add     esp, 10h
0x8283A0: push    edi; a3
0x8283A1: push    1; a2
0x8283A3: mov     ecx, esi; this
0x8283A5: call    sub_760010
0x8283AA: lea     edx, [esp+2Ch+var_10]
0x8283AE: push    edx
0x8283AF: call    sub_772630
0x8283B4: add     esp, 4
0x8283B7: mov     ebp, eax
0x8283B9: cmp     edi, [ebp+0]
0x8283BC: mov     byte ptr [esp+2Ch+var_4], 4
0x8283C1: jz      short loc_8283E2
0x8283C3: test    edi, edi
0x8283C5: jz      short loc_8283D3
0x8283C7: add     [edi+5Ch], ebx
0x8283CA: jnz     short loc_8283D3
0x8283CC: mov     ecx, edi
0x8283CE: call    sub_772560
0x8283D3: mov     edi, [ebp+0]
0x8283D6: test    edi, edi
0x8283D8: mov     [esp+2Ch+a3], edi
0x8283DC: jz      short loc_8283E2
0x8283DE: add     dword ptr [edi+5Ch], 1
0x8283E2: mov     eax, [esp+2Ch+var_10]
0x8283E6: test    eax, eax
0x8283E8: mov     byte ptr [esp+2Ch+var_4], 1
0x8283ED: jz      short loc_828401
0x8283EF: add     [eax+5Ch], ebx
0x8283F2: mov     ecx, eax
0x8283F4: add     eax, 5Ch ; '\'
0x8283F7: cmp     dword ptr [eax], 0
0x8283FA: jnz     short loc_828401
0x8283FC: call    sub_772560
0x828401: push    2
0x828403: push    1
0x828405: push    2
0x828407: push    edi
0x828408: call    sub_801110
0x82840D: add     esp, 10h
0x828410: push    edi; a3
0x828411: push    2; a2
0x828413: mov     ecx, esi; this
0x828415: call    sub_760010
0x82841A: lea     eax, [esp+2Ch+var_10]
0x82841E: push    eax
0x82841F: call    sub_772630
0x828424: add     esp, 4
0x828427: mov     ebp, eax
0x828429: cmp     edi, [ebp+0]
0x82842C: mov     byte ptr [esp+2Ch+var_4], 5
0x828431: jz      short loc_828452
0x828433: test    edi, edi
0x828435: jz      short loc_828443
0x828437: add     [edi+5Ch], ebx
0x82843A: jnz     short loc_828443
0x82843C: mov     ecx, edi
0x82843E: call    sub_772560
0x828443: mov     edi, [ebp+0]
0x828446: test    edi, edi
0x828448: mov     [esp+2Ch+a3], edi
0x82844C: jz      short loc_828452
0x82844E: add     dword ptr [edi+5Ch], 1
0x828452: mov     eax, [esp+2Ch+var_10]
0x828456: test    eax, eax
0x828458: mov     byte ptr [esp+2Ch+var_4], 1
0x82845D: jz      short loc_828471
0x82845F: add     [eax+5Ch], ebx
0x828462: mov     ecx, eax
0x828464: add     eax, 5Ch ; '\'
0x828467: cmp     dword ptr [eax], 0
0x82846A: jnz     short loc_828471
0x82846C: call    sub_772560
0x828471: push    2
0x828473: push    1
0x828475: push    3
0x828477: push    edi
0x828478: call    sub_801110
0x82847D: add     esp, 10h
0x828480: push    edi; a3
0x828481: push    3; a2
0x828483: mov     ecx, esi; this
0x828485: call    sub_760010
0x82848A: lea     ecx, [esp+2Ch+var_10]
0x82848E: push    ecx
0x82848F: call    sub_772630
0x828494: add     esp, 4
0x828497: mov     ebp, eax
0x828499: cmp     edi, [ebp+0]
0x82849C: mov     byte ptr [esp+2Ch+var_4], 6
0x8284A1: jz      short loc_8284C2
0x8284A3: test    edi, edi
0x8284A5: jz      short loc_8284B3
0x8284A7: add     [edi+5Ch], ebx
0x8284AA: jnz     short loc_8284B3
0x8284AC: mov     ecx, edi
0x8284AE: call    sub_772560
0x8284B3: mov     edi, [ebp+0]
0x8284B6: test    edi, edi
0x8284B8: mov     [esp+2Ch+a3], edi
0x8284BC: jz      short loc_8284C2
0x8284BE: add     dword ptr [edi+5Ch], 1
0x8284C2: mov     eax, [esp+2Ch+var_10]
0x8284C6: test    eax, eax
0x8284C8: mov     byte ptr [esp+2Ch+var_4], 1
0x8284CD: jz      short loc_8284E1
0x8284CF: add     [eax+5Ch], ebx
0x8284D2: mov     ecx, eax
0x8284D4: add     eax, 5Ch ; '\'
0x8284D7: cmp     dword ptr [eax], 0
0x8284DA: jnz     short loc_8284E1
0x8284DC: call    sub_772560
0x8284E1: push    2
0x8284E3: push    1
0x8284E5: push    4
0x8284E7: push    edi
0x8284E8: call    sub_801110
0x8284ED: add     esp, 10h
0x8284F0: push    edi; a3
0x8284F1: push    4; a2
0x8284F3: mov     ecx, esi; this
0x8284F5: call    sub_760010
0x8284FA: lea     edx, [esp+2Ch+var_10]
0x8284FE: push    edx
0x8284FF: call    sub_772630
0x828504: add     esp, 4
0x828507: mov     ebp, eax
0x828509: cmp     edi, [ebp+0]
0x82850C: mov     byte ptr [esp+2Ch+var_4], 7
0x828511: jz      short loc_828532
0x828513: test    edi, edi
0x828515: jz      short loc_828523
0x828517: add     [edi+5Ch], ebx
0x82851A: jnz     short loc_828523
0x82851C: mov     ecx, edi
0x82851E: call    sub_772560
0x828523: mov     edi, [ebp+0]
0x828526: test    edi, edi
0x828528: mov     [esp+2Ch+a3], edi
0x82852C: jz      short loc_828532
0x82852E: add     dword ptr [edi+5Ch], 1
0x828532: mov     eax, [esp+2Ch+var_10]
0x828536: test    eax, eax
0x828538: mov     byte ptr [esp+2Ch+var_4], 1
0x82853D: jz      short loc_828551
0x82853F: add     [eax+5Ch], ebx
0x828542: mov     ecx, eax
0x828544: add     eax, 5Ch ; '\'
0x828547: cmp     dword ptr [eax], 0
0x82854A: jnz     short loc_828551
0x82854C: call    sub_772560
0x828551: push    0
0x828553: push    3
0x828555: push    5
0x828557: push    edi
0x828558: call    sub_801110
0x82855D: mov     eax, ds:0B43110h
0x828562: add     esp, 10h
0x828565: push    eax; a2
0x828566: mov     ecx, edi; this
0x828568: call    sub_76C910
0x82856D: push    edi; a3
0x82856E: push    5; a2
0x828570: mov     ecx, esi; this
0x828572: call    sub_760010
0x828577: lea     ecx, [esp+2Ch+var_10]
0x82857B: push    ecx
0x82857C: call    sub_772630
0x828581: add     esp, 4
0x828584: mov     ebp, eax
0x828586: cmp     edi, [ebp+0]
0x828589: mov     byte ptr [esp+2Ch+var_4], 8
0x82858E: jz      short loc_8285AF
0x828590: test    edi, edi
0x828592: jz      short loc_8285A0
0x828594: add     [edi+5Ch], ebx
0x828597: jnz     short loc_8285A0
0x828599: mov     ecx, edi
0x82859B: call    sub_772560
0x8285A0: mov     edi, [ebp+0]
0x8285A3: test    edi, edi
0x8285A5: mov     [esp+2Ch+a3], edi
0x8285A9: jz      short loc_8285AF
0x8285AB: add     dword ptr [edi+5Ch], 1
0x8285AF: mov     eax, [esp+2Ch+var_10]
0x8285B3: test    eax, eax
0x8285B5: mov     byte ptr [esp+2Ch+var_4], 1
0x8285BA: jz      short loc_8285CE
0x8285BC: add     [eax+5Ch], ebx
0x8285BF: mov     ecx, eax
0x8285C1: add     eax, 5Ch ; '\'
0x8285C4: cmp     dword ptr [eax], 0
0x8285C7: jnz     short loc_8285CE
0x8285C9: call    sub_772560
0x8285CE: push    2
0x8285D0: push    1
0x8285D2: push    6
0x8285D4: push    edi
0x8285D5: call    sub_801110
0x8285DA: add     esp, 10h
0x8285DD: push    edi; a3
0x8285DE: push    6; a2
0x8285E0: mov     ecx, esi; this
0x8285E2: call    sub_760010
0x8285E7: lea     edx, [esp+2Ch+var_10]
0x8285EB: push    edx
0x8285EC: call    sub_772630
0x8285F1: add     esp, 4
0x8285F4: mov     ebp, eax
0x8285F6: cmp     edi, [ebp+0]
0x8285F9: mov     byte ptr [esp+2Ch+var_4], 9
0x8285FE: jz      short loc_82861F
0x828600: test    edi, edi
0x828602: jz      short loc_828610
0x828604: add     [edi+5Ch], ebx
0x828607: jnz     short loc_828610
0x828609: mov     ecx, edi
0x82860B: call    sub_772560
0x828610: mov     edi, [ebp+0]
0x828613: test    edi, edi
0x828615: mov     [esp+2Ch+a3], edi
0x828619: jz      short loc_82861F
0x82861B: add     dword ptr [edi+5Ch], 1
0x82861F: mov     eax, [esp+2Ch+var_10]
0x828623: test    eax, eax
0x828625: mov     byte ptr [esp+2Ch+var_4], 1
0x82862A: jz      short loc_82863E
0x82862C: add     [eax+5Ch], ebx
0x82862F: mov     ecx, eax
0x828631: add     eax, 5Ch ; '\'
0x828634: cmp     dword ptr [eax], 0
0x828637: jnz     short loc_82863E
0x828639: call    sub_772560
0x82863E: push    0
0x828640: push    3
0x828642: push    7
0x828644: push    edi
0x828645: call    sub_801110
0x82864A: add     esp, 10h
0x82864D: push    edi; a3
0x82864E: push    7; a2
0x828650: mov     ecx, esi; this
0x828652: call    sub_760010
0x828657: mov     eax, ds:0B45390h
0x82865C: mov     ebp, [esi+58h]
0x82865F: cmp     ebp, eax
0x828661: mov     ebx, eax
0x828663: jz      short loc_828697
0x828665: test    ebp, ebp
0x828667: jz      short loc_828686
0x828669: lea     eax, [ebp+4]
0x82866C: push    eax; lpAddend
0x82866D: call    dword ptr ds:0A2807Ch
0x828673: test    eax, eax
0x828675: jnz     short loc_828686
0x828677: test    ebp, ebp
0x828679: jz      short loc_828686
0x82867B: mov     edx, [ebp+0]
0x82867E: mov     eax, [edx]
0x828680: push    1
0x828682: mov     ecx, ebp
0x828684: call    eax
0x828686: test    ebx, ebx
0x828688: mov     [esi+58h], ebx
0x82868B: jz      short loc_828697
0x82868D: add     ebx, 4
0x828690: push    ebx; lpAddend
0x828691: call    dword ptr ds:0A28078h
0x828697: mov     eax, ds:0B45180h
0x82869C: mov     ebp, [esi+44h]
0x82869F: cmp     ebp, eax
0x8286A1: mov     ebx, eax
0x8286A3: jz      short loc_8286D7
0x8286A5: test    ebp, ebp
0x8286A7: jz      short loc_8286C6
0x8286A9: lea     ecx, [ebp+4]
0x8286AC: push    ecx; lpAddend
0x8286AD: call    dword ptr ds:0A2807Ch
0x8286B3: test    eax, eax
0x8286B5: jnz     short loc_8286C6
0x8286B7: test    ebp, ebp
0x8286B9: jz      short loc_8286C6
0x8286BB: mov     edx, [ebp+0]
0x8286BE: mov     eax, [edx]
0x8286C0: push    1
0x8286C2: mov     ecx, ebp
0x8286C4: call    eax
0x8286C6: test    ebx, ebx
0x8286C8: mov     [esi+44h], ebx
0x8286CB: jz      short loc_8286D7
0x8286CD: add     ebx, 4
0x8286D0: push    ebx; lpAddend
0x8286D1: call    dword ptr ds:0A28078h
0x8286D7: cmp     dword ptr [esi+30h], 0
0x8286DB: jnz     short loc_8286E5
0x8286DD: call    sub_772DF0
0x8286E2: mov     [esi+30h], eax
0x8286E5: mov     ecx, [esi+30h]
0x8286E8: push    0
0x8286EA: push    0
0x8286EC: push    1Bh
0x8286EE: call    sub_772CD0
0x8286F3: cmp     dword ptr [esi+30h], 0
0x8286F7: jnz     short loc_828701
0x8286F9: call    sub_772DF0
0x8286FE: mov     [esi+30h], eax
0x828701: mov     ecx, [esi+30h]
0x828704: push    0
0x828706: push    0
0x828708: push    0Fh
0x82870A: call    sub_772CD0
0x82870F: cmp     dword ptr [esi+30h], 0
0x828713: jnz     short loc_82871D
0x828715: call    sub_772DF0
0x82871A: mov     [esi+30h], eax
0x82871D: mov     ecx, [esi+30h]
0x828720: push    0
0x828722: push    1
0x828724: push    7
0x828726: call    sub_772CD0
0x82872B: cmp     dword ptr [esi+30h], 0
0x82872F: jnz     short loc_828739
0x828731: call    sub_772DF0
0x828736: mov     [esi+30h], eax
0x828739: mov     ecx, [esi+30h]
0x82873C: push    0
0x82873E: push    4
0x828740: push    17h
0x828742: call    sub_772CD0
0x828747: cmp     dword ptr [esi+30h], 0
0x82874B: jnz     short loc_828755
0x82874D: call    sub_772DF0
0x828752: mov     [esi+30h], eax
0x828755: mov     ecx, [esi+30h]
0x828758: push    0
0x82875A: push    1
0x82875C: push    0Eh
0x82875E: call    sub_772CD0
0x828763: cmp     dword ptr [esi+30h], 0
0x828767: jnz     short loc_828771
0x828769: call    sub_772DF0
0x82876E: mov     [esi+30h], eax
0x828771: mov     ecx, [esi+30h]
0x828774: push    0
0x828776: push    0
0x828778: push    34h ; '4'
0x82877A: call    sub_772CD0
0x82877F: or      ebx, 0FFFFFFFFh
0x828782: cmp     esi, ds:0B45854h
0x828788: mov     dword ptr ds:0B43DD0h, 38082h
0x828792: mov     dword ptr ds:0B44460h, 10Ch
0x82879C: mov     dword ptr ds:0B43740h, 18000h
0x8287A6: mov     dword ptr ds:0B44AF0h, 8
0x8287B0: jz      short loc_8287D0
0x8287B2: add     [esi+60h], ebx
0x8287B5: jnz     short loc_8287BE
0x8287B7: mov     ecx, esi
0x8287B9: call    sub_7604D0
0x8287BE: mov     esi, ds:0B45854h
0x8287C4: test    esi, esi
0x8287C6: mov     [esp+2Ch+var_14], esi
0x8287CA: jz      short loc_8287D0
0x8287CC: add     dword ptr [esi+60h], 1
0x8287D0: mov     eax, [esi+18h]
0x8287D3: cmp     eax, 8
0x8287D6: jnb     loc_828B6A
0x8287DC: lea     ecx, [esp+2Ch+var_10]
0x8287E0: push    ecx
0x8287E1: call    sub_772630
0x8287E6: add     esp, 4
0x8287E9: mov     ebp, eax
0x8287EB: cmp     edi, [ebp+0]
0x8287EE: mov     byte ptr [esp+2Ch+var_4], 0Ah
0x8287F3: jz      short loc_828814
0x8287F5: test    edi, edi
0x8287F7: jz      short loc_828805
0x8287F9: add     [edi+5Ch], ebx
0x8287FC: jnz     short loc_828805
0x8287FE: mov     ecx, edi
0x828800: call    sub_772560
0x828805: mov     edi, [ebp+0]
0x828808: test    edi, edi
0x82880A: mov     [esp+2Ch+a3], edi
0x82880E: jz      short loc_828814
0x828810: add     dword ptr [edi+5Ch], 1
0x828814: mov     eax, [esp+2Ch+var_10]
0x828818: test    eax, eax
0x82881A: mov     byte ptr [esp+2Ch+var_4], 1
0x82881F: jz      short loc_828833
0x828821: add     [eax+5Ch], ebx
0x828824: mov     ecx, eax
0x828826: add     eax, 5Ch ; '\'
0x828829: cmp     dword ptr [eax], 0
0x82882C: jnz     short loc_828833
0x82882E: call    sub_772560
0x828833: push    2
0x828835: push    1
0x828837: push    0
0x828839: push    edi
0x82883A: call    sub_801110
0x82883F: add     esp, 10h
0x828842: push    edi; a3
0x828843: push    0; a2
0x828845: mov     ecx, esi; this
0x828847: call    sub_760010
0x82884C: lea     edx, [esp+2Ch+var_10]
0x828850: push    edx
0x828851: call    sub_772630
0x828856: add     esp, 4
0x828859: mov     ebp, eax
0x82885B: cmp     edi, [ebp+0]
0x82885E: mov     byte ptr [esp+2Ch+var_4], 0Bh
0x828863: jz      short loc_828884
0x828865: test    edi, edi
0x828867: jz      short loc_828875
0x828869: add     [edi+5Ch], ebx
0x82886C: jnz     short loc_828875
0x82886E: mov     ecx, edi
0x828870: call    sub_772560
0x828875: mov     edi, [ebp+0]
0x828878: test    edi, edi
0x82887A: mov     [esp+2Ch+a3], edi
0x82887E: jz      short loc_828884
0x828880: add     dword ptr [edi+5Ch], 1
0x828884: mov     eax, [esp+2Ch+var_10]
0x828888: test    eax, eax
0x82888A: mov     byte ptr [esp+2Ch+var_4], 1
0x82888F: jz      short loc_8288A3
0x828891: add     [eax+5Ch], ebx
0x828894: mov     ecx, eax
0x828896: add     eax, 5Ch ; '\'
0x828899: cmp     dword ptr [eax], 0
0x82889C: jnz     short loc_8288A3
0x82889E: call    sub_772560
0x8288A3: push    2
0x8288A5: push    1
0x8288A7: push    1
0x8288A9: push    edi
0x8288AA: call    sub_801110
0x8288AF: add     esp, 10h
0x8288B2: push    edi; a3
0x8288B3: push    1; a2
0x8288B5: mov     ecx, esi; this
0x8288B7: call    sub_760010
0x8288BC: lea     eax, [esp+2Ch+var_10]
0x8288C0: push    eax
0x8288C1: call    sub_772630
0x8288C6: add     esp, 4
0x8288C9: mov     ebp, eax
0x8288CB: cmp     edi, [ebp+0]
0x8288CE: mov     byte ptr [esp+2Ch+var_4], 0Ch
0x8288D3: jz      short loc_8288F4
0x8288D5: test    edi, edi
0x8288D7: jz      short loc_8288E5
0x8288D9: add     [edi+5Ch], ebx
0x8288DC: jnz     short loc_8288E5
0x8288DE: mov     ecx, edi
0x8288E0: call    sub_772560
0x8288E5: mov     edi, [ebp+0]
0x8288E8: test    edi, edi
0x8288EA: mov     [esp+2Ch+a3], edi
0x8288EE: jz      short loc_8288F4
0x8288F0: add     dword ptr [edi+5Ch], 1
0x8288F4: mov     eax, [esp+2Ch+var_10]
0x8288F8: test    eax, eax
0x8288FA: mov     byte ptr [esp+2Ch+var_4], 1
0x8288FF: jz      short loc_828913
0x828901: add     [eax+5Ch], ebx
0x828904: mov     ecx, eax
0x828906: add     eax, 5Ch ; '\'
0x828909: cmp     dword ptr [eax], 0
0x82890C: jnz     short loc_828913
0x82890E: call    sub_772560
0x828913: push    2
0x828915: push    1
0x828917: push    2
0x828919: push    edi
0x82891A: call    sub_801110
0x82891F: add     esp, 10h
0x828922: push    edi; a3
0x828923: push    2; a2
0x828925: mov     ecx, esi; this
0x828927: call    sub_760010
0x82892C: lea     ecx, [esp+2Ch+var_10]
0x828930: push    ecx
0x828931: call    sub_772630
0x828936: add     esp, 4
0x828939: mov     ebp, eax
0x82893B: cmp     edi, [ebp+0]
0x82893E: mov     byte ptr [esp+2Ch+var_4], 0Dh
0x828943: jz      short loc_828964
0x828945: test    edi, edi
0x828947: jz      short loc_828955
0x828949: add     [edi+5Ch], ebx
0x82894C: jnz     short loc_828955
0x82894E: mov     ecx, edi
0x828950: call    sub_772560
0x828955: mov     edi, [ebp+0]
0x828958: test    edi, edi
0x82895A: mov     [esp+2Ch+a3], edi
0x82895E: jz      short loc_828964
0x828960: add     dword ptr [edi+5Ch], 1
0x828964: mov     eax, [esp+2Ch+var_10]
0x828968: test    eax, eax
0x82896A: mov     byte ptr [esp+2Ch+var_4], 1
0x82896F: jz      short loc_828983
0x828971: add     [eax+5Ch], ebx
0x828974: mov     ecx, eax
0x828976: add     eax, 5Ch ; '\'
0x828979: cmp     dword ptr [eax], 0
0x82897C: jnz     short loc_828983
0x82897E: call    sub_772560
0x828983: push    2
0x828985: push    1
0x828987: push    3
0x828989: push    edi
0x82898A: call    sub_801110
0x82898F: add     esp, 10h
0x828992: push    edi; a3
0x828993: push    3; a2
0x828995: mov     ecx, esi; this
0x828997: call    sub_760010
0x82899C: lea     edx, [esp+2Ch+var_10]
0x8289A0: push    edx
0x8289A1: call    sub_772630
0x8289A6: add     esp, 4
0x8289A9: mov     ebp, eax
0x8289AB: cmp     edi, [ebp+0]
0x8289AE: mov     byte ptr [esp+2Ch+var_4], 0Eh
0x8289B3: jz      short loc_8289D4
0x8289B5: test    edi, edi
0x8289B7: jz      short loc_8289C5
0x8289B9: add     [edi+5Ch], ebx
0x8289BC: jnz     short loc_8289C5
0x8289BE: mov     ecx, edi
0x8289C0: call    sub_772560
0x8289C5: mov     edi, [ebp+0]
0x8289C8: test    edi, edi
0x8289CA: mov     [esp+2Ch+a3], edi
0x8289CE: jz      short loc_8289D4
0x8289D0: add     dword ptr [edi+5Ch], 1
0x8289D4: mov     eax, [esp+2Ch+var_10]
0x8289D8: test    eax, eax
0x8289DA: mov     byte ptr [esp+2Ch+var_4], 1
0x8289DF: jz      short loc_8289F3
0x8289E1: add     [eax+5Ch], ebx
0x8289E4: mov     ecx, eax
0x8289E6: add     eax, 5Ch ; '\'
0x8289E9: cmp     dword ptr [eax], 0
0x8289EC: jnz     short loc_8289F3
0x8289EE: call    sub_772560
0x8289F3: push    2
0x8289F5: push    1
0x8289F7: push    4
0x8289F9: push    edi
0x8289FA: call    sub_801110
0x8289FF: add     esp, 10h
0x828A02: push    edi; a3
0x828A03: push    4; a2
0x828A05: mov     ecx, esi; this
0x828A07: call    sub_760010
0x828A0C: lea     eax, [esp+2Ch+var_10]
0x828A10: push    eax
0x828A11: call    sub_772630
0x828A16: add     esp, 4
0x828A19: mov     ebp, eax
0x828A1B: cmp     edi, [ebp+0]
0x828A1E: mov     byte ptr [esp+2Ch+var_4], 0Fh
0x828A23: jz      short loc_828A44
0x828A25: test    edi, edi
0x828A27: jz      short loc_828A35
0x828A29: add     [edi+5Ch], ebx
0x828A2C: jnz     short loc_828A35
0x828A2E: mov     ecx, edi
0x828A30: call    sub_772560
0x828A35: mov     edi, [ebp+0]
0x828A38: test    edi, edi
0x828A3A: mov     [esp+2Ch+a3], edi
0x828A3E: jz      short loc_828A44
0x828A40: add     dword ptr [edi+5Ch], 1
0x828A44: mov     eax, [esp+2Ch+var_10]
0x828A48: test    eax, eax
0x828A4A: mov     byte ptr [esp+2Ch+var_4], 1
0x828A4F: jz      short loc_828A63
0x828A51: add     [eax+5Ch], ebx
0x828A54: mov     ecx, eax
0x828A56: add     eax, 5Ch ; '\'
0x828A59: cmp     dword ptr [eax], 0
0x828A5C: jnz     short loc_828A63
0x828A5E: call    sub_772560
0x828A63: push    0
0x828A65: push    3
0x828A67: push    5
0x828A69: push    edi
0x828A6A: call    sub_801110
0x828A6F: mov     ecx, ds:0B43110h
0x828A75: add     esp, 10h
0x828A78: push    ecx; a2
0x828A79: mov     ecx, edi; this
0x828A7B: call    sub_76C910
0x828A80: push    edi; a3
0x828A81: push    5; a2
0x828A83: mov     ecx, esi; this
0x828A85: call    sub_760010
0x828A8A: lea     edx, [esp+2Ch+var_10]
0x828A8E: push    edx
0x828A8F: call    sub_772630
0x828A94: add     esp, 4
0x828A97: mov     ebp, eax
0x828A99: cmp     edi, [ebp+0]
0x828A9C: mov     byte ptr [esp+2Ch+var_4], 10h
0x828AA1: jz      short loc_828AC2
0x828AA3: test    edi, edi
0x828AA5: jz      short loc_828AB3
0x828AA7: add     [edi+5Ch], ebx
0x828AAA: jnz     short loc_828AB3
0x828AAC: mov     ecx, edi
0x828AAE: call    sub_772560
0x828AB3: mov     edi, [ebp+0]
0x828AB6: test    edi, edi
0x828AB8: mov     [esp+2Ch+a3], edi
0x828ABC: jz      short loc_828AC2
0x828ABE: add     dword ptr [edi+5Ch], 1
0x828AC2: mov     eax, [esp+2Ch+var_10]
0x828AC6: test    eax, eax
0x828AC8: mov     byte ptr [esp+2Ch+var_4], 1
0x828ACD: jz      short loc_828AE1
0x828ACF: add     [eax+5Ch], ebx
0x828AD2: mov     ecx, eax
0x828AD4: add     eax, 5Ch ; '\'
0x828AD7: cmp     dword ptr [eax], 0
0x828ADA: jnz     short loc_828AE1
0x828ADC: call    sub_772560
0x828AE1: push    2
0x828AE3: push    1
0x828AE5: push    6
0x828AE7: push    edi
0x828AE8: call    sub_801110
0x828AED: add     esp, 10h
0x828AF0: push    edi; a3
0x828AF1: push    6; a2
0x828AF3: mov     ecx, esi; this
0x828AF5: call    sub_760010
0x828AFA: lea     eax, [esp+2Ch+var_10]
0x828AFE: push    eax
0x828AFF: call    sub_772630
0x828B04: add     esp, 4
0x828B07: mov     ebp, eax
0x828B09: cmp     edi, [ebp+0]
0x828B0C: mov     byte ptr [esp+2Ch+var_4], 11h
0x828B11: jz      short loc_828B32
0x828B13: test    edi, edi
0x828B15: jz      short loc_828B23
0x828B17: add     [edi+5Ch], ebx
0x828B1A: jnz     short loc_828B23
0x828B1C: mov     ecx, edi
0x828B1E: call    sub_772560
0x828B23: mov     edi, [ebp+0]
0x828B26: test    edi, edi
0x828B28: mov     [esp+2Ch+a3], edi
0x828B2C: jz      short loc_828B32
0x828B2E: add     dword ptr [edi+5Ch], 1
0x828B32: mov     eax, [esp+2Ch+var_10]
0x828B36: test    eax, eax
0x828B38: mov     byte ptr [esp+2Ch+var_4], 1
0x828B3D: jz      short loc_828B51
0x828B3F: add     [eax+5Ch], ebx
0x828B42: mov     ecx, eax
0x828B44: add     eax, 5Ch ; '\'
0x828B47: cmp     dword ptr [eax], 0
0x828B4A: jnz     short loc_828B51
0x828B4C: call    sub_772560
0x828B51: push    0
0x828B53: push    3
0x828B55: push    7
0x828B57: push    edi
0x828B58: call    sub_801110
0x828B5D: add     esp, 10h
0x828B60: push    edi; a3
0x828B61: push    7; a2
0x828B63: mov     ecx, esi; this
0x828B65: call    sub_760010
0x828B6A: mov     eax, ds:0B45390h
0x828B6F: mov     ebp, [esi+58h]
0x828B72: cmp     ebp, eax
0x828B74: mov     ebx, eax
0x828B76: jz      short loc_828BAA
0x828B78: test    ebp, ebp
0x828B7A: jz      short loc_828B99
0x828B7C: lea     ecx, [ebp+4]
0x828B7F: push    ecx; lpAddend
0x828B80: call    dword ptr ds:0A2807Ch
0x828B86: test    eax, eax
0x828B88: jnz     short loc_828B99
0x828B8A: test    ebp, ebp
0x828B8C: jz      short loc_828B99
0x828B8E: mov     edx, [ebp+0]
0x828B91: mov     eax, [edx]
0x828B93: push    1
0x828B95: mov     ecx, ebp
0x828B97: call    eax
0x828B99: test    ebx, ebx
0x828B9B: mov     [esi+58h], ebx
0x828B9E: jz      short loc_828BAA
0x828BA0: add     ebx, 4
0x828BA3: push    ebx; lpAddend
0x828BA4: call    dword ptr ds:0A28078h
0x828BAA: mov     eax, ds:0B45184h
0x828BAF: mov     ebp, [esi+44h]
0x828BB2: cmp     ebp, eax
0x828BB4: mov     ebx, eax
0x828BB6: jz      short loc_828BEA
0x828BB8: test    ebp, ebp
0x828BBA: jz      short loc_828BD9
0x828BBC: lea     ecx, [ebp+4]
0x828BBF: push    ecx; lpAddend
0x828BC0: call    dword ptr ds:0A2807Ch
0x828BC6: test    eax, eax
0x828BC8: jnz     short loc_828BD9
0x828BCA: test    ebp, ebp
0x828BCC: jz      short loc_828BD9
0x828BCE: mov     edx, [ebp+0]
0x828BD1: mov     eax, [edx]
0x828BD3: push    1
0x828BD5: mov     ecx, ebp
0x828BD7: call    eax
0x828BD9: test    ebx, ebx
0x828BDB: mov     [esi+44h], ebx
0x828BDE: jz      short loc_828BEA
0x828BE0: add     ebx, 4
0x828BE3: push    ebx; lpAddend
0x828BE4: call    dword ptr ds:0A28078h
0x828BEA: cmp     dword ptr [esi+30h], 0
0x828BEE: jnz     short loc_828BF8
0x828BF0: call    sub_772DF0
0x828BF5: mov     [esi+30h], eax
0x828BF8: mov     ecx, [esi+30h]
0x828BFB: push    0
0x828BFD: push    0
0x828BFF: push    1Bh
0x828C01: call    sub_772CD0
0x828C06: cmp     dword ptr [esi+30h], 0
0x828C0A: jnz     short loc_828C14
0x828C0C: call    sub_772DF0
0x828C11: mov     [esi+30h], eax
0x828C14: mov     ecx, [esi+30h]
0x828C17: push    0
0x828C19: push    0
0x828C1B: push    0Fh
0x828C1D: call    sub_772CD0
0x828C22: cmp     dword ptr [esi+30h], 0
0x828C26: jnz     short loc_828C30
0x828C28: call    sub_772DF0
0x828C2D: mov     [esi+30h], eax
0x828C30: mov     ecx, [esi+30h]
0x828C33: push    0
0x828C35: push    1
0x828C37: push    7
0x828C39: call    sub_772CD0
0x828C3E: cmp     dword ptr [esi+30h], 0
0x828C42: jnz     short loc_828C4C
0x828C44: call    sub_772DF0
0x828C49: mov     [esi+30h], eax
0x828C4C: mov     ecx, [esi+30h]
0x828C4F: push    0
0x828C51: push    4
0x828C53: push    17h
0x828C55: call    sub_772CD0
0x828C5A: cmp     dword ptr [esi+30h], 0
0x828C5E: jnz     short loc_828C68
0x828C60: call    sub_772DF0
0x828C65: mov     [esi+30h], eax
0x828C68: mov     ecx, [esi+30h]
0x828C6B: push    0
0x828C6D: push    1
0x828C6F: push    0Eh
0x828C71: call    sub_772CD0
0x828C76: cmp     dword ptr [esi+30h], 0
0x828C7A: jnz     short loc_828C84
0x828C7C: call    sub_772DF0
0x828C81: mov     [esi+30h], eax
0x828C84: mov     ecx, [esi+30h]
0x828C87: push    0
0x828C89: push    0
0x828C8B: push    34h ; '4'
0x828C8D: call    sub_772CD0
0x828C92: or      ebx, 0FFFFFFFFh
0x828C95: cmp     esi, ds:0B45858h
0x828C9B: mov     dword ptr ds:0B43DD4h, 38082h
0x828CA5: mov     dword ptr ds:0B44464h, 18Ch
0x828CAF: mov     dword ptr ds:0B43744h, 18000h
0x828CB9: mov     dword ptr ds:0B44AF4h, 0Ch
0x828CC3: jz      short loc_828CE3
0x828CC5: add     [esi+60h], ebx
0x828CC8: jnz     short loc_828CD1
0x828CCA: mov     ecx, esi
0x828CCC: call    sub_7604D0
0x828CD1: mov     esi, ds:0B45858h
0x828CD7: test    esi, esi
0x828CD9: mov     [esp+2Ch+var_14], esi
0x828CDD: jz      short loc_828CE3
0x828CDF: add     dword ptr [esi+60h], 1
0x828CE3: mov     eax, [esi+18h]
0x828CE6: cmp     eax, 8
0x828CE9: jnb     loc_82907D
0x828CEF: lea     ecx, [esp+2Ch+var_10]
0x828CF3: push    ecx
0x828CF4: call    sub_772630
0x828CF9: add     esp, 4
0x828CFC: mov     ebp, eax
0x828CFE: cmp     edi, [ebp+0]
0x828D01: mov     byte ptr [esp+2Ch+var_4], 12h
0x828D06: jz      short loc_828D27
0x828D08: test    edi, edi
0x828D0A: jz      short loc_828D18
0x828D0C: add     [edi+5Ch], ebx
0x828D0F: jnz     short loc_828D18
0x828D11: mov     ecx, edi
0x828D13: call    sub_772560
0x828D18: mov     edi, [ebp+0]
0x828D1B: test    edi, edi
0x828D1D: mov     [esp+2Ch+a3], edi
0x828D21: jz      short loc_828D27
0x828D23: add     dword ptr [edi+5Ch], 1
0x828D27: mov     eax, [esp+2Ch+var_10]
0x828D2B: test    eax, eax
0x828D2D: mov     byte ptr [esp+2Ch+var_4], 1
0x828D32: jz      short loc_828D46
0x828D34: add     [eax+5Ch], ebx
0x828D37: mov     ecx, eax
0x828D39: add     eax, 5Ch ; '\'
0x828D3C: cmp     dword ptr [eax], 0
0x828D3F: jnz     short loc_828D46
0x828D41: call    sub_772560
0x828D46: push    2
0x828D48: push    1
0x828D4A: push    0
0x828D4C: push    edi
0x828D4D: call    sub_801110
0x828D52: add     esp, 10h
0x828D55: push    edi; a3
0x828D56: push    0; a2
0x828D58: mov     ecx, esi; this
0x828D5A: call    sub_760010
0x828D5F: lea     edx, [esp+2Ch+var_10]
0x828D63: push    edx
0x828D64: call    sub_772630
0x828D69: add     esp, 4
0x828D6C: mov     ebp, eax
0x828D6E: cmp     edi, [ebp+0]
0x828D71: mov     byte ptr [esp+2Ch+var_4], 13h
0x828D76: jz      short loc_828D97
0x828D78: test    edi, edi
0x828D7A: jz      short loc_828D88
0x828D7C: add     [edi+5Ch], ebx
0x828D7F: jnz     short loc_828D88
0x828D81: mov     ecx, edi
0x828D83: call    sub_772560
0x828D88: mov     edi, [ebp+0]
0x828D8B: test    edi, edi
0x828D8D: mov     [esp+2Ch+a3], edi
0x828D91: jz      short loc_828D97
0x828D93: add     dword ptr [edi+5Ch], 1
0x828D97: mov     eax, [esp+2Ch+var_10]
0x828D9B: test    eax, eax
0x828D9D: mov     byte ptr [esp+2Ch+var_4], 1
0x828DA2: jz      short loc_828DB6
0x828DA4: add     [eax+5Ch], ebx
0x828DA7: mov     ecx, eax
0x828DA9: add     eax, 5Ch ; '\'
0x828DAC: cmp     dword ptr [eax], 0
0x828DAF: jnz     short loc_828DB6
0x828DB1: call    sub_772560
0x828DB6: push    2
0x828DB8: push    1
0x828DBA: push    1
0x828DBC: push    edi
0x828DBD: call    sub_801110
0x828DC2: add     esp, 10h
0x828DC5: push    edi; a3
0x828DC6: push    1; a2
0x828DC8: mov     ecx, esi; this
0x828DCA: call    sub_760010
0x828DCF: lea     eax, [esp+2Ch+var_10]
0x828DD3: push    eax
0x828DD4: call    sub_772630
0x828DD9: add     esp, 4
0x828DDC: mov     ebp, eax
0x828DDE: cmp     edi, [ebp+0]
0x828DE1: mov     byte ptr [esp+2Ch+var_4], 14h
0x828DE6: jz      short loc_828E07
0x828DE8: test    edi, edi
0x828DEA: jz      short loc_828DF8
0x828DEC: add     [edi+5Ch], ebx
0x828DEF: jnz     short loc_828DF8
0x828DF1: mov     ecx, edi
0x828DF3: call    sub_772560
0x828DF8: mov     edi, [ebp+0]
0x828DFB: test    edi, edi
0x828DFD: mov     [esp+2Ch+a3], edi
0x828E01: jz      short loc_828E07
0x828E03: add     dword ptr [edi+5Ch], 1
0x828E07: mov     eax, [esp+2Ch+var_10]
0x828E0B: test    eax, eax
0x828E0D: mov     byte ptr [esp+2Ch+var_4], 1
0x828E12: jz      short loc_828E26
0x828E14: add     [eax+5Ch], ebx
0x828E17: mov     ecx, eax
0x828E19: add     eax, 5Ch ; '\'
0x828E1C: cmp     dword ptr [eax], 0
0x828E1F: jnz     short loc_828E26
0x828E21: call    sub_772560
0x828E26: push    2
0x828E28: push    1
0x828E2A: push    2
0x828E2C: push    edi
0x828E2D: call    sub_801110
0x828E32: add     esp, 10h
0x828E35: push    edi; a3
0x828E36: push    2; a2
0x828E38: mov     ecx, esi; this
0x828E3A: call    sub_760010
0x828E3F: lea     ecx, [esp+2Ch+var_10]
0x828E43: push    ecx
0x828E44: call    sub_772630
0x828E49: add     esp, 4
0x828E4C: mov     ebp, eax
0x828E4E: cmp     edi, [ebp+0]
0x828E51: mov     byte ptr [esp+2Ch+var_4], 15h
0x828E56: jz      short loc_828E77
0x828E58: test    edi, edi
0x828E5A: jz      short loc_828E68
0x828E5C: add     [edi+5Ch], ebx
0x828E5F: jnz     short loc_828E68
0x828E61: mov     ecx, edi
0x828E63: call    sub_772560
0x828E68: mov     edi, [ebp+0]
0x828E6B: test    edi, edi
0x828E6D: mov     [esp+2Ch+a3], edi
0x828E71: jz      short loc_828E77
0x828E73: add     dword ptr [edi+5Ch], 1
0x828E77: mov     eax, [esp+2Ch+var_10]
0x828E7B: test    eax, eax
0x828E7D: mov     byte ptr [esp+2Ch+var_4], 1
0x828E82: jz      short loc_828E96
0x828E84: add     [eax+5Ch], ebx
0x828E87: mov     ecx, eax
0x828E89: add     eax, 5Ch ; '\'
0x828E8C: cmp     dword ptr [eax], 0
0x828E8F: jnz     short loc_828E96
0x828E91: call    sub_772560
0x828E96: push    2
0x828E98: push    1
0x828E9A: push    3
0x828E9C: push    edi
0x828E9D: call    sub_801110
0x828EA2: add     esp, 10h
0x828EA5: push    edi; a3
0x828EA6: push    3; a2
0x828EA8: mov     ecx, esi; this
0x828EAA: call    sub_760010
0x828EAF: lea     edx, [esp+2Ch+var_10]
0x828EB3: push    edx
0x828EB4: call    sub_772630
0x828EB9: add     esp, 4
0x828EBC: mov     ebp, eax
0x828EBE: cmp     edi, [ebp+0]
0x828EC1: mov     byte ptr [esp+2Ch+var_4], 16h
0x828EC6: jz      short loc_828EE7
0x828EC8: test    edi, edi
0x828ECA: jz      short loc_828ED8
0x828ECC: add     [edi+5Ch], ebx
0x828ECF: jnz     short loc_828ED8
0x828ED1: mov     ecx, edi
0x828ED3: call    sub_772560
0x828ED8: mov     edi, [ebp+0]
0x828EDB: test    edi, edi
0x828EDD: mov     [esp+2Ch+a3], edi
0x828EE1: jz      short loc_828EE7
0x828EE3: add     dword ptr [edi+5Ch], 1
0x828EE7: mov     eax, [esp+2Ch+var_10]
0x828EEB: test    eax, eax
0x828EED: mov     byte ptr [esp+2Ch+var_4], 1
0x828EF2: jz      short loc_828F06
0x828EF4: add     [eax+5Ch], ebx
0x828EF7: mov     ecx, eax
0x828EF9: add     eax, 5Ch ; '\'
0x828EFC: cmp     dword ptr [eax], 0
0x828EFF: jnz     short loc_828F06
0x828F01: call    sub_772560
0x828F06: push    2
0x828F08: push    1
0x828F0A: push    4
0x828F0C: push    edi
0x828F0D: call    sub_801110
0x828F12: add     esp, 10h
0x828F15: push    edi; a3
0x828F16: push    4; a2
0x828F18: mov     ecx, esi; this
0x828F1A: call    sub_760010
0x828F1F: lea     eax, [esp+2Ch+var_10]
0x828F23: push    eax
0x828F24: call    sub_772630
0x828F29: add     esp, 4
0x828F2C: mov     ebp, eax
0x828F2E: cmp     edi, [ebp+0]
0x828F31: mov     byte ptr [esp+2Ch+var_4], 17h
0x828F36: jz      short loc_828F57
0x828F38: test    edi, edi
0x828F3A: jz      short loc_828F48
0x828F3C: add     [edi+5Ch], ebx
0x828F3F: jnz     short loc_828F48
0x828F41: mov     ecx, edi
0x828F43: call    sub_772560
0x828F48: mov     edi, [ebp+0]
0x828F4B: test    edi, edi
0x828F4D: mov     [esp+2Ch+a3], edi
0x828F51: jz      short loc_828F57
0x828F53: add     dword ptr [edi+5Ch], 1
0x828F57: mov     eax, [esp+2Ch+var_10]
0x828F5B: test    eax, eax
0x828F5D: mov     byte ptr [esp+2Ch+var_4], 1
0x828F62: jz      short loc_828F76
0x828F64: add     [eax+5Ch], ebx
0x828F67: mov     ecx, eax
0x828F69: add     eax, 5Ch ; '\'
0x828F6C: cmp     dword ptr [eax], 0
0x828F6F: jnz     short loc_828F76
0x828F71: call    sub_772560
0x828F76: push    0
0x828F78: push    3
0x828F7A: push    5
0x828F7C: push    edi
0x828F7D: call    sub_801110
0x828F82: mov     ecx, ds:0B43110h
0x828F88: add     esp, 10h
0x828F8B: push    ecx; a2
0x828F8C: mov     ecx, edi; this
0x828F8E: call    sub_76C910
0x828F93: push    edi; a3
0x828F94: push    5; a2
0x828F96: mov     ecx, esi; this
0x828F98: call    sub_760010
0x828F9D: lea     edx, [esp+2Ch+var_10]
0x828FA1: push    edx
0x828FA2: call    sub_772630
0x828FA7: add     esp, 4
0x828FAA: mov     ebp, eax
0x828FAC: cmp     edi, [ebp+0]
0x828FAF: mov     byte ptr [esp+2Ch+var_4], 18h
0x828FB4: jz      short loc_828FD5
0x828FB6: test    edi, edi
0x828FB8: jz      short loc_828FC6
0x828FBA: add     [edi+5Ch], ebx
0x828FBD: jnz     short loc_828FC6
0x828FBF: mov     ecx, edi
0x828FC1: call    sub_772560
0x828FC6: mov     edi, [ebp+0]
0x828FC9: test    edi, edi
0x828FCB: mov     [esp+2Ch+a3], edi
0x828FCF: jz      short loc_828FD5
0x828FD1: add     dword ptr [edi+5Ch], 1
0x828FD5: mov     eax, [esp+2Ch+var_10]
0x828FD9: test    eax, eax
0x828FDB: mov     byte ptr [esp+2Ch+var_4], 1
0x828FE0: jz      short loc_828FF4
0x828FE2: add     [eax+5Ch], ebx
0x828FE5: mov     ecx, eax
0x828FE7: add     eax, 5Ch ; '\'
0x828FEA: cmp     dword ptr [eax], 0
0x828FED: jnz     short loc_828FF4
0x828FEF: call    sub_772560
0x828FF4: push    2
0x828FF6: push    1
0x828FF8: push    6
0x828FFA: push    edi
0x828FFB: call    sub_801110
0x829000: add     esp, 10h
0x829003: push    edi; a3
0x829004: push    6; a2
0x829006: mov     ecx, esi; this
0x829008: call    sub_760010
0x82900D: lea     eax, [esp+2Ch+var_10]
0x829011: push    eax
0x829012: call    sub_772630
0x829017: add     esp, 4
0x82901A: mov     ebp, eax
0x82901C: cmp     edi, [ebp+0]
0x82901F: mov     byte ptr [esp+2Ch+var_4], 19h
0x829024: jz      short loc_829045
0x829026: test    edi, edi
0x829028: jz      short loc_829036
0x82902A: add     [edi+5Ch], ebx
0x82902D: jnz     short loc_829036
0x82902F: mov     ecx, edi
0x829031: call    sub_772560
0x829036: mov     edi, [ebp+0]
0x829039: test    edi, edi
0x82903B: mov     [esp+2Ch+a3], edi
0x82903F: jz      short loc_829045
0x829041: add     dword ptr [edi+5Ch], 1
0x829045: mov     eax, [esp+2Ch+var_10]
0x829049: test    eax, eax
0x82904B: mov     byte ptr [esp+2Ch+var_4], 1
0x829050: jz      short loc_829064
0x829052: add     [eax+5Ch], ebx
0x829055: mov     ecx, eax
0x829057: add     eax, 5Ch ; '\'
0x82905A: cmp     dword ptr [eax], 0
0x82905D: jnz     short loc_829064
0x82905F: call    sub_772560
0x829064: push    0
0x829066: push    3
0x829068: push    7
0x82906A: push    edi
0x82906B: call    sub_801110
0x829070: add     esp, 10h
0x829073: push    edi; a3
0x829074: push    7; a2
0x829076: mov     ecx, esi; this
0x829078: call    sub_760010
0x82907D: mov     eax, ds:0B45390h
0x829082: mov     ebp, [esi+58h]
0x829085: cmp     ebp, eax
0x829087: mov     ebx, eax
0x829089: jz      short loc_8290BD
0x82908B: test    ebp, ebp
0x82908D: jz      short loc_8290AC
0x82908F: lea     ecx, [ebp+4]
0x829092: push    ecx; lpAddend
0x829093: call    dword ptr ds:0A2807Ch
0x829099: test    eax, eax
0x82909B: jnz     short loc_8290AC
0x82909D: test    ebp, ebp
0x82909F: jz      short loc_8290AC
0x8290A1: mov     edx, [ebp+0]
0x8290A4: mov     eax, [edx]
0x8290A6: push    1
0x8290A8: mov     ecx, ebp
0x8290AA: call    eax
0x8290AC: test    ebx, ebx
0x8290AE: mov     [esi+58h], ebx
0x8290B1: jz      short loc_8290BD
0x8290B3: add     ebx, 4
0x8290B6: push    ebx; lpAddend
0x8290B7: call    dword ptr ds:0A28078h
0x8290BD: mov     eax, ds:0B45188h
0x8290C2: mov     ebp, [esi+44h]
0x8290C5: cmp     ebp, eax
0x8290C7: mov     ebx, eax
0x8290C9: jz      short loc_8290FD
0x8290CB: test    ebp, ebp
0x8290CD: jz      short loc_8290EC
0x8290CF: lea     ecx, [ebp+4]
0x8290D2: push    ecx; lpAddend
0x8290D3: call    dword ptr ds:0A2807Ch
0x8290D9: test    eax, eax
0x8290DB: jnz     short loc_8290EC
0x8290DD: test    ebp, ebp
0x8290DF: jz      short loc_8290EC
0x8290E1: mov     edx, [ebp+0]
0x8290E4: mov     eax, [edx]
0x8290E6: push    1
0x8290E8: mov     ecx, ebp
0x8290EA: call    eax
0x8290EC: test    ebx, ebx
0x8290EE: mov     [esi+44h], ebx
0x8290F1: jz      short loc_8290FD
0x8290F3: add     ebx, 4
0x8290F6: push    ebx; lpAddend
0x8290F7: call    dword ptr ds:0A28078h
0x8290FD: cmp     dword ptr [esi+30h], 0
0x829101: jnz     short loc_82910B
0x829103: call    sub_772DF0
0x829108: mov     [esi+30h], eax
0x82910B: mov     ecx, [esi+30h]
0x82910E: push    0
0x829110: push    0
0x829112: push    1Bh
0x829114: call    sub_772CD0
0x829119: cmp     dword ptr [esi+30h], 0
0x82911D: jnz     short loc_829127
0x82911F: call    sub_772DF0
0x829124: mov     [esi+30h], eax
0x829127: mov     ecx, [esi+30h]
0x82912A: push    0
0x82912C: push    0
0x82912E: push    0Fh
0x829130: call    sub_772CD0
0x829135: cmp     dword ptr [esi+30h], 0
0x829139: jnz     short loc_829143
0x82913B: call    sub_772DF0
0x829140: mov     [esi+30h], eax
0x829143: mov     ecx, [esi+30h]
0x829146: push    0
0x829148: push    1
0x82914A: push    7
0x82914C: call    sub_772CD0
0x829151: cmp     dword ptr [esi+30h], 0
0x829155: jnz     short loc_82915F
0x829157: call    sub_772DF0
0x82915C: mov     [esi+30h], eax
0x82915F: mov     ecx, [esi+30h]
0x829162: push    0
0x829164: push    4
0x829166: push    17h
0x829168: call    sub_772CD0
0x82916D: cmp     dword ptr [esi+30h], 0
0x829171: jnz     short loc_82917B
0x829173: call    sub_772DF0
0x829178: mov     [esi+30h], eax
0x82917B: mov     ecx, [esi+30h]
0x82917E: push    0
0x829180: push    1
0x829182: push    0Eh
0x829184: call    sub_772CD0
0x829189: cmp     dword ptr [esi+30h], 0
0x82918D: jnz     short loc_829197
0x82918F: call    sub_772DF0
0x829194: mov     [esi+30h], eax
0x829197: mov     ecx, [esi+30h]
0x82919A: push    0
0x82919C: push    0
0x82919E: push    34h ; '4'
0x8291A0: call    sub_772CD0
0x8291A5: cmp     esi, ds:0B45868h
0x8291AB: mov     ebx, 18000h
0x8291B0: mov     dword ptr ds:0B43DD8h, 38082h
0x8291BA: mov     dword ptr ds:0B44468h, 18Ch
0x8291C4: mov     ds:0B43748h, ebx
0x8291CA: mov     dword ptr ds:0B44AF8h, 0Ch
0x8291D4: jz      short loc_8291F5
0x8291D6: add     dword ptr [esi+60h], 0FFFFFFFFh
0x8291DA: jnz     short loc_8291E3
0x8291DC: mov     ecx, esi
0x8291DE: call    sub_7604D0
0x8291E3: mov     esi, ds:0B45868h
0x8291E9: test    esi, esi
0x8291EB: mov     [esp+2Ch+var_14], esi
0x8291EF: jz      short loc_8291F5
0x8291F1: add     dword ptr [esi+60h], 1
0x8291F5: cmp     dword ptr [esi+18h], 8
0x8291F9: jnb     loc_829552
0x8291FF: lea     ecx, [esp+2Ch+var_10]
0x829203: push    ecx
0x829204: call    sub_772630
0x829209: add     esp, 4
0x82920C: mov     ebp, eax
0x82920E: cmp     edi, [ebp+0]
0x829211: mov     byte ptr [esp+2Ch+var_4], 1Ah
0x829216: jz      short loc_829238
0x829218: test    edi, edi
0x82921A: jz      short loc_829229
0x82921C: add     dword ptr [edi+5Ch], 0FFFFFFFFh
0x829220: jnz     short loc_829229
0x829222: mov     ecx, edi
0x829224: call    sub_772560
0x829229: mov     edi, [ebp+0]
0x82922C: test    edi, edi
0x82922E: mov     [esp+2Ch+a3], edi
0x829232: jz      short loc_829238
0x829234: add     dword ptr [edi+5Ch], 1
0x829238: mov     eax, [esp+2Ch+var_10]
0x82923C: test    eax, eax
0x82923E: mov     byte ptr [esp+2Ch+var_4], 1
0x829243: jz      short loc_829258
0x829245: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x829249: mov     ecx, eax
0x82924B: add     eax, 5Ch ; '\'
0x82924E: cmp     dword ptr [eax], 0
0x829251: jnz     short loc_829258
0x829253: call    sub_772560
0x829258: push    2
0x82925A: push    1
0x82925C: push    0
0x82925E: push    edi
0x82925F: call    sub_801110
0x829264: add     esp, 10h
0x829267: push    edi; a3
0x829268: push    0; a2
0x82926A: mov     ecx, esi; this
0x82926C: call    sub_760010
0x829271: lea     edx, [esp+2Ch+var_10]
0x829275: push    edx
0x829276: call    sub_772630
0x82927B: add     esp, 4
0x82927E: mov     ebp, eax
0x829280: cmp     edi, [ebp+0]
0x829283: mov     byte ptr [esp+2Ch+var_4], 1Bh
0x829288: jz      short loc_8292AA
0x82928A: test    edi, edi
0x82928C: jz      short loc_82929B
0x82928E: add     dword ptr [edi+5Ch], 0FFFFFFFFh
0x829292: jnz     short loc_82929B
0x829294: mov     ecx, edi
0x829296: call    sub_772560
0x82929B: mov     edi, [ebp+0]
0x82929E: test    edi, edi
0x8292A0: mov     [esp+2Ch+a3], edi
0x8292A4: jz      short loc_8292AA
0x8292A6: add     dword ptr [edi+5Ch], 1
0x8292AA: mov     eax, [esp+2Ch+var_10]
0x8292AE: test    eax, eax
0x8292B0: mov     byte ptr [esp+2Ch+var_4], 1
0x8292B5: jz      short loc_8292CA
0x8292B7: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8292BB: mov     ecx, eax
0x8292BD: add     eax, 5Ch ; '\'
0x8292C0: cmp     dword ptr [eax], 0
0x8292C3: jnz     short loc_8292CA
0x8292C5: call    sub_772560
0x8292CA: push    2
0x8292CC: push    1
0x8292CE: push    1
0x8292D0: push    edi
0x8292D1: call    sub_801110
0x8292D6: add     esp, 10h
0x8292D9: push    edi; a3
0x8292DA: push    1; a2
0x8292DC: mov     ecx, esi; this
0x8292DE: call    sub_760010
0x8292E3: lea     eax, [esp+2Ch+var_10]
0x8292E7: push    eax
0x8292E8: call    sub_772630
0x8292ED: add     esp, 4
0x8292F0: mov     ebp, eax
0x8292F2: cmp     edi, [ebp+0]
0x8292F5: mov     byte ptr [esp+2Ch+var_4], 1Ch
0x8292FA: jz      short loc_82931C
0x8292FC: test    edi, edi
0x8292FE: jz      short loc_82930D
0x829300: add     dword ptr [edi+5Ch], 0FFFFFFFFh
0x829304: jnz     short loc_82930D
0x829306: mov     ecx, edi
0x829308: call    sub_772560
0x82930D: mov     edi, [ebp+0]
0x829310: test    edi, edi
0x829312: mov     [esp+2Ch+a3], edi
0x829316: jz      short loc_82931C
0x829318: add     dword ptr [edi+5Ch], 1
0x82931C: mov     eax, [esp+2Ch+var_10]
0x829320: test    eax, eax
0x829322: mov     byte ptr [esp+2Ch+var_4], 1
0x829327: jz      short loc_82933C
0x829329: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82932D: mov     ecx, eax
0x82932F: add     eax, 5Ch ; '\'
0x829332: cmp     dword ptr [eax], 0
0x829335: jnz     short loc_82933C
0x829337: call    sub_772560
0x82933C: push    2
0x82933E: push    1
0x829340: push    2
0x829342: push    edi
0x829343: call    sub_801110
0x829348: add     esp, 10h
0x82934B: push    edi; a3
0x82934C: push    2; a2
0x82934E: mov     ecx, esi; this
0x829350: call    sub_760010
0x829355: lea     ecx, [esp+2Ch+var_10]
0x829359: push    ecx
0x82935A: call    sub_772630
0x82935F: add     esp, 4
0x829362: mov     ebp, eax
0x829364: cmp     edi, [ebp+0]
0x829367: mov     byte ptr [esp+2Ch+var_4], 1Dh
0x82936C: jz      short loc_82938E
0x82936E: test    edi, edi
0x829370: jz      short loc_82937F
0x829372: add     dword ptr [edi+5Ch], 0FFFFFFFFh
0x829376: jnz     short loc_82937F
0x829378: mov     ecx, edi
0x82937A: call    sub_772560
0x82937F: mov     edi, [ebp+0]
0x829382: test    edi, edi
0x829384: mov     [esp+2Ch+a3], edi
0x829388: jz      short loc_82938E
0x82938A: add     dword ptr [edi+5Ch], 1
0x82938E: mov     eax, [esp+2Ch+var_10]
0x829392: test    eax, eax
0x829394: mov     byte ptr [esp+2Ch+var_4], 1
0x829399: jz      short loc_8293AE
0x82939B: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82939F: mov     ecx, eax
0x8293A1: add     eax, 5Ch ; '\'
0x8293A4: cmp     dword ptr [eax], 0
0x8293A7: jnz     short loc_8293AE
0x8293A9: call    sub_772560
0x8293AE: push    2
0x8293B0: push    1
0x8293B2: push    3
0x8293B4: push    edi
0x8293B5: call    sub_801110
0x8293BA: add     esp, 10h
0x8293BD: push    edi; a3
0x8293BE: push    3; a2
0x8293C0: mov     ecx, esi; this
0x8293C2: call    sub_760010
0x8293C7: lea     edx, [esp+2Ch+var_10]
0x8293CB: push    edx
0x8293CC: call    sub_772630
0x8293D1: add     esp, 4
0x8293D4: mov     ebp, eax
0x8293D6: cmp     edi, [ebp+0]
0x8293D9: mov     byte ptr [esp+2Ch+var_4], 1Eh
0x8293DE: jz      short loc_829400
0x8293E0: test    edi, edi
0x8293E2: jz      short loc_8293F1
0x8293E4: add     dword ptr [edi+5Ch], 0FFFFFFFFh
0x8293E8: jnz     short loc_8293F1
0x8293EA: mov     ecx, edi
0x8293EC: call    sub_772560
0x8293F1: mov     edi, [ebp+0]
0x8293F4: test    edi, edi
0x8293F6: mov     [esp+2Ch+a3], edi
0x8293FA: jz      short loc_829400
0x8293FC: add     dword ptr [edi+5Ch], 1
0x829400: mov     eax, [esp+2Ch+var_10]
0x829404: test    eax, eax
0x829406: mov     byte ptr [esp+2Ch+var_4], 1
0x82940B: jz      short loc_829420
0x82940D: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x829411: mov     ecx, eax
0x829413: add     eax, 5Ch ; '\'
0x829416: cmp     dword ptr [eax], 0
0x829419: jnz     short loc_829420
0x82941B: call    sub_772560
0x829420: push    2
0x829422: push    1
0x829424: push    4
0x829426: push    edi
0x829427: call    sub_801110
0x82942C: add     esp, 10h
0x82942F: push    edi; a3
0x829430: push    4; a2
0x829432: mov     ecx, esi; this
0x829434: call    sub_760010
0x829439: lea     eax, [esp+2Ch+var_10]
0x82943D: push    eax
0x82943E: call    sub_772630
0x829443: add     esp, 4
0x829446: push    eax
0x829447: lea     ecx, [esp+30h+a3]
0x82944B: mov     byte ptr [esp+30h+var_4], 1Fh
0x829450: call    sub_75FAE0
0x829455: mov     eax, [esp+2Ch+var_10]
0x829459: test    eax, eax
0x82945B: mov     byte ptr [esp+2Ch+var_4], 1
0x829460: jz      short loc_829475
0x829462: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x829466: mov     ecx, eax
0x829468: add     eax, 5Ch ; '\'
0x82946B: cmp     dword ptr [eax], 0
0x82946E: jnz     short loc_829475
0x829470: call    sub_772560
0x829475: mov     edi, [esp+2Ch+a3]
0x829479: push    0
0x82947B: push    3
0x82947D: push    5
0x82947F: push    edi
0x829480: call    sub_801110
0x829485: mov     ecx, ds:0B43110h
0x82948B: add     esp, 10h
0x82948E: push    ecx; a2
0x82948F: mov     ecx, edi; this
0x829491: call    sub_76C910
0x829496: push    edi; a3
0x829497: push    5; a2
0x829499: mov     ecx, esi; this
0x82949B: call    sub_760010
0x8294A0: lea     edx, [esp+2Ch+var_10]
0x8294A4: push    edx
0x8294A5: call    sub_772630
0x8294AA: add     esp, 4
0x8294AD: push    eax
0x8294AE: lea     ecx, [esp+30h+a3]
0x8294B2: mov     byte ptr [esp+30h+var_4], 20h ; ' '
0x8294B7: call    sub_75FAE0
0x8294BC: mov     eax, [esp+2Ch+var_10]
0x8294C0: test    eax, eax
0x8294C2: mov     byte ptr [esp+2Ch+var_4], 1
0x8294C7: jz      short loc_8294DC
0x8294C9: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8294CD: mov     ecx, eax
0x8294CF: add     eax, 5Ch ; '\'
0x8294D2: cmp     dword ptr [eax], 0
0x8294D5: jnz     short loc_8294DC
0x8294D7: call    sub_772560
0x8294DC: mov     edi, [esp+2Ch+a3]
0x8294E0: push    2
0x8294E2: push    1
0x8294E4: push    6
0x8294E6: push    edi
0x8294E7: call    sub_801110
0x8294EC: add     esp, 10h
0x8294EF: push    edi; a3
0x8294F0: push    6; a2
0x8294F2: mov     ecx, esi; this
0x8294F4: call    sub_760010
0x8294F9: lea     eax, [esp+2Ch+var_10]
0x8294FD: push    eax
0x8294FE: call    sub_772630
0x829503: add     esp, 4
0x829506: push    eax
0x829507: lea     ecx, [esp+30h+a3]
0x82950B: mov     byte ptr [esp+30h+var_4], 21h ; '!'
0x829510: call    sub_75FAE0
0x829515: mov     eax, [esp+2Ch+var_10]
0x829519: test    eax, eax
0x82951B: mov     byte ptr [esp+2Ch+var_4], 1
0x829520: jz      short loc_829535
0x829522: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x829526: mov     ecx, eax
0x829528: add     eax, 5Ch ; '\'
0x82952B: cmp     dword ptr [eax], 0
0x82952E: jnz     short loc_829535
0x829530: call    sub_772560
0x829535: mov     edi, [esp+2Ch+a3]
0x829539: push    0
0x82953B: push    3
0x82953D: push    7
0x82953F: push    edi
0x829540: call    sub_801110
0x829545: add     esp, 10h
0x829548: push    edi; a3
0x829549: push    7; a2
0x82954B: mov     ecx, esi; this
0x82954D: call    sub_760010
0x829552: mov     ecx, ds:0B45394h
0x829558: push    ecx; a2
0x829559: mov     ecx, esi; this
0x82955B: call    sub_7AECB0
0x829560: mov     edx, ds:0B45180h
0x829566: push    edx; a2
0x829567: mov     ecx, esi; this
0x829569: call    sub_7AEC60
0x82956E: cmp     dword ptr [esi+30h], 0
0x829572: jnz     short loc_82957C
0x829574: call    sub_772DF0
0x829579: mov     [esi+30h], eax
0x82957C: mov     ecx, [esi+30h]
0x82957F: push    0
0x829581: push    0
0x829583: push    1Bh
0x829585: call    sub_772CD0
0x82958A: cmp     dword ptr [esi+30h], 0
0x82958E: jnz     short loc_829598
0x829590: call    sub_772DF0
0x829595: mov     [esi+30h], eax
0x829598: mov     ecx, [esi+30h]
0x82959B: push    0
0x82959D: push    0
0x82959F: push    0Fh
0x8295A1: call    sub_772CD0
0x8295A6: cmp     dword ptr [esi+30h], 0
0x8295AA: jnz     short loc_8295B4
0x8295AC: call    sub_772DF0
0x8295B1: mov     [esi+30h], eax
0x8295B4: mov     ecx, [esi+30h]
0x8295B7: push    0
0x8295B9: push    1
0x8295BB: push    7
0x8295BD: call    sub_772CD0
0x8295C2: cmp     dword ptr [esi+30h], 0
0x8295C6: jnz     short loc_8295D0
0x8295C8: call    sub_772DF0
0x8295CD: mov     [esi+30h], eax
0x8295D0: mov     ecx, [esi+30h]
0x8295D3: push    0
0x8295D5: push    4
0x8295D7: push    17h
0x8295D9: call    sub_772CD0
0x8295DE: cmp     dword ptr [esi+30h], 0
0x8295E2: jnz     short loc_8295EC
0x8295E4: call    sub_772DF0
0x8295E9: mov     [esi+30h], eax
0x8295EC: mov     ecx, [esi+30h]
0x8295EF: push    0
0x8295F1: push    1
0x8295F3: push    0Eh
0x8295F5: call    sub_772CD0
0x8295FA: cmp     dword ptr [esi+30h], 0
0x8295FE: jnz     short loc_829608
0x829600: call    sub_772DF0
0x829605: mov     [esi+30h], eax
0x829608: mov     ecx, [esi+30h]
0x82960B: push    0
0x82960D: push    0
0x82960F: push    34h ; '4'
0x829611: call    sub_772CD0
0x829616: cmp     esi, ds:0B4586Ch
0x82961C: mov     ebp, 78088h
0x829621: mov     ds:0B43DE8h, ebp
0x829627: mov     dword ptr ds:0B44478h, 10Ch
0x829631: mov     ds:0B43758h, ebx
0x829637: mov     dword ptr ds:0B44B08h, 8
0x829641: jz      short loc_829662
0x829643: add     dword ptr [esi+60h], 0FFFFFFFFh
0x829647: jnz     short loc_829650
0x829649: mov     ecx, esi
0x82964B: call    sub_7604D0
0x829650: mov     esi, ds:0B4586Ch
0x829656: test    esi, esi
0x829658: mov     [esp+2Ch+var_14], esi
0x82965C: jz      short loc_829662
0x82965E: add     dword ptr [esi+60h], 1
0x829662: cmp     dword ptr [esi+18h], 8
0x829666: jnb     loc_829941
0x82966C: lea     eax, [esp+2Ch+var_10]
0x829670: push    eax
0x829671: call    sub_772630
0x829676: add     esp, 4
0x829679: push    eax
0x82967A: lea     ecx, [esp+30h+a3]
0x82967E: mov     byte ptr [esp+30h+var_4], 22h ; '"'
0x829683: call    sub_75FAE0
0x829688: mov     eax, [esp+2Ch+var_10]
0x82968C: test    eax, eax
0x82968E: mov     byte ptr [esp+2Ch+var_4], 1
0x829693: jz      short loc_8296A8
0x829695: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x829699: mov     ecx, eax
0x82969B: add     eax, 5Ch ; '\'
0x82969E: cmp     dword ptr [eax], 0
0x8296A1: jnz     short loc_8296A8
0x8296A3: call    sub_772560
0x8296A8: mov     edi, [esp+2Ch+a3]
0x8296AC: push    2
0x8296AE: push    1
0x8296B0: push    0
0x8296B2: push    edi
0x8296B3: call    sub_801110
0x8296B8: add     esp, 10h
0x8296BB: push    edi; a3
0x8296BC: push    0; a2
0x8296BE: mov     ecx, esi; this
0x8296C0: call    sub_760010
0x8296C5: lea     ecx, [esp+2Ch+var_10]
0x8296C9: push    ecx
0x8296CA: call    sub_772630
0x8296CF: add     esp, 4
0x8296D2: push    eax
0x8296D3: lea     ecx, [esp+30h+a3]
0x8296D7: mov     byte ptr [esp+30h+var_4], 23h ; '#'
0x8296DC: call    sub_75FAE0
0x8296E1: mov     eax, [esp+2Ch+var_10]
0x8296E5: test    eax, eax
0x8296E7: mov     byte ptr [esp+2Ch+var_4], 1
0x8296EC: jz      short loc_829701
0x8296EE: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8296F2: mov     ecx, eax
0x8296F4: add     eax, 5Ch ; '\'
0x8296F7: cmp     dword ptr [eax], 0
0x8296FA: jnz     short loc_829701
0x8296FC: call    sub_772560
0x829701: mov     edi, [esp+2Ch+a3]
0x829705: push    2
0x829707: push    1
0x829709: push    1
0x82970B: push    edi
0x82970C: call    sub_801110
0x829711: add     esp, 10h
0x829714: push    edi; a3
0x829715: push    1; a2
0x829717: mov     ecx, esi; this
0x829719: call    sub_760010
0x82971E: lea     edx, [esp+2Ch+var_10]
0x829722: push    edx
0x829723: call    sub_772630
0x829728: add     esp, 4
0x82972B: push    eax
0x82972C: lea     ecx, [esp+30h+a3]
0x829730: mov     byte ptr [esp+30h+var_4], 24h ; '$'
0x829735: call    sub_75FAE0
0x82973A: mov     eax, [esp+2Ch+var_10]
0x82973E: test    eax, eax
0x829740: mov     byte ptr [esp+2Ch+var_4], 1
0x829745: jz      short loc_82975A
0x829747: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82974B: mov     ecx, eax
0x82974D: add     eax, 5Ch ; '\'
0x829750: cmp     dword ptr [eax], 0
0x829753: jnz     short loc_82975A
0x829755: call    sub_772560
0x82975A: mov     edi, [esp+2Ch+a3]
0x82975E: push    2
0x829760: push    1
0x829762: push    2
0x829764: push    edi
0x829765: call    sub_801110
0x82976A: add     esp, 10h
0x82976D: push    edi; a3
0x82976E: push    2; a2
0x829770: mov     ecx, esi; this
0x829772: call    sub_760010
0x829777: lea     eax, [esp+2Ch+var_10]
0x82977B: push    eax
0x82977C: call    sub_772630
0x829781: add     esp, 4
0x829784: push    eax
0x829785: lea     ecx, [esp+30h+a3]
0x829789: mov     byte ptr [esp+30h+var_4], 25h ; '%'
0x82978E: call    sub_75FAE0
0x829793: mov     eax, [esp+2Ch+var_10]
0x829797: test    eax, eax
0x829799: mov     byte ptr [esp+2Ch+var_4], 1
0x82979E: jz      short loc_8297B3
0x8297A0: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8297A4: mov     ecx, eax
0x8297A6: add     eax, 5Ch ; '\'
0x8297A9: cmp     dword ptr [eax], 0
0x8297AC: jnz     short loc_8297B3
0x8297AE: call    sub_772560
0x8297B3: mov     edi, [esp+2Ch+a3]
0x8297B7: push    2
0x8297B9: push    1
0x8297BB: push    3
0x8297BD: push    edi
0x8297BE: call    sub_801110
0x8297C3: add     esp, 10h
0x8297C6: push    edi; a3
0x8297C7: push    3; a2
0x8297C9: mov     ecx, esi; this
0x8297CB: call    sub_760010
0x8297D0: lea     ecx, [esp+2Ch+var_10]
0x8297D4: push    ecx
0x8297D5: call    sub_772630
0x8297DA: add     esp, 4
0x8297DD: push    eax
0x8297DE: lea     ecx, [esp+30h+a3]
0x8297E2: mov     byte ptr [esp+30h+var_4], 26h ; '&'
0x8297E7: call    sub_75FAE0
0x8297EC: mov     eax, [esp+2Ch+var_10]
0x8297F0: test    eax, eax
0x8297F2: mov     byte ptr [esp+2Ch+var_4], 1
0x8297F7: jz      short loc_82980C
0x8297F9: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8297FD: mov     ecx, eax
0x8297FF: add     eax, 5Ch ; '\'
0x829802: cmp     dword ptr [eax], 0
0x829805: jnz     short loc_82980C
0x829807: call    sub_772560
0x82980C: mov     edi, [esp+2Ch+a3]
0x829810: push    2
0x829812: push    1
0x829814: push    4
0x829816: push    edi
0x829817: call    sub_801110
0x82981C: add     esp, 10h
0x82981F: push    edi; a3
0x829820: push    4; a2
0x829822: mov     ecx, esi; this
0x829824: call    sub_760010
0x829829: lea     edx, [esp+2Ch+var_10]
0x82982D: push    edx
0x82982E: call    sub_772630
0x829833: add     esp, 4
0x829836: push    eax
0x829837: lea     ecx, [esp+30h+a3]
0x82983B: mov     byte ptr [esp+30h+var_4], 27h ; '''
0x829840: call    sub_75FAE0
0x829845: mov     eax, [esp+2Ch+var_10]
0x829849: test    eax, eax
0x82984B: mov     byte ptr [esp+2Ch+var_4], 1
0x829850: jz      short loc_829865
0x829852: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x829856: mov     ecx, eax
0x829858: add     eax, 5Ch ; '\'
0x82985B: cmp     dword ptr [eax], 0
0x82985E: jnz     short loc_829865
0x829860: call    sub_772560
0x829865: mov     edi, [esp+2Ch+a3]
0x829869: push    0
0x82986B: push    3
0x82986D: push    5
0x82986F: push    edi
0x829870: call    sub_801110
0x829875: mov     eax, ds:0B43110h
0x82987A: add     esp, 10h
0x82987D: push    eax; a2
0x82987E: mov     ecx, edi; this
0x829880: call    sub_76C910
0x829885: push    edi; a3
0x829886: push    5; a2
0x829888: mov     ecx, esi; this
0x82988A: call    sub_760010
0x82988F: lea     ecx, [esp+2Ch+var_10]
0x829893: push    ecx
0x829894: call    sub_772630
0x829899: add     esp, 4
0x82989C: push    eax
0x82989D: lea     ecx, [esp+30h+a3]
0x8298A1: mov     byte ptr [esp+30h+var_4], 28h ; '('
0x8298A6: call    sub_75FAE0
0x8298AB: mov     eax, [esp+2Ch+var_10]
0x8298AF: test    eax, eax
0x8298B1: mov     byte ptr [esp+2Ch+var_4], 1
0x8298B6: jz      short loc_8298CB
0x8298B8: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8298BC: mov     ecx, eax
0x8298BE: add     eax, 5Ch ; '\'
0x8298C1: cmp     dword ptr [eax], 0
0x8298C4: jnz     short loc_8298CB
0x8298C6: call    sub_772560
0x8298CB: mov     edi, [esp+2Ch+a3]
0x8298CF: push    2
0x8298D1: push    1
0x8298D3: push    6
0x8298D5: push    edi
0x8298D6: call    sub_801110
0x8298DB: add     esp, 10h
0x8298DE: push    edi; a3
0x8298DF: push    6; a2
0x8298E1: mov     ecx, esi; this
0x8298E3: call    sub_760010
0x8298E8: lea     edx, [esp+2Ch+var_10]
0x8298EC: push    edx
0x8298ED: call    sub_772630
0x8298F2: add     esp, 4
0x8298F5: push    eax
0x8298F6: lea     ecx, [esp+30h+a3]
0x8298FA: mov     byte ptr [esp+30h+var_4], 29h ; ')'
0x8298FF: call    sub_75FAE0
0x829904: mov     eax, [esp+2Ch+var_10]
0x829908: test    eax, eax
0x82990A: mov     byte ptr [esp+2Ch+var_4], 1
0x82990F: jz      short loc_829924
0x829911: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x829915: mov     ecx, eax
0x829917: add     eax, 5Ch ; '\'
0x82991A: cmp     dword ptr [eax], 0
0x82991D: jnz     short loc_829924
0x82991F: call    sub_772560
0x829924: mov     edi, [esp+2Ch+a3]
0x829928: push    0
0x82992A: push    3
0x82992C: push    7
0x82992E: push    edi
0x82992F: call    sub_801110
0x829934: add     esp, 10h
0x829937: push    edi; a3
0x829938: push    7; a2
0x82993A: mov     ecx, esi; this
0x82993C: call    sub_760010
0x829941: mov     eax, ds:0B45394h
0x829946: push    eax; a2
0x829947: mov     ecx, esi; this
0x829949: call    sub_7AECB0
0x82994E: mov     ecx, ds:0B45184h
0x829954: push    ecx; a2
0x829955: mov     ecx, esi; this
0x829957: call    sub_7AEC60
0x82995C: cmp     dword ptr [esi+30h], 0
0x829960: jnz     short loc_82996A
0x829962: call    sub_772DF0
0x829967: mov     [esi+30h], eax
0x82996A: mov     ecx, [esi+30h]
0x82996D: push    0
0x82996F: push    0
0x829971: push    1Bh
0x829973: call    sub_772CD0
0x829978: cmp     dword ptr [esi+30h], 0
0x82997C: jnz     short loc_829986
0x82997E: call    sub_772DF0
0x829983: mov     [esi+30h], eax
0x829986: mov     ecx, [esi+30h]
0x829989: push    0
0x82998B: push    0
0x82998D: push    0Fh
0x82998F: call    sub_772CD0
0x829994: cmp     dword ptr [esi+30h], 0
0x829998: jnz     short loc_8299A2
0x82999A: call    sub_772DF0
0x82999F: mov     [esi+30h], eax
0x8299A2: mov     ecx, [esi+30h]
0x8299A5: push    0
0x8299A7: push    1
0x8299A9: push    7
0x8299AB: call    sub_772CD0
0x8299B0: cmp     dword ptr [esi+30h], 0
0x8299B4: jnz     short loc_8299BE
0x8299B6: call    sub_772DF0
0x8299BB: mov     [esi+30h], eax
0x8299BE: mov     ecx, [esi+30h]
0x8299C1: push    0
0x8299C3: push    4
0x8299C5: push    17h
0x8299C7: call    sub_772CD0
0x8299CC: cmp     dword ptr [esi+30h], 0
0x8299D0: jnz     short loc_8299DA
0x8299D2: call    sub_772DF0
0x8299D7: mov     [esi+30h], eax
0x8299DA: mov     ecx, [esi+30h]
0x8299DD: push    0
0x8299DF: push    1
0x8299E1: push    0Eh
0x8299E3: call    sub_772CD0
0x8299E8: cmp     dword ptr [esi+30h], 0
0x8299EC: jnz     short loc_8299F6
0x8299EE: call    sub_772DF0
0x8299F3: mov     [esi+30h], eax
0x8299F6: mov     ecx, [esi+30h]
0x8299F9: push    0
0x8299FB: push    0
0x8299FD: push    34h ; '4'
0x8299FF: call    sub_772CD0
0x829A04: cmp     esi, ds:0B45870h
0x829A0A: mov     ds:0B43DECh, ebp
0x829A10: mov     dword ptr ds:0B4447Ch, 18Ch
0x829A1A: mov     ds:0B4375Ch, ebx
0x829A20: mov     dword ptr ds:0B44B0Ch, 0Ch
0x829A2A: jz      short loc_829A4B
0x829A2C: add     dword ptr [esi+60h], 0FFFFFFFFh
0x829A30: jnz     short loc_829A39
0x829A32: mov     ecx, esi
0x829A34: call    sub_7604D0
0x829A39: mov     esi, ds:0B45870h
0x829A3F: test    esi, esi
0x829A41: mov     [esp+2Ch+var_14], esi
0x829A45: jz      short loc_829A4B
0x829A47: add     dword ptr [esi+60h], 1
0x829A4B: cmp     dword ptr [esi+18h], 8
0x829A4F: jnb     loc_829D2B
0x829A55: lea     edx, [esp+2Ch+var_10]
0x829A59: push    edx
0x829A5A: call    sub_772630
0x829A5F: add     esp, 4
0x829A62: push    eax
0x829A63: lea     ecx, [esp+30h+a3]
0x829A67: mov     byte ptr [esp+30h+var_4], 2Ah ; '*'
0x829A6C: call    sub_75FAE0
0x829A71: mov     eax, [esp+2Ch+var_10]
0x829A75: test    eax, eax
0x829A77: mov     byte ptr [esp+2Ch+var_4], 1
0x829A7C: jz      short loc_829A91
0x829A7E: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x829A82: mov     ecx, eax
0x829A84: add     eax, 5Ch ; '\'
0x829A87: cmp     dword ptr [eax], 0
0x829A8A: jnz     short loc_829A91
0x829A8C: call    sub_772560
0x829A91: mov     edi, [esp+2Ch+a3]
0x829A95: push    2
0x829A97: push    1
0x829A99: push    0
0x829A9B: push    edi
0x829A9C: call    sub_801110
0x829AA1: add     esp, 10h
0x829AA4: push    edi; a3
0x829AA5: push    0; a2
0x829AA7: mov     ecx, esi; this
0x829AA9: call    sub_760010
0x829AAE: lea     eax, [esp+2Ch+var_10]
0x829AB2: push    eax
0x829AB3: call    sub_772630
0x829AB8: add     esp, 4
0x829ABB: push    eax
0x829ABC: lea     ecx, [esp+30h+a3]
0x829AC0: mov     byte ptr [esp+30h+var_4], 2Bh ; '+'
0x829AC5: call    sub_75FAE0
0x829ACA: mov     eax, [esp+2Ch+var_10]
0x829ACE: test    eax, eax
0x829AD0: mov     byte ptr [esp+2Ch+var_4], 1
0x829AD5: jz      short loc_829AEA
0x829AD7: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x829ADB: mov     ecx, eax
0x829ADD: add     eax, 5Ch ; '\'
0x829AE0: cmp     dword ptr [eax], 0
0x829AE3: jnz     short loc_829AEA
0x829AE5: call    sub_772560
0x829AEA: mov     edi, [esp+2Ch+a3]
0x829AEE: push    2
0x829AF0: push    1
0x829AF2: push    1
0x829AF4: push    edi
0x829AF5: call    sub_801110
0x829AFA: add     esp, 10h
0x829AFD: push    edi; a3
0x829AFE: push    1; a2
0x829B00: mov     ecx, esi; this
0x829B02: call    sub_760010
0x829B07: lea     ecx, [esp+2Ch+var_10]
0x829B0B: push    ecx
0x829B0C: call    sub_772630
0x829B11: add     esp, 4
0x829B14: push    eax
0x829B15: lea     ecx, [esp+30h+a3]
0x829B19: mov     byte ptr [esp+30h+var_4], 2Ch ; ','
0x829B1E: call    sub_75FAE0
0x829B23: mov     eax, [esp+2Ch+var_10]
0x829B27: test    eax, eax
0x829B29: mov     byte ptr [esp+2Ch+var_4], 1
0x829B2E: jz      short loc_829B43
0x829B30: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x829B34: mov     ecx, eax
0x829B36: add     eax, 5Ch ; '\'
0x829B39: cmp     dword ptr [eax], 0
0x829B3C: jnz     short loc_829B43
0x829B3E: call    sub_772560
0x829B43: mov     edi, [esp+2Ch+a3]
0x829B47: push    2
0x829B49: push    1
0x829B4B: push    2
0x829B4D: push    edi
0x829B4E: call    sub_801110
0x829B53: add     esp, 10h
0x829B56: push    edi; a3
0x829B57: push    2; a2
0x829B59: mov     ecx, esi; this
0x829B5B: call    sub_760010
0x829B60: lea     edx, [esp+2Ch+var_10]
0x829B64: push    edx
0x829B65: call    sub_772630
0x829B6A: add     esp, 4
0x829B6D: push    eax
0x829B6E: lea     ecx, [esp+30h+a3]
0x829B72: mov     byte ptr [esp+30h+var_4], 2Dh ; '-'
0x829B77: call    sub_75FAE0
0x829B7C: mov     eax, [esp+2Ch+var_10]
0x829B80: test    eax, eax
0x829B82: mov     byte ptr [esp+2Ch+var_4], 1
0x829B87: jz      short loc_829B9C
0x829B89: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x829B8D: mov     ecx, eax
0x829B8F: add     eax, 5Ch ; '\'
0x829B92: cmp     dword ptr [eax], 0
0x829B95: jnz     short loc_829B9C
0x829B97: call    sub_772560
0x829B9C: mov     edi, [esp+2Ch+a3]
0x829BA0: push    2
0x829BA2: push    1
0x829BA4: push    3
0x829BA6: push    edi
0x829BA7: call    sub_801110
0x829BAC: add     esp, 10h
0x829BAF: push    edi; a3
0x829BB0: push    3; a2
0x829BB2: mov     ecx, esi; this
0x829BB4: call    sub_760010
0x829BB9: lea     eax, [esp+2Ch+var_10]
0x829BBD: push    eax
0x829BBE: call    sub_772630
0x829BC3: add     esp, 4
0x829BC6: push    eax
0x829BC7: lea     ecx, [esp+30h+a3]
0x829BCB: mov     byte ptr [esp+30h+var_4], 2Eh ; '.'
0x829BD0: call    sub_75FAE0
0x829BD5: mov     eax, [esp+2Ch+var_10]
0x829BD9: test    eax, eax
0x829BDB: mov     byte ptr [esp+2Ch+var_4], 1
0x829BE0: jz      short loc_829BF5
0x829BE2: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x829BE6: mov     ecx, eax
0x829BE8: add     eax, 5Ch ; '\'
0x829BEB: cmp     dword ptr [eax], 0
0x829BEE: jnz     short loc_829BF5
0x829BF0: call    sub_772560
0x829BF5: mov     edi, [esp+2Ch+a3]
0x829BF9: push    2
0x829BFB: push    1
0x829BFD: push    4
0x829BFF: push    edi
0x829C00: call    sub_801110
0x829C05: add     esp, 10h
0x829C08: push    edi; a3
0x829C09: push    4; a2
0x829C0B: mov     ecx, esi; this
0x829C0D: call    sub_760010
0x829C12: lea     ecx, [esp+2Ch+var_10]
0x829C16: push    ecx
0x829C17: call    sub_772630
0x829C1C: add     esp, 4
0x829C1F: push    eax
0x829C20: lea     ecx, [esp+30h+a3]
0x829C24: mov     byte ptr [esp+30h+var_4], 2Fh ; '/'
0x829C29: call    sub_75FAE0
0x829C2E: mov     eax, [esp+2Ch+var_10]
0x829C32: test    eax, eax
0x829C34: mov     byte ptr [esp+2Ch+var_4], 1
0x829C39: jz      short loc_829C4E
0x829C3B: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x829C3F: mov     ecx, eax
0x829C41: add     eax, 5Ch ; '\'
0x829C44: cmp     dword ptr [eax], 0
0x829C47: jnz     short loc_829C4E
0x829C49: call    sub_772560
0x829C4E: mov     edi, [esp+2Ch+a3]
0x829C52: push    0
0x829C54: push    3
0x829C56: push    5
0x829C58: push    edi
0x829C59: call    sub_801110
0x829C5E: mov     edx, ds:0B43110h
0x829C64: add     esp, 10h
0x829C67: push    edx; a2
0x829C68: mov     ecx, edi; this
0x829C6A: call    sub_76C910
0x829C6F: push    edi; a3
0x829C70: push    5; a2
0x829C72: mov     ecx, esi; this
0x829C74: call    sub_760010
0x829C79: lea     eax, [esp+2Ch+var_10]
0x829C7D: push    eax
0x829C7E: call    sub_772630
0x829C83: add     esp, 4
0x829C86: push    eax
0x829C87: lea     ecx, [esp+30h+a3]
0x829C8B: mov     byte ptr [esp+30h+var_4], 30h ; '0'
0x829C90: call    sub_75FAE0
0x829C95: mov     eax, [esp+2Ch+var_10]
0x829C99: test    eax, eax
0x829C9B: mov     byte ptr [esp+2Ch+var_4], 1
0x829CA0: jz      short loc_829CB5
0x829CA2: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x829CA6: mov     ecx, eax
0x829CA8: add     eax, 5Ch ; '\'
0x829CAB: cmp     dword ptr [eax], 0
0x829CAE: jnz     short loc_829CB5
0x829CB0: call    sub_772560
0x829CB5: mov     edi, [esp+2Ch+a3]
0x829CB9: push    2
0x829CBB: push    1
0x829CBD: push    6
0x829CBF: push    edi
0x829CC0: call    sub_801110
0x829CC5: add     esp, 10h
0x829CC8: push    edi; a3
0x829CC9: push    6; a2
0x829CCB: mov     ecx, esi; this
0x829CCD: call    sub_760010
0x829CD2: lea     ecx, [esp+2Ch+var_10]
0x829CD6: push    ecx
0x829CD7: call    sub_772630
0x829CDC: add     esp, 4
0x829CDF: push    eax
0x829CE0: lea     ecx, [esp+30h+a3]
0x829CE4: mov     byte ptr [esp+30h+var_4], 31h ; '1'
0x829CE9: call    sub_75FAE0
0x829CEE: mov     eax, [esp+2Ch+var_10]
0x829CF2: test    eax, eax
0x829CF4: mov     byte ptr [esp+2Ch+var_4], 1
0x829CF9: jz      short loc_829D0E
0x829CFB: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x829CFF: mov     ecx, eax
0x829D01: add     eax, 5Ch ; '\'
0x829D04: cmp     dword ptr [eax], 0
0x829D07: jnz     short loc_829D0E
0x829D09: call    sub_772560
0x829D0E: mov     edi, [esp+2Ch+a3]
0x829D12: push    0
0x829D14: push    3
0x829D16: push    7
0x829D18: push    edi
0x829D19: call    sub_801110
0x829D1E: add     esp, 10h
0x829D21: push    edi; a3
0x829D22: push    7; a2
0x829D24: mov     ecx, esi; this
0x829D26: call    sub_760010
0x829D2B: mov     edx, ds:0B45394h
0x829D31: push    edx; a2
0x829D32: mov     ecx, esi; this
0x829D34: call    sub_7AECB0
0x829D39: mov     eax, ds:0B45188h
0x829D3E: push    eax; a2
0x829D3F: mov     ecx, esi; this
0x829D41: call    sub_7AEC60
0x829D46: cmp     dword ptr [esi+30h], 0
0x829D4A: jnz     short loc_829D54
0x829D4C: call    sub_772DF0
0x829D51: mov     [esi+30h], eax
0x829D54: mov     ecx, [esi+30h]
0x829D57: push    0
0x829D59: push    0
0x829D5B: push    1Bh
0x829D5D: call    sub_772CD0
0x829D62: cmp     dword ptr [esi+30h], 0
0x829D66: jnz     short loc_829D70
0x829D68: call    sub_772DF0
0x829D6D: mov     [esi+30h], eax
0x829D70: mov     ecx, [esi+30h]
0x829D73: push    0
0x829D75: push    0
0x829D77: push    0Fh
0x829D79: call    sub_772CD0
0x829D7E: cmp     dword ptr [esi+30h], 0
0x829D82: jnz     short loc_829D8C
0x829D84: call    sub_772DF0
0x829D89: mov     [esi+30h], eax
0x829D8C: mov     ecx, [esi+30h]
0x829D8F: push    0
0x829D91: push    1
0x829D93: push    7
0x829D95: call    sub_772CD0
0x829D9A: cmp     dword ptr [esi+30h], 0
0x829D9E: jnz     short loc_829DA8
0x829DA0: call    sub_772DF0
0x829DA5: mov     [esi+30h], eax
0x829DA8: mov     ecx, [esi+30h]
0x829DAB: push    0
0x829DAD: push    4
0x829DAF: push    17h
0x829DB1: call    sub_772CD0
0x829DB6: cmp     dword ptr [esi+30h], 0
0x829DBA: jnz     short loc_829DC4
0x829DBC: call    sub_772DF0
0x829DC1: mov     [esi+30h], eax
0x829DC4: mov     ecx, [esi+30h]
0x829DC7: push    0
0x829DC9: push    1
0x829DCB: push    0Eh
0x829DCD: call    sub_772CD0
0x829DD2: cmp     dword ptr [esi+30h], 0
0x829DD6: jnz     short loc_829DE0
0x829DD8: call    sub_772DF0
0x829DDD: mov     [esi+30h], eax
0x829DE0: mov     ecx, [esi+30h]
0x829DE3: push    0
0x829DE5: push    0
0x829DE7: push    34h ; '4'
0x829DE9: call    sub_772CD0
0x829DEE: cmp     esi, ds:0B45884h
0x829DF4: mov     ds:0B43DF0h, ebp
0x829DFA: mov     dword ptr ds:0B44480h, 18Ch
0x829E04: mov     ds:0B43760h, ebx
0x829E0A: mov     dword ptr ds:0B44B10h, 0Ch
0x829E14: jz      short loc_829E35
0x829E16: add     dword ptr [esi+60h], 0FFFFFFFFh
0x829E1A: jnz     short loc_829E23
0x829E1C: mov     ecx, esi
0x829E1E: call    sub_7604D0
0x829E23: mov     esi, ds:0B45884h
0x829E29: test    esi, esi
0x829E2B: mov     [esp+2Ch+var_14], esi
0x829E2F: jz      short loc_829E35
0x829E31: add     dword ptr [esi+60h], 1
0x829E35: cmp     dword ptr [esi+18h], 8
0x829E39: jnb     loc_82A115
0x829E3F: lea     ecx, [esp+2Ch+var_10]
0x829E43: push    ecx
0x829E44: call    sub_772630
0x829E49: add     esp, 4
0x829E4C: push    eax
0x829E4D: lea     ecx, [esp+30h+a3]
0x829E51: mov     byte ptr [esp+30h+var_4], 32h ; '2'
0x829E56: call    sub_75FAE0
0x829E5B: mov     eax, [esp+2Ch+var_10]
0x829E5F: test    eax, eax
0x829E61: mov     byte ptr [esp+2Ch+var_4], 1
0x829E66: jz      short loc_829E7B
0x829E68: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x829E6C: mov     ecx, eax
0x829E6E: add     eax, 5Ch ; '\'
0x829E71: cmp     dword ptr [eax], 0
0x829E74: jnz     short loc_829E7B
0x829E76: call    sub_772560
0x829E7B: mov     edi, [esp+2Ch+a3]
0x829E7F: push    2
0x829E81: push    1
0x829E83: push    0
0x829E85: push    edi
0x829E86: call    sub_801110
0x829E8B: add     esp, 10h
0x829E8E: push    edi; a3
0x829E8F: push    0; a2
0x829E91: mov     ecx, esi; this
0x829E93: call    sub_760010
0x829E98: lea     edx, [esp+2Ch+var_10]
0x829E9C: push    edx
0x829E9D: call    sub_772630
0x829EA2: add     esp, 4
0x829EA5: push    eax
0x829EA6: lea     ecx, [esp+30h+a3]
0x829EAA: mov     byte ptr [esp+30h+var_4], 33h ; '3'
0x829EAF: call    sub_75FAE0
0x829EB4: mov     eax, [esp+2Ch+var_10]
0x829EB8: test    eax, eax
0x829EBA: mov     byte ptr [esp+2Ch+var_4], 1
0x829EBF: jz      short loc_829ED4
0x829EC1: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x829EC5: mov     ecx, eax
0x829EC7: add     eax, 5Ch ; '\'
0x829ECA: cmp     dword ptr [eax], 0
0x829ECD: jnz     short loc_829ED4
0x829ECF: call    sub_772560
0x829ED4: mov     edi, [esp+2Ch+a3]
0x829ED8: push    2
0x829EDA: push    1
0x829EDC: push    1
0x829EDE: push    edi
0x829EDF: call    sub_801110
0x829EE4: add     esp, 10h
0x829EE7: push    edi; a3
0x829EE8: push    1; a2
0x829EEA: mov     ecx, esi; this
0x829EEC: call    sub_760010
0x829EF1: lea     eax, [esp+2Ch+var_10]
0x829EF5: push    eax
0x829EF6: call    sub_772630
0x829EFB: add     esp, 4
0x829EFE: push    eax
0x829EFF: lea     ecx, [esp+30h+a3]
0x829F03: mov     byte ptr [esp+30h+var_4], 34h ; '4'
0x829F08: call    sub_75FAE0
0x829F0D: mov     eax, [esp+2Ch+var_10]
0x829F11: test    eax, eax
0x829F13: mov     byte ptr [esp+2Ch+var_4], 1
0x829F18: jz      short loc_829F2D
0x829F1A: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x829F1E: mov     ecx, eax
0x829F20: add     eax, 5Ch ; '\'
0x829F23: cmp     dword ptr [eax], 0
0x829F26: jnz     short loc_829F2D
0x829F28: call    sub_772560
0x829F2D: mov     edi, [esp+2Ch+a3]
0x829F31: push    2
0x829F33: push    1
0x829F35: push    2
0x829F37: push    edi
0x829F38: call    sub_801110
0x829F3D: add     esp, 10h
0x829F40: push    edi; a3
0x829F41: push    2; a2
0x829F43: mov     ecx, esi; this
0x829F45: call    sub_760010
0x829F4A: lea     ecx, [esp+2Ch+var_10]
0x829F4E: push    ecx
0x829F4F: call    sub_772630
0x829F54: add     esp, 4
0x829F57: push    eax
0x829F58: lea     ecx, [esp+30h+a3]
0x829F5C: mov     byte ptr [esp+30h+var_4], 35h ; '5'
0x829F61: call    sub_75FAE0
0x829F66: mov     eax, [esp+2Ch+var_10]
0x829F6A: test    eax, eax
0x829F6C: mov     byte ptr [esp+2Ch+var_4], 1
0x829F71: jz      short loc_829F86
0x829F73: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x829F77: mov     ecx, eax
0x829F79: add     eax, 5Ch ; '\'
0x829F7C: cmp     dword ptr [eax], 0
0x829F7F: jnz     short loc_829F86
0x829F81: call    sub_772560
0x829F86: mov     edi, [esp+2Ch+a3]
0x829F8A: push    2
0x829F8C: push    1
0x829F8E: push    3
0x829F90: push    edi
0x829F91: call    sub_801110
0x829F96: add     esp, 10h
0x829F99: push    edi; a3
0x829F9A: push    3; a2
0x829F9C: mov     ecx, esi; this
0x829F9E: call    sub_760010
0x829FA3: lea     edx, [esp+2Ch+var_10]
0x829FA7: push    edx
0x829FA8: call    sub_772630
0x829FAD: add     esp, 4
0x829FB0: push    eax
0x829FB1: lea     ecx, [esp+30h+a3]
0x829FB5: mov     byte ptr [esp+30h+var_4], 36h ; '6'
0x829FBA: call    sub_75FAE0
0x829FBF: mov     eax, [esp+2Ch+var_10]
0x829FC3: test    eax, eax
0x829FC5: mov     byte ptr [esp+2Ch+var_4], 1
0x829FCA: jz      short loc_829FDF
0x829FCC: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x829FD0: mov     ecx, eax
0x829FD2: add     eax, 5Ch ; '\'
0x829FD5: cmp     dword ptr [eax], 0
0x829FD8: jnz     short loc_829FDF
0x829FDA: call    sub_772560
0x829FDF: mov     edi, [esp+2Ch+a3]
0x829FE3: push    2
0x829FE5: push    1
0x829FE7: push    4
0x829FE9: push    edi
0x829FEA: call    sub_801110
0x829FEF: add     esp, 10h
0x829FF2: push    edi; a3
0x829FF3: push    4; a2
0x829FF5: mov     ecx, esi; this
0x829FF7: call    sub_760010
0x829FFC: lea     eax, [esp+2Ch+var_10]
0x82A000: push    eax
0x82A001: call    sub_772630
0x82A006: add     esp, 4
0x82A009: push    eax
0x82A00A: lea     ecx, [esp+30h+a3]
0x82A00E: mov     byte ptr [esp+30h+var_4], 37h ; '7'
0x82A013: call    sub_75FAE0
0x82A018: mov     eax, [esp+2Ch+var_10]
0x82A01C: test    eax, eax
0x82A01E: mov     byte ptr [esp+2Ch+var_4], 1
0x82A023: jz      short loc_82A038
0x82A025: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82A029: mov     ecx, eax
0x82A02B: add     eax, 5Ch ; '\'
0x82A02E: cmp     dword ptr [eax], 0
0x82A031: jnz     short loc_82A038
0x82A033: call    sub_772560
0x82A038: mov     edi, [esp+2Ch+a3]
0x82A03C: push    0
0x82A03E: push    3
0x82A040: push    5
0x82A042: push    edi
0x82A043: call    sub_801110
0x82A048: mov     ecx, ds:0B43110h
0x82A04E: add     esp, 10h
0x82A051: push    ecx; a2
0x82A052: mov     ecx, edi; this
0x82A054: call    sub_76C910
0x82A059: push    edi; a3
0x82A05A: push    5; a2
0x82A05C: mov     ecx, esi; this
0x82A05E: call    sub_760010
0x82A063: lea     edx, [esp+2Ch+var_10]
0x82A067: push    edx
0x82A068: call    sub_772630
0x82A06D: add     esp, 4
0x82A070: push    eax
0x82A071: lea     ecx, [esp+30h+a3]
0x82A075: mov     byte ptr [esp+30h+var_4], 38h ; '8'
0x82A07A: call    sub_75FAE0
0x82A07F: mov     eax, [esp+2Ch+var_10]
0x82A083: test    eax, eax
0x82A085: mov     byte ptr [esp+2Ch+var_4], 1
0x82A08A: jz      short loc_82A09F
0x82A08C: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82A090: mov     ecx, eax
0x82A092: add     eax, 5Ch ; '\'
0x82A095: cmp     dword ptr [eax], 0
0x82A098: jnz     short loc_82A09F
0x82A09A: call    sub_772560
0x82A09F: mov     edi, [esp+2Ch+a3]
0x82A0A3: push    2
0x82A0A5: push    1
0x82A0A7: push    6
0x82A0A9: push    edi
0x82A0AA: call    sub_801110
0x82A0AF: add     esp, 10h
0x82A0B2: push    edi; a3
0x82A0B3: push    6; a2
0x82A0B5: mov     ecx, esi; this
0x82A0B7: call    sub_760010
0x82A0BC: lea     eax, [esp+2Ch+var_10]
0x82A0C0: push    eax
0x82A0C1: call    sub_772630
0x82A0C6: add     esp, 4
0x82A0C9: push    eax
0x82A0CA: lea     ecx, [esp+30h+a3]
0x82A0CE: mov     byte ptr [esp+30h+var_4], 39h ; '9'
0x82A0D3: call    sub_75FAE0
0x82A0D8: mov     eax, [esp+2Ch+var_10]
0x82A0DC: test    eax, eax
0x82A0DE: mov     byte ptr [esp+2Ch+var_4], 1
0x82A0E3: jz      short loc_82A0F8
0x82A0E5: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82A0E9: mov     ecx, eax
0x82A0EB: add     eax, 5Ch ; '\'
0x82A0EE: cmp     dword ptr [eax], 0
0x82A0F1: jnz     short loc_82A0F8
0x82A0F3: call    sub_772560
0x82A0F8: mov     edi, [esp+2Ch+a3]
0x82A0FC: push    0
0x82A0FE: push    3
0x82A100: push    7
0x82A102: push    edi
0x82A103: call    sub_801110
0x82A108: add     esp, 10h
0x82A10B: push    edi; a3
0x82A10C: push    7; a2
0x82A10E: mov     ecx, esi; this
0x82A110: call    sub_760010
0x82A115: mov     ecx, ds:0B45398h
0x82A11B: push    ecx; a2
0x82A11C: mov     ecx, esi; this
0x82A11E: call    sub_7AECB0
0x82A123: mov     edx, ds:0B4518Ch
0x82A129: push    edx; a2
0x82A12A: mov     ecx, esi; this
0x82A12C: call    sub_7AEC60
0x82A131: cmp     dword ptr [esi+30h], 0
0x82A135: jnz     short loc_82A13F
0x82A137: call    sub_772DF0
0x82A13C: mov     [esi+30h], eax
0x82A13F: mov     ecx, [esi+30h]
0x82A142: push    0
0x82A144: push    0
0x82A146: push    1Bh
0x82A148: call    sub_772CD0
0x82A14D: cmp     dword ptr [esi+30h], 0
0x82A151: jnz     short loc_82A15B
0x82A153: call    sub_772DF0
0x82A158: mov     [esi+30h], eax
0x82A15B: mov     ecx, [esi+30h]
0x82A15E: push    0
0x82A160: push    0
0x82A162: push    0Fh
0x82A164: call    sub_772CD0
0x82A169: cmp     dword ptr [esi+30h], 0
0x82A16D: jnz     short loc_82A177
0x82A16F: call    sub_772DF0
0x82A174: mov     [esi+30h], eax
0x82A177: mov     ecx, [esi+30h]
0x82A17A: push    0
0x82A17C: push    1
0x82A17E: push    7
0x82A180: call    sub_772CD0
0x82A185: cmp     dword ptr [esi+30h], 0
0x82A189: jnz     short loc_82A193
0x82A18B: call    sub_772DF0
0x82A190: mov     [esi+30h], eax
0x82A193: mov     ecx, [esi+30h]
0x82A196: push    0
0x82A198: push    4
0x82A19A: push    17h
0x82A19C: call    sub_772CD0
0x82A1A1: cmp     dword ptr [esi+30h], 0
0x82A1A5: jnz     short loc_82A1AF
0x82A1A7: call    sub_772DF0
0x82A1AC: mov     [esi+30h], eax
0x82A1AF: mov     ecx, [esi+30h]
0x82A1B2: push    0
0x82A1B4: push    1
0x82A1B6: push    0Eh
0x82A1B8: call    sub_772CD0
0x82A1BD: cmp     dword ptr [esi+30h], 0
0x82A1C1: jnz     short loc_82A1CB
0x82A1C3: call    sub_772DF0
0x82A1C8: mov     [esi+30h], eax
0x82A1CB: mov     ecx, [esi+30h]
0x82A1CE: push    0
0x82A1D0: push    0
0x82A1D2: push    34h ; '4'
0x82A1D4: call    sub_772CD0
0x82A1D9: cmp     esi, ds:0B45888h
0x82A1DF: mov     ebp, 380F2h
0x82A1E4: mov     ebx, 10Ch
0x82A1E9: mov     ds:0B43E04h, ebp
0x82A1EF: mov     ds:0B44494h, ebx
0x82A1F5: mov     dword ptr ds:0B43774h, 18060h
0x82A1FF: mov     dword ptr ds:0B44B24h, 8
0x82A209: jz      short loc_82A22A
0x82A20B: add     dword ptr [esi+60h], 0FFFFFFFFh
0x82A20F: jnz     short loc_82A218
0x82A211: mov     ecx, esi
0x82A213: call    sub_7604D0
0x82A218: mov     esi, ds:0B45888h
0x82A21E: test    esi, esi
0x82A220: mov     [esp+2Ch+var_14], esi
0x82A224: jz      short loc_82A22A
0x82A226: add     dword ptr [esi+60h], 1
0x82A22A: mov     eax, [esi+18h]
0x82A22D: cmp     eax, 8
0x82A230: jnb     loc_82A50B
0x82A236: lea     eax, [esp+2Ch+var_10]
0x82A23A: push    eax
0x82A23B: call    sub_772630
0x82A240: add     esp, 4
0x82A243: push    eax
0x82A244: lea     ecx, [esp+30h+a3]
0x82A248: mov     byte ptr [esp+30h+var_4], 3Ah ; ':'
0x82A24D: call    sub_75FAE0
0x82A252: mov     eax, [esp+2Ch+var_10]
0x82A256: test    eax, eax
0x82A258: mov     byte ptr [esp+2Ch+var_4], 1
0x82A25D: jz      short loc_82A272
0x82A25F: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82A263: mov     ecx, eax
0x82A265: add     eax, 5Ch ; '\'
0x82A268: cmp     dword ptr [eax], 0
0x82A26B: jnz     short loc_82A272
0x82A26D: call    sub_772560
0x82A272: mov     edi, [esp+2Ch+a3]
0x82A276: push    2
0x82A278: push    1
0x82A27A: push    0
0x82A27C: push    edi
0x82A27D: call    sub_801110
0x82A282: add     esp, 10h
0x82A285: push    edi; a3
0x82A286: push    0; a2
0x82A288: mov     ecx, esi; this
0x82A28A: call    sub_760010
0x82A28F: lea     ecx, [esp+2Ch+var_10]
0x82A293: push    ecx
0x82A294: call    sub_772630
0x82A299: add     esp, 4
0x82A29C: push    eax
0x82A29D: lea     ecx, [esp+30h+a3]
0x82A2A1: mov     byte ptr [esp+30h+var_4], 3Bh ; ';'
0x82A2A6: call    sub_75FAE0
0x82A2AB: mov     eax, [esp+2Ch+var_10]
0x82A2AF: test    eax, eax
0x82A2B1: mov     byte ptr [esp+2Ch+var_4], 1
0x82A2B6: jz      short loc_82A2CB
0x82A2B8: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82A2BC: mov     ecx, eax
0x82A2BE: add     eax, 5Ch ; '\'
0x82A2C1: cmp     dword ptr [eax], 0
0x82A2C4: jnz     short loc_82A2CB
0x82A2C6: call    sub_772560
0x82A2CB: mov     edi, [esp+2Ch+a3]
0x82A2CF: push    2
0x82A2D1: push    1
0x82A2D3: push    1
0x82A2D5: push    edi
0x82A2D6: call    sub_801110
0x82A2DB: add     esp, 10h
0x82A2DE: push    edi; a3
0x82A2DF: push    1; a2
0x82A2E1: mov     ecx, esi; this
0x82A2E3: call    sub_760010
0x82A2E8: lea     edx, [esp+2Ch+var_10]
0x82A2EC: push    edx
0x82A2ED: call    sub_772630
0x82A2F2: add     esp, 4
0x82A2F5: push    eax
0x82A2F6: lea     ecx, [esp+30h+a3]
0x82A2FA: mov     byte ptr [esp+30h+var_4], 3Ch ; '<'
0x82A2FF: call    sub_75FAE0
0x82A304: mov     eax, [esp+2Ch+var_10]
0x82A308: test    eax, eax
0x82A30A: mov     byte ptr [esp+2Ch+var_4], 1
0x82A30F: jz      short loc_82A324
0x82A311: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82A315: mov     ecx, eax
0x82A317: add     eax, 5Ch ; '\'
0x82A31A: cmp     dword ptr [eax], 0
0x82A31D: jnz     short loc_82A324
0x82A31F: call    sub_772560
0x82A324: mov     edi, [esp+2Ch+a3]
0x82A328: push    2
0x82A32A: push    1
0x82A32C: push    2
0x82A32E: push    edi
0x82A32F: call    sub_801110
0x82A334: add     esp, 10h
0x82A337: push    edi; a3
0x82A338: push    2; a2
0x82A33A: mov     ecx, esi; this
0x82A33C: call    sub_760010
0x82A341: lea     eax, [esp+2Ch+var_10]
0x82A345: push    eax
0x82A346: call    sub_772630
0x82A34B: add     esp, 4
0x82A34E: push    eax
0x82A34F: lea     ecx, [esp+30h+a3]
0x82A353: mov     byte ptr [esp+30h+var_4], 3Dh ; '='
0x82A358: call    sub_75FAE0
0x82A35D: mov     eax, [esp+2Ch+var_10]
0x82A361: test    eax, eax
0x82A363: mov     byte ptr [esp+2Ch+var_4], 1
0x82A368: jz      short loc_82A37D
0x82A36A: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82A36E: mov     ecx, eax
0x82A370: add     eax, 5Ch ; '\'
0x82A373: cmp     dword ptr [eax], 0
0x82A376: jnz     short loc_82A37D
0x82A378: call    sub_772560
0x82A37D: mov     edi, [esp+2Ch+a3]
0x82A381: push    2
0x82A383: push    1
0x82A385: push    3
0x82A387: push    edi
0x82A388: call    sub_801110
0x82A38D: add     esp, 10h
0x82A390: push    edi; a3
0x82A391: push    3; a2
0x82A393: mov     ecx, esi; this
0x82A395: call    sub_760010
0x82A39A: lea     ecx, [esp+2Ch+var_10]
0x82A39E: push    ecx
0x82A39F: call    sub_772630
0x82A3A4: add     esp, 4
0x82A3A7: push    eax
0x82A3A8: lea     ecx, [esp+30h+a3]
0x82A3AC: mov     byte ptr [esp+30h+var_4], 3Eh ; '>'
0x82A3B1: call    sub_75FAE0
0x82A3B6: mov     eax, [esp+2Ch+var_10]
0x82A3BA: test    eax, eax
0x82A3BC: mov     byte ptr [esp+2Ch+var_4], 1
0x82A3C1: jz      short loc_82A3D6
0x82A3C3: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82A3C7: mov     ecx, eax
0x82A3C9: add     eax, 5Ch ; '\'
0x82A3CC: cmp     dword ptr [eax], 0
0x82A3CF: jnz     short loc_82A3D6
0x82A3D1: call    sub_772560
0x82A3D6: mov     edi, [esp+2Ch+a3]
0x82A3DA: push    2
0x82A3DC: push    1
0x82A3DE: push    4
0x82A3E0: push    edi
0x82A3E1: call    sub_801110
0x82A3E6: add     esp, 10h
0x82A3E9: push    edi; a3
0x82A3EA: push    4; a2
0x82A3EC: mov     ecx, esi; this
0x82A3EE: call    sub_760010
0x82A3F3: lea     edx, [esp+2Ch+var_10]
0x82A3F7: push    edx
0x82A3F8: call    sub_772630
0x82A3FD: add     esp, 4
0x82A400: push    eax
0x82A401: lea     ecx, [esp+30h+a3]
0x82A405: mov     byte ptr [esp+30h+var_4], 3Fh ; '?'
0x82A40A: call    sub_75FAE0
0x82A40F: mov     eax, [esp+2Ch+var_10]
0x82A413: test    eax, eax
0x82A415: mov     byte ptr [esp+2Ch+var_4], 1
0x82A41A: jz      short loc_82A42F
0x82A41C: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82A420: mov     ecx, eax
0x82A422: add     eax, 5Ch ; '\'
0x82A425: cmp     dword ptr [eax], 0
0x82A428: jnz     short loc_82A42F
0x82A42A: call    sub_772560
0x82A42F: mov     edi, [esp+2Ch+a3]
0x82A433: push    0
0x82A435: push    3
0x82A437: push    5
0x82A439: push    edi
0x82A43A: call    sub_801110
0x82A43F: mov     eax, ds:0B43110h
0x82A444: add     esp, 10h
0x82A447: push    eax; a2
0x82A448: mov     ecx, edi; this
0x82A44A: call    sub_76C910
0x82A44F: push    edi; a3
0x82A450: push    5; a2
0x82A452: mov     ecx, esi; this
0x82A454: call    sub_760010
0x82A459: lea     ecx, [esp+2Ch+var_10]
0x82A45D: push    ecx
0x82A45E: call    sub_772630
0x82A463: add     esp, 4
0x82A466: push    eax
0x82A467: lea     ecx, [esp+30h+a3]
0x82A46B: mov     byte ptr [esp+30h+var_4], 40h ; '@'
0x82A470: call    sub_75FAE0
0x82A475: mov     eax, [esp+2Ch+var_10]
0x82A479: test    eax, eax
0x82A47B: mov     byte ptr [esp+2Ch+var_4], 1
0x82A480: jz      short loc_82A495
0x82A482: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82A486: mov     ecx, eax
0x82A488: add     eax, 5Ch ; '\'
0x82A48B: cmp     dword ptr [eax], 0
0x82A48E: jnz     short loc_82A495
0x82A490: call    sub_772560
0x82A495: mov     edi, [esp+2Ch+a3]
0x82A499: push    2
0x82A49B: push    1
0x82A49D: push    6
0x82A49F: push    edi
0x82A4A0: call    sub_801110
0x82A4A5: add     esp, 10h
0x82A4A8: push    edi; a3
0x82A4A9: push    6; a2
0x82A4AB: mov     ecx, esi; this
0x82A4AD: call    sub_760010
0x82A4B2: lea     edx, [esp+2Ch+var_10]
0x82A4B6: push    edx
0x82A4B7: call    sub_772630
0x82A4BC: add     esp, 4
0x82A4BF: push    eax
0x82A4C0: lea     ecx, [esp+30h+a3]
0x82A4C4: mov     byte ptr [esp+30h+var_4], 41h ; 'A'
0x82A4C9: call    sub_75FAE0
0x82A4CE: mov     eax, [esp+2Ch+var_10]
0x82A4D2: test    eax, eax
0x82A4D4: mov     byte ptr [esp+2Ch+var_4], 1
0x82A4D9: jz      short loc_82A4EE
0x82A4DB: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82A4DF: mov     ecx, eax
0x82A4E1: add     eax, 5Ch ; '\'
0x82A4E4: cmp     dword ptr [eax], 0
0x82A4E7: jnz     short loc_82A4EE
0x82A4E9: call    sub_772560
0x82A4EE: mov     edi, [esp+2Ch+a3]
0x82A4F2: push    0
0x82A4F4: push    3
0x82A4F6: push    7
0x82A4F8: push    edi
0x82A4F9: call    sub_801110
0x82A4FE: add     esp, 10h
0x82A501: push    edi; a3
0x82A502: push    7; a2
0x82A504: mov     ecx, esi; this
0x82A506: call    sub_760010
0x82A50B: mov     eax, ds:0B45398h
0x82A510: push    eax; a2
0x82A511: mov     ecx, esi; this
0x82A513: call    sub_7AECB0
0x82A518: mov     ecx, ds:0B45190h
0x82A51E: push    ecx; a2
0x82A51F: mov     ecx, esi; this
0x82A521: call    sub_7AEC60
0x82A526: cmp     dword ptr [esi+30h], 0
0x82A52A: jnz     short loc_82A534
0x82A52C: call    sub_772DF0
0x82A531: mov     [esi+30h], eax
0x82A534: mov     ecx, [esi+30h]
0x82A537: push    0
0x82A539: push    0
0x82A53B: push    1Bh
0x82A53D: call    sub_772CD0
0x82A542: cmp     dword ptr [esi+30h], 0
0x82A546: jnz     short loc_82A550
0x82A548: call    sub_772DF0
0x82A54D: mov     [esi+30h], eax
0x82A550: mov     ecx, [esi+30h]
0x82A553: push    0
0x82A555: push    0
0x82A557: push    0Fh
0x82A559: call    sub_772CD0
0x82A55E: cmp     dword ptr [esi+30h], 0
0x82A562: jnz     short loc_82A56C
0x82A564: call    sub_772DF0
0x82A569: mov     [esi+30h], eax
0x82A56C: mov     ecx, [esi+30h]
0x82A56F: push    0
0x82A571: push    1
0x82A573: push    7
0x82A575: call    sub_772CD0
0x82A57A: cmp     dword ptr [esi+30h], 0
0x82A57E: jnz     short loc_82A588
0x82A580: call    sub_772DF0
0x82A585: mov     [esi+30h], eax
0x82A588: mov     ecx, [esi+30h]
0x82A58B: push    0
0x82A58D: push    4
0x82A58F: push    17h
0x82A591: call    sub_772CD0
0x82A596: cmp     dword ptr [esi+30h], 0
0x82A59A: jnz     short loc_82A5A4
0x82A59C: call    sub_772DF0
0x82A5A1: mov     [esi+30h], eax
0x82A5A4: mov     ecx, [esi+30h]
0x82A5A7: push    0
0x82A5A9: push    1
0x82A5AB: push    0Eh
0x82A5AD: call    sub_772CD0
0x82A5B2: cmp     dword ptr [esi+30h], 0
0x82A5B6: jnz     short loc_82A5C0
0x82A5B8: call    sub_772DF0
0x82A5BD: mov     [esi+30h], eax
0x82A5C0: mov     ecx, [esi+30h]
0x82A5C3: push    0
0x82A5C5: push    0
0x82A5C7: push    34h ; '4'
0x82A5C9: call    sub_772CD0
0x82A5CE: cmp     esi, ds:0B4588Ch
0x82A5D4: mov     ds:0B43E08h, ebp
0x82A5DA: mov     dword ptr ds:0B44498h, 18Ch
0x82A5E4: mov     dword ptr ds:0B43778h, 18060h
0x82A5EE: mov     dword ptr ds:0B44B28h, 0Ch
0x82A5F8: jz      short loc_82A619
0x82A5FA: add     dword ptr [esi+60h], 0FFFFFFFFh
0x82A5FE: jnz     short loc_82A607
0x82A600: mov     ecx, esi
0x82A602: call    sub_7604D0
0x82A607: mov     esi, ds:0B4588Ch
0x82A60D: test    esi, esi
0x82A60F: mov     [esp+2Ch+var_14], esi
0x82A613: jz      short loc_82A619
0x82A615: add     dword ptr [esi+60h], 1
0x82A619: cmp     dword ptr [esi+18h], 8
0x82A61D: jnb     loc_82A8F9
0x82A623: lea     edx, [esp+2Ch+var_10]
0x82A627: push    edx
0x82A628: call    sub_772630
0x82A62D: add     esp, 4
0x82A630: push    eax
0x82A631: lea     ecx, [esp+30h+a3]
0x82A635: mov     byte ptr [esp+30h+var_4], 42h ; 'B'
0x82A63A: call    sub_75FAE0
0x82A63F: mov     eax, [esp+2Ch+var_10]
0x82A643: test    eax, eax
0x82A645: mov     byte ptr [esp+2Ch+var_4], 1
0x82A64A: jz      short loc_82A65F
0x82A64C: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82A650: mov     ecx, eax
0x82A652: add     eax, 5Ch ; '\'
0x82A655: cmp     dword ptr [eax], 0
0x82A658: jnz     short loc_82A65F
0x82A65A: call    sub_772560
0x82A65F: mov     edi, [esp+2Ch+a3]
0x82A663: push    2
0x82A665: push    1
0x82A667: push    0
0x82A669: push    edi
0x82A66A: call    sub_801110
0x82A66F: add     esp, 10h
0x82A672: push    edi; a3
0x82A673: push    0; a2
0x82A675: mov     ecx, esi; this
0x82A677: call    sub_760010
0x82A67C: lea     eax, [esp+2Ch+var_10]
0x82A680: push    eax
0x82A681: call    sub_772630
0x82A686: add     esp, 4
0x82A689: push    eax
0x82A68A: lea     ecx, [esp+30h+a3]
0x82A68E: mov     byte ptr [esp+30h+var_4], 43h ; 'C'
0x82A693: call    sub_75FAE0
0x82A698: mov     eax, [esp+2Ch+var_10]
0x82A69C: test    eax, eax
0x82A69E: mov     byte ptr [esp+2Ch+var_4], 1
0x82A6A3: jz      short loc_82A6B8
0x82A6A5: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82A6A9: mov     ecx, eax
0x82A6AB: add     eax, 5Ch ; '\'
0x82A6AE: cmp     dword ptr [eax], 0
0x82A6B1: jnz     short loc_82A6B8
0x82A6B3: call    sub_772560
0x82A6B8: mov     edi, [esp+2Ch+a3]
0x82A6BC: push    2
0x82A6BE: push    1
0x82A6C0: push    1
0x82A6C2: push    edi
0x82A6C3: call    sub_801110
0x82A6C8: add     esp, 10h
0x82A6CB: push    edi; a3
0x82A6CC: push    1; a2
0x82A6CE: mov     ecx, esi; this
0x82A6D0: call    sub_760010
0x82A6D5: lea     ecx, [esp+2Ch+var_10]
0x82A6D9: push    ecx
0x82A6DA: call    sub_772630
0x82A6DF: add     esp, 4
0x82A6E2: push    eax
0x82A6E3: lea     ecx, [esp+30h+a3]
0x82A6E7: mov     byte ptr [esp+30h+var_4], 44h ; 'D'
0x82A6EC: call    sub_75FAE0
0x82A6F1: mov     eax, [esp+2Ch+var_10]
0x82A6F5: test    eax, eax
0x82A6F7: mov     byte ptr [esp+2Ch+var_4], 1
0x82A6FC: jz      short loc_82A711
0x82A6FE: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82A702: mov     ecx, eax
0x82A704: add     eax, 5Ch ; '\'
0x82A707: cmp     dword ptr [eax], 0
0x82A70A: jnz     short loc_82A711
0x82A70C: call    sub_772560
0x82A711: mov     edi, [esp+2Ch+a3]
0x82A715: push    2
0x82A717: push    1
0x82A719: push    2
0x82A71B: push    edi
0x82A71C: call    sub_801110
0x82A721: add     esp, 10h
0x82A724: push    edi; a3
0x82A725: push    2; a2
0x82A727: mov     ecx, esi; this
0x82A729: call    sub_760010
0x82A72E: lea     edx, [esp+2Ch+var_10]
0x82A732: push    edx
0x82A733: call    sub_772630
0x82A738: add     esp, 4
0x82A73B: push    eax
0x82A73C: lea     ecx, [esp+30h+a3]
0x82A740: mov     byte ptr [esp+30h+var_4], 45h ; 'E'
0x82A745: call    sub_75FAE0
0x82A74A: mov     eax, [esp+2Ch+var_10]
0x82A74E: test    eax, eax
0x82A750: mov     byte ptr [esp+2Ch+var_4], 1
0x82A755: jz      short loc_82A76A
0x82A757: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82A75B: mov     ecx, eax
0x82A75D: add     eax, 5Ch ; '\'
0x82A760: cmp     dword ptr [eax], 0
0x82A763: jnz     short loc_82A76A
0x82A765: call    sub_772560
0x82A76A: mov     edi, [esp+2Ch+a3]
0x82A76E: push    2
0x82A770: push    1
0x82A772: push    3
0x82A774: push    edi
0x82A775: call    sub_801110
0x82A77A: add     esp, 10h
0x82A77D: push    edi; a3
0x82A77E: push    3; a2
0x82A780: mov     ecx, esi; this
0x82A782: call    sub_760010
0x82A787: lea     eax, [esp+2Ch+var_10]
0x82A78B: push    eax
0x82A78C: call    sub_772630
0x82A791: add     esp, 4
0x82A794: push    eax
0x82A795: lea     ecx, [esp+30h+a3]
0x82A799: mov     byte ptr [esp+30h+var_4], 46h ; 'F'
0x82A79E: call    sub_75FAE0
0x82A7A3: mov     eax, [esp+2Ch+var_10]
0x82A7A7: test    eax, eax
0x82A7A9: mov     byte ptr [esp+2Ch+var_4], 1
0x82A7AE: jz      short loc_82A7C3
0x82A7B0: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82A7B4: mov     ecx, eax
0x82A7B6: add     eax, 5Ch ; '\'
0x82A7B9: cmp     dword ptr [eax], 0
0x82A7BC: jnz     short loc_82A7C3
0x82A7BE: call    sub_772560
0x82A7C3: mov     edi, [esp+2Ch+a3]
0x82A7C7: push    2
0x82A7C9: push    1
0x82A7CB: push    4
0x82A7CD: push    edi
0x82A7CE: call    sub_801110
0x82A7D3: add     esp, 10h
0x82A7D6: push    edi; a3
0x82A7D7: push    4; a2
0x82A7D9: mov     ecx, esi; this
0x82A7DB: call    sub_760010
0x82A7E0: lea     ecx, [esp+2Ch+var_10]
0x82A7E4: push    ecx
0x82A7E5: call    sub_772630
0x82A7EA: add     esp, 4
0x82A7ED: push    eax
0x82A7EE: lea     ecx, [esp+30h+a3]
0x82A7F2: mov     byte ptr [esp+30h+var_4], 47h ; 'G'
0x82A7F7: call    sub_75FAE0
0x82A7FC: mov     eax, [esp+2Ch+var_10]
0x82A800: test    eax, eax
0x82A802: mov     byte ptr [esp+2Ch+var_4], 1
0x82A807: jz      short loc_82A81C
0x82A809: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82A80D: mov     ecx, eax
0x82A80F: add     eax, 5Ch ; '\'
0x82A812: cmp     dword ptr [eax], 0
0x82A815: jnz     short loc_82A81C
0x82A817: call    sub_772560
0x82A81C: mov     edi, [esp+2Ch+a3]
0x82A820: push    0
0x82A822: push    3
0x82A824: push    5
0x82A826: push    edi
0x82A827: call    sub_801110
0x82A82C: mov     edx, ds:0B43110h
0x82A832: add     esp, 10h
0x82A835: push    edx; a2
0x82A836: mov     ecx, edi; this
0x82A838: call    sub_76C910
0x82A83D: push    edi; a3
0x82A83E: push    5; a2
0x82A840: mov     ecx, esi; this
0x82A842: call    sub_760010
0x82A847: lea     eax, [esp+2Ch+var_10]
0x82A84B: push    eax
0x82A84C: call    sub_772630
0x82A851: add     esp, 4
0x82A854: push    eax
0x82A855: lea     ecx, [esp+30h+a3]
0x82A859: mov     byte ptr [esp+30h+var_4], 48h ; 'H'
0x82A85E: call    sub_75FAE0
0x82A863: mov     eax, [esp+2Ch+var_10]
0x82A867: test    eax, eax
0x82A869: mov     byte ptr [esp+2Ch+var_4], 1
0x82A86E: jz      short loc_82A883
0x82A870: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82A874: mov     ecx, eax
0x82A876: add     eax, 5Ch ; '\'
0x82A879: cmp     dword ptr [eax], 0
0x82A87C: jnz     short loc_82A883
0x82A87E: call    sub_772560
0x82A883: mov     edi, [esp+2Ch+a3]
0x82A887: push    2
0x82A889: push    1
0x82A88B: push    6
0x82A88D: push    edi
0x82A88E: call    sub_801110
0x82A893: add     esp, 10h
0x82A896: push    edi; a3
0x82A897: push    6; a2
0x82A899: mov     ecx, esi; this
0x82A89B: call    sub_760010
0x82A8A0: lea     ecx, [esp+2Ch+var_10]
0x82A8A4: push    ecx
0x82A8A5: call    sub_772630
0x82A8AA: add     esp, 4
0x82A8AD: push    eax
0x82A8AE: lea     ecx, [esp+30h+a3]
0x82A8B2: mov     byte ptr [esp+30h+var_4], 49h ; 'I'
0x82A8B7: call    sub_75FAE0
0x82A8BC: mov     eax, [esp+2Ch+var_10]
0x82A8C0: test    eax, eax
0x82A8C2: mov     byte ptr [esp+2Ch+var_4], 1
0x82A8C7: jz      short loc_82A8DC
0x82A8C9: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82A8CD: mov     ecx, eax
0x82A8CF: add     eax, 5Ch ; '\'
0x82A8D2: cmp     dword ptr [eax], 0
0x82A8D5: jnz     short loc_82A8DC
0x82A8D7: call    sub_772560
0x82A8DC: mov     edi, [esp+2Ch+a3]
0x82A8E0: push    0
0x82A8E2: push    3
0x82A8E4: push    7
0x82A8E6: push    edi
0x82A8E7: call    sub_801110
0x82A8EC: add     esp, 10h
0x82A8EF: push    edi; a3
0x82A8F0: push    7; a2
0x82A8F2: mov     ecx, esi; this
0x82A8F4: call    sub_760010
0x82A8F9: mov     edx, ds:0B45398h
0x82A8FF: push    edx; a2
0x82A900: mov     ecx, esi; this
0x82A902: call    sub_7AECB0
0x82A907: mov     eax, ds:0B45194h
0x82A90C: push    eax; a2
0x82A90D: mov     ecx, esi; this
0x82A90F: call    sub_7AEC60
0x82A914: cmp     dword ptr [esi+30h], 0
0x82A918: jnz     short loc_82A922
0x82A91A: call    sub_772DF0
0x82A91F: mov     [esi+30h], eax
0x82A922: mov     ecx, [esi+30h]
0x82A925: push    0
0x82A927: push    0
0x82A929: push    1Bh
0x82A92B: call    sub_772CD0
0x82A930: cmp     dword ptr [esi+30h], 0
0x82A934: jnz     short loc_82A93E
0x82A936: call    sub_772DF0
0x82A93B: mov     [esi+30h], eax
0x82A93E: mov     ecx, [esi+30h]
0x82A941: push    0
0x82A943: push    0
0x82A945: push    0Fh
0x82A947: call    sub_772CD0
0x82A94C: cmp     dword ptr [esi+30h], 0
0x82A950: jnz     short loc_82A95A
0x82A952: call    sub_772DF0
0x82A957: mov     [esi+30h], eax
0x82A95A: mov     ecx, [esi+30h]
0x82A95D: push    0
0x82A95F: push    1
0x82A961: push    7
0x82A963: call    sub_772CD0
0x82A968: cmp     dword ptr [esi+30h], 0
0x82A96C: jnz     short loc_82A976
0x82A96E: call    sub_772DF0
0x82A973: mov     [esi+30h], eax
0x82A976: mov     ecx, [esi+30h]
0x82A979: push    0
0x82A97B: push    4
0x82A97D: push    17h
0x82A97F: call    sub_772CD0
0x82A984: cmp     dword ptr [esi+30h], 0
0x82A988: jnz     short loc_82A992
0x82A98A: call    sub_772DF0
0x82A98F: mov     [esi+30h], eax
0x82A992: mov     ecx, [esi+30h]
0x82A995: push    0
0x82A997: push    1
0x82A999: push    0Eh
0x82A99B: call    sub_772CD0
0x82A9A0: cmp     dword ptr [esi+30h], 0
0x82A9A4: jnz     short loc_82A9AE
0x82A9A6: call    sub_772DF0
0x82A9AB: mov     [esi+30h], eax
0x82A9AE: mov     ecx, [esi+30h]
0x82A9B1: push    0
0x82A9B3: push    0
0x82A9B5: push    34h ; '4'
0x82A9B7: call    sub_772CD0
0x82A9BC: cmp     esi, ds:0B4589Ch
0x82A9C2: mov     ds:0B43E0Ch, ebp
0x82A9C8: mov     dword ptr ds:0B4449Ch, 18Ch
0x82A9D2: mov     dword ptr ds:0B4377Ch, 18060h
0x82A9DC: mov     dword ptr ds:0B44B2Ch, 0Ch
0x82A9E6: jz      short loc_82AA07
0x82A9E8: add     dword ptr [esi+60h], 0FFFFFFFFh
0x82A9EC: jnz     short loc_82A9F5
0x82A9EE: mov     ecx, esi
0x82A9F0: call    sub_7604D0
0x82A9F5: mov     esi, ds:0B4589Ch
0x82A9FB: test    esi, esi
0x82A9FD: mov     [esp+2Ch+var_14], esi
0x82AA01: jz      short loc_82AA07
0x82AA03: add     dword ptr [esi+60h], 1
0x82AA07: cmp     dword ptr [esi+18h], 8
0x82AA0B: jnb     loc_82ACE7
0x82AA11: lea     ecx, [esp+2Ch+var_10]
0x82AA15: push    ecx
0x82AA16: call    sub_772630
0x82AA1B: add     esp, 4
0x82AA1E: push    eax
0x82AA1F: lea     ecx, [esp+30h+a3]
0x82AA23: mov     byte ptr [esp+30h+var_4], 4Ah ; 'J'
0x82AA28: call    sub_75FAE0
0x82AA2D: mov     eax, [esp+2Ch+var_10]
0x82AA31: test    eax, eax
0x82AA33: mov     byte ptr [esp+2Ch+var_4], 1
0x82AA38: jz      short loc_82AA4D
0x82AA3A: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82AA3E: mov     ecx, eax
0x82AA40: add     eax, 5Ch ; '\'
0x82AA43: cmp     dword ptr [eax], 0
0x82AA46: jnz     short loc_82AA4D
0x82AA48: call    sub_772560
0x82AA4D: mov     edi, [esp+2Ch+a3]
0x82AA51: push    2
0x82AA53: push    1
0x82AA55: push    0
0x82AA57: push    edi
0x82AA58: call    sub_801110
0x82AA5D: add     esp, 10h
0x82AA60: push    edi; a3
0x82AA61: push    0; a2
0x82AA63: mov     ecx, esi; this
0x82AA65: call    sub_760010
0x82AA6A: lea     edx, [esp+2Ch+var_10]
0x82AA6E: push    edx
0x82AA6F: call    sub_772630
0x82AA74: add     esp, 4
0x82AA77: push    eax
0x82AA78: lea     ecx, [esp+30h+a3]
0x82AA7C: mov     byte ptr [esp+30h+var_4], 4Bh ; 'K'
0x82AA81: call    sub_75FAE0
0x82AA86: mov     eax, [esp+2Ch+var_10]
0x82AA8A: test    eax, eax
0x82AA8C: mov     byte ptr [esp+2Ch+var_4], 1
0x82AA91: jz      short loc_82AAA6
0x82AA93: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82AA97: mov     ecx, eax
0x82AA99: add     eax, 5Ch ; '\'
0x82AA9C: cmp     dword ptr [eax], 0
0x82AA9F: jnz     short loc_82AAA6
0x82AAA1: call    sub_772560
0x82AAA6: mov     edi, [esp+2Ch+a3]
0x82AAAA: push    2
0x82AAAC: push    1
0x82AAAE: push    1
0x82AAB0: push    edi
0x82AAB1: call    sub_801110
0x82AAB6: add     esp, 10h
0x82AAB9: push    edi; a3
0x82AABA: push    1; a2
0x82AABC: mov     ecx, esi; this
0x82AABE: call    sub_760010
0x82AAC3: lea     eax, [esp+2Ch+var_10]
0x82AAC7: push    eax
0x82AAC8: call    sub_772630
0x82AACD: add     esp, 4
0x82AAD0: push    eax
0x82AAD1: lea     ecx, [esp+30h+a3]
0x82AAD5: mov     byte ptr [esp+30h+var_4], 4Ch ; 'L'
0x82AADA: call    sub_75FAE0
0x82AADF: mov     eax, [esp+2Ch+var_10]
0x82AAE3: test    eax, eax
0x82AAE5: mov     byte ptr [esp+2Ch+var_4], 1
0x82AAEA: jz      short loc_82AAFF
0x82AAEC: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82AAF0: mov     ecx, eax
0x82AAF2: add     eax, 5Ch ; '\'
0x82AAF5: cmp     dword ptr [eax], 0
0x82AAF8: jnz     short loc_82AAFF
0x82AAFA: call    sub_772560
0x82AAFF: mov     edi, [esp+2Ch+a3]
0x82AB03: push    2
0x82AB05: push    1
0x82AB07: push    2
0x82AB09: push    edi
0x82AB0A: call    sub_801110
0x82AB0F: add     esp, 10h
0x82AB12: push    edi; a3
0x82AB13: push    2; a2
0x82AB15: mov     ecx, esi; this
0x82AB17: call    sub_760010
0x82AB1C: lea     ecx, [esp+2Ch+var_10]
0x82AB20: push    ecx
0x82AB21: call    sub_772630
0x82AB26: add     esp, 4
0x82AB29: push    eax
0x82AB2A: lea     ecx, [esp+30h+a3]
0x82AB2E: mov     byte ptr [esp+30h+var_4], 4Dh ; 'M'
0x82AB33: call    sub_75FAE0
0x82AB38: mov     eax, [esp+2Ch+var_10]
0x82AB3C: test    eax, eax
0x82AB3E: mov     byte ptr [esp+2Ch+var_4], 1
0x82AB43: jz      short loc_82AB58
0x82AB45: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82AB49: mov     ecx, eax
0x82AB4B: add     eax, 5Ch ; '\'
0x82AB4E: cmp     dword ptr [eax], 0
0x82AB51: jnz     short loc_82AB58
0x82AB53: call    sub_772560
0x82AB58: mov     edi, [esp+2Ch+a3]
0x82AB5C: push    2
0x82AB5E: push    1
0x82AB60: push    3
0x82AB62: push    edi
0x82AB63: call    sub_801110
0x82AB68: add     esp, 10h
0x82AB6B: push    edi; a3
0x82AB6C: push    3; a2
0x82AB6E: mov     ecx, esi; this
0x82AB70: call    sub_760010
0x82AB75: lea     edx, [esp+2Ch+var_10]
0x82AB79: push    edx
0x82AB7A: call    sub_772630
0x82AB7F: add     esp, 4
0x82AB82: push    eax
0x82AB83: lea     ecx, [esp+30h+a3]
0x82AB87: mov     byte ptr [esp+30h+var_4], 4Eh ; 'N'
0x82AB8C: call    sub_75FAE0
0x82AB91: mov     eax, [esp+2Ch+var_10]
0x82AB95: test    eax, eax
0x82AB97: mov     byte ptr [esp+2Ch+var_4], 1
0x82AB9C: jz      short loc_82ABB1
0x82AB9E: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82ABA2: mov     ecx, eax
0x82ABA4: add     eax, 5Ch ; '\'
0x82ABA7: cmp     dword ptr [eax], 0
0x82ABAA: jnz     short loc_82ABB1
0x82ABAC: call    sub_772560
0x82ABB1: mov     edi, [esp+2Ch+a3]
0x82ABB5: push    2
0x82ABB7: push    1
0x82ABB9: push    4
0x82ABBB: push    edi
0x82ABBC: call    sub_801110
0x82ABC1: add     esp, 10h
0x82ABC4: push    edi; a3
0x82ABC5: push    4; a2
0x82ABC7: mov     ecx, esi; this
0x82ABC9: call    sub_760010
0x82ABCE: lea     eax, [esp+2Ch+var_10]
0x82ABD2: push    eax
0x82ABD3: call    sub_772630
0x82ABD8: add     esp, 4
0x82ABDB: push    eax
0x82ABDC: lea     ecx, [esp+30h+a3]
0x82ABE0: mov     byte ptr [esp+30h+var_4], 4Fh ; 'O'
0x82ABE5: call    sub_75FAE0
0x82ABEA: mov     eax, [esp+2Ch+var_10]
0x82ABEE: test    eax, eax
0x82ABF0: mov     byte ptr [esp+2Ch+var_4], 1
0x82ABF5: jz      short loc_82AC0A
0x82ABF7: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82ABFB: mov     ecx, eax
0x82ABFD: add     eax, 5Ch ; '\'
0x82AC00: cmp     dword ptr [eax], 0
0x82AC03: jnz     short loc_82AC0A
0x82AC05: call    sub_772560
0x82AC0A: mov     edi, [esp+2Ch+a3]
0x82AC0E: push    0
0x82AC10: push    3
0x82AC12: push    5
0x82AC14: push    edi
0x82AC15: call    sub_801110
0x82AC1A: mov     ecx, ds:0B43110h
0x82AC20: add     esp, 10h
0x82AC23: push    ecx; a2
0x82AC24: mov     ecx, edi; this
0x82AC26: call    sub_76C910
0x82AC2B: push    edi; a3
0x82AC2C: push    5; a2
0x82AC2E: mov     ecx, esi; this
0x82AC30: call    sub_760010
0x82AC35: lea     edx, [esp+2Ch+var_10]
0x82AC39: push    edx
0x82AC3A: call    sub_772630
0x82AC3F: add     esp, 4
0x82AC42: push    eax
0x82AC43: lea     ecx, [esp+30h+a3]
0x82AC47: mov     byte ptr [esp+30h+var_4], 50h ; 'P'
0x82AC4C: call    sub_75FAE0
0x82AC51: mov     eax, [esp+2Ch+var_10]
0x82AC55: test    eax, eax
0x82AC57: mov     byte ptr [esp+2Ch+var_4], 1
0x82AC5C: jz      short loc_82AC71
0x82AC5E: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82AC62: mov     ecx, eax
0x82AC64: add     eax, 5Ch ; '\'
0x82AC67: cmp     dword ptr [eax], 0
0x82AC6A: jnz     short loc_82AC71
0x82AC6C: call    sub_772560
0x82AC71: mov     edi, [esp+2Ch+a3]
0x82AC75: push    2
0x82AC77: push    1
0x82AC79: push    6
0x82AC7B: push    edi
0x82AC7C: call    sub_801110
0x82AC81: add     esp, 10h
0x82AC84: push    edi; a3
0x82AC85: push    6; a2
0x82AC87: mov     ecx, esi; this
0x82AC89: call    sub_760010
0x82AC8E: lea     eax, [esp+2Ch+var_10]
0x82AC92: push    eax
0x82AC93: call    sub_772630
0x82AC98: add     esp, 4
0x82AC9B: push    eax
0x82AC9C: lea     ecx, [esp+30h+a3]
0x82ACA0: mov     byte ptr [esp+30h+var_4], 51h ; 'Q'
0x82ACA5: call    sub_75FAE0
0x82ACAA: mov     eax, [esp+2Ch+var_10]
0x82ACAE: test    eax, eax
0x82ACB0: mov     byte ptr [esp+2Ch+var_4], 1
0x82ACB5: jz      short loc_82ACCA
0x82ACB7: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82ACBB: mov     ecx, eax
0x82ACBD: add     eax, 5Ch ; '\'
0x82ACC0: cmp     dword ptr [eax], 0
0x82ACC3: jnz     short loc_82ACCA
0x82ACC5: call    sub_772560
0x82ACCA: mov     edi, [esp+2Ch+a3]
0x82ACCE: push    0
0x82ACD0: push    3
0x82ACD2: push    7
0x82ACD4: push    edi
0x82ACD5: call    sub_801110
0x82ACDA: add     esp, 10h
0x82ACDD: push    edi; a3
0x82ACDE: push    7; a2
0x82ACE0: mov     ecx, esi; this
0x82ACE2: call    sub_760010
0x82ACE7: mov     ecx, ds:0B4539Ch
0x82ACED: push    ecx; a2
0x82ACEE: mov     ecx, esi; this
0x82ACF0: call    sub_7AECB0
0x82ACF5: mov     edx, ds:0B4518Ch
0x82ACFB: push    edx; a2
0x82ACFC: mov     ecx, esi; this
0x82ACFE: call    sub_7AEC60
0x82AD03: cmp     dword ptr [esi+30h], 0
0x82AD07: jnz     short loc_82AD11
0x82AD09: call    sub_772DF0
0x82AD0E: mov     [esi+30h], eax
0x82AD11: mov     ecx, [esi+30h]
0x82AD14: push    0
0x82AD16: push    0
0x82AD18: push    1Bh
0x82AD1A: call    sub_772CD0
0x82AD1F: cmp     dword ptr [esi+30h], 0
0x82AD23: jnz     short loc_82AD2D
0x82AD25: call    sub_772DF0
0x82AD2A: mov     [esi+30h], eax
0x82AD2D: mov     ecx, [esi+30h]
0x82AD30: push    0
0x82AD32: push    0
0x82AD34: push    0Fh
0x82AD36: call    sub_772CD0
0x82AD3B: cmp     dword ptr [esi+30h], 0
0x82AD3F: jnz     short loc_82AD49
0x82AD41: call    sub_772DF0
0x82AD46: mov     [esi+30h], eax
0x82AD49: mov     ecx, [esi+30h]
0x82AD4C: push    0
0x82AD4E: push    1
0x82AD50: push    7
0x82AD52: call    sub_772CD0
0x82AD57: cmp     dword ptr [esi+30h], 0
0x82AD5B: jnz     short loc_82AD65
0x82AD5D: call    sub_772DF0
0x82AD62: mov     [esi+30h], eax
0x82AD65: mov     ecx, [esi+30h]
0x82AD68: push    0
0x82AD6A: push    4
0x82AD6C: push    17h
0x82AD6E: call    sub_772CD0
0x82AD73: cmp     dword ptr [esi+30h], 0
0x82AD77: jnz     short loc_82AD81
0x82AD79: call    sub_772DF0
0x82AD7E: mov     [esi+30h], eax
0x82AD81: mov     ecx, [esi+30h]
0x82AD84: push    0
0x82AD86: push    1
0x82AD88: push    0Eh
0x82AD8A: call    sub_772CD0
0x82AD8F: cmp     dword ptr [esi+30h], 0
0x82AD93: jnz     short loc_82AD9D
0x82AD95: call    sub_772DF0
0x82AD9A: mov     [esi+30h], eax
0x82AD9D: mov     ecx, [esi+30h]
0x82ADA0: push    0
0x82ADA2: push    0
0x82ADA4: push    34h ; '4'
0x82ADA6: call    sub_772CD0
0x82ADAB: cmp     esi, ds:0B458A0h
0x82ADB1: mov     ebp, 780F8h
0x82ADB6: mov     ds:0B43E1Ch, ebp
0x82ADBC: mov     ds:0B444ACh, ebx
0x82ADC2: mov     dword ptr ds:0B4378Ch, 18060h
0x82ADCC: mov     dword ptr ds:0B44B3Ch, 8
0x82ADD6: jz      short loc_82ADF7
0x82ADD8: add     dword ptr [esi+60h], 0FFFFFFFFh
0x82ADDC: jnz     short loc_82ADE5
0x82ADDE: mov     ecx, esi
0x82ADE0: call    sub_7604D0
0x82ADE5: mov     esi, ds:0B458A0h
0x82ADEB: test    esi, esi
0x82ADED: mov     [esp+2Ch+var_14], esi
0x82ADF1: jz      short loc_82ADF7
0x82ADF3: add     dword ptr [esi+60h], 1
0x82ADF7: cmp     dword ptr [esi+18h], 8
0x82ADFB: jnb     loc_82B0D6
0x82AE01: lea     eax, [esp+2Ch+var_10]
0x82AE05: push    eax
0x82AE06: call    sub_772630
0x82AE0B: add     esp, 4
0x82AE0E: push    eax
0x82AE0F: lea     ecx, [esp+30h+a3]
0x82AE13: mov     byte ptr [esp+30h+var_4], 52h ; 'R'
0x82AE18: call    sub_75FAE0
0x82AE1D: mov     eax, [esp+2Ch+var_10]
0x82AE21: test    eax, eax
0x82AE23: mov     byte ptr [esp+2Ch+var_4], 1
0x82AE28: jz      short loc_82AE3D
0x82AE2A: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82AE2E: mov     ecx, eax
0x82AE30: add     eax, 5Ch ; '\'
0x82AE33: cmp     dword ptr [eax], 0
0x82AE36: jnz     short loc_82AE3D
0x82AE38: call    sub_772560
0x82AE3D: mov     edi, [esp+2Ch+a3]
0x82AE41: push    2
0x82AE43: push    1
0x82AE45: push    0
0x82AE47: push    edi
0x82AE48: call    sub_801110
0x82AE4D: add     esp, 10h
0x82AE50: push    edi; a3
0x82AE51: push    0; a2
0x82AE53: mov     ecx, esi; this
0x82AE55: call    sub_760010
0x82AE5A: lea     ecx, [esp+2Ch+var_10]
0x82AE5E: push    ecx
0x82AE5F: call    sub_772630
0x82AE64: add     esp, 4
0x82AE67: push    eax
0x82AE68: lea     ecx, [esp+30h+a3]
0x82AE6C: mov     byte ptr [esp+30h+var_4], 53h ; 'S'
0x82AE71: call    sub_75FAE0
0x82AE76: mov     eax, [esp+2Ch+var_10]
0x82AE7A: test    eax, eax
0x82AE7C: mov     byte ptr [esp+2Ch+var_4], 1
0x82AE81: jz      short loc_82AE96
0x82AE83: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82AE87: mov     ecx, eax
0x82AE89: add     eax, 5Ch ; '\'
0x82AE8C: cmp     dword ptr [eax], 0
0x82AE8F: jnz     short loc_82AE96
0x82AE91: call    sub_772560
0x82AE96: mov     edi, [esp+2Ch+a3]
0x82AE9A: push    2
0x82AE9C: push    1
0x82AE9E: push    1
0x82AEA0: push    edi
0x82AEA1: call    sub_801110
0x82AEA6: add     esp, 10h
0x82AEA9: push    edi; a3
0x82AEAA: push    1; a2
0x82AEAC: mov     ecx, esi; this
0x82AEAE: call    sub_760010
0x82AEB3: lea     edx, [esp+2Ch+var_10]
0x82AEB7: push    edx
0x82AEB8: call    sub_772630
0x82AEBD: add     esp, 4
0x82AEC0: push    eax
0x82AEC1: lea     ecx, [esp+30h+a3]
0x82AEC5: mov     byte ptr [esp+30h+var_4], 54h ; 'T'
0x82AECA: call    sub_75FAE0
0x82AECF: mov     eax, [esp+2Ch+var_10]
0x82AED3: test    eax, eax
0x82AED5: mov     byte ptr [esp+2Ch+var_4], 1
0x82AEDA: jz      short loc_82AEEF
0x82AEDC: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82AEE0: mov     ecx, eax
0x82AEE2: add     eax, 5Ch ; '\'
0x82AEE5: cmp     dword ptr [eax], 0
0x82AEE8: jnz     short loc_82AEEF
0x82AEEA: call    sub_772560
0x82AEEF: mov     edi, [esp+2Ch+a3]
0x82AEF3: push    2
0x82AEF5: push    1
0x82AEF7: push    2
0x82AEF9: push    edi
0x82AEFA: call    sub_801110
0x82AEFF: add     esp, 10h
0x82AF02: push    edi; a3
0x82AF03: push    2; a2
0x82AF05: mov     ecx, esi; this
0x82AF07: call    sub_760010
0x82AF0C: lea     eax, [esp+2Ch+var_10]
0x82AF10: push    eax
0x82AF11: call    sub_772630
0x82AF16: add     esp, 4
0x82AF19: push    eax
0x82AF1A: lea     ecx, [esp+30h+a3]
0x82AF1E: mov     byte ptr [esp+30h+var_4], 55h ; 'U'
0x82AF23: call    sub_75FAE0
0x82AF28: mov     eax, [esp+2Ch+var_10]
0x82AF2C: test    eax, eax
0x82AF2E: mov     byte ptr [esp+2Ch+var_4], 1
0x82AF33: jz      short loc_82AF48
0x82AF35: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82AF39: mov     ecx, eax
0x82AF3B: add     eax, 5Ch ; '\'
0x82AF3E: cmp     dword ptr [eax], 0
0x82AF41: jnz     short loc_82AF48
0x82AF43: call    sub_772560
0x82AF48: mov     edi, [esp+2Ch+a3]
0x82AF4C: push    2
0x82AF4E: push    1
0x82AF50: push    3
0x82AF52: push    edi
0x82AF53: call    sub_801110
0x82AF58: add     esp, 10h
0x82AF5B: push    edi; a3
0x82AF5C: push    3; a2
0x82AF5E: mov     ecx, esi; this
0x82AF60: call    sub_760010
0x82AF65: lea     ecx, [esp+2Ch+var_10]
0x82AF69: push    ecx
0x82AF6A: call    sub_772630
0x82AF6F: add     esp, 4
0x82AF72: push    eax
0x82AF73: lea     ecx, [esp+30h+a3]
0x82AF77: mov     byte ptr [esp+30h+var_4], 56h ; 'V'
0x82AF7C: call    sub_75FAE0
0x82AF81: mov     eax, [esp+2Ch+var_10]
0x82AF85: test    eax, eax
0x82AF87: mov     byte ptr [esp+2Ch+var_4], 1
0x82AF8C: jz      short loc_82AFA1
0x82AF8E: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82AF92: mov     ecx, eax
0x82AF94: add     eax, 5Ch ; '\'
0x82AF97: cmp     dword ptr [eax], 0
0x82AF9A: jnz     short loc_82AFA1
0x82AF9C: call    sub_772560
0x82AFA1: mov     edi, [esp+2Ch+a3]
0x82AFA5: push    2
0x82AFA7: push    1
0x82AFA9: push    4
0x82AFAB: push    edi
0x82AFAC: call    sub_801110
0x82AFB1: add     esp, 10h
0x82AFB4: push    edi; a3
0x82AFB5: push    4; a2
0x82AFB7: mov     ecx, esi; this
0x82AFB9: call    sub_760010
0x82AFBE: lea     edx, [esp+2Ch+var_10]
0x82AFC2: push    edx
0x82AFC3: call    sub_772630
0x82AFC8: add     esp, 4
0x82AFCB: push    eax
0x82AFCC: lea     ecx, [esp+30h+a3]
0x82AFD0: mov     byte ptr [esp+30h+var_4], 57h ; 'W'
0x82AFD5: call    sub_75FAE0
0x82AFDA: mov     eax, [esp+2Ch+var_10]
0x82AFDE: test    eax, eax
0x82AFE0: mov     byte ptr [esp+2Ch+var_4], 1
0x82AFE5: jz      short loc_82AFFA
0x82AFE7: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82AFEB: mov     ecx, eax
0x82AFED: add     eax, 5Ch ; '\'
0x82AFF0: cmp     dword ptr [eax], 0
0x82AFF3: jnz     short loc_82AFFA
0x82AFF5: call    sub_772560
0x82AFFA: mov     edi, [esp+2Ch+a3]
0x82AFFE: push    0
0x82B000: push    3
0x82B002: push    5
0x82B004: push    edi
0x82B005: call    sub_801110
0x82B00A: mov     eax, ds:0B43110h
0x82B00F: add     esp, 10h
0x82B012: push    eax; a2
0x82B013: mov     ecx, edi; this
0x82B015: call    sub_76C910
0x82B01A: push    edi; a3
0x82B01B: push    5; a2
0x82B01D: mov     ecx, esi; this
0x82B01F: call    sub_760010
0x82B024: lea     ecx, [esp+2Ch+var_10]
0x82B028: push    ecx
0x82B029: call    sub_772630
0x82B02E: add     esp, 4
0x82B031: push    eax
0x82B032: lea     ecx, [esp+30h+a3]
0x82B036: mov     byte ptr [esp+30h+var_4], 58h ; 'X'
0x82B03B: call    sub_75FAE0
0x82B040: mov     eax, [esp+2Ch+var_10]
0x82B044: test    eax, eax
0x82B046: mov     byte ptr [esp+2Ch+var_4], 1
0x82B04B: jz      short loc_82B060
0x82B04D: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82B051: mov     ecx, eax
0x82B053: add     eax, 5Ch ; '\'
0x82B056: cmp     dword ptr [eax], 0
0x82B059: jnz     short loc_82B060
0x82B05B: call    sub_772560
0x82B060: mov     edi, [esp+2Ch+a3]
0x82B064: push    2
0x82B066: push    1
0x82B068: push    6
0x82B06A: push    edi
0x82B06B: call    sub_801110
0x82B070: add     esp, 10h
0x82B073: push    edi; a3
0x82B074: push    6; a2
0x82B076: mov     ecx, esi; this
0x82B078: call    sub_760010
0x82B07D: lea     edx, [esp+2Ch+var_10]
0x82B081: push    edx
0x82B082: call    sub_772630
0x82B087: add     esp, 4
0x82B08A: push    eax
0x82B08B: lea     ecx, [esp+30h+a3]
0x82B08F: mov     byte ptr [esp+30h+var_4], 59h ; 'Y'
0x82B094: call    sub_75FAE0
0x82B099: mov     eax, [esp+2Ch+var_10]
0x82B09D: test    eax, eax
0x82B09F: mov     byte ptr [esp+2Ch+var_4], 1
0x82B0A4: jz      short loc_82B0B9
0x82B0A6: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82B0AA: mov     ecx, eax
0x82B0AC: add     eax, 5Ch ; '\'
0x82B0AF: cmp     dword ptr [eax], 0
0x82B0B2: jnz     short loc_82B0B9
0x82B0B4: call    sub_772560
0x82B0B9: mov     edi, [esp+2Ch+a3]
0x82B0BD: push    0
0x82B0BF: push    3
0x82B0C1: push    7
0x82B0C3: push    edi
0x82B0C4: call    sub_801110
0x82B0C9: add     esp, 10h
0x82B0CC: push    edi; a3
0x82B0CD: push    7; a2
0x82B0CF: mov     ecx, esi; this
0x82B0D1: call    sub_760010
0x82B0D6: mov     eax, ds:0B4539Ch
0x82B0DB: push    eax; a2
0x82B0DC: mov     ecx, esi; this
0x82B0DE: call    sub_7AECB0
0x82B0E3: mov     ecx, ds:0B45190h
0x82B0E9: push    ecx; a2
0x82B0EA: mov     ecx, esi; this
0x82B0EC: call    sub_7AEC60
0x82B0F1: cmp     dword ptr [esi+30h], 0
0x82B0F5: jnz     short loc_82B0FF
0x82B0F7: call    sub_772DF0
0x82B0FC: mov     [esi+30h], eax
0x82B0FF: mov     ecx, [esi+30h]
0x82B102: push    0
0x82B104: push    0
0x82B106: push    1Bh
0x82B108: call    sub_772CD0
0x82B10D: cmp     dword ptr [esi+30h], 0
0x82B111: jnz     short loc_82B11B
0x82B113: call    sub_772DF0
0x82B118: mov     [esi+30h], eax
0x82B11B: mov     ecx, [esi+30h]
0x82B11E: push    0
0x82B120: push    0
0x82B122: push    0Fh
0x82B124: call    sub_772CD0
0x82B129: cmp     dword ptr [esi+30h], 0
0x82B12D: jnz     short loc_82B137
0x82B12F: call    sub_772DF0
0x82B134: mov     [esi+30h], eax
0x82B137: mov     ecx, [esi+30h]
0x82B13A: push    0
0x82B13C: push    1
0x82B13E: push    7
0x82B140: call    sub_772CD0
0x82B145: cmp     dword ptr [esi+30h], 0
0x82B149: jnz     short loc_82B153
0x82B14B: call    sub_772DF0
0x82B150: mov     [esi+30h], eax
0x82B153: mov     ecx, [esi+30h]
0x82B156: push    0
0x82B158: push    4
0x82B15A: push    17h
0x82B15C: call    sub_772CD0
0x82B161: cmp     dword ptr [esi+30h], 0
0x82B165: jnz     short loc_82B16F
0x82B167: call    sub_772DF0
0x82B16C: mov     [esi+30h], eax
0x82B16F: mov     ecx, [esi+30h]
0x82B172: push    0
0x82B174: push    1
0x82B176: push    0Eh
0x82B178: call    sub_772CD0
0x82B17D: cmp     dword ptr [esi+30h], 0
0x82B181: jnz     short loc_82B18B
0x82B183: call    sub_772DF0
0x82B188: mov     [esi+30h], eax
0x82B18B: mov     ecx, [esi+30h]
0x82B18E: push    0
0x82B190: push    0
0x82B192: push    34h ; '4'
0x82B194: call    sub_772CD0
0x82B199: cmp     esi, ds:0B458A4h
0x82B19F: mov     ebx, 18Ch
0x82B1A4: mov     ds:0B43E20h, ebp
0x82B1AA: mov     ds:0B444B0h, ebx
0x82B1B0: mov     dword ptr ds:0B43790h, 18060h
0x82B1BA: mov     dword ptr ds:0B44B40h, 0Ch
0x82B1C4: jz      short loc_82B1E5
0x82B1C6: add     dword ptr [esi+60h], 0FFFFFFFFh
0x82B1CA: jnz     short loc_82B1D3
0x82B1CC: mov     ecx, esi
0x82B1CE: call    sub_7604D0
0x82B1D3: mov     esi, ds:0B458A4h
0x82B1D9: test    esi, esi
0x82B1DB: mov     [esp+2Ch+var_14], esi
0x82B1DF: jz      short loc_82B1E5
0x82B1E1: add     dword ptr [esi+60h], 1
0x82B1E5: cmp     dword ptr [esi+18h], 8
0x82B1E9: jnb     loc_82B4C5
0x82B1EF: lea     edx, [esp+2Ch+var_10]
0x82B1F3: push    edx
0x82B1F4: call    sub_772630
0x82B1F9: add     esp, 4
0x82B1FC: push    eax
0x82B1FD: lea     ecx, [esp+30h+a3]
0x82B201: mov     byte ptr [esp+30h+var_4], 5Ah ; 'Z'
0x82B206: call    sub_75FAE0
0x82B20B: mov     eax, [esp+2Ch+var_10]
0x82B20F: test    eax, eax
0x82B211: mov     byte ptr [esp+2Ch+var_4], 1
0x82B216: jz      short loc_82B22B
0x82B218: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82B21C: mov     ecx, eax
0x82B21E: add     eax, 5Ch ; '\'
0x82B221: cmp     dword ptr [eax], 0
0x82B224: jnz     short loc_82B22B
0x82B226: call    sub_772560
0x82B22B: mov     edi, [esp+2Ch+a3]
0x82B22F: push    2
0x82B231: push    1
0x82B233: push    0
0x82B235: push    edi
0x82B236: call    sub_801110
0x82B23B: add     esp, 10h
0x82B23E: push    edi; a3
0x82B23F: push    0; a2
0x82B241: mov     ecx, esi; this
0x82B243: call    sub_760010
0x82B248: lea     eax, [esp+2Ch+var_10]
0x82B24C: push    eax
0x82B24D: call    sub_772630
0x82B252: add     esp, 4
0x82B255: push    eax
0x82B256: lea     ecx, [esp+30h+a3]
0x82B25A: mov     byte ptr [esp+30h+var_4], 5Bh ; '['
0x82B25F: call    sub_75FAE0
0x82B264: mov     eax, [esp+2Ch+var_10]
0x82B268: test    eax, eax
0x82B26A: mov     byte ptr [esp+2Ch+var_4], 1
0x82B26F: jz      short loc_82B284
0x82B271: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82B275: mov     ecx, eax
0x82B277: add     eax, 5Ch ; '\'
0x82B27A: cmp     dword ptr [eax], 0
0x82B27D: jnz     short loc_82B284
0x82B27F: call    sub_772560
0x82B284: mov     edi, [esp+2Ch+a3]
0x82B288: push    2
0x82B28A: push    1
0x82B28C: push    1
0x82B28E: push    edi
0x82B28F: call    sub_801110
0x82B294: add     esp, 10h
0x82B297: push    edi; a3
0x82B298: push    1; a2
0x82B29A: mov     ecx, esi; this
0x82B29C: call    sub_760010
0x82B2A1: lea     ecx, [esp+2Ch+var_10]
0x82B2A5: push    ecx
0x82B2A6: call    sub_772630
0x82B2AB: add     esp, 4
0x82B2AE: push    eax
0x82B2AF: lea     ecx, [esp+30h+a3]
0x82B2B3: mov     byte ptr [esp+30h+var_4], 5Ch ; '\'
0x82B2B8: call    sub_75FAE0
0x82B2BD: mov     eax, [esp+2Ch+var_10]
0x82B2C1: test    eax, eax
0x82B2C3: mov     byte ptr [esp+2Ch+var_4], 1
0x82B2C8: jz      short loc_82B2DD
0x82B2CA: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82B2CE: mov     ecx, eax
0x82B2D0: add     eax, 5Ch ; '\'
0x82B2D3: cmp     dword ptr [eax], 0
0x82B2D6: jnz     short loc_82B2DD
0x82B2D8: call    sub_772560
0x82B2DD: mov     edi, [esp+2Ch+a3]
0x82B2E1: push    2
0x82B2E3: push    1
0x82B2E5: push    2
0x82B2E7: push    edi
0x82B2E8: call    sub_801110
0x82B2ED: add     esp, 10h
0x82B2F0: push    edi; a3
0x82B2F1: push    2; a2
0x82B2F3: mov     ecx, esi; this
0x82B2F5: call    sub_760010
0x82B2FA: lea     edx, [esp+2Ch+var_10]
0x82B2FE: push    edx
0x82B2FF: call    sub_772630
0x82B304: add     esp, 4
0x82B307: push    eax
0x82B308: lea     ecx, [esp+30h+a3]
0x82B30C: mov     byte ptr [esp+30h+var_4], 5Dh ; ']'
0x82B311: call    sub_75FAE0
0x82B316: mov     eax, [esp+2Ch+var_10]
0x82B31A: test    eax, eax
0x82B31C: mov     byte ptr [esp+2Ch+var_4], 1
0x82B321: jz      short loc_82B336
0x82B323: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82B327: mov     ecx, eax
0x82B329: add     eax, 5Ch ; '\'
0x82B32C: cmp     dword ptr [eax], 0
0x82B32F: jnz     short loc_82B336
0x82B331: call    sub_772560
0x82B336: mov     edi, [esp+2Ch+a3]
0x82B33A: push    2
0x82B33C: push    1
0x82B33E: push    3
0x82B340: push    edi
0x82B341: call    sub_801110
0x82B346: add     esp, 10h
0x82B349: push    edi; a3
0x82B34A: push    3; a2
0x82B34C: mov     ecx, esi; this
0x82B34E: call    sub_760010
0x82B353: lea     eax, [esp+2Ch+var_10]
0x82B357: push    eax
0x82B358: call    sub_772630
0x82B35D: add     esp, 4
0x82B360: push    eax
0x82B361: lea     ecx, [esp+30h+a3]
0x82B365: mov     byte ptr [esp+30h+var_4], 5Eh ; '^'
0x82B36A: call    sub_75FAE0
0x82B36F: mov     eax, [esp+2Ch+var_10]
0x82B373: test    eax, eax
0x82B375: mov     byte ptr [esp+2Ch+var_4], 1
0x82B37A: jz      short loc_82B38F
0x82B37C: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82B380: mov     ecx, eax
0x82B382: add     eax, 5Ch ; '\'
0x82B385: cmp     dword ptr [eax], 0
0x82B388: jnz     short loc_82B38F
0x82B38A: call    sub_772560
0x82B38F: mov     edi, [esp+2Ch+a3]
0x82B393: push    2
0x82B395: push    1
0x82B397: push    4
0x82B399: push    edi
0x82B39A: call    sub_801110
0x82B39F: add     esp, 10h
0x82B3A2: push    edi; a3
0x82B3A3: push    4; a2
0x82B3A5: mov     ecx, esi; this
0x82B3A7: call    sub_760010
0x82B3AC: lea     ecx, [esp+2Ch+var_10]
0x82B3B0: push    ecx
0x82B3B1: call    sub_772630
0x82B3B6: add     esp, 4
0x82B3B9: push    eax
0x82B3BA: lea     ecx, [esp+30h+a3]
0x82B3BE: mov     byte ptr [esp+30h+var_4], 5Fh ; '_'
0x82B3C3: call    sub_75FAE0
0x82B3C8: mov     eax, [esp+2Ch+var_10]
0x82B3CC: test    eax, eax
0x82B3CE: mov     byte ptr [esp+2Ch+var_4], 1
0x82B3D3: jz      short loc_82B3E8
0x82B3D5: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82B3D9: mov     ecx, eax
0x82B3DB: add     eax, 5Ch ; '\'
0x82B3DE: cmp     dword ptr [eax], 0
0x82B3E1: jnz     short loc_82B3E8
0x82B3E3: call    sub_772560
0x82B3E8: mov     edi, [esp+2Ch+a3]
0x82B3EC: push    0
0x82B3EE: push    3
0x82B3F0: push    5
0x82B3F2: push    edi
0x82B3F3: call    sub_801110
0x82B3F8: mov     edx, ds:0B43110h
0x82B3FE: add     esp, 10h
0x82B401: push    edx; a2
0x82B402: mov     ecx, edi; this
0x82B404: call    sub_76C910
0x82B409: push    edi; a3
0x82B40A: push    5; a2
0x82B40C: mov     ecx, esi; this
0x82B40E: call    sub_760010
0x82B413: lea     eax, [esp+2Ch+var_10]
0x82B417: push    eax
0x82B418: call    sub_772630
0x82B41D: add     esp, 4
0x82B420: push    eax
0x82B421: lea     ecx, [esp+30h+a3]
0x82B425: mov     byte ptr [esp+30h+var_4], 60h ; '`'
0x82B42A: call    sub_75FAE0
0x82B42F: mov     eax, [esp+2Ch+var_10]
0x82B433: test    eax, eax
0x82B435: mov     byte ptr [esp+2Ch+var_4], 1
0x82B43A: jz      short loc_82B44F
0x82B43C: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82B440: mov     ecx, eax
0x82B442: add     eax, 5Ch ; '\'
0x82B445: cmp     dword ptr [eax], 0
0x82B448: jnz     short loc_82B44F
0x82B44A: call    sub_772560
0x82B44F: mov     edi, [esp+2Ch+a3]
0x82B453: push    2
0x82B455: push    1
0x82B457: push    6
0x82B459: push    edi
0x82B45A: call    sub_801110
0x82B45F: add     esp, 10h
0x82B462: push    edi; a3
0x82B463: push    6; a2
0x82B465: mov     ecx, esi; this
0x82B467: call    sub_760010
0x82B46C: lea     ecx, [esp+2Ch+var_10]
0x82B470: push    ecx
0x82B471: call    sub_772630
0x82B476: add     esp, 4
0x82B479: push    eax
0x82B47A: lea     ecx, [esp+30h+a3]
0x82B47E: mov     byte ptr [esp+30h+var_4], 61h ; 'a'
0x82B483: call    sub_75FAE0
0x82B488: mov     eax, [esp+2Ch+var_10]
0x82B48C: test    eax, eax
0x82B48E: mov     byte ptr [esp+2Ch+var_4], 1
0x82B493: jz      short loc_82B4A8
0x82B495: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82B499: mov     ecx, eax
0x82B49B: add     eax, 5Ch ; '\'
0x82B49E: cmp     dword ptr [eax], 0
0x82B4A1: jnz     short loc_82B4A8
0x82B4A3: call    sub_772560
0x82B4A8: mov     edi, [esp+2Ch+a3]
0x82B4AC: push    0
0x82B4AE: push    3
0x82B4B0: push    7
0x82B4B2: push    edi
0x82B4B3: call    sub_801110
0x82B4B8: add     esp, 10h
0x82B4BB: push    edi; a3
0x82B4BC: push    7; a2
0x82B4BE: mov     ecx, esi; this
0x82B4C0: call    sub_760010
0x82B4C5: mov     edx, ds:0B4539Ch
0x82B4CB: push    edx; a2
0x82B4CC: mov     ecx, esi; this
0x82B4CE: call    sub_7AECB0
0x82B4D3: mov     eax, ds:0B45194h
0x82B4D8: push    eax; a2
0x82B4D9: mov     ecx, esi; this
0x82B4DB: call    sub_7AEC60
0x82B4E0: cmp     dword ptr [esi+30h], 0
0x82B4E4: jnz     short loc_82B4EE
0x82B4E6: call    sub_772DF0
0x82B4EB: mov     [esi+30h], eax
0x82B4EE: mov     ecx, [esi+30h]
0x82B4F1: push    0
0x82B4F3: push    0
0x82B4F5: push    1Bh
0x82B4F7: call    sub_772CD0
0x82B4FC: cmp     dword ptr [esi+30h], 0
0x82B500: jnz     short loc_82B50A
0x82B502: call    sub_772DF0
0x82B507: mov     [esi+30h], eax
0x82B50A: mov     ecx, [esi+30h]
0x82B50D: push    0
0x82B50F: push    0
0x82B511: push    0Fh
0x82B513: call    sub_772CD0
0x82B518: cmp     dword ptr [esi+30h], 0
0x82B51C: jnz     short loc_82B526
0x82B51E: call    sub_772DF0
0x82B523: mov     [esi+30h], eax
0x82B526: mov     ecx, [esi+30h]
0x82B529: push    0
0x82B52B: push    1
0x82B52D: push    7
0x82B52F: call    sub_772CD0
0x82B534: cmp     dword ptr [esi+30h], 0
0x82B538: jnz     short loc_82B542
0x82B53A: call    sub_772DF0
0x82B53F: mov     [esi+30h], eax
0x82B542: mov     ecx, [esi+30h]
0x82B545: push    0
0x82B547: push    4
0x82B549: push    17h
0x82B54B: call    sub_772CD0
0x82B550: cmp     dword ptr [esi+30h], 0
0x82B554: jnz     short loc_82B55E
0x82B556: call    sub_772DF0
0x82B55B: mov     [esi+30h], eax
0x82B55E: mov     ecx, [esi+30h]
0x82B561: push    0
0x82B563: push    1
0x82B565: push    0Eh
0x82B567: call    sub_772CD0
0x82B56C: cmp     dword ptr [esi+30h], 0
0x82B570: jnz     short loc_82B57A
0x82B572: call    sub_772DF0
0x82B577: mov     [esi+30h], eax
0x82B57A: mov     ecx, [esi+30h]
0x82B57D: push    0
0x82B57F: push    0
0x82B581: push    34h ; '4'
0x82B583: call    sub_772CD0
0x82B588: cmp     esi, ds:0B458B8h
0x82B58E: mov     ds:0B43E24h, ebp
0x82B594: mov     ds:0B444B4h, ebx
0x82B59A: mov     dword ptr ds:0B43794h, 18060h
0x82B5A4: mov     dword ptr ds:0B44B44h, 0Ch
0x82B5AE: jz      short loc_82B5CF
0x82B5B0: add     dword ptr [esi+60h], 0FFFFFFFFh
0x82B5B4: jnz     short loc_82B5BD
0x82B5B6: mov     ecx, esi
0x82B5B8: call    sub_7604D0
0x82B5BD: mov     esi, ds:0B458B8h
0x82B5C3: test    esi, esi
0x82B5C5: mov     [esp+2Ch+var_14], esi
0x82B5C9: jz      short loc_82B5CF
0x82B5CB: add     dword ptr [esi+60h], 1
0x82B5CF: cmp     dword ptr [esi+18h], 8
0x82B5D3: jnb     loc_82B8AF
0x82B5D9: lea     ecx, [esp+2Ch+var_10]
0x82B5DD: push    ecx
0x82B5DE: call    sub_772630
0x82B5E3: add     esp, 4
0x82B5E6: push    eax
0x82B5E7: lea     ecx, [esp+30h+a3]
0x82B5EB: mov     byte ptr [esp+30h+var_4], 62h ; 'b'
0x82B5F0: call    sub_75FAE0
0x82B5F5: mov     eax, [esp+2Ch+var_10]
0x82B5F9: test    eax, eax
0x82B5FB: mov     byte ptr [esp+2Ch+var_4], 1
0x82B600: jz      short loc_82B615
0x82B602: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82B606: mov     ecx, eax
0x82B608: add     eax, 5Ch ; '\'
0x82B60B: cmp     dword ptr [eax], 0
0x82B60E: jnz     short loc_82B615
0x82B610: call    sub_772560
0x82B615: mov     edi, [esp+2Ch+a3]
0x82B619: push    2
0x82B61B: push    1
0x82B61D: push    0
0x82B61F: push    edi
0x82B620: call    sub_801110
0x82B625: add     esp, 10h
0x82B628: push    edi; a3
0x82B629: push    0; a2
0x82B62B: mov     ecx, esi; this
0x82B62D: call    sub_760010
0x82B632: lea     edx, [esp+2Ch+var_10]
0x82B636: push    edx
0x82B637: call    sub_772630
0x82B63C: add     esp, 4
0x82B63F: push    eax
0x82B640: lea     ecx, [esp+30h+a3]
0x82B644: mov     byte ptr [esp+30h+var_4], 63h ; 'c'
0x82B649: call    sub_75FAE0
0x82B64E: mov     eax, [esp+2Ch+var_10]
0x82B652: test    eax, eax
0x82B654: mov     byte ptr [esp+2Ch+var_4], 1
0x82B659: jz      short loc_82B66E
0x82B65B: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82B65F: mov     ecx, eax
0x82B661: add     eax, 5Ch ; '\'
0x82B664: cmp     dword ptr [eax], 0
0x82B667: jnz     short loc_82B66E
0x82B669: call    sub_772560
0x82B66E: mov     edi, [esp+2Ch+a3]
0x82B672: push    2
0x82B674: push    1
0x82B676: push    1
0x82B678: push    edi
0x82B679: call    sub_801110
0x82B67E: add     esp, 10h
0x82B681: push    edi; a3
0x82B682: push    1; a2
0x82B684: mov     ecx, esi; this
0x82B686: call    sub_760010
0x82B68B: lea     eax, [esp+2Ch+var_10]
0x82B68F: push    eax
0x82B690: call    sub_772630
0x82B695: add     esp, 4
0x82B698: push    eax
0x82B699: lea     ecx, [esp+30h+a3]
0x82B69D: mov     byte ptr [esp+30h+var_4], 64h ; 'd'
0x82B6A2: call    sub_75FAE0
0x82B6A7: mov     eax, [esp+2Ch+var_10]
0x82B6AB: test    eax, eax
0x82B6AD: mov     byte ptr [esp+2Ch+var_4], 1
0x82B6B2: jz      short loc_82B6C7
0x82B6B4: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82B6B8: mov     ecx, eax
0x82B6BA: add     eax, 5Ch ; '\'
0x82B6BD: cmp     dword ptr [eax], 0
0x82B6C0: jnz     short loc_82B6C7
0x82B6C2: call    sub_772560
0x82B6C7: mov     edi, [esp+2Ch+a3]
0x82B6CB: push    2
0x82B6CD: push    1
0x82B6CF: push    2
0x82B6D1: push    edi
0x82B6D2: call    sub_801110
0x82B6D7: add     esp, 10h
0x82B6DA: push    edi; a3
0x82B6DB: push    2; a2
0x82B6DD: mov     ecx, esi; this
0x82B6DF: call    sub_760010
0x82B6E4: lea     ecx, [esp+2Ch+var_10]
0x82B6E8: push    ecx
0x82B6E9: call    sub_772630
0x82B6EE: add     esp, 4
0x82B6F1: push    eax
0x82B6F2: lea     ecx, [esp+30h+a3]
0x82B6F6: mov     byte ptr [esp+30h+var_4], 65h ; 'e'
0x82B6FB: call    sub_75FAE0
0x82B700: mov     eax, [esp+2Ch+var_10]
0x82B704: test    eax, eax
0x82B706: mov     byte ptr [esp+2Ch+var_4], 1
0x82B70B: jz      short loc_82B720
0x82B70D: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82B711: mov     ecx, eax
0x82B713: add     eax, 5Ch ; '\'
0x82B716: cmp     dword ptr [eax], 0
0x82B719: jnz     short loc_82B720
0x82B71B: call    sub_772560
0x82B720: mov     edi, [esp+2Ch+a3]
0x82B724: push    2
0x82B726: push    1
0x82B728: push    3
0x82B72A: push    edi
0x82B72B: call    sub_801110
0x82B730: add     esp, 10h
0x82B733: push    edi; a3
0x82B734: push    3; a2
0x82B736: mov     ecx, esi; this
0x82B738: call    sub_760010
0x82B73D: lea     edx, [esp+2Ch+var_10]
0x82B741: push    edx
0x82B742: call    sub_772630
0x82B747: add     esp, 4
0x82B74A: push    eax
0x82B74B: lea     ecx, [esp+30h+a3]
0x82B74F: mov     byte ptr [esp+30h+var_4], 66h ; 'f'
0x82B754: call    sub_75FAE0
0x82B759: mov     eax, [esp+2Ch+var_10]
0x82B75D: test    eax, eax
0x82B75F: mov     byte ptr [esp+2Ch+var_4], 1
0x82B764: jz      short loc_82B779
0x82B766: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82B76A: mov     ecx, eax
0x82B76C: add     eax, 5Ch ; '\'
0x82B76F: cmp     dword ptr [eax], 0
0x82B772: jnz     short loc_82B779
0x82B774: call    sub_772560
0x82B779: mov     edi, [esp+2Ch+a3]
0x82B77D: push    2
0x82B77F: push    1
0x82B781: push    4
0x82B783: push    edi
0x82B784: call    sub_801110
0x82B789: add     esp, 10h
0x82B78C: push    edi; a3
0x82B78D: push    4; a2
0x82B78F: mov     ecx, esi; this
0x82B791: call    sub_760010
0x82B796: lea     eax, [esp+2Ch+var_10]
0x82B79A: push    eax
0x82B79B: call    sub_772630
0x82B7A0: add     esp, 4
0x82B7A3: push    eax
0x82B7A4: lea     ecx, [esp+30h+a3]
0x82B7A8: mov     byte ptr [esp+30h+var_4], 67h ; 'g'
0x82B7AD: call    sub_75FAE0
0x82B7B2: mov     eax, [esp+2Ch+var_10]
0x82B7B6: test    eax, eax
0x82B7B8: mov     byte ptr [esp+2Ch+var_4], 1
0x82B7BD: jz      short loc_82B7D2
0x82B7BF: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82B7C3: mov     ecx, eax
0x82B7C5: add     eax, 5Ch ; '\'
0x82B7C8: cmp     dword ptr [eax], 0
0x82B7CB: jnz     short loc_82B7D2
0x82B7CD: call    sub_772560
0x82B7D2: mov     edi, [esp+2Ch+a3]
0x82B7D6: push    0
0x82B7D8: push    3
0x82B7DA: push    5
0x82B7DC: push    edi
0x82B7DD: call    sub_801110
0x82B7E2: mov     ecx, ds:0B43110h
0x82B7E8: add     esp, 10h
0x82B7EB: push    ecx; a2
0x82B7EC: mov     ecx, edi; this
0x82B7EE: call    sub_76C910
0x82B7F3: push    edi; a3
0x82B7F4: push    5; a2
0x82B7F6: mov     ecx, esi; this
0x82B7F8: call    sub_760010
0x82B7FD: lea     edx, [esp+2Ch+var_10]
0x82B801: push    edx
0x82B802: call    sub_772630
0x82B807: add     esp, 4
0x82B80A: push    eax
0x82B80B: lea     ecx, [esp+30h+a3]
0x82B80F: mov     byte ptr [esp+30h+var_4], 68h ; 'h'
0x82B814: call    sub_75FAE0
0x82B819: mov     eax, [esp+2Ch+var_10]
0x82B81D: test    eax, eax
0x82B81F: mov     byte ptr [esp+2Ch+var_4], 1
0x82B824: jz      short loc_82B839
0x82B826: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82B82A: mov     ecx, eax
0x82B82C: add     eax, 5Ch ; '\'
0x82B82F: cmp     dword ptr [eax], 0
0x82B832: jnz     short loc_82B839
0x82B834: call    sub_772560
0x82B839: mov     edi, [esp+2Ch+a3]
0x82B83D: push    2
0x82B83F: push    1
0x82B841: push    6
0x82B843: push    edi
0x82B844: call    sub_801110
0x82B849: add     esp, 10h
0x82B84C: push    edi; a3
0x82B84D: push    6; a2
0x82B84F: mov     ecx, esi; this
0x82B851: call    sub_760010
0x82B856: lea     eax, [esp+2Ch+var_10]
0x82B85A: push    eax
0x82B85B: call    sub_772630
0x82B860: add     esp, 4
0x82B863: push    eax
0x82B864: lea     ecx, [esp+30h+a3]
0x82B868: mov     byte ptr [esp+30h+var_4], 69h ; 'i'
0x82B86D: call    sub_75FAE0
0x82B872: mov     eax, [esp+2Ch+var_10]
0x82B876: test    eax, eax
0x82B878: mov     byte ptr [esp+2Ch+var_4], 1
0x82B87D: jz      short loc_82B892
0x82B87F: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82B883: mov     ecx, eax
0x82B885: add     eax, 5Ch ; '\'
0x82B888: cmp     dword ptr [eax], 0
0x82B88B: jnz     short loc_82B892
0x82B88D: call    sub_772560
0x82B892: mov     edi, [esp+2Ch+a3]
0x82B896: push    0
0x82B898: push    3
0x82B89A: push    7
0x82B89C: push    edi
0x82B89D: call    sub_801110
0x82B8A2: add     esp, 10h
0x82B8A5: push    edi; a3
0x82B8A6: push    7; a2
0x82B8A8: mov     ecx, esi; this
0x82B8AA: call    sub_760010
0x82B8AF: mov     ecx, ds:0B453A0h
0x82B8B5: push    ecx; a2
0x82B8B6: mov     ecx, esi; this
0x82B8B8: call    sub_7AECB0
0x82B8BD: mov     edx, ds:0B45198h
0x82B8C3: push    edx; a2
0x82B8C4: mov     ecx, esi; this
0x82B8C6: call    sub_7AEC60
0x82B8CB: cmp     dword ptr [esi+30h], 0
0x82B8CF: jnz     short loc_82B8D9
0x82B8D1: call    sub_772DF0
0x82B8D6: mov     [esi+30h], eax
0x82B8D9: mov     ecx, [esi+30h]
0x82B8DC: push    0
0x82B8DE: push    0
0x82B8E0: push    1Bh
0x82B8E2: call    sub_772CD0
0x82B8E7: cmp     dword ptr [esi+30h], 0
0x82B8EB: jnz     short loc_82B8F5
0x82B8ED: call    sub_772DF0
0x82B8F2: mov     [esi+30h], eax
0x82B8F5: mov     ecx, [esi+30h]
0x82B8F8: push    0
0x82B8FA: push    0
0x82B8FC: push    0Fh
0x82B8FE: call    sub_772CD0
0x82B903: cmp     dword ptr [esi+30h], 0
0x82B907: jnz     short loc_82B911
0x82B909: call    sub_772DF0
0x82B90E: mov     [esi+30h], eax
0x82B911: mov     ecx, [esi+30h]
0x82B914: push    0
0x82B916: push    1
0x82B918: push    7
0x82B91A: call    sub_772CD0
0x82B91F: cmp     dword ptr [esi+30h], 0
0x82B923: jnz     short loc_82B92D
0x82B925: call    sub_772DF0
0x82B92A: mov     [esi+30h], eax
0x82B92D: mov     ecx, [esi+30h]
0x82B930: push    0
0x82B932: push    4
0x82B934: push    17h
0x82B936: call    sub_772CD0
0x82B93B: cmp     dword ptr [esi+30h], 0
0x82B93F: jnz     short loc_82B949
0x82B941: call    sub_772DF0
0x82B946: mov     [esi+30h], eax
0x82B949: mov     ecx, [esi+30h]
0x82B94C: push    0
0x82B94E: push    1
0x82B950: push    0Eh
0x82B952: call    sub_772CD0
0x82B957: cmp     dword ptr [esi+30h], 0
0x82B95B: jnz     short loc_82B965
0x82B95D: call    sub_772DF0
0x82B962: mov     [esi+30h], eax
0x82B965: mov     ecx, [esi+30h]
0x82B968: push    0
0x82B96A: push    0
0x82B96C: push    34h ; '4'
0x82B96E: call    sub_772CD0
0x82B973: mov     ebp, 39082h
0x82B978: mov     ebx, 11Ch
0x82B97D: push    offset dword_B458BC
0x82B982: lea     ecx, [esp+30h+var_14]
0x82B986: mov     ds:0B43E38h, ebp
0x82B98C: mov     ds:0B444C8h, ebx
0x82B992: mov     dword ptr ds:0B437A8h, 18000h
0x82B99C: mov     dword ptr ds:0B44B58h, 8
0x82B9A6: call    sub_76C890
0x82B9AB: mov     esi, [esp+2Ch+var_14]
0x82B9AF: cmp     dword ptr [esi+18h], 8
0x82B9B3: jnb     loc_82BC8E
0x82B9B9: lea     eax, [esp+2Ch+var_10]
0x82B9BD: push    eax
0x82B9BE: call    sub_772630
0x82B9C3: add     esp, 4
0x82B9C6: push    eax
0x82B9C7: lea     ecx, [esp+30h+a3]
0x82B9CB: mov     byte ptr [esp+30h+var_4], 6Ah ; 'j'
0x82B9D0: call    sub_75FAE0
0x82B9D5: mov     eax, [esp+2Ch+var_10]
0x82B9D9: test    eax, eax
0x82B9DB: mov     byte ptr [esp+2Ch+var_4], 1
0x82B9E0: jz      short loc_82B9F5
0x82B9E2: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82B9E6: mov     ecx, eax
0x82B9E8: add     eax, 5Ch ; '\'
0x82B9EB: cmp     dword ptr [eax], 0
0x82B9EE: jnz     short loc_82B9F5
0x82B9F0: call    sub_772560
0x82B9F5: mov     edi, [esp+2Ch+a3]
0x82B9F9: push    2
0x82B9FB: push    1
0x82B9FD: push    0
0x82B9FF: push    edi
0x82BA00: call    sub_801110
0x82BA05: add     esp, 10h
0x82BA08: push    edi; a3
0x82BA09: push    0; a2
0x82BA0B: mov     ecx, esi; this
0x82BA0D: call    sub_760010
0x82BA12: lea     ecx, [esp+2Ch+var_10]
0x82BA16: push    ecx
0x82BA17: call    sub_772630
0x82BA1C: add     esp, 4
0x82BA1F: push    eax
0x82BA20: lea     ecx, [esp+30h+a3]
0x82BA24: mov     byte ptr [esp+30h+var_4], 6Bh ; 'k'
0x82BA29: call    sub_75FAE0
0x82BA2E: mov     eax, [esp+2Ch+var_10]
0x82BA32: test    eax, eax
0x82BA34: mov     byte ptr [esp+2Ch+var_4], 1
0x82BA39: jz      short loc_82BA4E
0x82BA3B: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82BA3F: mov     ecx, eax
0x82BA41: add     eax, 5Ch ; '\'
0x82BA44: cmp     dword ptr [eax], 0
0x82BA47: jnz     short loc_82BA4E
0x82BA49: call    sub_772560
0x82BA4E: mov     edi, [esp+2Ch+a3]
0x82BA52: push    2
0x82BA54: push    1
0x82BA56: push    1
0x82BA58: push    edi
0x82BA59: call    sub_801110
0x82BA5E: add     esp, 10h
0x82BA61: push    edi; a3
0x82BA62: push    1; a2
0x82BA64: mov     ecx, esi; this
0x82BA66: call    sub_760010
0x82BA6B: lea     edx, [esp+2Ch+var_10]
0x82BA6F: push    edx
0x82BA70: call    sub_772630
0x82BA75: add     esp, 4
0x82BA78: push    eax
0x82BA79: lea     ecx, [esp+30h+a3]
0x82BA7D: mov     byte ptr [esp+30h+var_4], 6Ch ; 'l'
0x82BA82: call    sub_75FAE0
0x82BA87: mov     eax, [esp+2Ch+var_10]
0x82BA8B: test    eax, eax
0x82BA8D: mov     byte ptr [esp+2Ch+var_4], 1
0x82BA92: jz      short loc_82BAA7
0x82BA94: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82BA98: mov     ecx, eax
0x82BA9A: add     eax, 5Ch ; '\'
0x82BA9D: cmp     dword ptr [eax], 0
0x82BAA0: jnz     short loc_82BAA7
0x82BAA2: call    sub_772560
0x82BAA7: mov     edi, [esp+2Ch+a3]
0x82BAAB: push    2
0x82BAAD: push    1
0x82BAAF: push    2
0x82BAB1: push    edi
0x82BAB2: call    sub_801110
0x82BAB7: add     esp, 10h
0x82BABA: push    edi; a3
0x82BABB: push    2; a2
0x82BABD: mov     ecx, esi; this
0x82BABF: call    sub_760010
0x82BAC4: lea     eax, [esp+2Ch+var_10]
0x82BAC8: push    eax
0x82BAC9: call    sub_772630
0x82BACE: add     esp, 4
0x82BAD1: push    eax
0x82BAD2: lea     ecx, [esp+30h+a3]
0x82BAD6: mov     byte ptr [esp+30h+var_4], 6Dh ; 'm'
0x82BADB: call    sub_75FAE0
0x82BAE0: mov     eax, [esp+2Ch+var_10]
0x82BAE4: test    eax, eax
0x82BAE6: mov     byte ptr [esp+2Ch+var_4], 1
0x82BAEB: jz      short loc_82BB00
0x82BAED: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82BAF1: mov     ecx, eax
0x82BAF3: add     eax, 5Ch ; '\'
0x82BAF6: cmp     dword ptr [eax], 0
0x82BAF9: jnz     short loc_82BB00
0x82BAFB: call    sub_772560
0x82BB00: mov     edi, [esp+2Ch+a3]
0x82BB04: push    2
0x82BB06: push    1
0x82BB08: push    3
0x82BB0A: push    edi
0x82BB0B: call    sub_801110
0x82BB10: add     esp, 10h
0x82BB13: push    edi; a3
0x82BB14: push    3; a2
0x82BB16: mov     ecx, esi; this
0x82BB18: call    sub_760010
0x82BB1D: lea     ecx, [esp+2Ch+var_10]
0x82BB21: push    ecx
0x82BB22: call    sub_772630
0x82BB27: add     esp, 4
0x82BB2A: push    eax
0x82BB2B: lea     ecx, [esp+30h+a3]
0x82BB2F: mov     byte ptr [esp+30h+var_4], 6Eh ; 'n'
0x82BB34: call    sub_75FAE0
0x82BB39: mov     eax, [esp+2Ch+var_10]
0x82BB3D: test    eax, eax
0x82BB3F: mov     byte ptr [esp+2Ch+var_4], 1
0x82BB44: jz      short loc_82BB59
0x82BB46: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82BB4A: mov     ecx, eax
0x82BB4C: add     eax, 5Ch ; '\'
0x82BB4F: cmp     dword ptr [eax], 0
0x82BB52: jnz     short loc_82BB59
0x82BB54: call    sub_772560
0x82BB59: mov     edi, [esp+2Ch+a3]
0x82BB5D: push    2
0x82BB5F: push    1
0x82BB61: push    4
0x82BB63: push    edi
0x82BB64: call    sub_801110
0x82BB69: add     esp, 10h
0x82BB6C: push    edi; a3
0x82BB6D: push    4; a2
0x82BB6F: mov     ecx, esi; this
0x82BB71: call    sub_760010
0x82BB76: lea     edx, [esp+2Ch+var_10]
0x82BB7A: push    edx
0x82BB7B: call    sub_772630
0x82BB80: add     esp, 4
0x82BB83: push    eax
0x82BB84: lea     ecx, [esp+30h+a3]
0x82BB88: mov     byte ptr [esp+30h+var_4], 6Fh ; 'o'
0x82BB8D: call    sub_75FAE0
0x82BB92: mov     eax, [esp+2Ch+var_10]
0x82BB96: test    eax, eax
0x82BB98: mov     byte ptr [esp+2Ch+var_4], 1
0x82BB9D: jz      short loc_82BBB2
0x82BB9F: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82BBA3: mov     ecx, eax
0x82BBA5: add     eax, 5Ch ; '\'
0x82BBA8: cmp     dword ptr [eax], 0
0x82BBAB: jnz     short loc_82BBB2
0x82BBAD: call    sub_772560
0x82BBB2: mov     edi, [esp+2Ch+a3]
0x82BBB6: push    0
0x82BBB8: push    3
0x82BBBA: push    5
0x82BBBC: push    edi
0x82BBBD: call    sub_801110
0x82BBC2: mov     eax, ds:0B43110h
0x82BBC7: add     esp, 10h
0x82BBCA: push    eax; a2
0x82BBCB: mov     ecx, edi; this
0x82BBCD: call    sub_76C910
0x82BBD2: push    edi; a3
0x82BBD3: push    5; a2
0x82BBD5: mov     ecx, esi; this
0x82BBD7: call    sub_760010
0x82BBDC: lea     ecx, [esp+2Ch+var_10]
0x82BBE0: push    ecx
0x82BBE1: call    sub_772630
0x82BBE6: add     esp, 4
0x82BBE9: push    eax
0x82BBEA: lea     ecx, [esp+30h+a3]
0x82BBEE: mov     byte ptr [esp+30h+var_4], 70h ; 'p'
0x82BBF3: call    sub_75FAE0
0x82BBF8: mov     eax, [esp+2Ch+var_10]
0x82BBFC: test    eax, eax
0x82BBFE: mov     byte ptr [esp+2Ch+var_4], 1
0x82BC03: jz      short loc_82BC18
0x82BC05: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82BC09: mov     ecx, eax
0x82BC0B: add     eax, 5Ch ; '\'
0x82BC0E: cmp     dword ptr [eax], 0
0x82BC11: jnz     short loc_82BC18
0x82BC13: call    sub_772560
0x82BC18: mov     edi, [esp+2Ch+a3]
0x82BC1C: push    2
0x82BC1E: push    1
0x82BC20: push    6
0x82BC22: push    edi
0x82BC23: call    sub_801110
0x82BC28: add     esp, 10h
0x82BC2B: push    edi; a3
0x82BC2C: push    6; a2
0x82BC2E: mov     ecx, esi; this
0x82BC30: call    sub_760010
0x82BC35: lea     edx, [esp+2Ch+var_10]
0x82BC39: push    edx
0x82BC3A: call    sub_772630
0x82BC3F: add     esp, 4
0x82BC42: push    eax
0x82BC43: lea     ecx, [esp+30h+a3]
0x82BC47: mov     byte ptr [esp+30h+var_4], 71h ; 'q'
0x82BC4C: call    sub_75FAE0
0x82BC51: mov     eax, [esp+2Ch+var_10]
0x82BC55: test    eax, eax
0x82BC57: mov     byte ptr [esp+2Ch+var_4], 1
0x82BC5C: jz      short loc_82BC71
0x82BC5E: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82BC62: mov     ecx, eax
0x82BC64: add     eax, 5Ch ; '\'
0x82BC67: cmp     dword ptr [eax], 0
0x82BC6A: jnz     short loc_82BC71
0x82BC6C: call    sub_772560
0x82BC71: mov     edi, [esp+2Ch+a3]
0x82BC75: push    0
0x82BC77: push    3
0x82BC79: push    7
0x82BC7B: push    edi
0x82BC7C: call    sub_801110
0x82BC81: add     esp, 10h
0x82BC84: push    edi; a3
0x82BC85: push    7; a2
0x82BC87: mov     ecx, esi; this
0x82BC89: call    sub_760010
0x82BC8E: mov     eax, ds:0B453A0h
0x82BC93: push    eax; a2
0x82BC94: mov     ecx, esi; this
0x82BC96: call    sub_7AECB0
0x82BC9B: mov     ecx, ds:0B4519Ch
0x82BCA1: push    ecx; a2
0x82BCA2: mov     ecx, esi; this
0x82BCA4: call    sub_7AEC60
0x82BCA9: cmp     dword ptr [esi+30h], 0
0x82BCAD: jnz     short loc_82BCB7
0x82BCAF: call    sub_772DF0
0x82BCB4: mov     [esi+30h], eax
0x82BCB7: mov     ecx, [esi+30h]
0x82BCBA: push    0
0x82BCBC: push    0
0x82BCBE: push    1Bh
0x82BCC0: call    sub_772CD0
0x82BCC5: cmp     dword ptr [esi+30h], 0
0x82BCC9: jnz     short loc_82BCD3
0x82BCCB: call    sub_772DF0
0x82BCD0: mov     [esi+30h], eax
0x82BCD3: mov     ecx, [esi+30h]
0x82BCD6: push    0
0x82BCD8: push    0
0x82BCDA: push    0Fh
0x82BCDC: call    sub_772CD0
0x82BCE1: cmp     dword ptr [esi+30h], 0
0x82BCE5: jnz     short loc_82BCEF
0x82BCE7: call    sub_772DF0
0x82BCEC: mov     [esi+30h], eax
0x82BCEF: mov     ecx, [esi+30h]
0x82BCF2: push    0
0x82BCF4: push    1
0x82BCF6: push    7
0x82BCF8: call    sub_772CD0
0x82BCFD: cmp     dword ptr [esi+30h], 0
0x82BD01: jnz     short loc_82BD0B
0x82BD03: call    sub_772DF0
0x82BD08: mov     [esi+30h], eax
0x82BD0B: mov     ecx, [esi+30h]
0x82BD0E: push    0
0x82BD10: push    4
0x82BD12: push    17h
0x82BD14: call    sub_772CD0
0x82BD19: cmp     dword ptr [esi+30h], 0
0x82BD1D: jnz     short loc_82BD27
0x82BD1F: call    sub_772DF0
0x82BD24: mov     [esi+30h], eax
0x82BD27: mov     ecx, [esi+30h]
0x82BD2A: push    0
0x82BD2C: push    1
0x82BD2E: push    0Eh
0x82BD30: call    sub_772CD0
0x82BD35: cmp     dword ptr [esi+30h], 0
0x82BD39: jnz     short loc_82BD43
0x82BD3B: call    sub_772DF0
0x82BD40: mov     [esi+30h], eax
0x82BD43: mov     ecx, [esi+30h]
0x82BD46: push    0
0x82BD48: push    0
0x82BD4A: push    34h ; '4'
0x82BD4C: call    sub_772CD0
0x82BD51: push    offset dword_B458C0
0x82BD56: lea     ecx, [esp+30h+var_14]
0x82BD5A: mov     ds:0B43E3Ch, ebp
0x82BD60: mov     dword ptr ds:0B444CCh, 19Ch
0x82BD6A: mov     dword ptr ds:0B437ACh, 18000h
0x82BD74: mov     dword ptr ds:0B44B5Ch, 0Ch
0x82BD7E: call    sub_76C890
0x82BD83: mov     esi, [esp+2Ch+var_14]
0x82BD87: cmp     dword ptr [esi+18h], 8
0x82BD8B: jnb     loc_82C067
0x82BD91: lea     edx, [esp+2Ch+var_10]
0x82BD95: push    edx
0x82BD96: call    sub_772630
0x82BD9B: add     esp, 4
0x82BD9E: push    eax
0x82BD9F: lea     ecx, [esp+30h+a3]
0x82BDA3: mov     byte ptr [esp+30h+var_4], 72h ; 'r'
0x82BDA8: call    sub_75FAE0
0x82BDAD: mov     eax, [esp+2Ch+var_10]
0x82BDB1: test    eax, eax
0x82BDB3: mov     byte ptr [esp+2Ch+var_4], 1
0x82BDB8: jz      short loc_82BDCD
0x82BDBA: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82BDBE: mov     ecx, eax
0x82BDC0: add     eax, 5Ch ; '\'
0x82BDC3: cmp     dword ptr [eax], 0
0x82BDC6: jnz     short loc_82BDCD
0x82BDC8: call    sub_772560
0x82BDCD: mov     edi, [esp+2Ch+a3]
0x82BDD1: push    2
0x82BDD3: push    1
0x82BDD5: push    0
0x82BDD7: push    edi
0x82BDD8: call    sub_801110
0x82BDDD: add     esp, 10h
0x82BDE0: push    edi; a3
0x82BDE1: push    0; a2
0x82BDE3: mov     ecx, esi; this
0x82BDE5: call    sub_760010
0x82BDEA: lea     eax, [esp+2Ch+var_10]
0x82BDEE: push    eax
0x82BDEF: call    sub_772630
0x82BDF4: add     esp, 4
0x82BDF7: push    eax
0x82BDF8: lea     ecx, [esp+30h+a3]
0x82BDFC: mov     byte ptr [esp+30h+var_4], 73h ; 's'
0x82BE01: call    sub_75FAE0
0x82BE06: mov     eax, [esp+2Ch+var_10]
0x82BE0A: test    eax, eax
0x82BE0C: mov     byte ptr [esp+2Ch+var_4], 1
0x82BE11: jz      short loc_82BE26
0x82BE13: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82BE17: mov     ecx, eax
0x82BE19: add     eax, 5Ch ; '\'
0x82BE1C: cmp     dword ptr [eax], 0
0x82BE1F: jnz     short loc_82BE26
0x82BE21: call    sub_772560
0x82BE26: mov     edi, [esp+2Ch+a3]
0x82BE2A: push    2
0x82BE2C: push    1
0x82BE2E: push    1
0x82BE30: push    edi
0x82BE31: call    sub_801110
0x82BE36: add     esp, 10h
0x82BE39: push    edi; a3
0x82BE3A: push    1; a2
0x82BE3C: mov     ecx, esi; this
0x82BE3E: call    sub_760010
0x82BE43: lea     ecx, [esp+2Ch+var_10]
0x82BE47: push    ecx
0x82BE48: call    sub_772630
0x82BE4D: add     esp, 4
0x82BE50: push    eax
0x82BE51: lea     ecx, [esp+30h+a3]
0x82BE55: mov     byte ptr [esp+30h+var_4], 74h ; 't'
0x82BE5A: call    sub_75FAE0
0x82BE5F: mov     eax, [esp+2Ch+var_10]
0x82BE63: test    eax, eax
0x82BE65: mov     byte ptr [esp+2Ch+var_4], 1
0x82BE6A: jz      short loc_82BE7F
0x82BE6C: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82BE70: mov     ecx, eax
0x82BE72: add     eax, 5Ch ; '\'
0x82BE75: cmp     dword ptr [eax], 0
0x82BE78: jnz     short loc_82BE7F
0x82BE7A: call    sub_772560
0x82BE7F: mov     edi, [esp+2Ch+a3]
0x82BE83: push    2
0x82BE85: push    1
0x82BE87: push    2
0x82BE89: push    edi
0x82BE8A: call    sub_801110
0x82BE8F: add     esp, 10h
0x82BE92: push    edi; a3
0x82BE93: push    2; a2
0x82BE95: mov     ecx, esi; this
0x82BE97: call    sub_760010
0x82BE9C: lea     edx, [esp+2Ch+var_10]
0x82BEA0: push    edx
0x82BEA1: call    sub_772630
0x82BEA6: add     esp, 4
0x82BEA9: push    eax
0x82BEAA: lea     ecx, [esp+30h+a3]
0x82BEAE: mov     byte ptr [esp+30h+var_4], 75h ; 'u'
0x82BEB3: call    sub_75FAE0
0x82BEB8: mov     eax, [esp+2Ch+var_10]
0x82BEBC: test    eax, eax
0x82BEBE: mov     byte ptr [esp+2Ch+var_4], 1
0x82BEC3: jz      short loc_82BED8
0x82BEC5: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82BEC9: mov     ecx, eax
0x82BECB: add     eax, 5Ch ; '\'
0x82BECE: cmp     dword ptr [eax], 0
0x82BED1: jnz     short loc_82BED8
0x82BED3: call    sub_772560
0x82BED8: mov     edi, [esp+2Ch+a3]
0x82BEDC: push    2
0x82BEDE: push    1
0x82BEE0: push    3
0x82BEE2: push    edi
0x82BEE3: call    sub_801110
0x82BEE8: add     esp, 10h
0x82BEEB: push    edi; a3
0x82BEEC: push    3; a2
0x82BEEE: mov     ecx, esi; this
0x82BEF0: call    sub_760010
0x82BEF5: lea     eax, [esp+2Ch+var_10]
0x82BEF9: push    eax
0x82BEFA: call    sub_772630
0x82BEFF: add     esp, 4
0x82BF02: push    eax
0x82BF03: lea     ecx, [esp+30h+a3]
0x82BF07: mov     byte ptr [esp+30h+var_4], 76h ; 'v'
0x82BF0C: call    sub_75FAE0
0x82BF11: mov     eax, [esp+2Ch+var_10]
0x82BF15: test    eax, eax
0x82BF17: mov     byte ptr [esp+2Ch+var_4], 1
0x82BF1C: jz      short loc_82BF31
0x82BF1E: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82BF22: mov     ecx, eax
0x82BF24: add     eax, 5Ch ; '\'
0x82BF27: cmp     dword ptr [eax], 0
0x82BF2A: jnz     short loc_82BF31
0x82BF2C: call    sub_772560
0x82BF31: mov     edi, [esp+2Ch+a3]
0x82BF35: push    2
0x82BF37: push    1
0x82BF39: push    4
0x82BF3B: push    edi
0x82BF3C: call    sub_801110
0x82BF41: add     esp, 10h
0x82BF44: push    edi; a3
0x82BF45: push    4; a2
0x82BF47: mov     ecx, esi; this
0x82BF49: call    sub_760010
0x82BF4E: lea     ecx, [esp+2Ch+var_10]
0x82BF52: push    ecx
0x82BF53: call    sub_772630
0x82BF58: add     esp, 4
0x82BF5B: push    eax
0x82BF5C: lea     ecx, [esp+30h+a3]
0x82BF60: mov     byte ptr [esp+30h+var_4], 77h ; 'w'
0x82BF65: call    sub_75FAE0
0x82BF6A: mov     eax, [esp+2Ch+var_10]
0x82BF6E: test    eax, eax
0x82BF70: mov     byte ptr [esp+2Ch+var_4], 1
0x82BF75: jz      short loc_82BF8A
0x82BF77: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82BF7B: mov     ecx, eax
0x82BF7D: add     eax, 5Ch ; '\'
0x82BF80: cmp     dword ptr [eax], 0
0x82BF83: jnz     short loc_82BF8A
0x82BF85: call    sub_772560
0x82BF8A: mov     edi, [esp+2Ch+a3]
0x82BF8E: push    0
0x82BF90: push    3
0x82BF92: push    5
0x82BF94: push    edi
0x82BF95: call    sub_801110
0x82BF9A: mov     edx, ds:0B43110h
0x82BFA0: add     esp, 10h
0x82BFA3: push    edx; a2
0x82BFA4: mov     ecx, edi; this
0x82BFA6: call    sub_76C910
0x82BFAB: push    edi; a3
0x82BFAC: push    5; a2
0x82BFAE: mov     ecx, esi; this
0x82BFB0: call    sub_760010
0x82BFB5: lea     eax, [esp+2Ch+var_10]
0x82BFB9: push    eax
0x82BFBA: call    sub_772630
0x82BFBF: add     esp, 4
0x82BFC2: push    eax
0x82BFC3: lea     ecx, [esp+30h+a3]
0x82BFC7: mov     byte ptr [esp+30h+var_4], 78h ; 'x'
0x82BFCC: call    sub_75FAE0
0x82BFD1: mov     eax, [esp+2Ch+var_10]
0x82BFD5: test    eax, eax
0x82BFD7: mov     byte ptr [esp+2Ch+var_4], 1
0x82BFDC: jz      short loc_82BFF1
0x82BFDE: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82BFE2: mov     ecx, eax
0x82BFE4: add     eax, 5Ch ; '\'
0x82BFE7: cmp     dword ptr [eax], 0
0x82BFEA: jnz     short loc_82BFF1
0x82BFEC: call    sub_772560
0x82BFF1: mov     edi, [esp+2Ch+a3]
0x82BFF5: push    2
0x82BFF7: push    1
0x82BFF9: push    6
0x82BFFB: push    edi
0x82BFFC: call    sub_801110
0x82C001: add     esp, 10h
0x82C004: push    edi; a3
0x82C005: push    6; a2
0x82C007: mov     ecx, esi; this
0x82C009: call    sub_760010
0x82C00E: lea     ecx, [esp+2Ch+var_10]
0x82C012: push    ecx
0x82C013: call    sub_772630
0x82C018: add     esp, 4
0x82C01B: push    eax
0x82C01C: lea     ecx, [esp+30h+a3]
0x82C020: mov     byte ptr [esp+30h+var_4], 79h ; 'y'
0x82C025: call    sub_75FAE0
0x82C02A: mov     eax, [esp+2Ch+var_10]
0x82C02E: test    eax, eax
0x82C030: mov     byte ptr [esp+2Ch+var_4], 1
0x82C035: jz      short loc_82C04A
0x82C037: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82C03B: mov     ecx, eax
0x82C03D: add     eax, 5Ch ; '\'
0x82C040: cmp     dword ptr [eax], 0
0x82C043: jnz     short loc_82C04A
0x82C045: call    sub_772560
0x82C04A: mov     edi, [esp+2Ch+a3]
0x82C04E: push    0
0x82C050: push    3
0x82C052: push    7
0x82C054: push    edi
0x82C055: call    sub_801110
0x82C05A: add     esp, 10h
0x82C05D: push    edi; a3
0x82C05E: push    7; a2
0x82C060: mov     ecx, esi; this
0x82C062: call    sub_760010
0x82C067: mov     edx, ds:0B453A0h
0x82C06D: push    edx; a2
0x82C06E: mov     ecx, esi; this
0x82C070: call    sub_7AECB0
0x82C075: mov     eax, ds:0B451A0h
0x82C07A: push    eax; a2
0x82C07B: mov     ecx, esi; this
0x82C07D: call    sub_7AEC60
0x82C082: cmp     dword ptr [esi+30h], 0
0x82C086: jnz     short loc_82C090
0x82C088: call    sub_772DF0
0x82C08D: mov     [esi+30h], eax
0x82C090: mov     ecx, [esi+30h]
0x82C093: push    0
0x82C095: push    0
0x82C097: push    1Bh
0x82C099: call    sub_772CD0
0x82C09E: cmp     dword ptr [esi+30h], 0
0x82C0A2: jnz     short loc_82C0AC
0x82C0A4: call    sub_772DF0
0x82C0A9: mov     [esi+30h], eax
0x82C0AC: mov     ecx, [esi+30h]
0x82C0AF: push    0
0x82C0B1: push    0
0x82C0B3: push    0Fh
0x82C0B5: call    sub_772CD0
0x82C0BA: cmp     dword ptr [esi+30h], 0
0x82C0BE: jnz     short loc_82C0C8
0x82C0C0: call    sub_772DF0
0x82C0C5: mov     [esi+30h], eax
0x82C0C8: mov     ecx, [esi+30h]
0x82C0CB: push    0
0x82C0CD: push    1
0x82C0CF: push    7
0x82C0D1: call    sub_772CD0
0x82C0D6: cmp     dword ptr [esi+30h], 0
0x82C0DA: jnz     short loc_82C0E4
0x82C0DC: call    sub_772DF0
0x82C0E1: mov     [esi+30h], eax
0x82C0E4: mov     ecx, [esi+30h]
0x82C0E7: push    0
0x82C0E9: push    4
0x82C0EB: push    17h
0x82C0ED: call    sub_772CD0
0x82C0F2: cmp     dword ptr [esi+30h], 0
0x82C0F6: jnz     short loc_82C100
0x82C0F8: call    sub_772DF0
0x82C0FD: mov     [esi+30h], eax
0x82C100: mov     ecx, [esi+30h]
0x82C103: push    0
0x82C105: push    1
0x82C107: push    0Eh
0x82C109: call    sub_772CD0
0x82C10E: cmp     dword ptr [esi+30h], 0
0x82C112: jnz     short loc_82C11C
0x82C114: call    sub_772DF0
0x82C119: mov     [esi+30h], eax
0x82C11C: mov     ecx, [esi+30h]
0x82C11F: push    0
0x82C121: push    0
0x82C123: push    34h ; '4'
0x82C125: call    sub_772CD0
0x82C12A: push    offset dword_B458D0
0x82C12F: lea     ecx, [esp+30h+var_14]
0x82C133: mov     ds:0B43E40h, ebp
0x82C139: mov     dword ptr ds:0B444D0h, 19Ch
0x82C143: mov     dword ptr ds:0B437B0h, 18000h
0x82C14D: mov     dword ptr ds:0B44B60h, 0Ch
0x82C157: call    sub_76C890
0x82C15C: mov     esi, [esp+2Ch+var_14]
0x82C160: cmp     dword ptr [esi+18h], 8
0x82C164: jnb     loc_82C440
0x82C16A: lea     ecx, [esp+2Ch+var_10]
0x82C16E: push    ecx
0x82C16F: call    sub_772630
0x82C174: add     esp, 4
0x82C177: push    eax
0x82C178: lea     ecx, [esp+30h+a3]
0x82C17C: mov     byte ptr [esp+30h+var_4], 7Ah ; 'z'
0x82C181: call    sub_75FAE0
0x82C186: mov     eax, [esp+2Ch+var_10]
0x82C18A: test    eax, eax
0x82C18C: mov     byte ptr [esp+2Ch+var_4], 1
0x82C191: jz      short loc_82C1A6
0x82C193: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82C197: mov     ecx, eax
0x82C199: add     eax, 5Ch ; '\'
0x82C19C: cmp     dword ptr [eax], 0
0x82C19F: jnz     short loc_82C1A6
0x82C1A1: call    sub_772560
0x82C1A6: mov     edi, [esp+2Ch+a3]
0x82C1AA: push    2
0x82C1AC: push    1
0x82C1AE: push    0
0x82C1B0: push    edi
0x82C1B1: call    sub_801110
0x82C1B6: add     esp, 10h
0x82C1B9: push    edi; a3
0x82C1BA: push    0; a2
0x82C1BC: mov     ecx, esi; this
0x82C1BE: call    sub_760010
0x82C1C3: lea     edx, [esp+2Ch+var_10]
0x82C1C7: push    edx
0x82C1C8: call    sub_772630
0x82C1CD: add     esp, 4
0x82C1D0: push    eax
0x82C1D1: lea     ecx, [esp+30h+a3]
0x82C1D5: mov     byte ptr [esp+30h+var_4], 7Bh ; '{'
0x82C1DA: call    sub_75FAE0
0x82C1DF: mov     eax, [esp+2Ch+var_10]
0x82C1E3: test    eax, eax
0x82C1E5: mov     byte ptr [esp+2Ch+var_4], 1
0x82C1EA: jz      short loc_82C1FF
0x82C1EC: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82C1F0: mov     ecx, eax
0x82C1F2: add     eax, 5Ch ; '\'
0x82C1F5: cmp     dword ptr [eax], 0
0x82C1F8: jnz     short loc_82C1FF
0x82C1FA: call    sub_772560
0x82C1FF: mov     edi, [esp+2Ch+a3]
0x82C203: push    2
0x82C205: push    1
0x82C207: push    1
0x82C209: push    edi
0x82C20A: call    sub_801110
0x82C20F: add     esp, 10h
0x82C212: push    edi; a3
0x82C213: push    1; a2
0x82C215: mov     ecx, esi; this
0x82C217: call    sub_760010
0x82C21C: lea     eax, [esp+2Ch+var_10]
0x82C220: push    eax
0x82C221: call    sub_772630
0x82C226: add     esp, 4
0x82C229: push    eax
0x82C22A: lea     ecx, [esp+30h+a3]
0x82C22E: mov     byte ptr [esp+30h+var_4], 7Ch ; '|'
0x82C233: call    sub_75FAE0
0x82C238: mov     eax, [esp+2Ch+var_10]
0x82C23C: test    eax, eax
0x82C23E: mov     byte ptr [esp+2Ch+var_4], 1
0x82C243: jz      short loc_82C258
0x82C245: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82C249: mov     ecx, eax
0x82C24B: add     eax, 5Ch ; '\'
0x82C24E: cmp     dword ptr [eax], 0
0x82C251: jnz     short loc_82C258
0x82C253: call    sub_772560
0x82C258: mov     edi, [esp+2Ch+a3]
0x82C25C: push    2
0x82C25E: push    1
0x82C260: push    2
0x82C262: push    edi
0x82C263: call    sub_801110
0x82C268: add     esp, 10h
0x82C26B: push    edi; a3
0x82C26C: push    2; a2
0x82C26E: mov     ecx, esi; this
0x82C270: call    sub_760010
0x82C275: lea     ecx, [esp+2Ch+var_10]
0x82C279: push    ecx
0x82C27A: call    sub_772630
0x82C27F: add     esp, 4
0x82C282: push    eax
0x82C283: lea     ecx, [esp+30h+a3]
0x82C287: mov     byte ptr [esp+30h+var_4], 7Dh ; '}'
0x82C28C: call    sub_75FAE0
0x82C291: mov     eax, [esp+2Ch+var_10]
0x82C295: test    eax, eax
0x82C297: mov     byte ptr [esp+2Ch+var_4], 1
0x82C29C: jz      short loc_82C2B1
0x82C29E: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82C2A2: mov     ecx, eax
0x82C2A4: add     eax, 5Ch ; '\'
0x82C2A7: cmp     dword ptr [eax], 0
0x82C2AA: jnz     short loc_82C2B1
0x82C2AC: call    sub_772560
0x82C2B1: mov     edi, [esp+2Ch+a3]
0x82C2B5: push    2
0x82C2B7: push    1
0x82C2B9: push    3
0x82C2BB: push    edi
0x82C2BC: call    sub_801110
0x82C2C1: add     esp, 10h
0x82C2C4: push    edi; a3
0x82C2C5: push    3; a2
0x82C2C7: mov     ecx, esi; this
0x82C2C9: call    sub_760010
0x82C2CE: lea     edx, [esp+2Ch+var_10]
0x82C2D2: push    edx
0x82C2D3: call    sub_772630
0x82C2D8: add     esp, 4
0x82C2DB: push    eax
0x82C2DC: lea     ecx, [esp+30h+a3]
0x82C2E0: mov     byte ptr [esp+30h+var_4], 7Eh ; '~'
0x82C2E5: call    sub_75FAE0
0x82C2EA: mov     eax, [esp+2Ch+var_10]
0x82C2EE: test    eax, eax
0x82C2F0: mov     byte ptr [esp+2Ch+var_4], 1
0x82C2F5: jz      short loc_82C30A
0x82C2F7: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82C2FB: mov     ecx, eax
0x82C2FD: add     eax, 5Ch ; '\'
0x82C300: cmp     dword ptr [eax], 0
0x82C303: jnz     short loc_82C30A
0x82C305: call    sub_772560
0x82C30A: mov     edi, [esp+2Ch+a3]
0x82C30E: push    2
0x82C310: push    1
0x82C312: push    4
0x82C314: push    edi
0x82C315: call    sub_801110
0x82C31A: add     esp, 10h
0x82C31D: push    edi; a3
0x82C31E: push    4; a2
0x82C320: mov     ecx, esi; this
0x82C322: call    sub_760010
0x82C327: lea     eax, [esp+2Ch+var_10]
0x82C32B: push    eax
0x82C32C: call    sub_772630
0x82C331: add     esp, 4
0x82C334: push    eax
0x82C335: lea     ecx, [esp+30h+a3]
0x82C339: mov     byte ptr [esp+30h+var_4], 7Fh
0x82C33E: call    sub_75FAE0
0x82C343: mov     eax, [esp+2Ch+var_10]
0x82C347: test    eax, eax
0x82C349: mov     byte ptr [esp+2Ch+var_4], 1
0x82C34E: jz      short loc_82C363
0x82C350: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82C354: mov     ecx, eax
0x82C356: add     eax, 5Ch ; '\'
0x82C359: cmp     dword ptr [eax], 0
0x82C35C: jnz     short loc_82C363
0x82C35E: call    sub_772560
0x82C363: mov     edi, [esp+2Ch+a3]
0x82C367: push    0
0x82C369: push    3
0x82C36B: push    5
0x82C36D: push    edi
0x82C36E: call    sub_801110
0x82C373: mov     ecx, ds:0B43110h
0x82C379: add     esp, 10h
0x82C37C: push    ecx; a2
0x82C37D: mov     ecx, edi; this
0x82C37F: call    sub_76C910
0x82C384: push    edi; a3
0x82C385: push    5; a2
0x82C387: mov     ecx, esi; this
0x82C389: call    sub_760010
0x82C38E: lea     edx, [esp+2Ch+var_10]
0x82C392: push    edx
0x82C393: call    sub_772630
0x82C398: add     esp, 4
0x82C39B: push    eax
0x82C39C: lea     ecx, [esp+30h+a3]
0x82C3A0: mov     byte ptr [esp+30h+var_4], 80h ; '€'
0x82C3A5: call    sub_75FAE0
0x82C3AA: mov     eax, [esp+2Ch+var_10]
0x82C3AE: test    eax, eax
0x82C3B0: mov     byte ptr [esp+2Ch+var_4], 1
0x82C3B5: jz      short loc_82C3CA
0x82C3B7: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82C3BB: mov     ecx, eax
0x82C3BD: add     eax, 5Ch ; '\'
0x82C3C0: cmp     dword ptr [eax], 0
0x82C3C3: jnz     short loc_82C3CA
0x82C3C5: call    sub_772560
0x82C3CA: mov     edi, [esp+2Ch+a3]
0x82C3CE: push    2
0x82C3D0: push    1
0x82C3D2: push    6
0x82C3D4: push    edi
0x82C3D5: call    sub_801110
0x82C3DA: add     esp, 10h
0x82C3DD: push    edi; a3
0x82C3DE: push    6; a2
0x82C3E0: mov     ecx, esi; this
0x82C3E2: call    sub_760010
0x82C3E7: lea     eax, [esp+2Ch+var_10]
0x82C3EB: push    eax
0x82C3EC: call    sub_772630
0x82C3F1: add     esp, 4
0x82C3F4: push    eax
0x82C3F5: lea     ecx, [esp+30h+a3]
0x82C3F9: mov     byte ptr [esp+30h+var_4], 81h
0x82C3FE: call    sub_75FAE0
0x82C403: mov     eax, [esp+2Ch+var_10]
0x82C407: test    eax, eax
0x82C409: mov     byte ptr [esp+2Ch+var_4], 1
0x82C40E: jz      short loc_82C423
0x82C410: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82C414: mov     ecx, eax
0x82C416: add     eax, 5Ch ; '\'
0x82C419: cmp     dword ptr [eax], 0
0x82C41C: jnz     short loc_82C423
0x82C41E: call    sub_772560
0x82C423: mov     edi, [esp+2Ch+a3]
0x82C427: push    0
0x82C429: push    3
0x82C42B: push    7
0x82C42D: push    edi
0x82C42E: call    sub_801110
0x82C433: add     esp, 10h
0x82C436: push    edi; a3
0x82C437: push    7; a2
0x82C439: mov     ecx, esi; this
0x82C43B: call    sub_760010
0x82C440: mov     ecx, ds:0B453A4h
0x82C446: push    ecx; a2
0x82C447: mov     ecx, esi; this
0x82C449: call    sub_7AECB0
0x82C44E: mov     edx, ds:0B45198h
0x82C454: push    edx; a2
0x82C455: mov     ecx, esi; this
0x82C457: call    sub_7AEC60
0x82C45C: cmp     dword ptr [esi+30h], 0
0x82C460: jnz     short loc_82C46A
0x82C462: call    sub_772DF0
0x82C467: mov     [esi+30h], eax
0x82C46A: mov     ecx, [esi+30h]
0x82C46D: push    0
0x82C46F: push    0
0x82C471: push    1Bh
0x82C473: call    sub_772CD0
0x82C478: cmp     dword ptr [esi+30h], 0
0x82C47C: jnz     short loc_82C486
0x82C47E: call    sub_772DF0
0x82C483: mov     [esi+30h], eax
0x82C486: mov     ecx, [esi+30h]
0x82C489: push    0
0x82C48B: push    0
0x82C48D: push    0Fh
0x82C48F: call    sub_772CD0
0x82C494: cmp     dword ptr [esi+30h], 0
0x82C498: jnz     short loc_82C4A2
0x82C49A: call    sub_772DF0
0x82C49F: mov     [esi+30h], eax
0x82C4A2: mov     ecx, [esi+30h]
0x82C4A5: push    0
0x82C4A7: push    1
0x82C4A9: push    7
0x82C4AB: call    sub_772CD0
0x82C4B0: cmp     dword ptr [esi+30h], 0
0x82C4B4: jnz     short loc_82C4BE
0x82C4B6: call    sub_772DF0
0x82C4BB: mov     [esi+30h], eax
0x82C4BE: mov     ecx, [esi+30h]
0x82C4C1: push    0
0x82C4C3: push    4
0x82C4C5: push    17h
0x82C4C7: call    sub_772CD0
0x82C4CC: cmp     dword ptr [esi+30h], 0
0x82C4D0: jnz     short loc_82C4DA
0x82C4D2: call    sub_772DF0
0x82C4D7: mov     [esi+30h], eax
0x82C4DA: mov     ecx, [esi+30h]
0x82C4DD: push    0
0x82C4DF: push    1
0x82C4E1: push    0Eh
0x82C4E3: call    sub_772CD0
0x82C4E8: cmp     dword ptr [esi+30h], 0
0x82C4EC: jnz     short loc_82C4F6
0x82C4EE: call    sub_772DF0
0x82C4F3: mov     [esi+30h], eax
0x82C4F6: mov     ecx, [esi+30h]
0x82C4F9: push    0
0x82C4FB: push    0
0x82C4FD: push    34h ; '4'
0x82C4FF: call    sub_772CD0
0x82C504: mov     ds:0B444E0h, ebx
0x82C50A: mov     ebp, 79088h
0x82C50F: mov     ebx, 8
0x82C514: push    offset dword_B458D4
0x82C519: lea     ecx, [esp+30h+var_14]
0x82C51D: mov     ds:0B43E50h, ebp
0x82C523: mov     dword ptr ds:0B437C0h, 18000h
0x82C52D: mov     ds:0B44B70h, ebx
0x82C533: call    sub_76C890
0x82C538: mov     esi, [esp+2Ch+var_14]
0x82C53C: cmp     [esi+18h], ebx
0x82C53F: jnb     loc_82C81A
0x82C545: lea     eax, [esp+2Ch+var_10]
0x82C549: push    eax
0x82C54A: call    sub_772630
0x82C54F: add     esp, 4
0x82C552: push    eax
0x82C553: lea     ecx, [esp+30h+a3]
0x82C557: mov     byte ptr [esp+30h+var_4], 82h ; '‚'
0x82C55C: call    sub_75FAE0
0x82C561: mov     eax, [esp+2Ch+var_10]
0x82C565: test    eax, eax
0x82C567: mov     byte ptr [esp+2Ch+var_4], 1
0x82C56C: jz      short loc_82C581
0x82C56E: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82C572: mov     ecx, eax
0x82C574: add     eax, 5Ch ; '\'
0x82C577: cmp     dword ptr [eax], 0
0x82C57A: jnz     short loc_82C581
0x82C57C: call    sub_772560
0x82C581: mov     edi, [esp+2Ch+a3]
0x82C585: push    2
0x82C587: push    1
0x82C589: push    0
0x82C58B: push    edi
0x82C58C: call    sub_801110
0x82C591: add     esp, 10h
0x82C594: push    edi; a3
0x82C595: push    0; a2
0x82C597: mov     ecx, esi; this
0x82C599: call    sub_760010
0x82C59E: lea     ecx, [esp+2Ch+var_10]
0x82C5A2: push    ecx
0x82C5A3: call    sub_772630
0x82C5A8: add     esp, 4
0x82C5AB: push    eax
0x82C5AC: lea     ecx, [esp+30h+a3]
0x82C5B0: mov     byte ptr [esp+30h+var_4], 83h ; 'ƒ'
0x82C5B5: call    sub_75FAE0
0x82C5BA: mov     eax, [esp+2Ch+var_10]
0x82C5BE: test    eax, eax
0x82C5C0: mov     byte ptr [esp+2Ch+var_4], 1
0x82C5C5: jz      short loc_82C5DA
0x82C5C7: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82C5CB: mov     ecx, eax
0x82C5CD: add     eax, 5Ch ; '\'
0x82C5D0: cmp     dword ptr [eax], 0
0x82C5D3: jnz     short loc_82C5DA
0x82C5D5: call    sub_772560
0x82C5DA: mov     edi, [esp+2Ch+a3]
0x82C5DE: push    2
0x82C5E0: push    1
0x82C5E2: push    1
0x82C5E4: push    edi
0x82C5E5: call    sub_801110
0x82C5EA: add     esp, 10h
0x82C5ED: push    edi; a3
0x82C5EE: push    1; a2
0x82C5F0: mov     ecx, esi; this
0x82C5F2: call    sub_760010
0x82C5F7: lea     edx, [esp+2Ch+var_10]
0x82C5FB: push    edx
0x82C5FC: call    sub_772630
0x82C601: add     esp, 4
0x82C604: push    eax
0x82C605: lea     ecx, [esp+30h+a3]
0x82C609: mov     byte ptr [esp+30h+var_4], 84h ; '„'
0x82C60E: call    sub_75FAE0
0x82C613: mov     eax, [esp+2Ch+var_10]
0x82C617: test    eax, eax
0x82C619: mov     byte ptr [esp+2Ch+var_4], 1
0x82C61E: jz      short loc_82C633
0x82C620: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82C624: mov     ecx, eax
0x82C626: add     eax, 5Ch ; '\'
0x82C629: cmp     dword ptr [eax], 0
0x82C62C: jnz     short loc_82C633
0x82C62E: call    sub_772560
0x82C633: mov     edi, [esp+2Ch+a3]
0x82C637: push    2
0x82C639: push    1
0x82C63B: push    2
0x82C63D: push    edi
0x82C63E: call    sub_801110
0x82C643: add     esp, 10h
0x82C646: push    edi; a3
0x82C647: push    2; a2
0x82C649: mov     ecx, esi; this
0x82C64B: call    sub_760010
0x82C650: lea     eax, [esp+2Ch+var_10]
0x82C654: push    eax
0x82C655: call    sub_772630
0x82C65A: add     esp, 4
0x82C65D: push    eax
0x82C65E: lea     ecx, [esp+30h+a3]
0x82C662: mov     byte ptr [esp+30h+var_4], 85h ; '…'
0x82C667: call    sub_75FAE0
0x82C66C: mov     eax, [esp+2Ch+var_10]
0x82C670: test    eax, eax
0x82C672: mov     byte ptr [esp+2Ch+var_4], 1
0x82C677: jz      short loc_82C68C
0x82C679: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82C67D: mov     ecx, eax
0x82C67F: add     eax, 5Ch ; '\'
0x82C682: cmp     dword ptr [eax], 0
0x82C685: jnz     short loc_82C68C
0x82C687: call    sub_772560
0x82C68C: mov     edi, [esp+2Ch+a3]
0x82C690: push    2
0x82C692: push    1
0x82C694: push    3
0x82C696: push    edi
0x82C697: call    sub_801110
0x82C69C: add     esp, 10h
0x82C69F: push    edi; a3
0x82C6A0: push    3; a2
0x82C6A2: mov     ecx, esi; this
0x82C6A4: call    sub_760010
0x82C6A9: lea     ecx, [esp+2Ch+var_10]
0x82C6AD: push    ecx
0x82C6AE: call    sub_772630
0x82C6B3: add     esp, 4
0x82C6B6: push    eax
0x82C6B7: lea     ecx, [esp+30h+a3]
0x82C6BB: mov     byte ptr [esp+30h+var_4], 86h ; '†'
0x82C6C0: call    sub_75FAE0
0x82C6C5: mov     eax, [esp+2Ch+var_10]
0x82C6C9: test    eax, eax
0x82C6CB: mov     byte ptr [esp+2Ch+var_4], 1
0x82C6D0: jz      short loc_82C6E5
0x82C6D2: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82C6D6: mov     ecx, eax
0x82C6D8: add     eax, 5Ch ; '\'
0x82C6DB: cmp     dword ptr [eax], 0
0x82C6DE: jnz     short loc_82C6E5
0x82C6E0: call    sub_772560
0x82C6E5: mov     edi, [esp+2Ch+a3]
0x82C6E9: push    2
0x82C6EB: push    1
0x82C6ED: push    4
0x82C6EF: push    edi
0x82C6F0: call    sub_801110
0x82C6F5: add     esp, 10h
0x82C6F8: push    edi; a3
0x82C6F9: push    4; a2
0x82C6FB: mov     ecx, esi; this
0x82C6FD: call    sub_760010
0x82C702: lea     edx, [esp+2Ch+var_10]
0x82C706: push    edx
0x82C707: call    sub_772630
0x82C70C: add     esp, 4
0x82C70F: push    eax
0x82C710: lea     ecx, [esp+30h+a3]
0x82C714: mov     byte ptr [esp+30h+var_4], 87h ; '‡'
0x82C719: call    sub_75FAE0
0x82C71E: mov     eax, [esp+2Ch+var_10]
0x82C722: test    eax, eax
0x82C724: mov     byte ptr [esp+2Ch+var_4], 1
0x82C729: jz      short loc_82C73E
0x82C72B: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82C72F: mov     ecx, eax
0x82C731: add     eax, 5Ch ; '\'
0x82C734: cmp     dword ptr [eax], 0
0x82C737: jnz     short loc_82C73E
0x82C739: call    sub_772560
0x82C73E: mov     edi, [esp+2Ch+a3]
0x82C742: push    0
0x82C744: push    3
0x82C746: push    5
0x82C748: push    edi
0x82C749: call    sub_801110
0x82C74E: mov     eax, ds:0B43110h
0x82C753: add     esp, 10h
0x82C756: push    eax; a2
0x82C757: mov     ecx, edi; this
0x82C759: call    sub_76C910
0x82C75E: push    edi; a3
0x82C75F: push    5; a2
0x82C761: mov     ecx, esi; this
0x82C763: call    sub_760010
0x82C768: lea     ecx, [esp+2Ch+var_10]
0x82C76C: push    ecx
0x82C76D: call    sub_772630
0x82C772: add     esp, 4
0x82C775: push    eax
0x82C776: lea     ecx, [esp+30h+a3]
0x82C77A: mov     byte ptr [esp+30h+var_4], 88h ; 'ˆ'
0x82C77F: call    sub_75FAE0
0x82C784: mov     eax, [esp+2Ch+var_10]
0x82C788: test    eax, eax
0x82C78A: mov     byte ptr [esp+2Ch+var_4], 1
0x82C78F: jz      short loc_82C7A4
0x82C791: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82C795: mov     ecx, eax
0x82C797: add     eax, 5Ch ; '\'
0x82C79A: cmp     dword ptr [eax], 0
0x82C79D: jnz     short loc_82C7A4
0x82C79F: call    sub_772560
0x82C7A4: mov     edi, [esp+2Ch+a3]
0x82C7A8: push    2
0x82C7AA: push    1
0x82C7AC: push    6
0x82C7AE: push    edi
0x82C7AF: call    sub_801110
0x82C7B4: add     esp, 10h
0x82C7B7: push    edi; a3
0x82C7B8: push    6; a2
0x82C7BA: mov     ecx, esi; this
0x82C7BC: call    sub_760010
0x82C7C1: lea     edx, [esp+2Ch+var_10]
0x82C7C5: push    edx
0x82C7C6: call    sub_772630
0x82C7CB: add     esp, 4
0x82C7CE: push    eax
0x82C7CF: lea     ecx, [esp+30h+a3]
0x82C7D3: mov     byte ptr [esp+30h+var_4], 89h ; '‰'
0x82C7D8: call    sub_75FAE0
0x82C7DD: mov     eax, [esp+2Ch+var_10]
0x82C7E1: test    eax, eax
0x82C7E3: mov     byte ptr [esp+2Ch+var_4], 1
0x82C7E8: jz      short loc_82C7FD
0x82C7EA: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82C7EE: mov     ecx, eax
0x82C7F0: add     eax, 5Ch ; '\'
0x82C7F3: cmp     dword ptr [eax], 0
0x82C7F6: jnz     short loc_82C7FD
0x82C7F8: call    sub_772560
0x82C7FD: mov     edi, [esp+2Ch+a3]
0x82C801: push    0
0x82C803: push    3
0x82C805: push    7
0x82C807: push    edi
0x82C808: call    sub_801110
0x82C80D: add     esp, 10h
0x82C810: push    edi; a3
0x82C811: push    7; a2
0x82C813: mov     ecx, esi; this
0x82C815: call    sub_760010
0x82C81A: mov     eax, ds:0B453A4h
0x82C81F: push    eax; a2
0x82C820: mov     ecx, esi; this
0x82C822: call    sub_7AECB0
0x82C827: mov     ecx, ds:0B4519Ch
0x82C82D: push    ecx; a2
0x82C82E: mov     ecx, esi; this
0x82C830: call    sub_7AEC60
0x82C835: cmp     dword ptr [esi+30h], 0
0x82C839: jnz     short loc_82C843
0x82C83B: call    sub_772DF0
0x82C840: mov     [esi+30h], eax
0x82C843: mov     ecx, [esi+30h]
0x82C846: push    0
0x82C848: push    0
0x82C84A: push    1Bh
0x82C84C: call    sub_772CD0
0x82C851: cmp     dword ptr [esi+30h], 0
0x82C855: jnz     short loc_82C85F
0x82C857: call    sub_772DF0
0x82C85C: mov     [esi+30h], eax
0x82C85F: mov     ecx, [esi+30h]
0x82C862: push    0
0x82C864: push    0
0x82C866: push    0Fh
0x82C868: call    sub_772CD0
0x82C86D: cmp     dword ptr [esi+30h], 0
0x82C871: jnz     short loc_82C87B
0x82C873: call    sub_772DF0
0x82C878: mov     [esi+30h], eax
0x82C87B: mov     ecx, [esi+30h]
0x82C87E: push    0
0x82C880: push    1
0x82C882: push    7
0x82C884: call    sub_772CD0
0x82C889: cmp     dword ptr [esi+30h], 0
0x82C88D: jnz     short loc_82C897
0x82C88F: call    sub_772DF0
0x82C894: mov     [esi+30h], eax
0x82C897: mov     ecx, [esi+30h]
0x82C89A: push    0
0x82C89C: push    4
0x82C89E: push    17h
0x82C8A0: call    sub_772CD0
0x82C8A5: cmp     dword ptr [esi+30h], 0
0x82C8A9: jnz     short loc_82C8B3
0x82C8AB: call    sub_772DF0
0x82C8B0: mov     [esi+30h], eax
0x82C8B3: mov     ecx, [esi+30h]
0x82C8B6: push    0
0x82C8B8: push    1
0x82C8BA: push    0Eh
0x82C8BC: call    sub_772CD0
0x82C8C1: cmp     dword ptr [esi+30h], 0
0x82C8C5: jnz     short loc_82C8CF
0x82C8C7: call    sub_772DF0
0x82C8CC: mov     [esi+30h], eax
0x82C8CF: mov     ecx, [esi+30h]
0x82C8D2: push    0
0x82C8D4: push    0
0x82C8D6: push    34h ; '4'
0x82C8D8: call    sub_772CD0
0x82C8DD: mov     ebx, 19Ch
0x82C8E2: push    offset dword_B458D8
0x82C8E7: lea     ecx, [esp+30h+var_14]
0x82C8EB: mov     ds:0B43E54h, ebp
0x82C8F1: mov     ds:0B444E4h, ebx
0x82C8F7: mov     dword ptr ds:0B437C4h, 18000h
0x82C901: mov     dword ptr ds:0B44B74h, 0Ch
0x82C90B: call    sub_76C890
0x82C910: mov     esi, [esp+2Ch+var_14]
0x82C914: cmp     dword ptr [esi+18h], 8
0x82C918: jnb     loc_82CBF4
0x82C91E: lea     edx, [esp+2Ch+var_10]
0x82C922: push    edx
0x82C923: call    sub_772630
0x82C928: add     esp, 4
0x82C92B: push    eax
0x82C92C: lea     ecx, [esp+30h+a3]
0x82C930: mov     byte ptr [esp+30h+var_4], 8Ah ; 'Š'
0x82C935: call    sub_75FAE0
0x82C93A: mov     eax, [esp+2Ch+var_10]
0x82C93E: test    eax, eax
0x82C940: mov     byte ptr [esp+2Ch+var_4], 1
0x82C945: jz      short loc_82C95A
0x82C947: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82C94B: mov     ecx, eax
0x82C94D: add     eax, 5Ch ; '\'
0x82C950: cmp     dword ptr [eax], 0
0x82C953: jnz     short loc_82C95A
0x82C955: call    sub_772560
0x82C95A: mov     edi, [esp+2Ch+a3]
0x82C95E: push    2
0x82C960: push    1
0x82C962: push    0
0x82C964: push    edi
0x82C965: call    sub_801110
0x82C96A: add     esp, 10h
0x82C96D: push    edi; a3
0x82C96E: push    0; a2
0x82C970: mov     ecx, esi; this
0x82C972: call    sub_760010
0x82C977: lea     eax, [esp+2Ch+var_10]
0x82C97B: push    eax
0x82C97C: call    sub_772630
0x82C981: add     esp, 4
0x82C984: push    eax
0x82C985: lea     ecx, [esp+30h+a3]
0x82C989: mov     byte ptr [esp+30h+var_4], 8Bh ; '‹'
0x82C98E: call    sub_75FAE0
0x82C993: mov     eax, [esp+2Ch+var_10]
0x82C997: test    eax, eax
0x82C999: mov     byte ptr [esp+2Ch+var_4], 1
0x82C99E: jz      short loc_82C9B3
0x82C9A0: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82C9A4: mov     ecx, eax
0x82C9A6: add     eax, 5Ch ; '\'
0x82C9A9: cmp     dword ptr [eax], 0
0x82C9AC: jnz     short loc_82C9B3
0x82C9AE: call    sub_772560
0x82C9B3: mov     edi, [esp+2Ch+a3]
0x82C9B7: push    2
0x82C9B9: push    1
0x82C9BB: push    1
0x82C9BD: push    edi
0x82C9BE: call    sub_801110
0x82C9C3: add     esp, 10h
0x82C9C6: push    edi; a3
0x82C9C7: push    1; a2
0x82C9C9: mov     ecx, esi; this
0x82C9CB: call    sub_760010
0x82C9D0: lea     ecx, [esp+2Ch+var_10]
0x82C9D4: push    ecx
0x82C9D5: call    sub_772630
0x82C9DA: add     esp, 4
0x82C9DD: push    eax
0x82C9DE: lea     ecx, [esp+30h+a3]
0x82C9E2: mov     byte ptr [esp+30h+var_4], 8Ch ; 'Œ'
0x82C9E7: call    sub_75FAE0
0x82C9EC: mov     eax, [esp+2Ch+var_10]
0x82C9F0: test    eax, eax
0x82C9F2: mov     byte ptr [esp+2Ch+var_4], 1
0x82C9F7: jz      short loc_82CA0C
0x82C9F9: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82C9FD: mov     ecx, eax
0x82C9FF: add     eax, 5Ch ; '\'
0x82CA02: cmp     dword ptr [eax], 0
0x82CA05: jnz     short loc_82CA0C
0x82CA07: call    sub_772560
0x82CA0C: mov     edi, [esp+2Ch+a3]
0x82CA10: push    2
0x82CA12: push    1
0x82CA14: push    2
0x82CA16: push    edi
0x82CA17: call    sub_801110
0x82CA1C: add     esp, 10h
0x82CA1F: push    edi; a3
0x82CA20: push    2; a2
0x82CA22: mov     ecx, esi; this
0x82CA24: call    sub_760010
0x82CA29: lea     edx, [esp+2Ch+var_10]
0x82CA2D: push    edx
0x82CA2E: call    sub_772630
0x82CA33: add     esp, 4
0x82CA36: push    eax
0x82CA37: lea     ecx, [esp+30h+a3]
0x82CA3B: mov     byte ptr [esp+30h+var_4], 8Dh
0x82CA40: call    sub_75FAE0
0x82CA45: mov     eax, [esp+2Ch+var_10]
0x82CA49: test    eax, eax
0x82CA4B: mov     byte ptr [esp+2Ch+var_4], 1
0x82CA50: jz      short loc_82CA65
0x82CA52: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82CA56: mov     ecx, eax
0x82CA58: add     eax, 5Ch ; '\'
0x82CA5B: cmp     dword ptr [eax], 0
0x82CA5E: jnz     short loc_82CA65
0x82CA60: call    sub_772560
0x82CA65: mov     edi, [esp+2Ch+a3]
0x82CA69: push    2
0x82CA6B: push    1
0x82CA6D: push    3
0x82CA6F: push    edi
0x82CA70: call    sub_801110
0x82CA75: add     esp, 10h
0x82CA78: push    edi; a3
0x82CA79: push    3; a2
0x82CA7B: mov     ecx, esi; this
0x82CA7D: call    sub_760010
0x82CA82: lea     eax, [esp+2Ch+var_10]
0x82CA86: push    eax
0x82CA87: call    sub_772630
0x82CA8C: add     esp, 4
0x82CA8F: push    eax
0x82CA90: lea     ecx, [esp+30h+a3]
0x82CA94: mov     byte ptr [esp+30h+var_4], 8Eh ; 'Ž'
0x82CA99: call    sub_75FAE0
0x82CA9E: mov     eax, [esp+2Ch+var_10]
0x82CAA2: test    eax, eax
0x82CAA4: mov     byte ptr [esp+2Ch+var_4], 1
0x82CAA9: jz      short loc_82CABE
0x82CAAB: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82CAAF: mov     ecx, eax
0x82CAB1: add     eax, 5Ch ; '\'
0x82CAB4: cmp     dword ptr [eax], 0
0x82CAB7: jnz     short loc_82CABE
0x82CAB9: call    sub_772560
0x82CABE: mov     edi, [esp+2Ch+a3]
0x82CAC2: push    2
0x82CAC4: push    1
0x82CAC6: push    4
0x82CAC8: push    edi
0x82CAC9: call    sub_801110
0x82CACE: add     esp, 10h
0x82CAD1: push    edi; a3
0x82CAD2: push    4; a2
0x82CAD4: mov     ecx, esi; this
0x82CAD6: call    sub_760010
0x82CADB: lea     ecx, [esp+2Ch+var_10]
0x82CADF: push    ecx
0x82CAE0: call    sub_772630
0x82CAE5: add     esp, 4
0x82CAE8: push    eax
0x82CAE9: lea     ecx, [esp+30h+a3]
0x82CAED: mov     byte ptr [esp+30h+var_4], 8Fh
0x82CAF2: call    sub_75FAE0
0x82CAF7: mov     eax, [esp+2Ch+var_10]
0x82CAFB: test    eax, eax
0x82CAFD: mov     byte ptr [esp+2Ch+var_4], 1
0x82CB02: jz      short loc_82CB17
0x82CB04: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82CB08: mov     ecx, eax
0x82CB0A: add     eax, 5Ch ; '\'
0x82CB0D: cmp     dword ptr [eax], 0
0x82CB10: jnz     short loc_82CB17
0x82CB12: call    sub_772560
0x82CB17: mov     edi, [esp+2Ch+a3]
0x82CB1B: push    0
0x82CB1D: push    3
0x82CB1F: push    5
0x82CB21: push    edi
0x82CB22: call    sub_801110
0x82CB27: mov     edx, ds:0B43110h
0x82CB2D: add     esp, 10h
0x82CB30: push    edx; a2
0x82CB31: mov     ecx, edi; this
0x82CB33: call    sub_76C910
0x82CB38: push    edi; a3
0x82CB39: push    5; a2
0x82CB3B: mov     ecx, esi; this
0x82CB3D: call    sub_760010
0x82CB42: lea     eax, [esp+2Ch+var_10]
0x82CB46: push    eax
0x82CB47: call    sub_772630
0x82CB4C: add     esp, 4
0x82CB4F: push    eax
0x82CB50: lea     ecx, [esp+30h+a3]
0x82CB54: mov     byte ptr [esp+30h+var_4], 90h
0x82CB59: call    sub_75FAE0
0x82CB5E: mov     eax, [esp+2Ch+var_10]
0x82CB62: test    eax, eax
0x82CB64: mov     byte ptr [esp+2Ch+var_4], 1
0x82CB69: jz      short loc_82CB7E
0x82CB6B: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82CB6F: mov     ecx, eax
0x82CB71: add     eax, 5Ch ; '\'
0x82CB74: cmp     dword ptr [eax], 0
0x82CB77: jnz     short loc_82CB7E
0x82CB79: call    sub_772560
0x82CB7E: mov     edi, [esp+2Ch+a3]
0x82CB82: push    2
0x82CB84: push    1
0x82CB86: push    6
0x82CB88: push    edi
0x82CB89: call    sub_801110
0x82CB8E: add     esp, 10h
0x82CB91: push    edi; a3
0x82CB92: push    6; a2
0x82CB94: mov     ecx, esi; this
0x82CB96: call    sub_760010
0x82CB9B: lea     ecx, [esp+2Ch+var_10]
0x82CB9F: push    ecx
0x82CBA0: call    sub_772630
0x82CBA5: add     esp, 4
0x82CBA8: push    eax
0x82CBA9: lea     ecx, [esp+30h+a3]
0x82CBAD: mov     byte ptr [esp+30h+var_4], 91h ; '‘'
0x82CBB2: call    sub_75FAE0
0x82CBB7: mov     eax, [esp+2Ch+var_10]
0x82CBBB: test    eax, eax
0x82CBBD: mov     byte ptr [esp+2Ch+var_4], 1
0x82CBC2: jz      short loc_82CBD7
0x82CBC4: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82CBC8: mov     ecx, eax
0x82CBCA: add     eax, 5Ch ; '\'
0x82CBCD: cmp     dword ptr [eax], 0
0x82CBD0: jnz     short loc_82CBD7
0x82CBD2: call    sub_772560
0x82CBD7: mov     edi, [esp+2Ch+a3]
0x82CBDB: push    0
0x82CBDD: push    3
0x82CBDF: push    7
0x82CBE1: push    edi
0x82CBE2: call    sub_801110
0x82CBE7: add     esp, 10h
0x82CBEA: push    edi; a3
0x82CBEB: push    7; a2
0x82CBED: mov     ecx, esi; this
0x82CBEF: call    sub_760010
0x82CBF4: mov     edx, ds:0B453A4h
0x82CBFA: push    edx; a2
0x82CBFB: mov     ecx, esi; this
0x82CBFD: call    sub_7AECB0
0x82CC02: mov     eax, ds:0B451A0h
0x82CC07: push    eax; a2
0x82CC08: mov     ecx, esi; this
0x82CC0A: call    sub_7AEC60
0x82CC0F: cmp     dword ptr [esi+30h], 0
0x82CC13: jnz     short loc_82CC1D
0x82CC15: call    sub_772DF0
0x82CC1A: mov     [esi+30h], eax
0x82CC1D: mov     ecx, [esi+30h]
0x82CC20: push    0
0x82CC22: push    0
0x82CC24: push    1Bh
0x82CC26: call    sub_772CD0
0x82CC2B: cmp     dword ptr [esi+30h], 0
0x82CC2F: jnz     short loc_82CC39
0x82CC31: call    sub_772DF0
0x82CC36: mov     [esi+30h], eax
0x82CC39: mov     ecx, [esi+30h]
0x82CC3C: push    0
0x82CC3E: push    0
0x82CC40: push    0Fh
0x82CC42: call    sub_772CD0
0x82CC47: cmp     dword ptr [esi+30h], 0
0x82CC4B: jnz     short loc_82CC55
0x82CC4D: call    sub_772DF0
0x82CC52: mov     [esi+30h], eax
0x82CC55: mov     ecx, [esi+30h]
0x82CC58: push    0
0x82CC5A: push    1
0x82CC5C: push    7
0x82CC5E: call    sub_772CD0
0x82CC63: cmp     dword ptr [esi+30h], 0
0x82CC67: jnz     short loc_82CC71
0x82CC69: call    sub_772DF0
0x82CC6E: mov     [esi+30h], eax
0x82CC71: mov     ecx, [esi+30h]
0x82CC74: push    0
0x82CC76: push    4
0x82CC78: push    17h
0x82CC7A: call    sub_772CD0
0x82CC7F: cmp     dword ptr [esi+30h], 0
0x82CC83: jnz     short loc_82CC8D
0x82CC85: call    sub_772DF0
0x82CC8A: mov     [esi+30h], eax
0x82CC8D: mov     ecx, [esi+30h]
0x82CC90: push    0
0x82CC92: push    1
0x82CC94: push    0Eh
0x82CC96: call    sub_772CD0
0x82CC9B: cmp     dword ptr [esi+30h], 0
0x82CC9F: jnz     short loc_82CCA9
0x82CCA1: call    sub_772DF0
0x82CCA6: mov     [esi+30h], eax
0x82CCA9: mov     ecx, [esi+30h]
0x82CCAC: push    0
0x82CCAE: push    0
0x82CCB0: push    34h ; '4'
0x82CCB2: call    sub_772CD0
0x82CCB7: push    offset dword_B45B7C
0x82CCBC: lea     ecx, [esp+30h+var_14]
0x82CCC0: mov     ds:0B43E58h, ebp
0x82CCC6: mov     ds:0B444E8h, ebx
0x82CCCC: mov     dword ptr ds:0B437C8h, 18000h
0x82CCD6: mov     dword ptr ds:0B44B78h, 0Ch
0x82CCE0: call    sub_76C890
0x82CCE5: mov     esi, [esp+2Ch+var_14]
0x82CCE9: mov     eax, [esi+18h]
0x82CCEC: cmp     eax, 8
0x82CCEF: jnb     loc_82CFCB
0x82CCF5: lea     ecx, [esp+2Ch+var_10]
0x82CCF9: push    ecx
0x82CCFA: call    sub_772630
0x82CCFF: add     esp, 4
0x82CD02: push    eax
0x82CD03: lea     ecx, [esp+30h+a3]
0x82CD07: mov     byte ptr [esp+30h+var_4], 92h ; '’'
0x82CD0C: call    sub_75FAE0
0x82CD11: mov     eax, [esp+2Ch+var_10]
0x82CD15: test    eax, eax
0x82CD17: mov     byte ptr [esp+2Ch+var_4], 1
0x82CD1C: jz      short loc_82CD31
0x82CD1E: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82CD22: mov     ecx, eax
0x82CD24: add     eax, 5Ch ; '\'
0x82CD27: cmp     dword ptr [eax], 0
0x82CD2A: jnz     short loc_82CD31
0x82CD2C: call    sub_772560
0x82CD31: mov     edi, [esp+2Ch+a3]
0x82CD35: push    2
0x82CD37: push    1
0x82CD39: push    0
0x82CD3B: push    edi
0x82CD3C: call    sub_801110
0x82CD41: add     esp, 10h
0x82CD44: push    edi; a3
0x82CD45: push    0; a2
0x82CD47: mov     ecx, esi; this
0x82CD49: call    sub_760010
0x82CD4E: lea     edx, [esp+2Ch+var_10]
0x82CD52: push    edx
0x82CD53: call    sub_772630
0x82CD58: add     esp, 4
0x82CD5B: push    eax
0x82CD5C: lea     ecx, [esp+30h+a3]
0x82CD60: mov     byte ptr [esp+30h+var_4], 93h ; '“'
0x82CD65: call    sub_75FAE0
0x82CD6A: mov     eax, [esp+2Ch+var_10]
0x82CD6E: test    eax, eax
0x82CD70: mov     byte ptr [esp+2Ch+var_4], 1
0x82CD75: jz      short loc_82CD8A
0x82CD77: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82CD7B: mov     ecx, eax
0x82CD7D: add     eax, 5Ch ; '\'
0x82CD80: cmp     dword ptr [eax], 0
0x82CD83: jnz     short loc_82CD8A
0x82CD85: call    sub_772560
0x82CD8A: mov     edi, [esp+2Ch+a3]
0x82CD8E: push    2
0x82CD90: push    1
0x82CD92: push    1
0x82CD94: push    edi
0x82CD95: call    sub_801110
0x82CD9A: add     esp, 10h
0x82CD9D: push    edi; a3
0x82CD9E: push    1; a2
0x82CDA0: mov     ecx, esi; this
0x82CDA2: call    sub_760010
0x82CDA7: lea     eax, [esp+2Ch+var_10]
0x82CDAB: push    eax
0x82CDAC: call    sub_772630
0x82CDB1: add     esp, 4
0x82CDB4: push    eax
0x82CDB5: lea     ecx, [esp+30h+a3]
0x82CDB9: mov     byte ptr [esp+30h+var_4], 94h ; '”'
0x82CDBE: call    sub_75FAE0
0x82CDC3: mov     eax, [esp+2Ch+var_10]
0x82CDC7: test    eax, eax
0x82CDC9: mov     byte ptr [esp+2Ch+var_4], 1
0x82CDCE: jz      short loc_82CDE3
0x82CDD0: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82CDD4: mov     ecx, eax
0x82CDD6: add     eax, 5Ch ; '\'
0x82CDD9: cmp     dword ptr [eax], 0
0x82CDDC: jnz     short loc_82CDE3
0x82CDDE: call    sub_772560
0x82CDE3: mov     edi, [esp+2Ch+a3]
0x82CDE7: push    2
0x82CDE9: push    1
0x82CDEB: push    2
0x82CDED: push    edi
0x82CDEE: call    sub_801110
0x82CDF3: add     esp, 10h
0x82CDF6: push    edi; a3
0x82CDF7: push    2; a2
0x82CDF9: mov     ecx, esi; this
0x82CDFB: call    sub_760010
0x82CE00: lea     ecx, [esp+2Ch+var_10]
0x82CE04: push    ecx
0x82CE05: call    sub_772630
0x82CE0A: add     esp, 4
0x82CE0D: push    eax
0x82CE0E: lea     ecx, [esp+30h+a3]
0x82CE12: mov     byte ptr [esp+30h+var_4], 95h ; '•'
0x82CE17: call    sub_75FAE0
0x82CE1C: mov     eax, [esp+2Ch+var_10]
0x82CE20: test    eax, eax
0x82CE22: mov     byte ptr [esp+2Ch+var_4], 1
0x82CE27: jz      short loc_82CE3C
0x82CE29: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82CE2D: mov     ecx, eax
0x82CE2F: add     eax, 5Ch ; '\'
0x82CE32: cmp     dword ptr [eax], 0
0x82CE35: jnz     short loc_82CE3C
0x82CE37: call    sub_772560
0x82CE3C: mov     edi, [esp+2Ch+a3]
0x82CE40: push    2
0x82CE42: push    1
0x82CE44: push    3
0x82CE46: push    edi
0x82CE47: call    sub_801110
0x82CE4C: add     esp, 10h
0x82CE4F: push    edi; a3
0x82CE50: push    3; a2
0x82CE52: mov     ecx, esi; this
0x82CE54: call    sub_760010
0x82CE59: lea     edx, [esp+2Ch+var_10]
0x82CE5D: push    edx
0x82CE5E: call    sub_772630
0x82CE63: add     esp, 4
0x82CE66: push    eax
0x82CE67: lea     ecx, [esp+30h+a3]
0x82CE6B: mov     byte ptr [esp+30h+var_4], 96h ; '–'
0x82CE70: call    sub_75FAE0
0x82CE75: mov     eax, [esp+2Ch+var_10]
0x82CE79: test    eax, eax
0x82CE7B: mov     byte ptr [esp+2Ch+var_4], 1
0x82CE80: jz      short loc_82CE95
0x82CE82: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82CE86: mov     ecx, eax
0x82CE88: add     eax, 5Ch ; '\'
0x82CE8B: cmp     dword ptr [eax], 0
0x82CE8E: jnz     short loc_82CE95
0x82CE90: call    sub_772560
0x82CE95: mov     edi, [esp+2Ch+a3]
0x82CE99: push    2
0x82CE9B: push    1
0x82CE9D: push    4
0x82CE9F: push    edi
0x82CEA0: call    sub_801110
0x82CEA5: add     esp, 10h
0x82CEA8: push    edi; a3
0x82CEA9: push    4; a2
0x82CEAB: mov     ecx, esi; this
0x82CEAD: call    sub_760010
0x82CEB2: lea     eax, [esp+2Ch+var_10]
0x82CEB6: push    eax
0x82CEB7: call    sub_772630
0x82CEBC: add     esp, 4
0x82CEBF: push    eax
0x82CEC0: lea     ecx, [esp+30h+a3]
0x82CEC4: mov     byte ptr [esp+30h+var_4], 97h ; '—'
0x82CEC9: call    sub_75FAE0
0x82CECE: mov     eax, [esp+2Ch+var_10]
0x82CED2: test    eax, eax
0x82CED4: mov     byte ptr [esp+2Ch+var_4], 1
0x82CED9: jz      short loc_82CEEE
0x82CEDB: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82CEDF: mov     ecx, eax
0x82CEE1: add     eax, 5Ch ; '\'
0x82CEE4: cmp     dword ptr [eax], 0
0x82CEE7: jnz     short loc_82CEEE
0x82CEE9: call    sub_772560
0x82CEEE: mov     edi, [esp+2Ch+a3]
0x82CEF2: push    0
0x82CEF4: push    3
0x82CEF6: push    5
0x82CEF8: push    edi
0x82CEF9: call    sub_801110
0x82CEFE: mov     ecx, ds:0B43110h
0x82CF04: add     esp, 10h
0x82CF07: push    ecx; a2
0x82CF08: mov     ecx, edi; this
0x82CF0A: call    sub_76C910
0x82CF0F: push    edi; a3
0x82CF10: push    5; a2
0x82CF12: mov     ecx, esi; this
0x82CF14: call    sub_760010
0x82CF19: lea     edx, [esp+2Ch+var_10]
0x82CF1D: push    edx
0x82CF1E: call    sub_772630
0x82CF23: add     esp, 4
0x82CF26: push    eax
0x82CF27: lea     ecx, [esp+30h+a3]
0x82CF2B: mov     byte ptr [esp+30h+var_4], 98h ; '˜'
0x82CF30: call    sub_75FAE0
0x82CF35: mov     eax, [esp+2Ch+var_10]
0x82CF39: test    eax, eax
0x82CF3B: mov     byte ptr [esp+2Ch+var_4], 1
0x82CF40: jz      short loc_82CF55
0x82CF42: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82CF46: mov     ecx, eax
0x82CF48: add     eax, 5Ch ; '\'
0x82CF4B: cmp     dword ptr [eax], 0
0x82CF4E: jnz     short loc_82CF55
0x82CF50: call    sub_772560
0x82CF55: mov     edi, [esp+2Ch+a3]
0x82CF59: push    2
0x82CF5B: push    1
0x82CF5D: push    6
0x82CF5F: push    edi
0x82CF60: call    sub_801110
0x82CF65: add     esp, 10h
0x82CF68: push    edi; a3
0x82CF69: push    6; a2
0x82CF6B: mov     ecx, esi; this
0x82CF6D: call    sub_760010
0x82CF72: lea     eax, [esp+2Ch+var_10]
0x82CF76: push    eax
0x82CF77: call    sub_772630
0x82CF7C: add     esp, 4
0x82CF7F: push    eax
0x82CF80: lea     ecx, [esp+30h+a3]
0x82CF84: mov     byte ptr [esp+30h+var_4], 99h ; '™'
0x82CF89: call    sub_75FAE0
0x82CF8E: mov     eax, [esp+2Ch+var_10]
0x82CF92: test    eax, eax
0x82CF94: mov     byte ptr [esp+2Ch+var_4], 1
0x82CF99: jz      short loc_82CFAE
0x82CF9B: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82CF9F: mov     ecx, eax
0x82CFA1: add     eax, 5Ch ; '\'
0x82CFA4: cmp     dword ptr [eax], 0
0x82CFA7: jnz     short loc_82CFAE
0x82CFA9: call    sub_772560
0x82CFAE: mov     edi, [esp+2Ch+a3]
0x82CFB2: push    0
0x82CFB4: push    3
0x82CFB6: push    7
0x82CFB8: push    edi
0x82CFB9: call    sub_801110
0x82CFBE: add     esp, 10h
0x82CFC1: push    edi; a3
0x82CFC2: push    7; a2
0x82CFC4: mov     ecx, esi; this
0x82CFC6: call    sub_760010
0x82CFCB: mov     ecx, ds:0B45488h
0x82CFD1: push    ecx; a2
0x82CFD2: mov     ecx, esi; this
0x82CFD4: call    sub_7AECB0
0x82CFD9: mov     edx, ds:0B45274h
0x82CFDF: push    edx; a2
0x82CFE0: mov     ecx, esi; this
0x82CFE2: call    sub_7AEC60
0x82CFE7: cmp     dword ptr [esi+30h], 0
0x82CFEB: jnz     short loc_82CFF5
0x82CFED: call    sub_772DF0
0x82CFF2: mov     [esi+30h], eax
0x82CFF5: mov     ecx, [esi+30h]
0x82CFF8: push    0
0x82CFFA: push    1
0x82CFFC: push    1Bh
0x82CFFE: call    sub_772CD0
0x82D003: cmp     dword ptr [esi+30h], 0
0x82D007: jnz     short loc_82D011
0x82D009: call    sub_772DF0
0x82D00E: mov     [esi+30h], eax
0x82D011: mov     ecx, [esi+30h]
0x82D014: push    0
0x82D016: push    9
0x82D018: push    13h
0x82D01A: call    sub_772CD0
0x82D01F: cmp     dword ptr [esi+30h], 0
0x82D023: jnz     short loc_82D02D
0x82D025: call    sub_772DF0
0x82D02A: mov     [esi+30h], eax
0x82D02D: mov     ecx, [esi+30h]
0x82D030: push    0
0x82D032: push    1
0x82D034: push    14h
0x82D036: call    sub_772CD0
0x82D03B: cmp     dword ptr [esi+30h], 0
0x82D03F: jnz     short loc_82D049
0x82D041: call    sub_772DF0
0x82D046: mov     [esi+30h], eax
0x82D049: mov     ecx, [esi+30h]
0x82D04C: push    0
0x82D04E: push    0
0x82D050: push    0Fh
0x82D052: call    sub_772CD0
0x82D057: cmp     dword ptr [esi+30h], 0
0x82D05B: jnz     short loc_82D065
0x82D05D: call    sub_772DF0
0x82D062: mov     [esi+30h], eax
0x82D065: mov     ecx, [esi+30h]
0x82D068: push    0
0x82D06A: push    1
0x82D06C: push    7
0x82D06E: call    sub_772CD0
0x82D073: cmp     dword ptr [esi+30h], 0
0x82D077: jnz     short loc_82D081
0x82D079: call    sub_772DF0
0x82D07E: mov     [esi+30h], eax
0x82D081: mov     ecx, [esi+30h]
0x82D084: push    0
0x82D086: push    4
0x82D088: push    17h
0x82D08A: call    sub_772CD0
0x82D08F: cmp     dword ptr [esi+30h], 0
0x82D093: jnz     short loc_82D09D
0x82D095: call    sub_772DF0
0x82D09A: mov     [esi+30h], eax
0x82D09D: mov     ecx, [esi+30h]
0x82D0A0: push    0
0x82D0A2: push    0
0x82D0A4: push    0Eh
0x82D0A6: call    sub_772CD0
0x82D0AB: cmp     dword ptr [esi+30h], 0
0x82D0AF: jnz     short loc_82D0B9
0x82D0B1: call    sub_772DF0
0x82D0B6: mov     [esi+30h], eax
0x82D0B9: mov     ecx, [esi+30h]
0x82D0BC: push    0
0x82D0BE: push    0
0x82D0C0: push    34h ; '4'
0x82D0C2: call    sub_772CD0
0x82D0C7: cmp     dword ptr [esi+30h], 0
0x82D0CB: jnz     short loc_82D0D5
0x82D0CD: call    sub_772DF0
0x82D0D2: mov     [esi+30h], eax
0x82D0D5: mov     ecx, [esi+30h]
0x82D0D8: push    1
0x82D0DA: push    3Fh ; '?'
0x82D0DC: push    98h ; '˜'
0x82D0E1: call    sub_772CD0
0x82D0E6: mov     ebx, 8806h
0x82D0EB: mov     ebp, 8000h
0x82D0F0: push    offset dword_B45B80
0x82D0F5: lea     ecx, [esp+30h+var_14]
0x82D0F9: mov     ds:0B440FCh, ebx
0x82D0FF: mov     dword ptr ds:0B4478Ch, 8
0x82D109: mov     ds:0B43A6Ch, ebp
0x82D10F: call    sub_76C890
0x82D114: mov     esi, [esp+2Ch+var_14]
0x82D118: cmp     dword ptr [esi+18h], 8
0x82D11C: jnb     loc_82D3F7
0x82D122: lea     eax, [esp+2Ch+var_10]
0x82D126: push    eax
0x82D127: call    sub_772630
0x82D12C: add     esp, 4
0x82D12F: push    eax
0x82D130: lea     ecx, [esp+30h+a3]
0x82D134: mov     byte ptr [esp+30h+var_4], 9Ah ; 'š'
0x82D139: call    sub_75FAE0
0x82D13E: mov     eax, [esp+2Ch+var_10]
0x82D142: test    eax, eax
0x82D144: mov     byte ptr [esp+2Ch+var_4], 1
0x82D149: jz      short loc_82D15E
0x82D14B: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82D14F: mov     ecx, eax
0x82D151: add     eax, 5Ch ; '\'
0x82D154: cmp     dword ptr [eax], 0
0x82D157: jnz     short loc_82D15E
0x82D159: call    sub_772560
0x82D15E: mov     edi, [esp+2Ch+a3]
0x82D162: push    2
0x82D164: push    1
0x82D166: push    0
0x82D168: push    edi
0x82D169: call    sub_801110
0x82D16E: add     esp, 10h
0x82D171: push    edi; a3
0x82D172: push    0; a2
0x82D174: mov     ecx, esi; this
0x82D176: call    sub_760010
0x82D17B: lea     ecx, [esp+2Ch+var_10]
0x82D17F: push    ecx
0x82D180: call    sub_772630
0x82D185: add     esp, 4
0x82D188: push    eax
0x82D189: lea     ecx, [esp+30h+a3]
0x82D18D: mov     byte ptr [esp+30h+var_4], 9Bh ; '›'
0x82D192: call    sub_75FAE0
0x82D197: mov     eax, [esp+2Ch+var_10]
0x82D19B: test    eax, eax
0x82D19D: mov     byte ptr [esp+2Ch+var_4], 1
0x82D1A2: jz      short loc_82D1B7
0x82D1A4: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82D1A8: mov     ecx, eax
0x82D1AA: add     eax, 5Ch ; '\'
0x82D1AD: cmp     dword ptr [eax], 0
0x82D1B0: jnz     short loc_82D1B7
0x82D1B2: call    sub_772560
0x82D1B7: mov     edi, [esp+2Ch+a3]
0x82D1BB: push    2
0x82D1BD: push    1
0x82D1BF: push    1
0x82D1C1: push    edi
0x82D1C2: call    sub_801110
0x82D1C7: add     esp, 10h
0x82D1CA: push    edi; a3
0x82D1CB: push    1; a2
0x82D1CD: mov     ecx, esi; this
0x82D1CF: call    sub_760010
0x82D1D4: lea     edx, [esp+2Ch+var_10]
0x82D1D8: push    edx
0x82D1D9: call    sub_772630
0x82D1DE: add     esp, 4
0x82D1E1: push    eax
0x82D1E2: lea     ecx, [esp+30h+a3]
0x82D1E6: mov     byte ptr [esp+30h+var_4], 9Ch ; 'œ'
0x82D1EB: call    sub_75FAE0
0x82D1F0: mov     eax, [esp+2Ch+var_10]
0x82D1F4: test    eax, eax
0x82D1F6: mov     byte ptr [esp+2Ch+var_4], 1
0x82D1FB: jz      short loc_82D210
0x82D1FD: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82D201: mov     ecx, eax
0x82D203: add     eax, 5Ch ; '\'
0x82D206: cmp     dword ptr [eax], 0
0x82D209: jnz     short loc_82D210
0x82D20B: call    sub_772560
0x82D210: mov     edi, [esp+2Ch+a3]
0x82D214: push    2
0x82D216: push    1
0x82D218: push    2
0x82D21A: push    edi
0x82D21B: call    sub_801110
0x82D220: add     esp, 10h
0x82D223: push    edi; a3
0x82D224: push    2; a2
0x82D226: mov     ecx, esi; this
0x82D228: call    sub_760010
0x82D22D: lea     eax, [esp+2Ch+var_10]
0x82D231: push    eax
0x82D232: call    sub_772630
0x82D237: add     esp, 4
0x82D23A: push    eax
0x82D23B: lea     ecx, [esp+30h+a3]
0x82D23F: mov     byte ptr [esp+30h+var_4], 9Dh
0x82D244: call    sub_75FAE0
0x82D249: mov     eax, [esp+2Ch+var_10]
0x82D24D: test    eax, eax
0x82D24F: mov     byte ptr [esp+2Ch+var_4], 1
0x82D254: jz      short loc_82D269
0x82D256: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82D25A: mov     ecx, eax
0x82D25C: add     eax, 5Ch ; '\'
0x82D25F: cmp     dword ptr [eax], 0
0x82D262: jnz     short loc_82D269
0x82D264: call    sub_772560
0x82D269: mov     edi, [esp+2Ch+a3]
0x82D26D: push    2
0x82D26F: push    1
0x82D271: push    3
0x82D273: push    edi
0x82D274: call    sub_801110
0x82D279: add     esp, 10h
0x82D27C: push    edi; a3
0x82D27D: push    3; a2
0x82D27F: mov     ecx, esi; this
0x82D281: call    sub_760010
0x82D286: lea     ecx, [esp+2Ch+var_10]
0x82D28A: push    ecx
0x82D28B: call    sub_772630
0x82D290: add     esp, 4
0x82D293: push    eax
0x82D294: lea     ecx, [esp+30h+a3]
0x82D298: mov     byte ptr [esp+30h+var_4], 9Eh ; 'ž'
0x82D29D: call    sub_75FAE0
0x82D2A2: mov     eax, [esp+2Ch+var_10]
0x82D2A6: test    eax, eax
0x82D2A8: mov     byte ptr [esp+2Ch+var_4], 1
0x82D2AD: jz      short loc_82D2C2
0x82D2AF: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82D2B3: mov     ecx, eax
0x82D2B5: add     eax, 5Ch ; '\'
0x82D2B8: cmp     dword ptr [eax], 0
0x82D2BB: jnz     short loc_82D2C2
0x82D2BD: call    sub_772560
0x82D2C2: mov     edi, [esp+2Ch+a3]
0x82D2C6: push    2
0x82D2C8: push    1
0x82D2CA: push    4
0x82D2CC: push    edi
0x82D2CD: call    sub_801110
0x82D2D2: add     esp, 10h
0x82D2D5: push    edi; a3
0x82D2D6: push    4; a2
0x82D2D8: mov     ecx, esi; this
0x82D2DA: call    sub_760010
0x82D2DF: lea     edx, [esp+2Ch+var_10]
0x82D2E3: push    edx
0x82D2E4: call    sub_772630
0x82D2E9: add     esp, 4
0x82D2EC: push    eax
0x82D2ED: lea     ecx, [esp+30h+a3]
0x82D2F1: mov     byte ptr [esp+30h+var_4], 9Fh ; 'Ÿ'
0x82D2F6: call    sub_75FAE0
0x82D2FB: mov     eax, [esp+2Ch+var_10]
0x82D2FF: test    eax, eax
0x82D301: mov     byte ptr [esp+2Ch+var_4], 1
0x82D306: jz      short loc_82D31B
0x82D308: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82D30C: mov     ecx, eax
0x82D30E: add     eax, 5Ch ; '\'
0x82D311: cmp     dword ptr [eax], 0
0x82D314: jnz     short loc_82D31B
0x82D316: call    sub_772560
0x82D31B: mov     edi, [esp+2Ch+a3]
0x82D31F: push    0
0x82D321: push    3
0x82D323: push    5
0x82D325: push    edi
0x82D326: call    sub_801110
0x82D32B: mov     eax, ds:0B43110h
0x82D330: add     esp, 10h
0x82D333: push    eax; a2
0x82D334: mov     ecx, edi; this
0x82D336: call    sub_76C910
0x82D33B: push    edi; a3
0x82D33C: push    5; a2
0x82D33E: mov     ecx, esi; this
0x82D340: call    sub_760010
0x82D345: lea     ecx, [esp+2Ch+var_10]
0x82D349: push    ecx
0x82D34A: call    sub_772630
0x82D34F: add     esp, 4
0x82D352: push    eax
0x82D353: lea     ecx, [esp+30h+a3]
0x82D357: mov     byte ptr [esp+30h+var_4], 0A0h ; ' '
0x82D35C: call    sub_75FAE0
0x82D361: mov     eax, [esp+2Ch+var_10]
0x82D365: test    eax, eax
0x82D367: mov     byte ptr [esp+2Ch+var_4], 1
0x82D36C: jz      short loc_82D381
0x82D36E: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82D372: mov     ecx, eax
0x82D374: add     eax, 5Ch ; '\'
0x82D377: cmp     dword ptr [eax], 0
0x82D37A: jnz     short loc_82D381
0x82D37C: call    sub_772560
0x82D381: mov     edi, [esp+2Ch+a3]
0x82D385: push    2
0x82D387: push    1
0x82D389: push    6
0x82D38B: push    edi
0x82D38C: call    sub_801110
0x82D391: add     esp, 10h
0x82D394: push    edi; a3
0x82D395: push    6; a2
0x82D397: mov     ecx, esi; this
0x82D399: call    sub_760010
0x82D39E: lea     edx, [esp+2Ch+var_10]
0x82D3A2: push    edx
0x82D3A3: call    sub_772630
0x82D3A8: add     esp, 4
0x82D3AB: push    eax
0x82D3AC: lea     ecx, [esp+30h+a3]
0x82D3B0: mov     byte ptr [esp+30h+var_4], 0A1h ; '¡'
0x82D3B5: call    sub_75FAE0
0x82D3BA: mov     eax, [esp+2Ch+var_10]
0x82D3BE: test    eax, eax
0x82D3C0: mov     byte ptr [esp+2Ch+var_4], 1
0x82D3C5: jz      short loc_82D3DA
0x82D3C7: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82D3CB: mov     ecx, eax
0x82D3CD: add     eax, 5Ch ; '\'
0x82D3D0: cmp     dword ptr [eax], 0
0x82D3D3: jnz     short loc_82D3DA
0x82D3D5: call    sub_772560
0x82D3DA: mov     edi, [esp+2Ch+a3]
0x82D3DE: push    0
0x82D3E0: push    3
0x82D3E2: push    7
0x82D3E4: push    edi
0x82D3E5: call    sub_801110
0x82D3EA: add     esp, 10h
0x82D3ED: push    edi; a3
0x82D3EE: push    7; a2
0x82D3F0: mov     ecx, esi; this
0x82D3F2: call    sub_760010
0x82D3F7: mov     eax, ds:0B4548Ch
0x82D3FC: push    eax; a2
0x82D3FD: mov     ecx, esi; this
0x82D3FF: call    sub_7AECB0
0x82D404: mov     ecx, ds:0B45274h
0x82D40A: push    ecx; a2
0x82D40B: mov     ecx, esi; this
0x82D40D: call    sub_7AEC60
0x82D412: cmp     dword ptr [esi+30h], 0
0x82D416: jnz     short loc_82D420
0x82D418: call    sub_772DF0
0x82D41D: mov     [esi+30h], eax
0x82D420: mov     ecx, [esi+30h]
0x82D423: push    0
0x82D425: push    1
0x82D427: push    1Bh
0x82D429: call    sub_772CD0
0x82D42E: cmp     dword ptr [esi+30h], 0
0x82D432: jnz     short loc_82D43C
0x82D434: call    sub_772DF0
0x82D439: mov     [esi+30h], eax
0x82D43C: mov     ecx, [esi+30h]
0x82D43F: push    0
0x82D441: push    9
0x82D443: push    13h
0x82D445: call    sub_772CD0
0x82D44A: cmp     dword ptr [esi+30h], 0
0x82D44E: jnz     short loc_82D458
0x82D450: call    sub_772DF0
0x82D455: mov     [esi+30h], eax
0x82D458: mov     ecx, [esi+30h]
0x82D45B: push    0
0x82D45D: push    1
0x82D45F: push    14h
0x82D461: call    sub_772CD0
0x82D466: cmp     dword ptr [esi+30h], 0
0x82D46A: jnz     short loc_82D474
0x82D46C: call    sub_772DF0
0x82D471: mov     [esi+30h], eax
0x82D474: mov     ecx, [esi+30h]
0x82D477: push    0
0x82D479: push    0
0x82D47B: push    0Fh
0x82D47D: call    sub_772CD0
0x82D482: cmp     dword ptr [esi+30h], 0
0x82D486: jnz     short loc_82D490
0x82D488: call    sub_772DF0
0x82D48D: mov     [esi+30h], eax
0x82D490: mov     ecx, [esi+30h]
0x82D493: push    0
0x82D495: push    1
0x82D497: push    7
0x82D499: call    sub_772CD0
0x82D49E: cmp     dword ptr [esi+30h], 0
0x82D4A2: jnz     short loc_82D4AC
0x82D4A4: call    sub_772DF0
0x82D4A9: mov     [esi+30h], eax
0x82D4AC: mov     ecx, [esi+30h]
0x82D4AF: push    0
0x82D4B1: push    4
0x82D4B3: push    17h
0x82D4B5: call    sub_772CD0
0x82D4BA: cmp     dword ptr [esi+30h], 0
0x82D4BE: jnz     short loc_82D4C8
0x82D4C0: call    sub_772DF0
0x82D4C5: mov     [esi+30h], eax
0x82D4C8: mov     ecx, [esi+30h]
0x82D4CB: push    0
0x82D4CD: push    0
0x82D4CF: push    0Eh
0x82D4D1: call    sub_772CD0
0x82D4D6: cmp     dword ptr [esi+30h], 0
0x82D4DA: jnz     short loc_82D4E4
0x82D4DC: call    sub_772DF0
0x82D4E1: mov     [esi+30h], eax
0x82D4E4: mov     ecx, [esi+30h]
0x82D4E7: push    0
0x82D4E9: push    0
0x82D4EB: push    34h ; '4'
0x82D4ED: call    sub_772CD0
0x82D4F2: cmp     dword ptr [esi+30h], 0
0x82D4F6: jnz     short loc_82D500
0x82D4F8: call    sub_772DF0
0x82D4FD: mov     [esi+30h], eax
0x82D500: mov     ecx, [esi+30h]
0x82D503: push    1
0x82D505: push    3Fh ; '?'
0x82D507: push    98h ; '˜'
0x82D50C: call    sub_772CD0
0x82D511: push    offset dword_B45B84
0x82D516: lea     ecx, [esp+30h+var_14]
0x82D51A: mov     dword ptr ds:0B44100h, 4880Ch
0x82D524: mov     dword ptr ds:0B44790h, 8
0x82D52E: mov     ds:0B43A70h, ebp
0x82D534: call    sub_76C890
0x82D539: mov     esi, [esp+2Ch+var_14]
0x82D53D: cmp     dword ptr [esi+18h], 8
0x82D541: jnb     loc_82D81D
0x82D547: lea     edx, [esp+2Ch+var_10]
0x82D54B: push    edx
0x82D54C: call    sub_772630
0x82D551: add     esp, 4
0x82D554: push    eax
0x82D555: lea     ecx, [esp+30h+a3]
0x82D559: mov     byte ptr [esp+30h+var_4], 0A2h ; '¢'
0x82D55E: call    sub_75FAE0
0x82D563: mov     eax, [esp+2Ch+var_10]
0x82D567: test    eax, eax
0x82D569: mov     byte ptr [esp+2Ch+var_4], 1
0x82D56E: jz      short loc_82D583
0x82D570: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82D574: mov     ecx, eax
0x82D576: add     eax, 5Ch ; '\'
0x82D579: cmp     dword ptr [eax], 0
0x82D57C: jnz     short loc_82D583
0x82D57E: call    sub_772560
0x82D583: mov     edi, [esp+2Ch+a3]
0x82D587: push    2
0x82D589: push    1
0x82D58B: push    0
0x82D58D: push    edi
0x82D58E: call    sub_801110
0x82D593: add     esp, 10h
0x82D596: push    edi; a3
0x82D597: push    0; a2
0x82D599: mov     ecx, esi; this
0x82D59B: call    sub_760010
0x82D5A0: lea     eax, [esp+2Ch+var_10]
0x82D5A4: push    eax
0x82D5A5: call    sub_772630
0x82D5AA: add     esp, 4
0x82D5AD: push    eax
0x82D5AE: lea     ecx, [esp+30h+a3]
0x82D5B2: mov     byte ptr [esp+30h+var_4], 0A3h ; '£'
0x82D5B7: call    sub_75FAE0
0x82D5BC: mov     eax, [esp+2Ch+var_10]
0x82D5C0: test    eax, eax
0x82D5C2: mov     byte ptr [esp+2Ch+var_4], 1
0x82D5C7: jz      short loc_82D5DC
0x82D5C9: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82D5CD: mov     ecx, eax
0x82D5CF: add     eax, 5Ch ; '\'
0x82D5D2: cmp     dword ptr [eax], 0
0x82D5D5: jnz     short loc_82D5DC
0x82D5D7: call    sub_772560
0x82D5DC: mov     edi, [esp+2Ch+a3]
0x82D5E0: push    2
0x82D5E2: push    1
0x82D5E4: push    1
0x82D5E6: push    edi
0x82D5E7: call    sub_801110
0x82D5EC: add     esp, 10h
0x82D5EF: push    edi; a3
0x82D5F0: push    1; a2
0x82D5F2: mov     ecx, esi; this
0x82D5F4: call    sub_760010
0x82D5F9: lea     ecx, [esp+2Ch+var_10]
0x82D5FD: push    ecx
0x82D5FE: call    sub_772630
0x82D603: add     esp, 4
0x82D606: push    eax
0x82D607: lea     ecx, [esp+30h+a3]
0x82D60B: mov     byte ptr [esp+30h+var_4], 0A4h ; '¤'
0x82D610: call    sub_75FAE0
0x82D615: mov     eax, [esp+2Ch+var_10]
0x82D619: test    eax, eax
0x82D61B: mov     byte ptr [esp+2Ch+var_4], 1
0x82D620: jz      short loc_82D635
0x82D622: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82D626: mov     ecx, eax
0x82D628: add     eax, 5Ch ; '\'
0x82D62B: cmp     dword ptr [eax], 0
0x82D62E: jnz     short loc_82D635
0x82D630: call    sub_772560
0x82D635: mov     edi, [esp+2Ch+a3]
0x82D639: push    2
0x82D63B: push    1
0x82D63D: push    2
0x82D63F: push    edi
0x82D640: call    sub_801110
0x82D645: add     esp, 10h
0x82D648: push    edi; a3
0x82D649: push    2; a2
0x82D64B: mov     ecx, esi; this
0x82D64D: call    sub_760010
0x82D652: lea     edx, [esp+2Ch+var_10]
0x82D656: push    edx
0x82D657: call    sub_772630
0x82D65C: add     esp, 4
0x82D65F: push    eax
0x82D660: lea     ecx, [esp+30h+a3]
0x82D664: mov     byte ptr [esp+30h+var_4], 0A5h ; '¥'
0x82D669: call    sub_75FAE0
0x82D66E: mov     eax, [esp+2Ch+var_10]
0x82D672: test    eax, eax
0x82D674: mov     byte ptr [esp+2Ch+var_4], 1
0x82D679: jz      short loc_82D68E
0x82D67B: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82D67F: mov     ecx, eax
0x82D681: add     eax, 5Ch ; '\'
0x82D684: cmp     dword ptr [eax], 0
0x82D687: jnz     short loc_82D68E
0x82D689: call    sub_772560
0x82D68E: mov     edi, [esp+2Ch+a3]
0x82D692: push    2
0x82D694: push    1
0x82D696: push    3
0x82D698: push    edi
0x82D699: call    sub_801110
0x82D69E: add     esp, 10h
0x82D6A1: push    edi; a3
0x82D6A2: push    3; a2
0x82D6A4: mov     ecx, esi; this
0x82D6A6: call    sub_760010
0x82D6AB: lea     eax, [esp+2Ch+var_10]
0x82D6AF: push    eax
0x82D6B0: call    sub_772630
0x82D6B5: add     esp, 4
0x82D6B8: push    eax
0x82D6B9: lea     ecx, [esp+30h+a3]
0x82D6BD: mov     byte ptr [esp+30h+var_4], 0A6h ; '¦'
0x82D6C2: call    sub_75FAE0
0x82D6C7: mov     eax, [esp+2Ch+var_10]
0x82D6CB: test    eax, eax
0x82D6CD: mov     byte ptr [esp+2Ch+var_4], 1
0x82D6D2: jz      short loc_82D6E7
0x82D6D4: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82D6D8: mov     ecx, eax
0x82D6DA: add     eax, 5Ch ; '\'
0x82D6DD: cmp     dword ptr [eax], 0
0x82D6E0: jnz     short loc_82D6E7
0x82D6E2: call    sub_772560
0x82D6E7: mov     edi, [esp+2Ch+a3]
0x82D6EB: push    2
0x82D6ED: push    1
0x82D6EF: push    4
0x82D6F1: push    edi
0x82D6F2: call    sub_801110
0x82D6F7: add     esp, 10h
0x82D6FA: push    edi; a3
0x82D6FB: push    4; a2
0x82D6FD: mov     ecx, esi; this
0x82D6FF: call    sub_760010
0x82D704: lea     ecx, [esp+2Ch+var_10]
0x82D708: push    ecx
0x82D709: call    sub_772630
0x82D70E: add     esp, 4
0x82D711: push    eax
0x82D712: lea     ecx, [esp+30h+a3]
0x82D716: mov     byte ptr [esp+30h+var_4], 0A7h ; '§'
0x82D71B: call    sub_75FAE0
0x82D720: mov     eax, [esp+2Ch+var_10]
0x82D724: test    eax, eax
0x82D726: mov     byte ptr [esp+2Ch+var_4], 1
0x82D72B: jz      short loc_82D740
0x82D72D: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82D731: mov     ecx, eax
0x82D733: add     eax, 5Ch ; '\'
0x82D736: cmp     dword ptr [eax], 0
0x82D739: jnz     short loc_82D740
0x82D73B: call    sub_772560
0x82D740: mov     edi, [esp+2Ch+a3]
0x82D744: push    0
0x82D746: push    3
0x82D748: push    5
0x82D74A: push    edi
0x82D74B: call    sub_801110
0x82D750: mov     edx, ds:0B43110h
0x82D756: add     esp, 10h
0x82D759: push    edx; a2
0x82D75A: mov     ecx, edi; this
0x82D75C: call    sub_76C910
0x82D761: push    edi; a3
0x82D762: push    5; a2
0x82D764: mov     ecx, esi; this
0x82D766: call    sub_760010
0x82D76B: lea     eax, [esp+2Ch+var_10]
0x82D76F: push    eax
0x82D770: call    sub_772630
0x82D775: add     esp, 4
0x82D778: push    eax
0x82D779: lea     ecx, [esp+30h+a3]
0x82D77D: mov     byte ptr [esp+30h+var_4], 0A8h ; '¨'
0x82D782: call    sub_75FAE0
0x82D787: mov     eax, [esp+2Ch+var_10]
0x82D78B: test    eax, eax
0x82D78D: mov     byte ptr [esp+2Ch+var_4], 1
0x82D792: jz      short loc_82D7A7
0x82D794: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82D798: mov     ecx, eax
0x82D79A: add     eax, 5Ch ; '\'
0x82D79D: cmp     dword ptr [eax], 0
0x82D7A0: jnz     short loc_82D7A7
0x82D7A2: call    sub_772560
0x82D7A7: mov     edi, [esp+2Ch+a3]
0x82D7AB: push    2
0x82D7AD: push    1
0x82D7AF: push    6
0x82D7B1: push    edi
0x82D7B2: call    sub_801110
0x82D7B7: add     esp, 10h
0x82D7BA: push    edi; a3
0x82D7BB: push    6; a2
0x82D7BD: mov     ecx, esi; this
0x82D7BF: call    sub_760010
0x82D7C4: lea     ecx, [esp+2Ch+var_10]
0x82D7C8: push    ecx
0x82D7C9: call    sub_772630
0x82D7CE: add     esp, 4
0x82D7D1: push    eax
0x82D7D2: lea     ecx, [esp+30h+a3]
0x82D7D6: mov     byte ptr [esp+30h+var_4], 0A9h ; '©'
0x82D7DB: call    sub_75FAE0
0x82D7E0: mov     eax, [esp+2Ch+var_10]
0x82D7E4: test    eax, eax
0x82D7E6: mov     byte ptr [esp+2Ch+var_4], 1
0x82D7EB: jz      short loc_82D800
0x82D7ED: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82D7F1: mov     ecx, eax
0x82D7F3: add     eax, 5Ch ; '\'
0x82D7F6: cmp     dword ptr [eax], 0
0x82D7F9: jnz     short loc_82D800
0x82D7FB: call    sub_772560
0x82D800: mov     edi, [esp+2Ch+a3]
0x82D804: push    0
0x82D806: push    3
0x82D808: push    7
0x82D80A: push    edi
0x82D80B: call    sub_801110
0x82D810: add     esp, 10h
0x82D813: push    edi; a3
0x82D814: push    7; a2
0x82D816: mov     ecx, esi; this
0x82D818: call    sub_760010
0x82D81D: mov     edx, ds:0B45490h
0x82D823: push    edx; a2
0x82D824: mov     ecx, esi; this
0x82D826: call    sub_7AECB0
0x82D82B: mov     eax, ds:0B45274h
0x82D830: push    eax; a2
0x82D831: mov     ecx, esi; this
0x82D833: call    sub_7AEC60
0x82D838: cmp     dword ptr [esi+30h], 0
0x82D83C: jnz     short loc_82D846
0x82D83E: call    sub_772DF0
0x82D843: mov     [esi+30h], eax
0x82D846: mov     ecx, [esi+30h]
0x82D849: push    0
0x82D84B: push    1
0x82D84D: push    1Bh
0x82D84F: call    sub_772CD0
0x82D854: cmp     dword ptr [esi+30h], 0
0x82D858: jnz     short loc_82D862
0x82D85A: call    sub_772DF0
0x82D85F: mov     [esi+30h], eax
0x82D862: mov     ecx, [esi+30h]
0x82D865: push    0
0x82D867: push    9
0x82D869: push    13h
0x82D86B: call    sub_772CD0
0x82D870: cmp     dword ptr [esi+30h], 0
0x82D874: jnz     short loc_82D87E
0x82D876: call    sub_772DF0
0x82D87B: mov     [esi+30h], eax
0x82D87E: mov     ecx, [esi+30h]
0x82D881: push    0
0x82D883: push    1
0x82D885: push    14h
0x82D887: call    sub_772CD0
0x82D88C: cmp     dword ptr [esi+30h], 0
0x82D890: jnz     short loc_82D89A
0x82D892: call    sub_772DF0
0x82D897: mov     [esi+30h], eax
0x82D89A: mov     ecx, [esi+30h]
0x82D89D: push    0
0x82D89F: push    0
0x82D8A1: push    0Fh
0x82D8A3: call    sub_772CD0
0x82D8A8: cmp     dword ptr [esi+30h], 0
0x82D8AC: jnz     short loc_82D8B6
0x82D8AE: call    sub_772DF0
0x82D8B3: mov     [esi+30h], eax
0x82D8B6: mov     ecx, [esi+30h]
0x82D8B9: push    0
0x82D8BB: push    1
0x82D8BD: push    7
0x82D8BF: call    sub_772CD0
0x82D8C4: cmp     dword ptr [esi+30h], 0
0x82D8C8: jnz     short loc_82D8D2
0x82D8CA: call    sub_772DF0
0x82D8CF: mov     [esi+30h], eax
0x82D8D2: mov     ecx, [esi+30h]
0x82D8D5: push    0
0x82D8D7: push    4
0x82D8D9: push    17h
0x82D8DB: call    sub_772CD0
0x82D8E0: cmp     dword ptr [esi+30h], 0
0x82D8E4: jnz     short loc_82D8EE
0x82D8E6: call    sub_772DF0
0x82D8EB: mov     [esi+30h], eax
0x82D8EE: mov     ecx, [esi+30h]
0x82D8F1: push    0
0x82D8F3: push    0
0x82D8F5: push    0Eh
0x82D8F7: call    sub_772CD0
0x82D8FC: cmp     dword ptr [esi+30h], 0
0x82D900: jnz     short loc_82D90A
0x82D902: call    sub_772DF0
0x82D907: mov     [esi+30h], eax
0x82D90A: mov     ecx, [esi+30h]
0x82D90D: push    0
0x82D90F: push    0
0x82D911: push    34h ; '4'
0x82D913: call    sub_772CD0
0x82D918: cmp     dword ptr [esi+30h], 0
0x82D91C: jnz     short loc_82D926
0x82D91E: call    sub_772DF0
0x82D923: mov     [esi+30h], eax
0x82D926: mov     ecx, [esi+30h]
0x82D929: push    1
0x82D92B: push    3Fh ; '?'
0x82D92D: push    98h ; '˜'
0x82D932: call    sub_772CD0
0x82D937: mov     ds:0B44104h, ebx
0x82D93D: or      ebx, 0FFFFFFFFh
0x82D940: test    edi, edi
0x82D942: mov     dword ptr ds:0B44794h, 8
0x82D94C: mov     ds:0B43A74h, ebp
0x82D952: mov     byte ptr [esp+2Ch+var_4], 0
0x82D957: jz      short loc_82D965
0x82D959: add     [edi+5Ch], ebx
0x82D95C: jnz     short loc_82D965
0x82D95E: mov     ecx, edi
0x82D960: call    sub_772560
0x82D965: add     [esi+60h], ebx
0x82D968: mov     [esp+2Ch+var_4], ebx
0x82D96C: jnz     short loc_82D975
0x82D96E: mov     ecx, esi
0x82D970: call    sub_7604D0
0x82D975: mov     ecx, dword ptr [esp+2Ch+var_C]
0x82D979: mov     large fs:0, ecx
0x82D980: pop     ecx
0x82D981: pop     edi
0x82D982: pop     esi
0x82D983: pop     ebp
0x82D984: pop     ebx
0x82D985: add     esp, 18h
0x82D988: retn
