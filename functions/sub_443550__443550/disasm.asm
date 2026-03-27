0x443550: push    0FFFFFFFFh
0x443552: push    offset SEH_443550
0x443557: mov     eax, large fs:0
0x44355D: push    eax
0x44355E: sub     esp, 110h
0x443564: mov     eax, ds:0B30AACh
0x443569: xor     eax, esp
0x44356B: mov     [esp+11Ch+var_10], eax
0x443572: push    ebp
0x443573: push    esi
0x443574: push    edi
0x443575: mov     eax, ds:0B30AACh
0x44357A: xor     eax, esp
0x44357C: push    eax
0x44357D: lea     eax, [esp+12Ch+var_C]
0x443584: mov     large fs:0, eax
0x44358A: mov     eax, ds:0B37150h
0x44358F: cmp     byte ptr [eax], 0
0x443592: mov     edi, ds:0A2807Ch
0x443598: mov     ebp, ecx
0x44359A: jz      short loc_4435DB
0x44359C: mov     ecx, ds:0B33A1Ch
0x4435A2: push    1
0x4435A4: push    1
0x4435A6: push    0
0x4435A8: push    0
0x4435AA: push    0
0x4435AC: push    5
0x4435AE: push    eax
0x4435AF: lea     eax, [esp+148h+var_11C]
0x4435B3: push    eax
0x4435B4: call    sub_43B420
0x4435B9: mov     eax, [esp+12Ch+var_11C]
0x4435BD: test    eax, eax
0x4435BF: jz      short loc_4435DB
0x4435C1: mov     esi, eax
0x4435C3: add     eax, 8
0x4435C6: push    eax; lpAddend
0x4435C7: call    edi ; InterlockedDecrement
0x4435C9: test    eax, eax
0x4435CB: jnz     short loc_4435DB
0x4435CD: test    esi, esi
0x4435CF: jz      short loc_4435DB
0x4435D1: mov     edx, [esi]
0x4435D3: mov     eax, [edx]
0x4435D5: push    1
0x4435D7: mov     ecx, esi
0x4435D9: call    eax
0x4435DB: mov     eax, ds:0B37158h
0x4435E0: cmp     byte ptr [eax], 0
0x4435E3: jz      short loc_443624
0x4435E5: push    1
0x4435E7: push    1
0x4435E9: push    0
0x4435EB: push    0
0x4435ED: push    0
0x4435EF: push    5
0x4435F1: push    eax
0x4435F2: lea     ecx, [esp+148h+var_11C]
0x4435F6: push    ecx
0x4435F7: mov     ecx, ds:0B33A1Ch
0x4435FD: call    sub_43B420
0x443602: mov     eax, [esp+12Ch+var_11C]
0x443606: test    eax, eax
0x443608: jz      short loc_443624
0x44360A: mov     esi, eax
0x44360C: add     eax, 8
0x44360F: push    eax; lpAddend
0x443610: call    edi ; InterlockedDecrement
0x443612: test    eax, eax
0x443614: jnz     short loc_443624
0x443616: test    esi, esi
0x443618: jz      short loc_443624
0x44361A: mov     edx, [esi]
0x44361C: mov     eax, [edx]
0x44361E: push    1
0x443620: mov     ecx, esi
0x443622: call    eax
0x443624: mov     eax, ds:0B37160h
0x443629: cmp     byte ptr [eax], 0
0x44362C: jz      short loc_44366D
0x44362E: push    1
0x443630: push    1
0x443632: push    0
0x443634: push    0
0x443636: push    0
0x443638: push    5
0x44363A: push    eax
0x44363B: lea     ecx, [esp+148h+var_11C]
0x44363F: push    ecx
0x443640: mov     ecx, ds:0B33A1Ch
0x443646: call    sub_43B420
0x44364B: mov     eax, [esp+12Ch+var_11C]
0x44364F: test    eax, eax
0x443651: jz      short loc_44366D
0x443653: mov     esi, eax
0x443655: add     eax, 8
0x443658: push    eax; lpAddend
0x443659: call    edi ; InterlockedDecrement
0x44365B: test    eax, eax
0x44365D: jnz     short loc_44366D
0x44365F: test    esi, esi
0x443661: jz      short loc_44366D
0x443663: mov     edx, [esi]
0x443665: mov     eax, [edx]
0x443667: push    1
0x443669: mov     ecx, esi
0x44366B: call    eax
0x44366D: mov     eax, ds:0B37168h
0x443672: cmp     byte ptr [eax], 0
0x443675: jz      short loc_4436B6
0x443677: push    1
0x443679: push    1
0x44367B: push    0
0x44367D: push    0
0x44367F: push    0
0x443681: push    5
0x443683: push    eax
0x443684: lea     ecx, [esp+148h+var_11C]
0x443688: push    ecx
0x443689: mov     ecx, ds:0B33A1Ch
0x44368F: call    sub_43B420
0x443694: mov     eax, [esp+12Ch+var_11C]
0x443698: test    eax, eax
0x44369A: jz      short loc_4436B6
0x44369C: mov     esi, eax
0x44369E: add     eax, 8
0x4436A1: push    eax; lpAddend
0x4436A2: call    edi ; InterlockedDecrement
0x4436A4: test    eax, eax
0x4436A6: jnz     short loc_4436B6
0x4436A8: test    esi, esi
0x4436AA: jz      short loc_4436B6
0x4436AC: mov     edx, [esi]
0x4436AE: mov     eax, [edx]
0x4436B0: push    1
0x4436B2: mov     ecx, esi
0x4436B4: call    eax
0x4436B6: mov     eax, ds:0B37170h
0x4436BB: cmp     byte ptr [eax], 0
0x4436BE: jz      short loc_4436FF
0x4436C0: push    1
0x4436C2: push    1
0x4436C4: push    0
0x4436C6: push    0
0x4436C8: push    0
0x4436CA: push    5
0x4436CC: push    eax
0x4436CD: lea     ecx, [esp+148h+var_11C]
0x4436D1: push    ecx
0x4436D2: mov     ecx, ds:0B33A1Ch
0x4436D8: call    sub_43B420
0x4436DD: mov     eax, [esp+12Ch+var_11C]
0x4436E1: test    eax, eax
0x4436E3: jz      short loc_4436FF
0x4436E5: mov     esi, eax
0x4436E7: add     eax, 8
0x4436EA: push    eax; lpAddend
0x4436EB: call    edi ; InterlockedDecrement
0x4436ED: test    eax, eax
0x4436EF: jnz     short loc_4436FF
0x4436F1: test    esi, esi
0x4436F3: jz      short loc_4436FF
0x4436F5: mov     edx, [esi]
0x4436F7: mov     eax, [edx]
0x4436F9: push    1
0x4436FB: mov     ecx, esi
0x4436FD: call    eax
0x4436FF: mov     eax, ds:0B37178h
0x443704: cmp     byte ptr [eax], 0
0x443707: jz      short loc_443748
0x443709: push    1
0x44370B: push    1
0x44370D: push    0
0x44370F: push    0
0x443711: push    0
0x443713: push    5
0x443715: push    eax
0x443716: lea     ecx, [esp+148h+var_11C]
0x44371A: push    ecx
0x44371B: mov     ecx, ds:0B33A1Ch
0x443721: call    sub_43B420
0x443726: mov     eax, [esp+12Ch+var_11C]
0x44372A: test    eax, eax
0x44372C: jz      short loc_443748
0x44372E: mov     esi, eax
0x443730: add     eax, 8
0x443733: push    eax; lpAddend
0x443734: call    edi ; InterlockedDecrement
0x443736: test    eax, eax
0x443738: jnz     short loc_443748
0x44373A: test    esi, esi
0x44373C: jz      short loc_443748
0x44373E: mov     edx, [esi]
0x443740: mov     eax, [edx]
0x443742: push    1
0x443744: mov     ecx, esi
0x443746: call    eax
0x443748: mov     eax, ds:0B37180h
0x44374D: cmp     byte ptr [eax], 0
0x443750: jz      short loc_443791
0x443752: push    1
0x443754: push    1
0x443756: push    0
0x443758: push    0
0x44375A: push    0
0x44375C: push    5
0x44375E: push    eax
0x44375F: lea     ecx, [esp+148h+var_11C]
0x443763: push    ecx
0x443764: mov     ecx, ds:0B33A1Ch
0x44376A: call    sub_43B420
0x44376F: mov     eax, [esp+12Ch+var_11C]
0x443773: test    eax, eax
0x443775: jz      short loc_443791
0x443777: mov     esi, eax
0x443779: add     eax, 8
0x44377C: push    eax; lpAddend
0x44377D: call    edi ; InterlockedDecrement
0x44377F: test    eax, eax
0x443781: jnz     short loc_443791
0x443783: test    esi, esi
0x443785: jz      short loc_443791
0x443787: mov     edx, [esi]
0x443789: mov     eax, [edx]
0x44378B: push    1
0x44378D: mov     ecx, esi
0x44378F: call    eax
0x443791: mov     eax, ds:0B37188h
0x443796: cmp     byte ptr [eax], 0
0x443799: jz      short loc_4437DA
0x44379B: push    1
0x44379D: push    1
0x44379F: push    0
0x4437A1: push    0
0x4437A3: push    0
0x4437A5: push    5
0x4437A7: push    eax
0x4437A8: lea     ecx, [esp+148h+var_11C]
0x4437AC: push    ecx
0x4437AD: mov     ecx, ds:0B33A1Ch
0x4437B3: call    sub_43B420
0x4437B8: mov     eax, [esp+12Ch+var_11C]
0x4437BC: test    eax, eax
0x4437BE: jz      short loc_4437DA
0x4437C0: mov     esi, eax
0x4437C2: add     eax, 8
0x4437C5: push    eax; lpAddend
0x4437C6: call    edi ; InterlockedDecrement
0x4437C8: test    eax, eax
0x4437CA: jnz     short loc_4437DA
0x4437CC: test    esi, esi
0x4437CE: jz      short loc_4437DA
0x4437D0: mov     edx, [esi]
0x4437D2: mov     eax, [edx]
0x4437D4: push    1
0x4437D6: mov     ecx, esi
0x4437D8: call    eax
0x4437DA: mov     eax, ds:0B37190h
0x4437DF: cmp     byte ptr [eax], 0
0x4437E2: jz      short loc_443823
0x4437E4: push    1
0x4437E6: push    1
0x4437E8: push    0
0x4437EA: push    0
0x4437EC: push    0
0x4437EE: push    5
0x4437F0: push    eax
0x4437F1: lea     ecx, [esp+148h+var_11C]
0x4437F5: push    ecx
0x4437F6: mov     ecx, ds:0B33A1Ch
0x4437FC: call    sub_43B420
0x443801: mov     eax, [esp+12Ch+var_11C]
0x443805: test    eax, eax
0x443807: jz      short loc_443823
0x443809: mov     esi, eax
0x44380B: add     eax, 8
0x44380E: push    eax; lpAddend
0x44380F: call    edi ; InterlockedDecrement
0x443811: test    eax, eax
0x443813: jnz     short loc_443823
0x443815: test    esi, esi
0x443817: jz      short loc_443823
0x443819: mov     edx, [esi]
0x44381B: mov     eax, [edx]
0x44381D: push    1
0x44381F: mov     ecx, esi
0x443821: call    eax
0x443823: mov     eax, ds:0B37198h
0x443828: cmp     byte ptr [eax], 0
0x44382B: jz      short loc_44386C
0x44382D: push    1
0x44382F: push    1
0x443831: push    0
0x443833: push    0
0x443835: push    0
0x443837: push    5
0x443839: push    eax
0x44383A: lea     ecx, [esp+148h+var_11C]
0x44383E: push    ecx
0x44383F: mov     ecx, ds:0B33A1Ch
0x443845: call    sub_43B420
0x44384A: mov     eax, [esp+12Ch+var_11C]
0x44384E: test    eax, eax
0x443850: jz      short loc_44386C
0x443852: mov     esi, eax
0x443854: add     eax, 8
0x443857: push    eax; lpAddend
0x443858: call    edi ; InterlockedDecrement
0x44385A: test    eax, eax
0x44385C: jnz     short loc_44386C
0x44385E: test    esi, esi
0x443860: jz      short loc_44386C
0x443862: mov     edx, [esi]
0x443864: mov     eax, [edx]
0x443866: push    1
0x443868: mov     ecx, esi
0x44386A: call    eax
0x44386C: mov     eax, ds:0B371A0h
0x443871: cmp     byte ptr [eax], 0
0x443874: jz      short loc_4438B5
0x443876: push    1
0x443878: push    1
0x44387A: push    0
0x44387C: push    0
0x44387E: push    0
0x443880: push    5
0x443882: push    eax
0x443883: lea     ecx, [esp+148h+var_11C]
0x443887: push    ecx
0x443888: mov     ecx, ds:0B33A1Ch
0x44388E: call    sub_43B420
0x443893: mov     eax, [esp+12Ch+var_11C]
0x443897: test    eax, eax
0x443899: jz      short loc_4438B5
0x44389B: mov     esi, eax
0x44389D: add     eax, 8
0x4438A0: push    eax; lpAddend
0x4438A1: call    edi ; InterlockedDecrement
0x4438A3: test    eax, eax
0x4438A5: jnz     short loc_4438B5
0x4438A7: test    esi, esi
0x4438A9: jz      short loc_4438B5
0x4438AB: mov     edx, [esi]
0x4438AD: mov     eax, [edx]
0x4438AF: push    1
0x4438B1: mov     ecx, esi
0x4438B3: call    eax
0x4438B5: mov     eax, ds:0B371A8h
0x4438BA: cmp     byte ptr [eax], 0
0x4438BD: jz      short loc_4438FE
0x4438BF: push    1
0x4438C1: push    1
0x4438C3: push    0
0x4438C5: push    0
0x4438C7: push    0
0x4438C9: push    5
0x4438CB: push    eax
0x4438CC: lea     ecx, [esp+148h+var_11C]
0x4438D0: push    ecx
0x4438D1: mov     ecx, ds:0B33A1Ch
0x4438D7: call    sub_43B420
0x4438DC: mov     eax, [esp+12Ch+var_11C]
0x4438E0: test    eax, eax
0x4438E2: jz      short loc_4438FE
0x4438E4: mov     esi, eax
0x4438E6: add     eax, 8
0x4438E9: push    eax; lpAddend
0x4438EA: call    edi ; InterlockedDecrement
0x4438EC: test    eax, eax
0x4438EE: jnz     short loc_4438FE
0x4438F0: test    esi, esi
0x4438F2: jz      short loc_4438FE
0x4438F4: mov     edx, [esi]
0x4438F6: mov     eax, [edx]
0x4438F8: push    1
0x4438FA: mov     ecx, esi
0x4438FC: call    eax
0x4438FE: mov     eax, ds:0B371B0h
0x443903: cmp     byte ptr [eax], 0
0x443906: jz      short loc_443947
0x443908: push    1
0x44390A: push    1
0x44390C: push    0
0x44390E: push    0
0x443910: push    0
0x443912: push    5
0x443914: push    eax
0x443915: lea     ecx, [esp+148h+var_11C]
0x443919: push    ecx
0x44391A: mov     ecx, ds:0B33A1Ch
0x443920: call    sub_43B420
0x443925: mov     eax, [esp+12Ch+var_11C]
0x443929: test    eax, eax
0x44392B: jz      short loc_443947
0x44392D: mov     esi, eax
0x44392F: add     eax, 8
0x443932: push    eax; lpAddend
0x443933: call    edi ; InterlockedDecrement
0x443935: test    eax, eax
0x443937: jnz     short loc_443947
0x443939: test    esi, esi
0x44393B: jz      short loc_443947
0x44393D: mov     edx, [esi]
0x44393F: mov     eax, [edx]
0x443941: push    1
0x443943: mov     ecx, esi
0x443945: call    eax
0x443947: mov     eax, ds:0B371B8h
0x44394C: cmp     byte ptr [eax], 0
0x44394F: jz      short loc_443990
0x443951: push    1
0x443953: push    1
0x443955: push    0
0x443957: push    0
0x443959: push    0
0x44395B: push    5
0x44395D: push    eax
0x44395E: lea     ecx, [esp+148h+var_11C]
0x443962: push    ecx
0x443963: mov     ecx, ds:0B33A1Ch
0x443969: call    sub_43B420
0x44396E: mov     eax, [esp+12Ch+var_11C]
0x443972: test    eax, eax
0x443974: jz      short loc_443990
0x443976: mov     esi, eax
0x443978: add     eax, 8
0x44397B: push    eax; lpAddend
0x44397C: call    edi ; InterlockedDecrement
0x44397E: test    eax, eax
0x443980: jnz     short loc_443990
0x443982: test    esi, esi
0x443984: jz      short loc_443990
0x443986: mov     edx, [esi]
0x443988: mov     eax, [edx]
0x44398A: push    1
0x44398C: mov     ecx, esi
0x44398E: call    eax
0x443990: mov     eax, ds:0B371C0h
0x443995: cmp     byte ptr [eax], 0
0x443998: jz      short loc_4439D9
0x44399A: push    1
0x44399C: push    1
0x44399E: push    0
0x4439A0: push    0
0x4439A2: push    0
0x4439A4: push    5
0x4439A6: push    eax
0x4439A7: lea     ecx, [esp+148h+var_11C]
0x4439AB: push    ecx
0x4439AC: mov     ecx, ds:0B33A1Ch
0x4439B2: call    sub_43B420
0x4439B7: mov     eax, [esp+12Ch+var_11C]
0x4439BB: test    eax, eax
0x4439BD: jz      short loc_4439D9
0x4439BF: mov     esi, eax
0x4439C1: add     eax, 8
0x4439C4: push    eax; lpAddend
0x4439C5: call    edi ; InterlockedDecrement
0x4439C7: test    eax, eax
0x4439C9: jnz     short loc_4439D9
0x4439CB: test    esi, esi
0x4439CD: jz      short loc_4439D9
0x4439CF: mov     edx, [esi]
0x4439D1: mov     eax, [edx]
0x4439D3: push    1
0x4439D5: mov     ecx, esi
0x4439D7: call    eax
0x4439D9: mov     eax, ds:0B37B38h
0x4439DE: cmp     byte ptr [eax], 0
0x4439E1: jz      short loc_443A22
0x4439E3: push    1
0x4439E5: push    1
0x4439E7: push    0
0x4439E9: push    0
0x4439EB: push    0
0x4439ED: push    5
0x4439EF: push    eax
0x4439F0: lea     ecx, [esp+148h+var_11C]
0x4439F4: push    ecx
0x4439F5: mov     ecx, ds:0B33A1Ch
0x4439FB: call    sub_43B420
0x443A00: mov     eax, [esp+12Ch+var_11C]
0x443A04: test    eax, eax
0x443A06: jz      short loc_443A22
0x443A08: mov     esi, eax
0x443A0A: add     eax, 8
0x443A0D: push    eax; lpAddend
0x443A0E: call    edi ; InterlockedDecrement
0x443A10: test    eax, eax
0x443A12: jnz     short loc_443A22
0x443A14: test    esi, esi
0x443A16: jz      short loc_443A22
0x443A18: mov     edx, [esi]
0x443A1A: mov     eax, [edx]
0x443A1C: push    1
0x443A1E: mov     ecx, esi
0x443A20: call    eax
0x443A22: mov     eax, ds:0B371C8h
0x443A27: or      edi, 0FFFFFFFFh
0x443A2A: cmp     byte ptr [eax], 0
0x443A2D: jz      short loc_443AA5
0x443A2F: push    eax
0x443A30: push    offset aTextures; "Textures"
0x443A35: push    offset aData_2; "Data"
0x443A3A: lea     ecx, [esp+138h+ArgList]
0x443A3E: push    offset aSSS_1; "%s\\%s\\%s"
0x443A43: push    ecx
0x443A44: call    __sprintf
0x443A49: add     esp, 14h
0x443A4C: push    0; char
0x443A4E: push    0; char
0x443A50: lea     edx, [esp+134h+ArgList]
0x443A54: push    edx; ArgList
0x443A55: lea     eax, [esp+138h+var_11C]
0x443A59: push    eax; int
0x443A5A: mov     ecx, ebp
0x443A5C: call    sub_442890
0x443A61: push    eax
0x443A62: lea     ecx, [ebp+94h]
0x443A68: mov     [esp+130h+var_4], 0
0x443A73: call    sub_55E2A0
0x443A78: mov     eax, [esp+12Ch+var_11C]
0x443A7C: test    eax, eax
0x443A7E: mov     [esp+12Ch+var_4], edi
0x443A85: jz      short loc_443AA5
0x443A87: mov     esi, eax
0x443A89: add     eax, 4
0x443A8C: push    eax; lpAddend
0x443A8D: call    dword ptr ds:0A2807Ch
0x443A93: test    eax, eax
0x443A95: jnz     short loc_443AA5
0x443A97: test    esi, esi
0x443A99: jz      short loc_443AA5
0x443A9B: mov     edx, [esi]
0x443A9D: mov     eax, [edx]
0x443A9F: push    1
0x443AA1: mov     ecx, esi
0x443AA3: call    eax
0x443AA5: mov     eax, ds:0B371D0h
0x443AAA: cmp     byte ptr [eax], 0
0x443AAD: jz      short loc_443B25
0x443AAF: push    eax
0x443AB0: push    offset aTextures; "Textures"
0x443AB5: push    offset aData_2; "Data"
0x443ABA: lea     ecx, [esp+138h+ArgList]
0x443ABE: push    offset aSSS_1; "%s\\%s\\%s"
0x443AC3: push    ecx
0x443AC4: call    __sprintf
0x443AC9: add     esp, 14h
0x443ACC: push    0; char
0x443ACE: push    0; char
0x443AD0: lea     edx, [esp+134h+ArgList]
0x443AD4: push    edx; ArgList
0x443AD5: lea     eax, [esp+138h+var_11C]
0x443AD9: push    eax; int
0x443ADA: mov     ecx, ebp
0x443ADC: call    sub_442890
0x443AE1: push    eax
0x443AE2: lea     ecx, [ebp+98h]
0x443AE8: mov     [esp+130h+var_4], 1
0x443AF3: call    sub_55E2A0
0x443AF8: mov     eax, [esp+12Ch+var_11C]
0x443AFC: test    eax, eax
0x443AFE: mov     [esp+12Ch+var_4], edi
0x443B05: jz      short loc_443B25
0x443B07: mov     esi, eax
0x443B09: add     eax, 4
0x443B0C: push    eax; lpAddend
0x443B0D: call    dword ptr ds:0A2807Ch
0x443B13: test    eax, eax
0x443B15: jnz     short loc_443B25
0x443B17: test    esi, esi
0x443B19: jz      short loc_443B25
0x443B1B: mov     edx, [esi]
0x443B1D: mov     eax, [edx]
0x443B1F: push    1
0x443B21: mov     ecx, esi
0x443B23: call    eax
0x443B25: mov     eax, ds:0B371D8h
0x443B2A: cmp     byte ptr [eax], 0
0x443B2D: jz      short loc_443BA9
0x443B2F: push    eax
0x443B30: push    offset aTextures; "Textures"
0x443B35: push    offset aData_2; "Data"
0x443B3A: lea     ecx, [esp+138h+ArgList]
0x443B3E: push    offset aSSS_1; "%s\\%s\\%s"
0x443B43: push    ecx
0x443B44: call    __sprintf
0x443B49: add     esp, 14h
0x443B4C: push    0; char
0x443B4E: push    0; char
0x443B50: lea     edx, [esp+134h+ArgList]
0x443B54: push    edx; ArgList
0x443B55: lea     eax, [esp+138h+var_11C]
0x443B59: push    eax; int
0x443B5A: mov     ecx, ebp
0x443B5C: call    sub_442890
0x443B61: push    eax
0x443B62: lea     ecx, [ebp+9Ch]
0x443B68: mov     [esp+130h+var_4], 2
0x443B73: call    sub_55E2A0
0x443B78: mov     eax, [esp+12Ch+var_11C]
0x443B7C: test    eax, eax
0x443B7E: mov     [esp+12Ch+var_4], edi
0x443B85: jz      short loc_443BA9
0x443B87: mov     ebp, ds:0A2807Ch
0x443B8D: mov     esi, eax
0x443B8F: add     eax, 4
0x443B92: push    eax; lpAddend
0x443B93: call    ebp ; InterlockedDecrement
0x443B95: test    eax, eax
0x443B97: jnz     short loc_443BAF
0x443B99: test    esi, esi
0x443B9B: jz      short loc_443BAF
0x443B9D: mov     edx, [esi]
0x443B9F: mov     eax, [edx]
0x443BA1: push    1
0x443BA3: mov     ecx, esi
0x443BA5: call    eax
0x443BA7: jmp     short loc_443BAF
0x443BA9: mov     ebp, ds:0A2807Ch
0x443BAF: xor     edi, edi
0x443BB1: mov     ecx, ds:dword_B067C0[edi]
0x443BB7: push    ecx; a1
0x443BB8: call    TESForm_LookupByFormID
0x443BBD: add     esp, 4
0x443BC0: test    eax, eax
0x443BC2: jz      short loc_443C33
0x443BC4: movzx   ecx, word ptr [eax+2Ch]
0x443BC8: cmp     cx, 0FFFFh
0x443BCD: jnz     short loc_443BE2
0x443BCF: mov     ecx, [eax+28h]
0x443BD2: lea     esi, [ecx+1]
0x443BD5: mov     dl, [ecx]
0x443BD7: add     ecx, 1
0x443BDA: test    dl, dl
0x443BDC: jnz     short loc_443BD5
0x443BDE: sub     ecx, esi
0x443BE0: jmp     short loc_443BE5
0x443BE2: movzx   ecx, cx
0x443BE5: test    ecx, ecx
0x443BE7: jz      short loc_443C33
0x443BE9: mov     edx, [eax+24h]
0x443BEC: push    1
0x443BEE: push    1
0x443BF0: push    0
0x443BF2: lea     ecx, [eax+24h]
0x443BF5: mov     eax, [edx+14h]
0x443BF8: push    0
0x443BFA: push    0
0x443BFC: push    5
0x443BFE: call    eax
0x443C00: push    eax
0x443C01: lea     ecx, [esp+148h+var_118]
0x443C05: push    ecx
0x443C06: mov     ecx, ds:0B33A1Ch
0x443C0C: call    sub_43B420
0x443C11: mov     eax, [esp+12Ch+var_118]
0x443C15: test    eax, eax
0x443C17: jz      short loc_443C33
0x443C19: mov     esi, eax
0x443C1B: add     eax, 8
0x443C1E: push    eax; lpAddend
0x443C1F: call    ebp ; InterlockedDecrement
0x443C21: test    eax, eax
0x443C23: jnz     short loc_443C33
0x443C25: test    esi, esi
0x443C27: jz      short loc_443C33
0x443C29: mov     edx, [esi]
0x443C2B: mov     eax, [edx]
0x443C2D: push    1
0x443C2F: mov     ecx, esi
0x443C31: call    eax
0x443C33: mov     ds:dword_B35E50[edi], 0
0x443C3D: add     edi, 4
0x443C40: cmp     edi, 54h ; 'T'
0x443C43: jl      loc_443BB1
0x443C49: mov     ecx, dword ptr [esp+12Ch+var_C]
0x443C50: mov     large fs:0, ecx
0x443C57: pop     ecx
0x443C58: pop     edi
0x443C59: pop     esi
0x443C5A: pop     ebp
0x443C5B: mov     ecx, [esp+11Ch+var_10]
0x443C62: xor     ecx, esp
0x443C64: call    @__security_check_cookie@4; __security_check_cookie(x)
0x443C69: add     esp, 11Ch
0x443C6F: retn
