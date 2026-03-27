0x515330: push    0FFFFFFFFh
0x515332: push    offset SEH_515330
0x515337: mov     eax, large fs:0
0x51533D: push    eax
0x51533E: sub     esp, 434h
0x515344: mov     eax, ds:0B30AACh
0x515349: xor     eax, esp
0x51534B: mov     [esp+440h+var_10], eax
0x515352: push    ebx
0x515353: push    ebp
0x515354: push    esi
0x515355: push    edi
0x515356: mov     eax, ds:0B30AACh
0x51535B: xor     eax, esp
0x51535D: push    eax; ArgList
0x51535E: lea     eax, [esp+454h+var_C]
0x515365: mov     large fs:0, eax
0x51536B: mov     ebp, [esp+454h+arg_1C]
0x515372: mov     ebx, [esp+454h+l]
0x515379: mov     edi, [esp+454h+arg_10]
0x515380: mov     esi, [esp+454h+arg_C]
0x515387: mov     edx, [esp+454h+a4]
0x51538E: mov     ecx, [esp+454h+arg_4]
0x515395: mov     eax, [esp+454h+a1]
0x51539C: mov     [esp+454h+a3], ebp
0x5153A0: lea     ebp, [esp+454h+var_210]
0x5153A7: push    ebp; UInt16
0x5153A8: push    ebx; l
0x5153A9: push    edi; a6
0x5153AA: push    esi; a5
0x5153AB: push    edx; a4
0x5153AC: mov     edx, [esp+468h+a3]
0x5153B0: push    edx; a3
0x5153B1: push    ecx; a2
0x5153B2: push    eax; a1
0x5153B3: call    Script_ExtractArgs
0x5153B8: add     esp, 20h
0x5153BB: xor     edi, edi
0x5153BD: test    al, al
0x5153BF: jnz     short loc_5153CE
0x5153C1: mov     byte ptr [esp+454h+var_210], al
0x5153C8: mov     [esp+454h+var_440], edi
0x5153CC: jmp     short loc_515403
0x5153CE: mov     al, byte ptr [esp+454h+var_210]
0x5153D5: cmp     al, 63h ; 'c'
0x5153D7: jz      short loc_5153FB
0x5153D9: cmp     al, 66h ; 'f'
0x5153DB: jz      short loc_5153F1
0x5153DD: cmp     al, 73h ; 's'
0x5153DF: jz      short loc_5153E7
0x5153E1: mov     [esp+454h+var_440], edi
0x5153E5: jmp     short loc_515403
0x5153E7: mov     [esp+454h+var_440], 2
0x5153EF: jmp     short loc_515403
0x5153F1: mov     [esp+454h+var_440], 1
0x5153F9: jmp     short loc_515403
0x5153FB: mov     [esp+454h+var_440], 3
0x515403: mov     al, ds:0B06B18h
0x515408: push    offset aDumptexturepal; "<<< DUMPTEXTUREPALETTE results"
0x51540D: mov     [esp+458h+var_439], al
0x515411: mov     byte ptr ds:0B06B18h, 1
0x515418: call    PrintError
0x51541D: mov     ecx, ds:0B42054h
0x515423: mov     edx, ds:0B3FAB8h
0x515429: lea     eax, [edx+ecx]
0x51542C: add     esp, 4
0x51542F: cmp     eax, 100000h
0x515434: mov     [esp+454h+var_310], 0
0x51543C: jb      short loc_515473
0x51543E: test    eax, eax
0x515440: mov     [esp+454h+var_438], eax
0x515444: fild    [esp+454h+var_438]
0x515448: jge     short loc_515450
0x51544A: fadd    dword ptr ds:0A2FC78h
0x515450: fmul    qword ptr ds:0A30530h
0x515456: sub     esp, 8
0x515459: lea     eax, [esp+45Ch+var_310]
0x515460: fstp    [esp+45Ch+var_45C]
0x515463: push    offset a_2fMb; "%.2f Mb"
0x515468: push    eax
0x515469: call    __sprintf
0x51546E: add     esp, 10h
0x515471: jmp     short loc_5154C5
0x515473: cmp     eax, 400h
0x515478: jb      short loc_5154AF
0x51547A: test    eax, eax
0x51547C: mov     [esp+454h+var_438], eax
0x515480: fild    [esp+454h+var_438]
0x515484: jge     short loc_51548C
0x515486: fadd    dword ptr ds:0A2FC78h
0x51548C: fmul    qword ptr ds:0A30550h
0x515492: sub     esp, 8
0x515495: lea     ecx, [esp+45Ch+var_310]
0x51549C: fstp    [esp+45Ch+var_45C]
0x51549F: push    offset a_2fKb; "%.2f Kb"
0x5154A4: push    ecx
0x5154A5: call    __sprintf
0x5154AA: add     esp, 10h
0x5154AD: jmp     short loc_5154C5
0x5154AF: push    eax
0x5154B0: lea     edx, [esp+458h+var_310]
0x5154B7: push    offset aIB; "%i b"
0x5154BC: push    edx
0x5154BD: call    __sprintf
0x5154C2: add     esp, 0Ch
0x5154C5: mov     eax, ds:0B35300h
0x5154CA: mov     ecx, [eax+0Ch]
0x5154CD: mov     eax, [ecx+0Ch]
0x5154D0: lea     edx, [esp+454h+var_310]
0x5154D7: push    edx
0x5154D8: push    eax; ArgList
0x5154D9: push    offset aTexturesInPale; "Textures in Palette : %d : %s"
0x5154DE: call    PrintError
0x5154E3: add     esp, 0Ch
0x5154E6: mov     [esp+454h+var_434], edi
0x5154EA: mov     eax, ds:0B35300h
0x5154EF: mov     edx, [eax+0Ch]
0x5154F2: mov     ecx, [edx+4]
0x5154F5: xor     eax, eax
0x5154F7: cmp     ecx, edi
0x5154F9: mov     [esp+454h+var_4], edi
0x515500: jbe     short loc_515519
0x515502: mov     edx, [edx+8]
0x515505: mov     esi, edx
0x515507: cmp     [esi], edi
0x515509: jnz     loc_515660
0x51550F: add     eax, 1
0x515512: add     esi, 4
0x515515: cmp     eax, ecx
0x515517: jb      short loc_515507
0x515519: xor     eax, eax
0x51551B: xor     ecx, ecx
0x51551D: mov     [esp+454h+a3], eax
0x515521: mov     [esp+454h+var_418], edi
0x515525: mov     [esp+454h+var_420], ecx
0x515529: mov     [esp+454h+var_41C], edi
0x51552D: mov     [esp+454h+var_424], offset ??_7?$NiTPointerList@V?$NiPointer@VNiSourceTexture@@@@@@6B@; const NiTPointerList<NiPointer<NiSourceTexture>>::`vftable'
0x515535: cmp     eax, edi
0x515537: mov     byte ptr [esp+454h+var_4], 1
0x51553F: jz      loc_51571E
0x515545: lea     ecx, [esp+454h+var_434]
0x515549: push    ecx
0x51554A: mov     ecx, ds:0B35300h
0x515550: mov     ecx, [ecx+0Ch]
0x515553: lea     edx, [esp+458h+var_438]
0x515557: push    edx
0x515558: lea     eax, [esp+45Ch+a3]
0x51555C: push    eax
0x51555D: call    sub_7B2600
0x515562: cmp     [esp+454h+var_434], 0
0x515567: jz      loc_51570F
0x51556D: mov     edx, [esp+454h+var_434]
0x515571: mov     eax, [edx+4]
0x515574: test    eax, eax
0x515576: jz      loc_51570F
0x51557C: cmp     eax, 2
0x51557F: jz      loc_51570F
0x515585: mov     esi, edx
0x515587: mov     eax, [esi]
0x515589: mov     edx, [eax+4]
0x51558C: mov     ecx, esi
0x51558E: call    edx
0x515590: test    eax, eax
0x515592: jz      short loc_5155A6
0x515594: cmp     eax, offset dword_B3F95C
0x515599: jz      loc_515668
0x51559F: mov     eax, [eax+4]
0x5155A2: test    eax, eax
0x5155A4: jnz     short loc_515594
0x5155A6: xor     al, al
0x5155A8: neg     al
0x5155AA: sbb     eax, eax
0x5155AC: and     eax, esi
0x5155AE: mov     ebx, eax
0x5155B0: mov     [esp+454h+var_42C], ebx
0x5155B4: jz      short loc_5155C0
0x5155B6: lea     eax, [ebx+4]
0x5155B9: push    eax; lpAddend
0x5155BA: call    dword ptr ds:0A28078h
0x5155C0: mov     eax, [ebx+24h]
0x5155C3: mov     ecx, [eax+60h]
0x5155C6: mov     ebp, [esp+454h+var_420]
0x5155CA: xor     esi, esi
0x5155CC: mov     [esp+454h+var_428], ecx
0x5155D0: mov     [esp+454h+var_414], esi
0x5155D4: cmp     [esp+454h+var_440], esi
0x5155D8: mov     byte ptr [esp+454h+var_4], 3
0x5155E0: jle     loc_5156BD
0x5155E6: test    ebp, ebp
0x5155E8: jz      loc_5156BD
0x5155EE: cmp     esi, [ebp+8]
0x5155F1: lea     edi, [ebp+8]
0x5155F4: mov     [esp+454h+var_438], ebp
0x5155F8: mov     ebp, [ebp+0]
0x5155FB: jz      short loc_51562D
0x5155FD: test    esi, esi
0x5155FF: jz      short loc_515619
0x515601: lea     edx, [esi+4]
0x515604: push    edx; lpAddend
0x515605: call    dword ptr ds:0A2807Ch
0x51560B: test    eax, eax
0x51560D: jnz     short loc_515619
0x51560F: mov     eax, [esi]
0x515611: mov     edx, [eax]
0x515613: push    1
0x515615: mov     ecx, esi
0x515617: call    edx
0x515619: mov     esi, [edi]
0x51561B: test    esi, esi
0x51561D: mov     [esp+454h+var_414], esi
0x515621: jz      short loc_5155E6
0x515623: lea     eax, [esi+4]
0x515626: push    eax; lpAddend
0x515627: call    dword ptr ds:0A28078h
0x51562D: test    esi, esi
0x51562F: jz      short loc_5155E6
0x515631: mov     eax, [esp+454h+var_440]
0x515635: cmp     eax, 1
0x515638: jnz     short loc_51567E
0x51563A: mov     ecx, [esi+38h]
0x51563D: mov     eax, [ebx+38h]
0x515640: mov     dl, [eax]
0x515642: cmp     dl, [ecx]
0x515644: jnz     short loc_51566F
0x515646: test    dl, dl
0x515648: jz      short loc_51565C
0x51564A: mov     dl, [eax+1]
0x51564D: cmp     dl, [ecx+1]
0x515650: jnz     short loc_51566F
0x515652: add     eax, 2
0x515655: add     ecx, 2
0x515658: test    dl, dl
0x51565A: jnz     short loc_515640
0x51565C: xor     eax, eax
0x51565E: jmp     short loc_515674
0x515660: mov     eax, [edx+eax*4]
0x515663: jmp     loc_51551B
0x515668: mov     al, 1
0x51566A: jmp     loc_5155A8
0x51566F: sbb     eax, eax
0x515671: sbb     eax, 0FFFFFFFFh
0x515674: test    eax, eax
0x515676: jg      loc_5155E6
0x51567C: jmp     short loc_5156A4
0x51567E: cmp     eax, 2
0x515681: jnz     short loc_51568F
0x515683: mov     eax, [esi+24h]
0x515686: mov     ecx, [esp+454h+var_428]
0x51568A: cmp     ecx, [eax+60h]
0x51568D: jmp     short loc_51569E
0x51568F: cmp     eax, 3
0x515692: jnz     loc_5155E6
0x515698: mov     eax, [ebx+4]
0x51569B: cmp     eax, [esi+4]
0x51569E: ja      loc_5155E6
0x5156A4: mov     eax, [esp+454h+var_438]
0x5156A8: test    eax, eax
0x5156AA: jz      short loc_5156BD
0x5156AC: lea     edx, [esp+454h+var_42C]
0x5156B0: push    edx
0x5156B1: push    eax
0x5156B2: lea     ecx, [esp+45Ch+var_424]
0x5156B6: call    sub_7C6A20
0x5156BB: jmp     short loc_5156CB
0x5156BD: lea     eax, [esp+454h+var_42C]
0x5156C1: push    eax
0x5156C2: lea     ecx, [esp+458h+var_424]
0x5156C6: call    sub_7C16B0
0x5156CB: test    esi, esi
0x5156CD: mov     byte ptr [esp+454h+var_4], 2
0x5156D5: jz      short loc_5156EF
0x5156D7: lea     ecx, [esi+4]
0x5156DA: push    ecx; lpAddend
0x5156DB: call    dword ptr ds:0A2807Ch
0x5156E1: test    eax, eax
0x5156E3: jnz     short loc_5156EF
0x5156E5: mov     edx, [esi]
0x5156E7: mov     eax, [edx]
0x5156E9: push    1
0x5156EB: mov     ecx, esi
0x5156ED: call    eax
0x5156EF: lea     ecx, [ebx+4]
0x5156F2: push    ecx; lpAddend
0x5156F3: mov     byte ptr [esp+458h+var_4], 1
0x5156FB: call    dword ptr ds:0A2807Ch
0x515701: test    eax, eax
0x515703: jnz     short loc_51570F
0x515705: mov     edx, [ebx]
0x515707: mov     eax, [edx]
0x515709: push    1
0x51570B: mov     ecx, ebx
0x51570D: call    eax
0x51570F: cmp     [esp+454h+a3], 0
0x515714: jnz     loc_515545
0x51571A: mov     ecx, [esp+454h+var_420]
0x51571E: xor     esi, esi
0x515720: mov     ebp, ecx
0x515722: mov     [esp+454h+var_438], esi
0x515726: test    ecx, ecx
0x515728: mov     byte ptr [esp+454h+var_4], 4
0x515730: jz      loc_515868
0x515736: mov     ebx, [esp+454h+var_440]
0x51573A: cmp     esi, [ebp+8]
0x51573D: lea     edi, [ebp+8]
0x515740: mov     ebp, [ebp+0]
0x515743: jz      short loc_515779
0x515745: test    esi, esi
0x515747: jz      short loc_515761
0x515749: lea     ecx, [esi+4]
0x51574C: push    ecx; lpAddend
0x51574D: call    dword ptr ds:0A2807Ch
0x515753: test    eax, eax
0x515755: jnz     short loc_515761
0x515757: mov     edx, [esi]
0x515759: mov     eax, [edx]
0x51575B: push    1
0x51575D: mov     ecx, esi
0x51575F: call    eax
0x515761: mov     esi, [edi]
0x515763: test    esi, esi
0x515765: mov     [esp+454h+var_438], esi
0x515769: jz      loc_515860
0x51576F: lea     ecx, [esi+4]
0x515772: push    ecx; lpAddend
0x515773: call    dword ptr ds:0A28078h
0x515779: test    esi, esi
0x51577B: jz      loc_515860
0x515781: mov     [esp+454h+ArgList], 0
0x515786: mov     eax, [esi+24h]
0x515789: mov     edx, [eax+60h]
0x51578C: fild    dword ptr [eax+60h]
0x51578F: test    edx, edx
0x515791: jge     short loc_515799
0x515793: fadd    dword ptr ds:0A2FC78h
0x515799: fstp    [esp+454h+var_440]
0x51579D: sub     esp, 8
0x5157A0: fld     dword ptr ds:0A3F514h
0x5157A6: fld     [esp+45Ch+var_440]
0x5157AA: fcom    st(1)
0x5157AC: fnstsw  ax
0x5157AE: test    ah, 1
0x5157B1: jnz     short loc_5157F2
0x5157B3: fld     qword ptr ds:0A30550h
0x5157B9: fmul    st(1), st
0x5157BB: fxch    st(1)
0x5157BD: fstp    [esp+45Ch+var_440]
0x5157C1: fld     [esp+45Ch+var_440]
0x5157C5: fcom    st(2)
0x5157C7: fnstsw  ax
0x5157C9: fstp    st(2)
0x5157CB: test    ah, 1
0x5157CE: jnz     short loc_5157E1
0x5157D0: fmulp   st(1), st
0x5157D2: lea     eax, [esp+45Ch+ArgList]
0x5157D6: fstp    [esp+45Ch+var_45C]
0x5157D9: push    offset a_2fMb; "%.2f Mb"
0x5157DE: push    eax
0x5157DF: jmp     short loc_515801
0x5157E1: fstp    st
0x5157E3: lea     ecx, [esp+45Ch+ArgList]
0x5157E7: fstp    [esp+45Ch+var_45C]
0x5157EA: push    offset a_2fKb; "%.2f Kb"
0x5157EF: push    ecx
0x5157F0: jmp     short loc_515801
0x5157F2: fstp    st(1)
0x5157F4: lea     edx, [esp+45Ch+ArgList]
0x5157F8: fstp    [esp+45Ch+var_45C]
0x5157FB: push    offset a_2fB; "%.2f b"
0x515800: push    edx
0x515801: call    __sprintf
0x515806: mov     eax, ebx
0x515808: add     esp, 10h
0x51580B: sub     eax, 2
0x51580E: jz      short loc_515843
0x515810: sub     eax, 1
0x515813: jz      short loc_51582C
0x515815: mov     eax, [esi+4]
0x515818: mov     ecx, [esi+38h]
0x51581B: lea     edx, [esp+454h+ArgList]
0x51581F: push    edx
0x515820: add     eax, 0FFFFFFFDh
0x515823: push    eax
0x515824: push    ecx
0x515825: push    offset aFSCISS; "  f %s : c %i : s %s"
0x51582A: jmp     short loc_515858
0x51582C: mov     eax, [esi+38h]
0x51582F: mov     ecx, [esi+4]
0x515832: push    eax
0x515833: lea     eax, [esp+458h+ArgList]
0x515837: push    eax
0x515838: add     ecx, 0FFFFFFFDh
0x51583B: push    ecx
0x51583C: push    offset aCISSFS; "  c %i : s %s : f %s"
0x515841: jmp     short loc_515858
0x515843: mov     eax, [esi+38h]
0x515846: mov     ecx, [esi+4]
0x515849: push    eax
0x51584A: add     ecx, 0FFFFFFFDh
0x51584D: push    ecx
0x51584E: lea     ecx, [esp+45Ch+ArgList]
0x515852: push    ecx; ArgList
0x515853: push    offset aSSCIFS; "  s %s : c %i : f %s"
0x515858: call    PrintError
0x51585D: add     esp, 10h
0x515860: test    ebp, ebp
0x515862: jnz     loc_51573A
0x515868: lea     ecx, [esp+454h+var_424]
0x51586C: call    NiTPointerList__FreeAllNodes
0x515871: push    offset aDumptexturep_0; ">>> DUMPTEXTUREPALETTE results"
0x515876: call    PrintError
0x51587B: mov     dl, [esp+458h+var_439]
0x51587F: add     esp, 4
0x515882: test    esi, esi
0x515884: mov     ds:0B06B18h, dl
0x51588A: mov     byte ptr [esp+454h+var_4], 1
0x515892: jz      short loc_5158AC
0x515894: lea     eax, [esi+4]
0x515897: push    eax; lpAddend
0x515898: call    dword ptr ds:0A2807Ch
0x51589E: test    eax, eax
0x5158A0: jnz     short loc_5158AC
0x5158A2: mov     edx, [esi]
0x5158A4: mov     eax, [edx]
0x5158A6: push    1
0x5158A8: mov     ecx, esi
0x5158AA: call    eax
0x5158AC: lea     ecx, [esp+454h+var_424]
0x5158B0: mov     byte ptr [esp+454h+var_4], 0
0x5158B8: call    ??1?$NiTPointerList@V?$NiPointer@VNiSourceTexture@@@@@@UAE@XZ; NiTPointerList<NiPointer<NiSourceTexture>>::~NiTPointerList<NiPointer<NiSourceTexture>>(void)
0x5158BD: mov     esi, [esp+454h+var_434]
0x5158C1: test    esi, esi
0x5158C3: mov     [esp+454h+var_4], 0FFFFFFFFh
0x5158CE: jz      short loc_5158E8
0x5158D0: lea     ecx, [esi+4]
0x5158D3: push    ecx; lpAddend
0x5158D4: call    dword ptr ds:0A2807Ch
0x5158DA: test    eax, eax
0x5158DC: jnz     short loc_5158E8
0x5158DE: mov     edx, [esi]
0x5158E0: mov     eax, [edx]
0x5158E2: push    1
0x5158E4: mov     ecx, esi
0x5158E6: call    eax
0x5158E8: mov     al, 1
0x5158EA: mov     ecx, dword ptr [esp+454h+var_C]
0x5158F1: mov     large fs:0, ecx
0x5158F8: pop     ecx
0x5158F9: pop     edi
0x5158FA: pop     esi
0x5158FB: pop     ebp
0x5158FC: pop     ebx
0x5158FD: mov     ecx, [esp+440h+var_10]
0x515904: xor     ecx, esp
0x515906: call    @__security_check_cookie@4; __security_check_cookie(x)
0x51590B: add     esp, 440h
0x515911: retn
