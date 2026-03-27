0x559330: push    0FFFFFFFFh
0x559332: push    offset SEH_559330
0x559337: mov     eax, large fs:0
0x55933D: push    eax
0x55933E: sub     esp, 4C4h
0x559344: mov     eax, ds:0B30AACh
0x559349: xor     eax, esp
0x55934B: mov     [esp+4D0h+var_10], eax
0x559352: push    ebx
0x559353: push    ebp
0x559354: push    esi
0x559355: push    edi
0x559356: mov     eax, ds:0B30AACh
0x55935B: xor     eax, esp
0x55935D: push    eax
0x55935E: lea     eax, [esp+4E4h+var_C]
0x559365: mov     large fs:0, eax
0x55936B: mov     eax, [esp+4E4h+arg_8]
0x559372: mov     ebx, [esp+4E4h+a2]
0x559379: mov     ebp, dword ptr [esp+4E4h+ArgList]
0x559380: xor     edi, edi
0x559382: mov     esi, ecx
0x559384: mov     [esp+4E4h+var_4D0], edi
0x559388: cmp     [esi+8], edi
0x55938B: mov     [esp+4E4h+Src], eax
0x55938F: jnz     loc_559839
0x559395: cmp     ebx, edi
0x559397: jz      loc_559839
0x55939D: push    24h ; '$'; Size
0x55939F: call    FormHeapAlloc
0x5593A4: add     esp, 4
0x5593A7: mov     [esp+4E4h+var_4D0], eax
0x5593AB: cmp     eax, edi
0x5593AD: mov     [esp+4E4h+var_4], edi
0x5593B4: jz      short loc_5593BF
0x5593B6: mov     ecx, eax
0x5593B8: call    sub_556900
0x5593BD: jmp     short loc_5593C1
0x5593BF: xor     eax, eax
0x5593C1: push    10h; Size
0x5593C3: mov     [esp+4E8h+var_4], 0FFFFFFFFh
0x5593CE: mov     [esi+8], eax
0x5593D1: call    FormHeapAlloc
0x5593D6: mov     edi, eax
0x5593D8: add     esp, 4
0x5593DB: mov     [esp+4E4h+var_4D0], edi
0x5593DF: test    edi, edi
0x5593E1: mov     [esp+4E4h+var_4], 1
0x5593EC: jz      short loc_559400
0x5593EE: mov     ecx, edi
0x5593F0: call    sub_721350
0x5593F5: mov     dword ptr [edi], offset ??_7BSFaceGenModelExtraData@@6B@; const BSFaceGenModelExtraData::`vftable'
0x5593FB: mov     [edi+0Ch], esi
0x5593FE: jmp     short loc_559402
0x559400: xor     edi, edi
0x559402: mov     ecx, [esi+8]
0x559405: push    edi; a2
0x559406: add     ecx, 20h ; ' '; this
0x559409: mov     [esp+4E8h+var_4], 0FFFFFFFFh
0x559414: call    NiSmartPointer_Set??
0x559419: mov     ecx, [esi+8]; this
0x55941C: xor     edi, edi
0x55941E: push    edi; a3
0x55941F: push    ebx; a2
0x559420: call    BSStringT_Set
0x559425: cmp     ebp, edi
0x559427: jz      loc_559580
0x55942D: mov     [esp+4E4h+var_4C8], edi
0x559431: mov     word ptr [esp+4E4h+var_4C4], di
0x559436: mov     word ptr [esp+4E4h+var_4C4+2], di
0x55943B: mov     ebx, 2
0x559440: lea     ecx, [esp+4E4h+var_4A0]; this
0x559444: mov     [esp+4E4h+var_4], ebx
0x55944B: call    ??0NiStream@@QAE@XZ; NiStream::NiStream(void)
0x559450: mov     [esp+4E4h+var_4A0], offset ??_7BSStream@@6B@; const BSStream::`vftable'
0x559458: mov     [esp+4E4h+var_14], edi
0x55945F: mov     [esp+4E4h+var_18], edi
0x559466: push    edi; int
0x559467: push    ebp; Src
0x559468: lea     ecx, [esp+4ECh+var_4A0]
0x55946C: mov     byte ptr [esp+4ECh+var_4], 3
0x559474: call    sub_6F9980
0x559479: test    al, al
0x55947B: jz      loc_55964E
0x559481: cmp     [esp+4E4h+var_290], 1
0x559489: jnz     loc_559615
0x55948F: mov     ecx, [esp+4E4h+var_298]
0x559496: mov     eax, [ecx]
0x559498: mov     ecx, [esi+8]
0x55949B: push    eax; a2
0x55949C: add     ecx, 0Ch; this
0x55949F: call    NiSmartPointer_Set??
0x5594A4: mov     eax, [esi+8]
0x5594A7: mov     ecx, [eax+0Ch]
0x5594AA: cmp     ecx, edi
0x5594AC: jz      loc_55955A
0x5594B2: movzx   ebp, word ptr [ecx+0B6h]
0x5594B9: test    ebp, ebp
0x5594BB: jbe     short loc_5594FF
0x5594BD: mov     eax, [eax+0Ch]
0x5594C0: movzx   edx, word ptr [eax+0B6h]
0x5594C7: cmp     edx, edi
0x5594C9: jbe     short loc_5594E1
0x5594CB: mov     eax, [eax+0B0h]
0x5594D1: mov     ecx, [eax+edi*4]
0x5594D4: test    ecx, ecx
0x5594D6: jz      short loc_5594E1
0x5594D8: mov     edx, [ecx]
0x5594DA: mov     eax, [edx+10h]
0x5594DD: call    eax
0x5594DF: jmp     short loc_5594E3
0x5594E1: xor     eax, eax
0x5594E3: mov     ecx, [esi+8]
0x5594E6: push    eax; a2
0x5594E7: add     ecx, 10h; this
0x5594EA: call    NiSmartPointer_Set??
0x5594EF: mov     eax, [esi+8]
0x5594F2: cmp     dword ptr [eax+10h], 0
0x5594F6: jnz     short loc_5594FF
0x5594F8: add     edi, 1
0x5594FB: cmp     edi, ebp
0x5594FD: jb      short loc_5594BD
0x5594FF: mov     eax, [esi+8]
0x559502: cmp     dword ptr [eax+10h], 0
0x559506: jz      short loc_55955A
0x559508: mov     ecx, [eax+10h]
0x55950B: push    6
0x55950D: lea     edx, [esp+4E8h+var_4D0]
0x559511: push    edx
0x559512: call    sub_708560
0x559517: lea     ecx, [esp+4E4h+var_4D0]; this
0x55951B: call    sub_7016A0
0x559520: mov     eax, [esi+8]
0x559523: mov     ecx, [eax+10h]
0x559526: call    sub_6FFFD0
0x55952B: mov     ecx, [esi+8]
0x55952E: mov     ecx, [ecx+10h]
0x559531: call    sub_6FFC60
0x559536: mov     eax, [esi+8]
0x559539: mov     ecx, [eax+10h]
0x55953C: cmp     dword ptr [ecx+0B8h], 0
0x559543: jz      short loc_559550
0x559545: mov     eax, ecx
0x559547: mov     ecx, [eax+0B8h]
0x55954D: mov     [ecx+10h], eax
0x559550: mov     edx, [esi+8]
0x559553: mov     eax, [edx+10h]
0x559556: or      [eax+18h], bx
0x55955A: lea     ecx, [esp+4E4h+var_4A0]; this
0x55955E: mov     byte ptr [esp+4E4h+var_4], bl
0x559565: call    ??1BSStream@@UAE@XZ; BSStream::~BSStream(void)
0x55956A: xor     edi, edi
0x55956C: push    edi
0x55956D: mov     [esp+4E8h+var_4], 0FFFFFFFFh
0x559578: call    FormHeapFree
0x55957D: add     esp, 4
0x559580: mov     ebx, [esp+4E4h+Src]
0x559584: cmp     ebx, edi
0x559586: jz      loc_559805
0x55958C: push    0A0h ; ' '; Size
0x559591: call    FormHeapAlloc
0x559596: add     esp, 4
0x559599: mov     [esp+4E4h+Src], eax
0x55959D: cmp     eax, edi
0x55959F: mov     [esp+4E4h+var_4], 4
0x5595AA: jz      short loc_5595B5
0x5595AC: mov     ecx, eax
0x5595AE: call    sub_5586C0
0x5595B3: mov     edi, eax
0x5595B5: push    ebx; Src
0x5595B6: lea     ecx, [esp+4E8h+var_4BC]
0x5595BA: mov     [esp+4E8h+var_4], 0FFFFFFFFh
0x5595C5: call    sub_414750
0x5595CA: lea     eax, [esp+4E4h+var_4BC]
0x5595CE: push    edi
0x5595CF: push    eax
0x5595D0: mov     [esp+4ECh+var_4], 5
0x5595DB: mov     [esp+4ECh+var_4D0], 1
0x5595E3: call    sub_6F4B50
0x5595E8: add     esp, 8
0x5595EB: test    al, al
0x5595ED: jz      loc_55967C
0x5595F3: mov     ecx, [esi+8]
0x5595F6: mov     eax, [ecx+10h]
0x5595F9: mov     eax, [eax+0B4h]
0x5595FF: movzx   ebp, word ptr [eax+8]
0x559603: mov     ecx, edi
0x559605: call    sub_556800
0x55960A: movzx   edx, bp
0x55960D: cmp     edx, eax
0x55960F: jnz     short loc_55967C
0x559611: mov     bl, 1
0x559613: jmp     short loc_55967E
0x559615: push    ebp; ArgList
0x559616: push    offset aBadObjectCount; "Bad object count in '%s' in BSFaceGenMo"...
0x55961B: call    PrintError
0x559620: add     esp, 8
0x559623: lea     ecx, [esp+4E4h+var_4A0]; this
0x559627: mov     byte ptr [esp+4E4h+var_4], bl
0x55962E: call    ??1BSStream@@UAE@XZ; BSStream::~BSStream(void)
0x559633: lea     ecx, [esp+4E4h+var_4C8]; void *
0x559637: mov     [esp+4E4h+var_4], 0FFFFFFFFh
0x559642: call    BSStringT_Clear
0x559647: xor     al, al
0x559649: jmp     loc_55983B
0x55964E: push    ebp; ArgList
0x55964F: push    offset aFailedToLoadSI; "Failed to load '%s' in BSFaceGenModel::"...
0x559654: call    PrintError
0x559659: add     esp, 8
0x55965C: lea     ecx, [esp+4E4h+var_4A0]; this
0x559660: mov     byte ptr [esp+4E4h+var_4], bl
0x559667: call    ??1BSStream@@UAE@XZ; BSStream::~BSStream(void)
0x55966C: push    edi
0x55966D: call    FormHeapFree
0x559672: add     esp, 4
0x559675: xor     al, al
0x559677: jmp     loc_55983B
0x55967C: xor     bl, bl
0x55967E: or      ebp, 0FFFFFFFFh
0x559681: lea     ecx, [esp+4E4h+var_4BC]
0x559685: mov     [esp+4E4h+var_4], ebp
0x55968C: call    sub_79AB00
0x559691: test    bl, bl
0x559693: jz      loc_5597F1
0x559699: cmp     [esp+4E4h+arg_C], 0
0x5596A1: jz      short loc_5596E4
0x5596A3: push    0Ch; Size
0x5596A5: call    FormHeapAlloc
0x5596AA: add     esp, 4
0x5596AD: mov     [esp+4E4h+Src], eax
0x5596B1: test    eax, eax
0x5596B3: mov     [esp+4E4h+var_4], 6
0x5596BE: jz      short loc_5596CA
0x5596C0: push    edi
0x5596C1: mov     ecx, eax; this
0x5596C3: call    ??0BSFaceGenMorphDataHair@@QAE@XZ; BSFaceGenMorphDataHair::BSFaceGenMorphDataHair(void)
0x5596C8: jmp     short loc_5596CC
0x5596CA: xor     eax, eax
0x5596CC: mov     ecx, [esi+8]
0x5596CF: push    eax; a2
0x5596D0: add     ecx, 1Ch; this
0x5596D3: mov     [esp+4E8h+var_4], ebp
0x5596DA: call    NiSmartPointer_Set??
0x5596DF: jmp     loc_5597F1
0x5596E4: push    18h; Size
0x5596E6: call    FormHeapAlloc
0x5596EB: add     esp, 4
0x5596EE: mov     [esp+4E4h+Src], eax
0x5596F2: test    eax, eax
0x5596F4: mov     [esp+4E4h+var_4], 7
0x5596FF: jz      short loc_55970B
0x559701: push    edi
0x559702: mov     ecx, eax; this
0x559704: call    ??0BSFaceGenMorphDataHead@@QAE@XZ; BSFaceGenMorphDataHead::BSFaceGenMorphDataHead(void)
0x559709: jmp     short loc_55970D
0x55970B: xor     eax, eax
0x55970D: mov     ecx, [esi+8]
0x559710: push    eax; a2
0x559711: add     ecx, 1Ch; this
0x559714: mov     [esp+4E8h+var_4], ebp
0x55971B: call    NiSmartPointer_Set??
0x559720: mov     ebx, [esi+8]
0x559723: mov     eax, [ebx+10h]
0x559726: mov     ecx, [eax+0B4h]
0x55972C: movzx   ebp, word ptr [ecx+8]
0x559730: mov     ecx, edi
0x559732: call    sub_6F1080
0x559737: cmp     eax, ebp
0x559739: jbe     loc_5597F1
0x55973F: mov     ecx, edi
0x559741: call    sub_6F1080
0x559746: sub     eax, ebp
0x559748: mov     [ebx+18h], eax
0x55974B: mov     edx, [esi+8]
0x55974E: mov     eax, [edx+18h]
0x559751: xor     ecx, ecx
0x559753: mov     edx, 0Ch
0x559758: mul     edx
0x55975A: seto    cl
0x55975D: neg     ecx
0x55975F: or      ecx, eax
0x559761: push    ecx; Size
0x559762: call    FormHeapAlloc
0x559767: mov     ecx, [esi+8]
0x55976A: mov     [ecx+14h], eax
0x55976D: mov     edx, [esi+8]
0x559770: xor     ebp, ebp
0x559772: add     esp, 4
0x559775: cmp     [edx+18h], ebp
0x559778: jbe     short loc_5597F1
0x55977A: xor     ebx, ebx
0x55977C: lea     esp, [esp+0]
0x559780: mov     ecx, edi
0x559782: call    sub_556800
0x559787: add     eax, ebp
0x559789: push    eax
0x55978A: mov     ecx, edi
0x55978C: call    sub_6F10A0
0x559791: fld     dword ptr [eax]
0x559793: mov     ecx, edi
0x559795: fstp    [esp+4E4h+var_4C8]
0x559799: call    sub_556800
0x55979E: add     eax, ebp
0x5597A0: push    eax
0x5597A1: mov     ecx, edi
0x5597A3: call    sub_6F10A0
0x5597A8: fld     dword ptr [eax+4]
0x5597AB: mov     ecx, edi
0x5597AD: fstp    [esp+4E4h+var_4C4]
0x5597B1: call    sub_556800
0x5597B6: add     eax, ebp
0x5597B8: push    eax
0x5597B9: mov     ecx, edi
0x5597BB: call    sub_6F10A0
0x5597C0: fld     dword ptr [eax+8]
0x5597C3: mov     eax, [esi+8]
0x5597C6: fstp    [esp+4E4h+var_4C0]
0x5597CA: mov     eax, [eax+14h]
0x5597CD: mov     ecx, [esp+4E4h+var_4C8]
0x5597D1: mov     edx, [esp+4E4h+var_4C4]
0x5597D5: add     eax, ebx
0x5597D7: mov     [eax], ecx
0x5597D9: mov     ecx, [esp+4E4h+var_4C0]
0x5597DD: mov     [eax+4], edx
0x5597E0: mov     [eax+8], ecx
0x5597E3: mov     edx, [esi+8]
0x5597E6: add     ebp, 1
0x5597E9: add     ebx, 0Ch
0x5597EC: cmp     ebp, [edx+18h]
0x5597EF: jb      short loc_559780
0x5597F1: test    edi, edi
0x5597F3: jz      short loc_559805
0x5597F5: mov     ecx, edi
0x5597F7: call    sub_557CF0
0x5597FC: push    edi
0x5597FD: call    FormHeapFree
0x559802: add     esp, 4
0x559805: mov     esi, [esi+8]
0x559808: test    esi, esi
0x55980A: jz      short loc_559839
0x55980C: mov     eax, [esi+10h]
0x55980F: test    eax, eax
0x559811: jz      short loc_559839
0x559813: cmp     dword ptr [esi+1Ch], 0
0x559817: mov     eax, [eax+0B4h]
0x55981D: jz      short loc_559833
0x55981F: mov     cx, [eax+2Eh]
0x559823: and     cx, 0FFFh
0x559828: or      cx, 8000h
0x55982D: mov     [eax+2Eh], cx
0x559831: jmp     short loc_559839
0x559833: and     word ptr [eax+2Eh], 0FFFh
0x559839: mov     al, 1
0x55983B: mov     ecx, [esp+4E4h+var_C]
0x559842: mov     large fs:0, ecx
0x559849: pop     ecx
0x55984A: pop     edi
0x55984B: pop     esi
0x55984C: pop     ebp
0x55984D: pop     ebx
0x55984E: mov     ecx, [esp+4D0h+var_10]
0x559855: xor     ecx, esp
0x559857: call    @__security_check_cookie@4; __security_check_cookie(x)
0x55985C: add     esp, 4D0h
0x559862: retn    10h
