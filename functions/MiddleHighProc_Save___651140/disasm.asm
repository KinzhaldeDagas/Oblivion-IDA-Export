0x651140: sub     esp, 34h
0x651143: push    ebx
0x651144: push    ebp
0x651145: push    esi
0x651146: push    edi
0x651147: mov     edi, [esp+44h+Src]
0x65114B: xor     ebx, ebx
0x65114D: push    ebx; int
0x65114E: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x651153: push    offset ??_R0?AVMobileObject@@@8; struct _s_RTTICompleteObjectLocator *
0x651158: push    ebx; int
0x651159: push    edi; void *
0x65115A: mov     esi, ecx
0x65115C: call    OblivionDynamicCast
0x651161: mov     ebp, [esp+58h+arg_0]
0x651165: add     esp, 14h
0x651168: push    edi; Src
0x651169: push    ebp; int
0x65116A: mov     ecx, esi
0x65116C: mov     [esp+4Ch+var_10], eax
0x651170: call    MiddleLowProcess_Save?
0x651175: cmp     ds:0B05BACh, bl
0x65117B: mov     ecx, ds:0B33B00h
0x651181: mov     [esp+44h+var_18], ebx
0x651185: mov     eax, [ecx+14h]
0x651188: mov     [esp+44h+var_1C], ebx
0x65118C: mov     [esp+44h+var_30], eax
0x651190: jz      short loc_651196
0x651192: mov     [esp+44h+var_30], eax
0x651196: call    sub_45A170
0x65119B: test    al, al
0x65119D: jz      short loc_6511D2
0x65119F: mov     ecx, ds:0B33B00h
0x6511A5: push    4; Size
0x6511A7: lea     eax, [esp+48h+Src]
0x6511AB: push    eax; Src
0x6511AC: mov     [esp+4Ch+Src], 4B4F4C42h
0x6511B4: call    SaveLoad_SaveData
0x6511B9: mov     ecx, ds:0B33B00h
0x6511BF: mov     edx, [ecx+14h]
0x6511C2: push    2; Size
0x6511C4: lea     eax, [esp+48h+var_18]
0x6511C8: push    eax; Src
0x6511C9: mov     [esp+4Ch+var_1C], edx
0x6511CD: call    SaveLoad_SaveData
0x6511D2: push    1; Size
0x6511D4: lea     ecx, [esi+114h]
0x6511DA: push    ecx; Src
0x6511DB: mov     ecx, ds:0B33B00h
0x6511E1: call    SaveLoad_SaveData
0x6511E6: mov     ecx, ds:0B33B00h
0x6511EC: push    1; Size
0x6511EE: lea     edx, [esi+115h]
0x6511F4: push    edx; Src
0x6511F5: call    SaveLoad_SaveData
0x6511FA: mov     ecx, ds:0B33B00h
0x651200: cmp     byte ptr [ecx+7Ch], 34h ; '4'
0x651204: jb      short loc_65122E
0x651206: push    1; Size
0x651208: lea     eax, [esi+14Ch]
0x65120E: push    eax; Src
0x65120F: call    SaveLoad_SaveData
0x651214: push    4; Size
0x651216: lea     ecx, [esi+154h]
0x65121C: push    ecx; Src
0x65121D: mov     ecx, ds:0B33B00h
0x651223: call    SaveLoad_SaveData
0x651228: mov     ecx, ds:0B33B00h
0x65122E: cmp     byte ptr [ecx+7Ch], 4Dh ; 'M'
0x651232: jb      short loc_651248
0x651234: push    4; Size
0x651236: lea     edx, [esi+158h]
0x65123C: push    edx; Src
0x65123D: call    SaveLoad_SaveData
0x651242: mov     ecx, ds:0B33B00h
0x651248: test    ebp, 80000h
0x65124E: jz      loc_6512FE
0x651254: mov     eax, [esi+0C0h]
0x65125A: cmp     eax, ebx
0x65125C: mov     [esp+44h+var_34], ebx
0x651260: jz      short loc_651269
0x651262: mov     eax, [eax+0Ch]
0x651265: mov     [esp+44h+var_34], eax
0x651269: push    4
0x65126B: lea     edx, [esp+48h+var_34]
0x65126F: push    edx
0x651270: call    SaveLoad_SaveFormID
0x651275: mov     eax, [esp+44h+var_34]
0x651279: cmp     eax, ebx
0x65127B: jz      short loc_6512F8
0x65127D: mov     ecx, ds:0B33A98h
0x651283: push    eax; _DWORD
0x651284: call    TESDataHandler_IsFormIDCreated?
0x651289: test    al, al
0x65128B: jnz     short loc_65129F
0x65128D: mov     ecx, ds:0B34D90h
0x651293: mov     eax, [ecx]
0x651295: mov     edx, [eax+18h]
0x651298: push    offset aUncreatedRunOn; "Uncreated run once package is being sav"...
0x65129D: call    edx
0x65129F: mov     eax, [esi+0C0h]
0x6512A5: mov     al, [eax+20h]
0x6512A8: cmp     al, 13h
0x6512AA: mov     byte ptr [esp+44h+Src], al
0x6512AE: jnz     short loc_6512C2
0x6512B0: mov     ecx, ds:0B34D90h
0x6512B6: mov     edx, [ecx]
0x6512B8: mov     eax, [edx+18h]
0x6512BB: push    offset aRunOncePackage; "Run once package is a Spectator Package"...
0x6512C0: call    eax
0x6512C2: push    1; Size
0x6512C4: lea     ecx, [esp+48h+Src]
0x6512C8: push    ecx; Src
0x6512C9: mov     ecx, ds:0B33B00h
0x6512CF: call    SaveLoad_SaveData
0x6512D4: mov     ecx, [esi+0C0h]
0x6512DA: mov     edx, [ecx]
0x6512DC: mov     eax, [edx+0E0h]
0x6512E2: call    eax
0x6512E4: push    4; Size
0x6512E6: lea     ecx, [esi+0CCh]
0x6512EC: push    ecx; Src
0x6512ED: mov     ecx, ds:0B33B00h
0x6512F3: call    SaveLoad_SaveData
0x6512F8: mov     ecx, ds:0B33B00h
0x6512FE: mov     eax, [esi+13Ch]
0x651304: cmp     eax, ebx
0x651306: mov     [esp+44h+var_2C], ebx
0x65130A: jz      short loc_651313
0x65130C: mov     edx, [eax+0Ch]
0x65130F: mov     [esp+44h+var_2C], edx
0x651313: push    4
0x651315: lea     eax, [esp+48h+var_2C]
0x651319: push    eax
0x65131A: call    SaveLoad_SaveFormID
0x65131F: push    4; Size
0x651321: lea     ecx, [esi+0E0h]
0x651327: push    ecx; Src
0x651328: mov     ecx, ds:0B33B00h
0x65132E: call    SaveLoad_SaveData
0x651333: mov     ecx, ds:0B33B00h
0x651339: push    1; Size
0x65133B: lea     edx, [esi+180h]
0x651341: push    edx; Src
0x651342: call    SaveLoad_SaveData
0x651347: mov     ecx, ds:0B33B00h
0x65134D: push    0Ch; Size
0x65134F: lea     eax, [esi+0D4h]
0x651355: push    eax; Src
0x651356: call    SaveLoad_SaveData
0x65135B: push    4; Size
0x65135D: lea     ecx, [esi+0C4h]
0x651363: push    ecx; Src
0x651364: mov     ecx, ds:0B33B00h
0x65136A: call    SaveLoad_SaveData
0x65136F: mov     ecx, ds:0B33B00h
0x651375: push    2; Size
0x651377: lea     edx, [esi+138h]
0x65137D: push    edx; Src
0x65137E: call    SaveLoad_SaveData
0x651383: mov     ecx, ds:0B33B00h
0x651389: push    1; Size
0x65138B: lea     eax, [esi+11Dh]
0x651391: push    eax; Src
0x651392: call    SaveLoad_SaveData
0x651397: push    1; Size
0x651399: lea     ecx, [esi+124h]
0x65139F: push    ecx; Src
0x6513A0: mov     ecx, ds:0B33B00h
0x6513A6: call    SaveLoad_SaveData
0x6513AB: mov     eax, [esi+120h]
0x6513B1: cmp     eax, ebx
0x6513B3: mov     [esp+44h+var_28], ebx
0x6513B7: jz      short loc_6513C0
0x6513B9: mov     edx, [eax+0Ch]
0x6513BC: mov     [esp+44h+var_28], edx
0x6513C0: mov     ecx, ds:0B33B00h
0x6513C6: push    4
0x6513C8: lea     eax, [esp+48h+var_28]
0x6513CC: push    eax
0x6513CD: call    SaveLoad_SaveFormID
0x6513D2: movzx   ecx, word ptr [esi+134h]
0x6513D9: mov     [esp+44h+Src], ecx
0x6513DD: mov     eax, [esi+128h]
0x6513E3: fild    [esp+44h+Src]
0x6513E7: mov     dl, [esi+136h]
0x6513ED: mov     ecx, [esi+12Ch]
0x6513F3: mov     [esp+44h+var_C], eax
0x6513F7: fdiv    qword ptr ds:0A2FC70h
0x6513FD: mov     byte ptr [esp+44h+arg_0], dl
0x651401: mov     edx, [esi+130h]
0x651407: push    4; Size
0x651409: lea     eax, [esp+48h+var_14]
0x65140D: mov     [esp+48h+var_8], ecx
0x651411: mov     ecx, ds:0B33B00h
0x651417: push    eax; Src
0x651418: mov     [esp+4Ch+var_4], edx
0x65141C: fstp    [esp+4Ch+var_14]
0x651420: call    SaveLoad_SaveData
0x651425: push    1; Size
0x651427: lea     ecx, [esp+48h+arg_0]
0x65142B: push    ecx; Src
0x65142C: mov     ecx, ds:0B33B00h
0x651432: call    SaveLoad_SaveData
0x651437: mov     ecx, ds:0B33B00h
0x65143D: push    0Ch; Size
0x65143F: lea     edx, [esp+48h+var_C]
0x651443: push    edx; Src
0x651444: call    SaveLoad_SaveData
0x651449: mov     ecx, ds:0B33B00h
0x65144F: push    1; Size
0x651451: lea     eax, [esi+11Ch]
0x651457: push    eax; Src
0x651458: call    SaveLoad_SaveData
0x65145D: test    ebp, 2000000h
0x651463: jz      short loc_651475
0x651465: mov     ecx, [esi+17Ch]
0x65146B: push    ecx
0x65146C: push    edi
0x65146D: call    sub_473C40
0x651472: add     esp, 8
0x651475: mov     ecx, [esi+144h]; int
0x65147B: cmp     ecx, ebx
0x65147D: mov     [esp+44h+var_24], ebx
0x651481: jz      short loc_65148C
0x651483: call    MagicItem_GetFormID
0x651488: mov     [esp+44h+var_24], eax
0x65148C: mov     ecx, ds:0B33B00h
0x651492: push    4
0x651494: lea     edx, [esp+48h+var_24]
0x651498: push    edx
0x651499: call    SaveLoad_SaveFormID
0x65149E: mov     ecx, [esi+178h]
0x6514A4: cmp     ecx, ebx
0x6514A6: mov     [esp+44h+var_20], ebx
0x6514AA: jz      short loc_6514B5
0x6514AC: call    MagicTarget_GetParentFormID
0x6514B1: mov     [esp+44h+var_20], eax
0x6514B5: mov     ecx, ds:0B33B00h
0x6514BB: push    4
0x6514BD: lea     eax, [esp+48h+var_20]
0x6514C1: push    eax
0x6514C2: call    SaveLoad_SaveFormID
0x6514C7: mov     ecx, [esp+44h+var_10]
0x6514CB: mov     edx, [esi+174h]
0x6514D1: push    ecx
0x6514D2: push    edx
0x6514D3: call    ActiveEffect_Base_SaveAEList
0x6514D8: mov     ecx, ds:0B33B00h
0x6514DE: add     esp, 8
0x6514E1: cmp     byte ptr [ecx+7Ch], 45h ; 'E'
0x6514E5: jb      short loc_6514FB
0x6514E7: push    1; Size
0x6514E9: lea     eax, [esi+0C8h]
0x6514EF: push    eax; Src
0x6514F0: call    SaveLoad_SaveData
0x6514F5: mov     ecx, ds:0B33B00h
0x6514FB: cmp     byte ptr [ecx+7Ch], 49h ; 'I'
0x6514FF: jb      short loc_651529
0x651501: push    1; Size
0x651503: lea     edx, [esi+168h]
0x651509: push    edx; Src
0x65150A: call    SaveLoad_SaveData
0x65150F: mov     ecx, ds:0B33B00h
0x651515: push    1; Size
0x651517: lea     eax, [esi+169h]
0x65151D: push    eax; Src
0x65151E: call    SaveLoad_SaveData
0x651523: mov     ecx, ds:0B33B00h
0x651529: cmp     byte ptr [ecx+7Ch], 65h ; 'e'
0x65152D: jb      loc_6515BF
0x651533: push    4; Size
0x651535: lea     edx, [esi+0B8h]
0x65153B: push    edx; Src
0x65153C: call    SaveLoad_SaveData
0x651541: mov     ecx, ds:0B33B00h
0x651547: push    4; Size
0x651549: lea     eax, [esi+0BCh]
0x65154F: push    eax; Src
0x651550: call    SaveLoad_SaveData
0x651555: mov     ecx, ds:0B33B00h
0x65155B: push    2; Size
0x65155D: lea     edx, [esp+48h+Src]
0x651561: mov     [esp+48h+Src], ebx
0x651565: mov     ebp, [ecx+14h]
0x651568: push    edx; Src
0x651569: call    SaveLoad_SaveData
0x65156E: lea     edi, [esi+0A8h]
0x651574: cmp     edi, ebx
0x651576: jz      short loc_6515B0
0x651578: cmp     [edi+4], ebx
0x65157B: jnz     short loc_651581
0x65157D: cmp     [edi], ebx
0x65157F: jz      short loc_6515B0
0x651581: mov     eax, [edi]
0x651583: cmp     eax, ebx
0x651585: mov     [esp+44h+var_34], ebx
0x651589: jz      short loc_651592
0x65158B: mov     eax, [eax+0Ch]
0x65158E: mov     [esp+44h+var_34], eax
0x651592: push    4
0x651594: lea     ecx, [esp+48h+var_34]
0x651598: push    ecx
0x651599: mov     ecx, ds:0B33B00h
0x65159F: call    SaveLoad_SaveFormID
0x6515A4: add     [esp+44h+Src], 1
0x6515A9: mov     edi, [edi+4]
0x6515AC: cmp     edi, ebx
0x6515AE: jnz     short loc_651578
0x6515B0: mov     dx, word ptr [esp+44h+Src]
0x6515B5: mov     [ebp+0], dx
0x6515B9: mov     ecx, ds:0B33B00h
0x6515BF: cmp     byte ptr [ecx+7Ch], 6Dh ; 'm'
0x6515C3: jb      short loc_6515D9
0x6515C5: push    1; Size
0x6515C7: lea     eax, [esi+16Bh]
0x6515CD: push    eax; Src
0x6515CE: call    SaveLoad_SaveData
0x6515D3: mov     ecx, ds:0B33B00h
0x6515D9: cmp     byte ptr [ecx+7Ch], 71h ; 'q'
0x6515DD: jb      short loc_651610
0x6515DF: mov     esi, [esi+148h]
0x6515E5: cmp     esi, ebx
0x6515E7: mov     [esp+44h+Src], ebx
0x6515EB: jz      short loc_6515FE
0x6515ED: mov     ecx, esi; int
0x6515EF: call    MagicItem_GetFormID
0x6515F4: mov     ecx, ds:0B33B00h
0x6515FA: mov     [esp+44h+Src], eax
0x6515FE: push    4
0x651600: lea     edx, [esp+48h+Src]
0x651604: push    edx
0x651605: call    SaveLoad_SaveFormID
0x65160A: mov     ecx, ds:0B33B00h
0x651610: cmp     ds:0B05BACh, bl
0x651616: jz      short loc_651684
0x651618: mov     edi, [ecx+84h]
0x65161E: cmp     edi, ebx
0x651620: mov     esi, [ecx+14h]
0x651623: jz      short loc_651662
0x651625: mov     eax, [edi]
0x651627: push    eax; a1
0x651628: call    TESForm_LookupByFormID
0x65162D: mov     ecx, [edi+5]
0x651630: mov     edx, [eax]
0x651632: add     esp, 4
0x651635: push    offset a_AiMiddlehighp; ".\\AI\\MiddleHighProcess.cpp"
0x65163A: push    1A47h
0x65163F: push    ecx
0x651640: mov     ecx, eax
0x651642: mov     eax, [edx+0D4h]
0x651648: call    eax
0x65164A: mov     ecx, [edi]
0x65164C: sub     esi, [esp+50h+var_30]
0x651650: push    eax
0x651651: push    ecx
0x651652: push    esi; ArgList
0x651653: push    offset aSavegame5iForF; "SaveGame(): %-5i for form %08X %s with "...
0x651658: call    sub_40FEC0
0x65165D: add     esp, 1Ch
0x651660: jmp     short loc_65167E
0x651662: sub     esi, [esp+44h+var_30]
0x651666: push    offset a_AiMiddlehighp; ".\\AI\\MiddleHighProcess.cpp"
0x65166B: push    1A47h
0x651670: push    esi; ArgList
0x651671: push    offset aSavegame5iEndi; "SaveGame(): %-5i ending at line %i in f"...
0x651676: call    sub_40FEC0
0x65167B: add     esp, 10h
0x65167E: mov     ecx, ds:0B33B00h
0x651684: call    sub_45A170
0x651689: test    al, al
0x65168B: jz      short loc_6516C0
0x65168D: mov     edx, ds:0B33B00h
0x651693: mov     edi, [esp+44h+var_1C]
0x651697: mov     esi, [edx+14h]
0x65169A: lea     eax, [edi+0FFFFh]
0x6516A0: cmp     esi, eax
0x6516A2: jbe     short loc_6516BB
0x6516A4: push    1A47h
0x6516A9: push    offset a_AiMiddlehighp; ".\\AI\\MiddleHighProcess.cpp"
0x6516AE: push    offset aSaveGameBlockI; "Save Game Block in file %s on line %i i"...
0x6516B3: call    PrintError
0x6516B8: add     esp, 0Ch
0x6516BB: sub     esi, edi
0x6516BD: mov     [edi], si
0x6516C0: pop     edi
0x6516C1: pop     esi
0x6516C2: pop     ebp
0x6516C3: pop     ebx
0x6516C4: add     esp, 34h
0x6516C7: retn    8
