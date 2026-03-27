0x5A82D0: sub     esp, 14h
0x5A82D3: push    ebx
0x5A82D4: xor     ebx, ebx
0x5A82D6: cmp     ds:0B3B350h, ebx
0x5A82DC: jz      loc_5A83E5
0x5A82E2: cmp     ds:0B3B354h, ebx
0x5A82E8: jz      loc_5A83E5
0x5A82EE: mov     ecx, ds:0B333C4h
0x5A82F4: call    Actor_IsSneaking
0x5A82F9: test    al, al
0x5A82FB: jz      loc_5A83A1
0x5A8301: call    InterfaceManager_IsMenuMode
0x5A8306: test    al, al
0x5A8308: jnz     loc_5A83A1
0x5A830E: mov     eax, ds:0B333C4h
0x5A8313: fld     dword ptr ds:0B140BCh
0x5A8319: mov     ecx, ds:0B3B350h
0x5A831F: sub     esp, 8
0x5A8322: cmp     [eax+588h], bl
0x5A8328: fstp    [esp+20h+var_1C]; float
0x5A832C: jz      short loc_5A8332
0x5A832E: fldz
0x5A8330: jmp     short loc_5A8338
0x5A8332: fld     dword ptr ds:0A40098h
0x5A8338: fstp    [esp+20h+var_20]; float
0x5A833B: push    0FB0h
0x5A8340: call    Tile_GetFloat
0x5A8345: push    ecx
0x5A8346: mov     ecx, ds:0B3B350h; int
0x5A834C: fstp    [esp+24h+var_24]; float
0x5A834F: push    0FB0h; int
0x5A8354: call    sub_589980
0x5A8359: fld     dword ptr ds:0B140C4h
0x5A835F: mov     ecx, ds:0B3B354h
0x5A8365: sub     esp, 8
0x5A8368: fstp    [esp+20h+var_1C]; float
0x5A836C: fld     dword ptr ds:0B140B8h
0x5A8372: fstp    [esp+20h+var_20]; float
0x5A8375: push    0FB6h
0x5A837A: call    Tile_GetFloat
0x5A837F: push    ecx
0x5A8380: mov     ecx, ds:0B3B354h; int
0x5A8386: fstp    [esp+24h+var_24]; float
0x5A8389: push    0FB6h; int
0x5A838E: call    sub_589980
0x5A8393: mov     byte ptr ds:0B3B361h, 1
0x5A839A: call    sub_5A80D0
0x5A839F: jmp     short loc_5A83E5
0x5A83A1: cmp     ds:0B3B361h, bl
0x5A83A7: jz      short loc_5A83E5
0x5A83A9: fld     dword ptr ds:0B140C4h
0x5A83AF: mov     ecx, ds:0B3B354h
0x5A83B5: sub     esp, 8
0x5A83B8: fstp    [esp+20h+var_1C]; float
0x5A83BC: fldz
0x5A83BE: fstp    [esp+20h+var_20]; float
0x5A83C1: push    0FB6h
0x5A83C6: call    Tile_GetFloat
0x5A83CB: push    ecx
0x5A83CC: mov     ecx, ds:0B3B354h; int
0x5A83D2: fstp    [esp+24h+var_24]; float
0x5A83D5: push    0FB6h; int
0x5A83DA: call    sub_589980
0x5A83DF: mov     ds:0B3B361h, bl
0x5A83E5: cmp     ds:0B3B358h, ebx
0x5A83EB: jz      loc_5A86FA
0x5A83F1: cmp     ds:0B14E90h, bl
0x5A83F7: jnz     loc_5A86FA
0x5A83FD: mov     [esp+18h+var_11], bl
0x5A8401: call    InterfaceManager_IsMenuMode
0x5A8406: test    al, al
0x5A8408: jnz     loc_5A86A7
0x5A840E: mov     ecx, ds:0B3B358h
0x5A8414: fld     dword ptr [ecx+58h]
0x5A8417: fstp    [esp+18h+var_10]
0x5A841B: fldz
0x5A841D: fcom    [esp+18h+var_10]
0x5A8421: fnstsw  ax
0x5A8423: test    ah, 41h
0x5A8426: jnz     short loc_5A842C
0x5A8428: fst     [esp+18h+var_10]
0x5A842C: mov     ecx, ds:0B3B364h
0x5A8432: cmp     ecx, ebx
0x5A8434: jz      short loc_5A848F
0x5A8436: mov     edx, [ecx]
0x5A8438: fstp    st
0x5A843A: mov     eax, [edx+198h]
0x5A8440: push    ebx
0x5A8441: call    eax
0x5A8443: test    al, al
0x5A8445: jz      short loc_5A8483
0x5A8447: fld     dword ptr ds:0B140C0h
0x5A844D: mov     ecx, ds:0B3B358h
0x5A8453: sub     esp, 8
0x5A8456: fstp    [esp+20h+var_1C]; float
0x5A845A: fldz
0x5A845C: fstp    [esp+20h+var_20]; float
0x5A845F: push    0FB6h
0x5A8464: call    Tile_GetFloat
0x5A8469: push    ecx
0x5A846A: mov     ecx, ds:0B3B358h; int
0x5A8470: fstp    [esp+24h+var_24]; float
0x5A8473: push    0FB6h; int
0x5A8478: call    sub_589980
0x5A847D: mov     ds:0B3B362h, bl
0x5A8483: mov     ecx, ds:0B3B364h
0x5A8489: cmp     ecx, ebx
0x5A848B: jnz     short loc_5A84D7
0x5A848D: fldz
0x5A848F: fld     dword ptr ds:0B140C0h
0x5A8495: mov     ecx, ds:0B3B358h
0x5A849B: sub     esp, 8
0x5A849E: fstp    [esp+20h+var_1C]; float
0x5A84A2: fstp    [esp+20h+var_20]; float
0x5A84A5: push    0FB6h
0x5A84AA: call    Tile_GetFloat
0x5A84AF: push    ecx
0x5A84B0: mov     ecx, ds:0B3B358h; int
0x5A84B6: fstp    [esp+24h+var_24]; float
0x5A84B9: push    0FB6h; int
0x5A84BE: call    sub_589980
0x5A84C3: mov     ecx, ds:0B3B364h
0x5A84C9: cmp     ecx, ebx
0x5A84CB: mov     ds:0B3B362h, bl
0x5A84D1: jz      loc_5A86A7
0x5A84D7: mov     eax, [ecx+58h]
0x5A84DA: cmp     eax, ebx
0x5A84DC: jz      short loc_5A84F4
0x5A84DE: mov     edx, [eax]
0x5A84E0: mov     ecx, eax
0x5A84E2: mov     eax, [edx+468h]
0x5A84E8: push    8
0x5A84EA: call    eax
0x5A84EC: mov     ecx, ds:0B3B364h
0x5A84F2: jmp     short loc_5A84F6
0x5A84F4: fldz
0x5A84F6: push    8
0x5A84F8: fstp    [esp+1Ch+var_C]
0x5A84FC: call    Actor_GetBaseCalcAVf
0x5A8501: fadd    [esp+18h+var_C]
0x5A8505: mov     ecx, ds:0B3B364h
0x5A850B: mov     edx, [ecx]
0x5A850D: mov     eax, [edx+288h]
0x5A8513: fstp    [esp+18h+var_8]
0x5A8517: push    8
0x5A8519: call    eax
0x5A851B: fstp    [esp+18h+var_C]
0x5A851F: fld     [esp+18h+var_C]
0x5A8523: fld     [esp+18h+var_8]
0x5A8527: fcompp
0x5A8529: fnstsw  ax
0x5A852B: test    ah, 41h
0x5A852E: jnz     loc_5A86A7
0x5A8534: mov     ecx, ds:0B3B358h
0x5A853A: push    ebx; int
0x5A853B: push    offset ??_R0?AVTile3D@@@8; struct TypeDescriptor *
0x5A8540: push    offset ??_R0?AVTile@@@8; struct _s_RTTICompleteObjectLocator *
0x5A8545: push    ebx; int
0x5A8546: push    ecx; void *
0x5A8547: call    OblivionDynamicCast
0x5A854C: mov     eax, [eax+44h]
0x5A854F: add     esp, 14h
0x5A8552: cmp     eax, ebx
0x5A8554: jz      loc_5A86FA
0x5A855A: fld     dword ptr [eax+30h]
0x5A855D: fmul    qword ptr ds:0A6C040h
0x5A8563: fstp    [esp+18h+var_4]
0x5A8567: fld     [esp+18h+var_4]
0x5A856B: fld     st
0x5A856D: fld     [esp+18h+var_C]
0x5A8571: fdiv    [esp+18h+var_8]
0x5A8575: fstp    [esp+18h+var_4]
0x5A8579: fld     [esp+18h+var_4]
0x5A857D: fmul    st, st(1)
0x5A857F: fsubp   st(1), st
0x5A8581: fstp    [esp+18h+var_C]
0x5A8585: fld     [esp+18h+var_C]
0x5A8589: fcom    st(1)
0x5A858B: fnstsw  ax
0x5A858D: test    ah, 41h
0x5A8590: jnz     short loc_5A859E
0x5A8592: fstp    st
0x5A8594: fstp    [esp+18h+var_C]
0x5A8598: fld     [esp+18h+var_C]
0x5A859C: jmp     short loc_5A85A0
0x5A859E: fstp    st(1)
0x5A85A0: cmp     ds:0B3B360h, bl
0x5A85A6: jnz     short loc_5A8604
0x5A85A8: fld     [esp+18h+var_10]
0x5A85AC: fcom    st(1)
0x5A85AE: fnstsw  ax
0x5A85B0: test    ah, 5
0x5A85B3: jp      short loc_5A85D8
0x5A85B5: fadd    dword ptr ds:0B33E9Ch
0x5A85BB: fstp    [esp+18h+var_10]
0x5A85BF: fld     [esp+18h+var_10]
0x5A85C3: fcom    st(1)
0x5A85C5: fnstsw  ax
0x5A85C7: test    ah, 41h
0x5A85CA: jnz     short loc_5A8618
0x5A85CC: fstp    st
0x5A85CE: fstp    [esp+18h+var_10]
0x5A85D2: fld     [esp+18h+var_10]
0x5A85D6: jmp     short loc_5A861A
0x5A85D8: fcom    st(1)
0x5A85DA: fnstsw  ax
0x5A85DC: test    ah, 41h
0x5A85DF: jnz     short loc_5A8618
0x5A85E1: fsub    dword ptr ds:0B33E9Ch
0x5A85E7: fstp    [esp+18h+var_10]
0x5A85EB: fld     [esp+18h+var_10]
0x5A85EF: fcom    st(1)
0x5A85F1: fnstsw  ax
0x5A85F3: test    ah, 5
0x5A85F6: jp      short loc_5A8618
0x5A85F8: fstp    st
0x5A85FA: fstp    [esp+18h+var_10]
0x5A85FE: fld     [esp+18h+var_10]
0x5A8602: jmp     short loc_5A861A
0x5A8604: fstp    st
0x5A8606: mov     ds:0B3B360h, bl
0x5A860C: fldz
0x5A860E: fstp    [esp+18h+var_10]
0x5A8612: fld     [esp+18h+var_10]
0x5A8616: jmp     short loc_5A861A
0x5A8618: fstp    st(1)
0x5A861A: mov     edx, ds:0B3B358h
0x5A8620: fstp    dword ptr [edx+58h]
0x5A8623: fld     dword ptr ds:0B3B35Ch
0x5A8629: fsub    dword ptr ds:0B33E9Ch
0x5A862F: fstp    dword ptr ds:0B3B35Ch
0x5A8635: fldz
0x5A8637: fcomp   dword ptr ds:0B3B35Ch
0x5A863D: fnstsw  ax
0x5A863F: test    ah, 5
0x5A8642: jp      loc_5A86FF
0x5A8648: mov     ecx, ds:0B3B364h
0x5A864E: mov     eax, [ecx]
0x5A8650: mov     edx, [eax+198h]
0x5A8656: push    ebx
0x5A8657: call    edx
0x5A8659: test    al, al
0x5A865B: jnz     loc_5A86FF
0x5A8661: fld     dword ptr ds:0B140C0h
0x5A8667: mov     ecx, ds:0B3B358h
0x5A866D: sub     esp, 8
0x5A8670: fstp    [esp+20h+var_1C]; float
0x5A8674: mov     [esp+20h+var_11], 1
0x5A8679: fld     dword ptr ds:0A40098h
0x5A867F: fstp    [esp+20h+var_20]; float
0x5A8682: push    0FB6h
0x5A8687: call    Tile_GetFloat
0x5A868C: push    ecx
0x5A868D: mov     ecx, ds:0B3B358h; int
0x5A8693: fstp    [esp+24h+var_24]; float
0x5A8696: push    0FB6h; int
0x5A869B: call    sub_589980
0x5A86A0: mov     byte ptr ds:0B3B362h, 1
0x5A86A7: call    InterfaceManager_IsMenuMode
0x5A86AC: test    al, al
0x5A86AE: jnz     short loc_5A86B6
0x5A86B0: cmp     [esp+18h+var_11], bl
0x5A86B4: jnz     short loc_5A86FA
0x5A86B6: cmp     ds:0B14E90h, bl
0x5A86BC: jnz     short loc_5A86FA
0x5A86BE: fld     dword ptr ds:0B140C0h
0x5A86C4: mov     ecx, ds:0B3B358h
0x5A86CA: sub     esp, 8
0x5A86CD: fstp    [esp+20h+var_1C]; float
0x5A86D1: fldz
0x5A86D3: fstp    [esp+20h+var_20]; float
0x5A86D6: push    0FB6h
0x5A86DB: call    Tile_GetFloat
0x5A86E0: push    ecx
0x5A86E1: mov     ecx, ds:0B3B358h; int
0x5A86E7: fstp    [esp+24h+var_24]; float
0x5A86EA: push    0FB6h; int
0x5A86EF: call    sub_589980
0x5A86F4: mov     ds:0B3B362h, bl
0x5A86FA: pop     ebx
0x5A86FB: add     esp, 14h
0x5A86FE: retn
0x5A86FF: mov     [esp+18h+var_11], bl
0x5A8703: jmp     short loc_5A86A7
