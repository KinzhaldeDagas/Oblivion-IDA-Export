0x462280: sub     esp, 28h
0x462283: mov     eax, ds:0B33A98h
0x462288: push    ebx
0x462289: push    ebp
0x46228A: push    esi
0x46228B: mov     esi, ecx
0x46228D: mov     edx, [esi+18h]
0x462290: mov     ecx, [eax+8C0h]
0x462296: shr     edx, 9
0x462299: test    dl, 1
0x46229C: push    edi; ArgList
0x46229D: mov     edi, [esp+38h+arg_0]
0x4622A1: mov     [esp+38h+var_20], ecx
0x4622A5: mov     ebp, 1
0x4622AA: mov     ebx, 4
0x4622AF: jz      short loc_4622B9
0x4622B1: add     [esi+90h], ebx
0x4622B7: jmp     short loc_4622D2
0x4622B9: mov     edx, [edi+8]
0x4622BC: push    ebp
0x4622BD: lea     eax, [esp+3Ch+var_24]
0x4622C1: push    eax
0x4622C2: push    ebx
0x4622C3: lea     ecx, [esp+44h+var_20]
0x4622C7: push    ecx
0x4622C8: push    edi
0x4622C9: mov     [esp+4Ch+var_24], ebp
0x4622CD: call    edx
0x4622CF: add     esp, 14h
0x4622D2: mov     ecx, ds:0B333A0h
0x4622D8: call    TES__GetCurrentWorldspace
0x4622DD: mov     ecx, [esi+18h]
0x4622E0: mov     eax, [eax+0Ch]
0x4622E3: shr     ecx, 9
0x4622E6: test    cl, 1
0x4622E9: mov     [esp+38h+var_1C], eax
0x4622ED: jz      short loc_4622F7
0x4622EF: add     [esi+90h], ebx
0x4622F5: jmp     short loc_462310
0x4622F7: mov     ecx, [edi+8]
0x4622FA: push    ebp
0x4622FB: lea     edx, [esp+3Ch+var_24]
0x4622FF: push    edx
0x462300: push    ebx
0x462301: lea     eax, [esp+44h+var_1C]
0x462305: push    eax
0x462306: push    edi
0x462307: mov     [esp+4Ch+var_24], ebp
0x46230B: call    ecx
0x46230D: add     esp, 14h
0x462310: mov     eax, ds:0B333A0h
0x462315: mov     edx, [eax+20h]
0x462318: mov     ecx, [esi+18h]
0x46231B: mov     [esp+38h+var_18], edx
0x46231F: mov     eax, [eax+24h]
0x462322: shr     ecx, 9
0x462325: test    cl, 1
0x462328: mov     [esp+38h+var_14], eax
0x46232C: jz      short loc_462336
0x46232E: add     [esi+90h], ebx
0x462334: jmp     short loc_46234F
0x462336: mov     ecx, [edi+8]
0x462339: push    ebp
0x46233A: lea     edx, [esp+3Ch+var_24]
0x46233E: push    edx
0x46233F: push    ebx
0x462340: lea     eax, [esp+44h+var_18]
0x462344: push    eax
0x462345: push    edi
0x462346: mov     [esp+4Ch+var_24], ebp
0x46234A: call    ecx
0x46234C: add     esp, 14h
0x46234F: mov     edx, [esi+18h]
0x462352: shr     edx, 9
0x462355: test    dl, 1
0x462358: jz      short loc_462362
0x46235A: add     [esi+90h], ebx
0x462360: jmp     short loc_46237B
0x462362: mov     edx, [edi+8]
0x462365: push    ebp
0x462366: lea     eax, [esp+3Ch+var_24]
0x46236A: push    eax
0x46236B: push    ebx
0x46236C: lea     ecx, [esp+44h+var_14]
0x462370: push    ecx
0x462371: push    edi
0x462372: mov     [esp+4Ch+var_24], ebp
0x462376: call    edx
0x462378: add     esp, 14h
0x46237B: mov     ecx, ds:0B333C4h; this
0x462381: call    TESObjectREFR_GetWorldSpace
0x462386: mov     ecx, ds:0B333C4h; this
0x46238C: mov     ebp, eax
0x46238E: call    TESObjectREFR_GetParentCell
0x462393: test    ebp, ebp
0x462395: mov     ebx, eax
0x462397: jnz     short loc_4623AA
0x462399: test    ebx, ebx
0x46239B: jnz     short loc_4623AA
0x46239D: push    offset aPlayerHasNoWor; "Player has no worldspace or parent cell"...
0x4623A2: call    sub_404EC0
0x4623A7: add     esp, 4
0x4623AA: test    ebp, ebp
0x4623AC: mov     [esp+38h+var_28], 0
0x4623B4: jz      short loc_4623BF
0x4623B6: mov     eax, [ebp+0Ch]
0x4623B9: mov     [esp+38h+var_28], eax
0x4623BD: jmp     short loc_4623CA
0x4623BF: test    ebx, ebx
0x4623C1: jz      short loc_4623CA
0x4623C3: mov     ecx, [ebx+0Ch]
0x4623C6: mov     [esp+38h+var_28], ecx
0x4623CA: mov     eax, ds:0B333C4h
0x4623CF: mov     edx, [eax+2Ch]
0x4623D2: mov     [esp+38h+var_C], edx
0x4623D6: mov     ecx, [eax+30h]
0x4623D9: mov     [esp+38h+var_8], ecx
0x4623DD: mov     edx, [eax+34h]
0x4623E0: mov     eax, [esi+18h]
0x4623E3: shr     eax, 9
0x4623E6: test    al, 1
0x4623E8: mov     [esp+38h+var_4], edx
0x4623EC: jz      short loc_4623F7
0x4623EE: add     dword ptr [esi+90h], 4
0x4623F5: jmp     short loc_462416
0x4623F7: mov     eax, [edi+8]
0x4623FA: push    1
0x4623FC: lea     ecx, [esp+3Ch+var_24]
0x462400: push    ecx
0x462401: push    4
0x462403: lea     edx, [esp+44h+var_28]
0x462407: push    edx
0x462408: push    edi
0x462409: mov     [esp+4Ch+var_24], 1
0x462411: call    eax
0x462413: add     esp, 14h
0x462416: mov     ecx, [esi+18h]
0x462419: shr     ecx, 9
0x46241C: mov     ebx, 1
0x462421: test    bl, cl
0x462423: jz      short loc_46242E
0x462425: add     dword ptr [esi+90h], 0Ch
0x46242C: jmp     short loc_462448
0x46242E: mov     ecx, [edi+8]
0x462431: push    ebx
0x462432: lea     edx, [esp+3Ch+var_24]
0x462436: push    edx
0x462437: push    0Ch
0x462439: lea     eax, [esp+44h+var_C]
0x46243D: push    eax
0x46243E: push    edi
0x46243F: mov     [esp+4Ch+var_24], ebx
0x462443: call    ecx
0x462445: add     esp, 14h
0x462448: push    edi
0x462449: mov     ecx, esi
0x46244B: call    sub_45F820
0x462450: mov     ecx, ds:0B333A0h
0x462456: call    sub_441000
0x46245B: mov     edx, [esi+18h]
0x46245E: movzx   eax, ax
0x462461: shr     edx, 9
0x462464: test    dl, 1
0x462467: mov     [esp+38h+arg_0], eax
0x46246B: jz      short loc_462476
0x46246D: add     dword ptr [esi+90h], 2
0x462474: jmp     short loc_462494
0x462476: mov     edx, [edi+8]
0x462479: push    ebx
0x46247A: lea     eax, [esp+3Ch+var_24]
0x46247E: push    eax
0x46247F: push    2
0x462481: lea     ecx, [esp+44h+arg_0]
0x462485: push    ecx
0x462486: push    edi
0x462487: mov     [esp+4Ch+var_24], ebx
0x46248B: call    edx
0x46248D: mov     eax, [esp+4Ch+arg_0]
0x462491: add     esp, 14h
0x462494: test    ax, ax
0x462497: jz      loc_462526
0x46249D: mov     ecx, [esi+40h]
0x4624A0: test    ecx, ecx
0x4624A2: jz      short loc_4624B6
0x4624A4: movzx   eax, ax
0x4624A7: push    offset aTesClass; "TES Class"
0x4624AC: push    eax
0x4624AD: call    sub_4531B0
0x4624B2: mov     eax, [esp+38h+arg_0]
0x4624B6: movzx   eax, ax
0x4624B9: push    ebx
0x4624BA: push    eax
0x4624BB: mov     ecx, offset FormHeap
0x4624C0: call    j_MemoryHeap_Alloc
0x4624C5: test    eax, eax
0x4624C7: mov     [esi+14h], eax
0x4624CA: jnz     short loc_4624D9
0x4624CC: push    offset aCouldNotCreate; "Could not create save buffer, out of me"...
0x4624D1: call    sub_404EC0
0x4624D6: add     esp, 4
0x4624D9: mov     ecx, ds:0B333A0h
0x4624DF: mov     ebp, [esi+14h]
0x4624E2: call    sub_4410D0
0x4624E7: mov     ecx, [esi+18h]
0x4624EA: movzx   eax, word ptr [esp+38h+arg_0]
0x4624EF: shr     ecx, 9
0x4624F2: test    cl, 1
0x4624F5: jz      short loc_4624FF
0x4624F7: add     [esi+90h], eax
0x4624FD: jmp     short loc_462514
0x4624FF: push    ebx
0x462500: lea     edx, [esp+3Ch+var_24]
0x462504: push    edx
0x462505: push    eax
0x462506: mov     eax, [edi+8]
0x462509: push    ebp
0x46250A: push    edi
0x46250B: mov     [esp+4Ch+var_24], ebx
0x46250F: call    eax
0x462511: add     esp, 14h
0x462514: push    ebp; void *
0x462515: mov     ecx, offset FormHeap
0x46251A: call    MemoryHeap_Free_checked
0x46251F: mov     dword ptr [esi+14h], 0
0x462526: mov     ecx, offset ActorProcessManager_ptr
0x46252B: call    sub_677010
0x462530: mov     ecx, [esi+18h]
0x462533: movzx   eax, ax
0x462536: shr     ecx, 9
0x462539: test    cl, 1
0x46253C: mov     [esp+38h+arg_0], eax
0x462540: jz      short loc_46254B
0x462542: add     dword ptr [esi+90h], 2
0x462549: jmp     short loc_462569
0x46254B: mov     ecx, [edi+8]
0x46254E: push    ebx
0x46254F: lea     edx, [esp+3Ch+var_24]
0x462553: push    edx
0x462554: push    2
0x462556: lea     eax, [esp+44h+arg_0]
0x46255A: push    eax
0x46255B: push    edi
0x46255C: mov     [esp+4Ch+var_24], ebx
0x462560: call    ecx
0x462562: mov     eax, [esp+4Ch+arg_0]
0x462566: add     esp, 14h
0x462569: test    ax, ax
0x46256C: jz      loc_4625FA
0x462572: mov     ecx, [esi+40h]
0x462575: test    ecx, ecx
0x462577: jz      short loc_46258B
0x462579: movzx   edx, ax
0x46257C: push    offset aProcessListsCl; "Process Lists Class"
0x462581: push    edx
0x462582: call    sub_4531B0
0x462587: mov     eax, [esp+38h+arg_0]
0x46258B: movzx   eax, ax
0x46258E: push    ebx
0x46258F: push    eax
0x462590: mov     ecx, offset FormHeap
0x462595: call    j_MemoryHeap_Alloc
0x46259A: test    eax, eax
0x46259C: mov     [esi+14h], eax
0x46259F: jnz     short loc_4625AE
0x4625A1: push    offset aCouldNotCreate; "Could not create save buffer, out of me"...
0x4625A6: call    sub_404EC0
0x4625AB: add     esp, 4
0x4625AE: mov     ebp, [esi+14h]
0x4625B1: mov     ecx, offset ActorProcessManager_ptr
0x4625B6: call    sub_677060
0x4625BB: mov     ecx, [esi+18h]
0x4625BE: movzx   eax, word ptr [esp+38h+arg_0]
0x4625C3: shr     ecx, 9
0x4625C6: test    cl, 1
0x4625C9: jz      short loc_4625D3
0x4625CB: add     [esi+90h], eax
0x4625D1: jmp     short loc_4625E8
0x4625D3: push    ebx
0x4625D4: lea     edx, [esp+3Ch+var_24]
0x4625D8: push    edx
0x4625D9: push    eax
0x4625DA: mov     eax, [edi+8]
0x4625DD: push    ebp
0x4625DE: push    edi
0x4625DF: mov     [esp+4Ch+var_24], ebx
0x4625E3: call    eax
0x4625E5: add     esp, 14h
0x4625E8: push    ebp; void *
0x4625E9: mov     ecx, offset FormHeap
0x4625EE: call    MemoryHeap_Free_checked
0x4625F3: mov     dword ptr [esi+14h], 0
0x4625FA: mov     ecx, offset dword_B3BDB0
0x4625FF: call    sub_67C000
0x462604: mov     ecx, [esi+18h]
0x462607: movzx   eax, ax
0x46260A: shr     ecx, 9
0x46260D: test    cl, 1
0x462610: mov     [esp+38h+arg_0], eax
0x462614: jz      short loc_46261F
0x462616: add     dword ptr [esi+90h], 2
0x46261D: jmp     short loc_46263D
0x46261F: mov     ecx, [edi+8]
0x462622: push    ebx
0x462623: lea     edx, [esp+3Ch+var_24]
0x462627: push    edx
0x462628: push    2
0x46262A: lea     eax, [esp+44h+arg_0]
0x46262E: push    eax
0x46262F: push    edi
0x462630: mov     [esp+4Ch+var_24], ebx
0x462634: call    ecx
0x462636: mov     eax, [esp+4Ch+arg_0]
0x46263A: add     esp, 14h
0x46263D: test    ax, ax
0x462640: jz      loc_4626CE
0x462646: mov     ecx, [esi+40h]
0x462649: test    ecx, ecx
0x46264B: jz      short loc_46265F
0x46264D: movzx   edx, ax
0x462650: push    offset aSpectatorEvent; "Spectator Events"
0x462655: push    edx
0x462656: call    sub_4531B0
0x46265B: mov     eax, [esp+38h+arg_0]
0x46265F: movzx   eax, ax
0x462662: push    ebx
0x462663: push    eax
0x462664: mov     ecx, offset FormHeap
0x462669: call    j_MemoryHeap_Alloc
0x46266E: test    eax, eax
0x462670: mov     [esi+14h], eax
0x462673: jnz     short loc_462682
0x462675: push    offset aCouldNotCreate; "Could not create save buffer, out of me"...
0x46267A: call    sub_404EC0
0x46267F: add     esp, 4
0x462682: mov     ebp, [esi+14h]
0x462685: mov     ecx, offset dword_B3BDB0
0x46268A: call    sub_67C0D0
0x46268F: mov     ecx, [esi+18h]
0x462692: movzx   eax, word ptr [esp+38h+arg_0]
0x462697: shr     ecx, 9
0x46269A: test    cl, 1
0x46269D: jz      short loc_4626A7
0x46269F: add     [esi+90h], eax
0x4626A5: jmp     short loc_4626BC
0x4626A7: push    ebx
0x4626A8: lea     edx, [esp+3Ch+var_24]
0x4626AC: push    edx
0x4626AD: push    eax
0x4626AE: mov     eax, [edi+8]
0x4626B1: push    ebp
0x4626B2: push    edi
0x4626B3: mov     [esp+4Ch+var_24], ebx
0x4626B7: call    eax
0x4626B9: add     esp, 14h
0x4626BC: push    ebp; void *
0x4626BD: mov     ecx, offset FormHeap
0x4626C2: call    MemoryHeap_Free_checked
0x4626C7: mov     dword ptr [esi+14h], 0
0x4626CE: call    Sky_CreateOrGetGlobalObject
0x4626D3: mov     ecx, eax
0x4626D5: call    sub_5406F0
0x4626DA: mov     ecx, [esi+18h]
0x4626DD: movzx   eax, ax
0x4626E0: shr     ecx, 9
0x4626E3: test    cl, 1
0x4626E6: mov     [esp+38h+arg_0], eax
0x4626EA: jz      short loc_4626F5
0x4626EC: add     dword ptr [esi+90h], 2
0x4626F3: jmp     short loc_462713
0x4626F5: mov     ecx, [edi+8]
0x4626F8: push    ebx
0x4626F9: lea     edx, [esp+3Ch+var_24]
0x4626FD: push    edx
0x4626FE: push    2
0x462700: lea     eax, [esp+44h+arg_0]
0x462704: push    eax
0x462705: push    edi
0x462706: mov     [esp+4Ch+var_24], ebx
0x46270A: call    ecx
0x46270C: mov     eax, [esp+4Ch+arg_0]
0x462710: add     esp, 14h
0x462713: test    ax, ax
0x462716: jz      loc_4627A6
0x46271C: mov     ecx, [esi+40h]
0x46271F: test    ecx, ecx
0x462721: jz      short loc_462735
0x462723: movzx   edx, ax
0x462726: push    offset aSkyWeather; "Sky/Weather"
0x46272B: push    edx
0x46272C: call    sub_4531B0
0x462731: mov     eax, [esp+38h+arg_0]
0x462735: movzx   eax, ax
0x462738: push    ebx
0x462739: push    eax
0x46273A: mov     ecx, offset FormHeap
0x46273F: call    j_MemoryHeap_Alloc
0x462744: test    eax, eax
0x462746: mov     [esi+14h], eax
0x462749: jnz     short loc_462758
0x46274B: push    offset aCouldNotCreate; "Could not create save buffer, out of me"...
0x462750: call    sub_404EC0
0x462755: add     esp, 4
0x462758: mov     ebp, [esi+14h]
0x46275B: call    Sky_CreateOrGetGlobalObject
0x462760: mov     ecx, eax
0x462762: call    sub_540720
0x462767: mov     ecx, [esi+18h]
0x46276A: movzx   eax, word ptr [esp+38h+arg_0]
0x46276F: shr     ecx, 9
0x462772: test    cl, 1
0x462775: jz      short loc_46277F
0x462777: add     [esi+90h], eax
0x46277D: jmp     short loc_462794
0x46277F: push    ebx
0x462780: lea     edx, [esp+3Ch+var_24]
0x462784: push    edx
0x462785: push    eax
0x462786: mov     eax, [edi+8]
0x462789: push    ebp
0x46278A: push    edi
0x46278B: mov     [esp+4Ch+var_24], ebx
0x46278F: call    eax
0x462791: add     esp, 14h
0x462794: push    ebp; void *
0x462795: mov     ecx, offset FormHeap
0x46279A: call    MemoryHeap_Free_checked
0x46279F: mov     dword ptr [esi+14h], 0
0x4627A6: mov     edx, [esi+18h]
0x4627A9: mov     ecx, ds:0B3B90Ch
0x4627AF: shr     edx, 9
0x4627B2: test    dl, 1
0x4627B5: mov     [esp+38h+var_10], ecx
0x4627B9: jz      short loc_4627C4
0x4627BB: add     dword ptr [esi+90h], 4
0x4627C2: jmp     short loc_4627DE
0x4627C4: mov     edx, [edi+8]
0x4627C7: push    ebx
0x4627C8: lea     eax, [esp+3Ch+var_24]
0x4627CC: push    eax
0x4627CD: push    4
0x4627CF: lea     ecx, [esp+44h+var_10]
0x4627D3: push    ecx
0x4627D4: push    edi
0x4627D5: mov     [esp+4Ch+var_24], ebx
0x4627D9: call    edx
0x4627DB: add     esp, 14h
0x4627DE: push    edi
0x4627DF: mov     ecx, esi
0x4627E1: call    SaveLoad_SaveCreatedObjects
0x4627E6: call    sub_5C0D60
0x4627EB: mov     ecx, [esi+18h]
0x4627EE: movzx   eax, ax
0x4627F1: shr     ecx, 9
0x4627F4: test    cl, 1
0x4627F7: mov     [esp+38h+arg_0], eax
0x4627FB: jz      short loc_462806
0x4627FD: add     dword ptr [esi+90h], 2
0x462804: jmp     short loc_462824
0x462806: mov     ecx, [edi+8]
0x462809: push    ebx
0x46280A: lea     edx, [esp+3Ch+var_24]
0x46280E: push    edx
0x46280F: push    2
0x462811: lea     eax, [esp+44h+arg_0]
0x462815: push    eax
0x462816: push    edi
0x462817: mov     [esp+4Ch+var_24], ebx
0x46281B: call    ecx
0x46281D: mov     eax, [esp+4Ch+arg_0]
0x462821: add     esp, 14h
0x462824: test    ax, ax
0x462827: jz      loc_4628B0
0x46282D: mov     ecx, [esi+40h]
0x462830: test    ecx, ecx
0x462832: jz      short loc_462846
0x462834: movzx   edx, ax
0x462837: push    offset aQuickKeys; "Quick Keys"
0x46283C: push    edx
0x46283D: call    sub_4531B0
0x462842: mov     eax, [esp+38h+arg_0]
0x462846: movzx   eax, ax
0x462849: push    ebx
0x46284A: push    eax
0x46284B: mov     ecx, offset FormHeap
0x462850: call    j_MemoryHeap_Alloc
0x462855: test    eax, eax
0x462857: mov     [esi+14h], eax
0x46285A: jnz     short loc_462869
0x46285C: push    offset aCouldNotCreate; "Could not create save buffer, out of me"...
0x462861: call    sub_404EC0
0x462866: add     esp, 4
0x462869: mov     ebp, [esi+14h]
0x46286C: call    sub_5C0E30
0x462871: mov     ecx, [esi+18h]
0x462874: movzx   eax, word ptr [esp+38h+arg_0]
0x462879: shr     ecx, 9
0x46287C: test    cl, 1
0x46287F: jz      short loc_462889
0x462881: add     [esi+90h], eax
0x462887: jmp     short loc_46289E
0x462889: push    ebx
0x46288A: lea     edx, [esp+3Ch+var_24]
0x46288E: push    edx
0x46288F: push    eax
0x462890: mov     eax, [edi+8]
0x462893: push    ebp
0x462894: push    edi
0x462895: mov     [esp+4Ch+var_24], ebx
0x462899: call    eax
0x46289B: add     esp, 14h
0x46289E: push    ebp; void *
0x46289F: mov     ecx, offset FormHeap
0x4628A4: call    MemoryHeap_Free_checked
0x4628A9: mov     dword ptr [esi+14h], 0
0x4628B0: call    sub_5A8250
0x4628B5: mov     ecx, [esi+18h]
0x4628B8: movzx   eax, ax
0x4628BB: shr     ecx, 9
0x4628BE: test    cl, 1
0x4628C1: mov     [esp+38h+arg_0], eax
0x4628C5: jz      short loc_4628D0
0x4628C7: add     dword ptr [esi+90h], 2
0x4628CE: jmp     short loc_4628EE
0x4628D0: mov     ecx, [edi+8]
0x4628D3: push    ebx
0x4628D4: lea     edx, [esp+3Ch+var_24]
0x4628D8: push    edx
0x4628D9: push    2
0x4628DB: lea     eax, [esp+44h+arg_0]
0x4628DF: push    eax
0x4628E0: push    edi
0x4628E1: mov     [esp+4Ch+var_24], ebx
0x4628E5: call    ecx
0x4628E7: mov     eax, [esp+4Ch+arg_0]
0x4628EB: add     esp, 14h
0x4628EE: test    ax, ax
0x4628F1: jz      loc_46297A
0x4628F7: mov     ecx, [esi+40h]
0x4628FA: test    ecx, ecx
0x4628FC: jz      short loc_462910
0x4628FE: movzx   edx, ax
0x462901: push    offset aHudReticle; "HUD Reticle"
0x462906: push    edx
0x462907: call    sub_4531B0
0x46290C: mov     eax, [esp+38h+arg_0]
0x462910: movzx   eax, ax
0x462913: push    ebx
0x462914: push    eax
0x462915: mov     ecx, offset FormHeap
0x46291A: call    j_MemoryHeap_Alloc
0x46291F: test    eax, eax
0x462921: mov     [esi+14h], eax
0x462924: jnz     short loc_462933
0x462926: push    offset aCouldNotCreate; "Could not create save buffer, out of me"...
0x46292B: call    sub_404EC0
0x462930: add     esp, 4
0x462933: mov     ebp, [esi+14h]
0x462936: call    sub_5A8B20
0x46293B: mov     ecx, [esi+18h]
0x46293E: movzx   eax, word ptr [esp+38h+arg_0]
0x462943: shr     ecx, 9
0x462946: test    cl, 1
0x462949: jz      short loc_462953
0x46294B: add     [esi+90h], eax
0x462951: jmp     short loc_462968
0x462953: push    ebx
0x462954: lea     edx, [esp+3Ch+var_24]
0x462958: push    edx
0x462959: push    eax
0x46295A: mov     eax, [edi+8]
0x46295D: push    ebp
0x46295E: push    edi
0x46295F: mov     [esp+4Ch+var_24], ebx
0x462963: call    eax
0x462965: add     esp, 14h
0x462968: push    ebp; void *
0x462969: mov     ecx, offset FormHeap
0x46296E: call    MemoryHeap_Free_checked
0x462973: mov     dword ptr [esi+14h], 0
0x46297A: call    sub_57BE10
0x46297F: mov     ecx, [esi+18h]
0x462982: movzx   eax, ax
0x462985: shr     ecx, 9
0x462988: test    cl, 1
0x46298B: mov     [esp+38h+arg_0], eax
0x46298F: jz      short loc_46299A
0x462991: add     dword ptr [esi+90h], 2
0x462998: jmp     short loc_4629B8
0x46299A: mov     ecx, [edi+8]
0x46299D: push    ebx
0x46299E: lea     edx, [esp+3Ch+var_24]
0x4629A2: push    edx
0x4629A3: push    2
0x4629A5: lea     eax, [esp+44h+arg_0]
0x4629A9: push    eax
0x4629AA: push    edi
0x4629AB: mov     [esp+4Ch+var_24], ebx
0x4629AF: call    ecx
0x4629B1: mov     eax, [esp+4Ch+arg_0]
0x4629B5: add     esp, 14h
0x4629B8: test    ax, ax
0x4629BB: jz      loc_462A44
0x4629C1: mov     ecx, [esi+40h]
0x4629C4: test    ecx, ecx
0x4629C6: jz      short loc_4629DA
0x4629C8: movzx   edx, ax
0x4629CB: push    offset aInterface; "Interface"
0x4629D0: push    edx
0x4629D1: call    sub_4531B0
0x4629D6: mov     eax, [esp+38h+arg_0]
0x4629DA: movzx   eax, ax
0x4629DD: push    ebx
0x4629DE: push    eax
0x4629DF: mov     ecx, offset FormHeap
0x4629E4: call    j_MemoryHeap_Alloc
0x4629E9: test    eax, eax
0x4629EB: mov     [esi+14h], eax
0x4629EE: jnz     short loc_4629FD
0x4629F0: push    offset aCouldNotCreate; "Could not create save buffer, out of me"...
0x4629F5: call    sub_404EC0
0x4629FA: add     esp, 4
0x4629FD: mov     ebp, [esi+14h]
0x462A00: call    sub_57BE30
0x462A05: mov     ecx, [esi+18h]
0x462A08: movzx   eax, word ptr [esp+38h+arg_0]
0x462A0D: shr     ecx, 9
0x462A10: test    cl, 1
0x462A13: jz      short loc_462A1D
0x462A15: add     [esi+90h], eax
0x462A1B: jmp     short loc_462A32
0x462A1D: push    ebx
0x462A1E: lea     edx, [esp+3Ch+var_24]
0x462A22: push    edx
0x462A23: push    eax
0x462A24: mov     eax, [edi+8]
0x462A27: push    ebp
0x462A28: push    edi
0x462A29: mov     [esp+4Ch+var_24], ebx
0x462A2D: call    eax
0x462A2F: add     esp, 14h
0x462A32: push    ebp; void *
0x462A33: mov     ecx, offset FormHeap
0x462A38: call    MemoryHeap_Free_checked
0x462A3D: mov     dword ptr [esi+14h], 0
0x462A44: call    sub_4A2FF0
0x462A49: mov     ecx, [esi+18h]
0x462A4C: movzx   eax, ax
0x462A4F: shr     ecx, 9
0x462A52: test    cl, 1
0x462A55: mov     [esp+38h+arg_0], eax
0x462A59: jz      short loc_462A64
0x462A5B: add     dword ptr [esi+90h], 2
0x462A62: jmp     short loc_462A82
0x462A64: mov     ecx, [edi+8]
0x462A67: push    ebx
0x462A68: lea     edx, [esp+3Ch+var_24]
0x462A6C: push    edx
0x462A6D: push    2
0x462A6F: lea     eax, [esp+44h+arg_0]
0x462A73: push    eax
0x462A74: push    edi
0x462A75: mov     [esp+4Ch+var_24], ebx
0x462A79: call    ecx
0x462A7B: mov     eax, [esp+4Ch+arg_0]
0x462A7F: add     esp, 14h
0x462A82: test    ax, ax
0x462A85: jz      loc_462B0E
0x462A8B: mov     ecx, [esi+40h]
0x462A8E: test    ecx, ecx
0x462A90: jz      short loc_462AA4
0x462A92: movzx   edx, ax
0x462A95: push    offset aRegions; "Regions"
0x462A9A: push    edx
0x462A9B: call    sub_4531B0
0x462AA0: mov     eax, [esp+38h+arg_0]
0x462AA4: movzx   eax, ax
0x462AA7: push    ebx
0x462AA8: push    eax
0x462AA9: mov     ecx, offset FormHeap
0x462AAE: call    j_MemoryHeap_Alloc
0x462AB3: test    eax, eax
0x462AB5: mov     [esi+14h], eax
0x462AB8: jnz     short loc_462AC7
0x462ABA: push    offset aCouldNotCreate; "Could not create save buffer, out of me"...
0x462ABF: call    sub_404EC0
0x462AC4: add     esp, 4
0x462AC7: mov     ebp, [esi+14h]
0x462ACA: call    sub_4A3020
0x462ACF: mov     ecx, [esi+18h]
0x462AD2: movzx   eax, word ptr [esp+38h+arg_0]
0x462AD7: shr     ecx, 9
0x462ADA: test    cl, 1
0x462ADD: jz      short loc_462AE7
0x462ADF: add     [esi+90h], eax
0x462AE5: jmp     short loc_462AFC
0x462AE7: push    ebx
0x462AE8: lea     edx, [esp+3Ch+var_24]
0x462AEC: push    edx
0x462AED: push    eax
0x462AEE: mov     eax, [edi+8]
0x462AF1: push    ebp
0x462AF2: push    edi
0x462AF3: mov     [esp+4Ch+var_24], ebx
0x462AF7: call    eax
0x462AF9: add     esp, 14h
0x462AFC: push    ebp; void *
0x462AFD: mov     ecx, offset FormHeap
0x462B02: call    MemoryHeap_Free_checked
0x462B07: mov     dword ptr [esi+14h], 0
0x462B0E: pop     edi
0x462B0F: pop     esi
0x462B10: pop     ebp
0x462B11: pop     ebx
0x462B12: add     esp, 28h
0x462B15: retn    4
