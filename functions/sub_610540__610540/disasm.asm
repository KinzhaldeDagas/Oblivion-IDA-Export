0x610540: push    0FFFFFFFFh
0x610542: push    offset SEH_610540
0x610547: mov     eax, large fs:0
0x61054D: push    eax
0x61054E: sub     esp, 134h
0x610554: mov     eax, ds:0B30AACh
0x610559: xor     eax, esp
0x61055B: mov     [esp+140h+var_10], eax
0x610562: push    ebx
0x610563: push    ebp
0x610564: push    esi
0x610565: push    edi
0x610566: mov     eax, ds:0B30AACh
0x61056B: xor     eax, esp
0x61056D: push    eax
0x61056E: lea     eax, [esp+154h+var_C]
0x610575: mov     large fs:0, eax
0x61057B: mov     esi, [esp+154h+arg_0]
0x610582: mov     edi, [esp+154h+arg_4]
0x610589: push    0; int
0x61058B: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x610590: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x610595: push    0; int
0x610597: push    esi; void *
0x610598: mov     ebx, ecx
0x61059A: call    OblivionDynamicCast
0x61059F: mov     ebp, eax
0x6105A1: add     esp, 14h
0x6105A4: mov     ecx, ebp; this
0x6105A6: call    sub_5E6C60
0x6105AB: test    al, al
0x6105AD: jnz     short loc_6105F5
0x6105AF: mov     ecx, ebp
0x6105B1: call    Actor__GetRaceIfNPC
0x6105B6: test    byte ptr [eax+70h], 1
0x6105BA: jz      loc_6108FB
0x6105C0: mov     eax, [ebp+0]
0x6105C3: mov     edx, [eax+354h]
0x6105C9: mov     ecx, ebp
0x6105CB: call    edx
0x6105CD: test    al, al
0x6105CF: jnz     loc_6108FB
0x6105D5: mov     ecx, ebp; this
0x6105D7: call    Actor_IsNPC
0x6105DC: test    al, al
0x6105DE: jz      loc_6108FB
0x6105E4: mov     ecx, ebp
0x6105E6: call    Actor__GetRaceIfNPC
0x6105EB: test    byte ptr [eax+70h], 1
0x6105EF: jz      loc_6108FB
0x6105F5: cmp     ebx, ds:0B333C4h
0x6105FB: jz      short loc_61061F
0x6105FD: mov     eax, [ebx]
0x6105FF: mov     edx, [eax+284h]
0x610605: push    1Fh
0x610607: mov     ecx, ebx
0x610609: call    edx
0x61060B: cmp     eax, 64h ; 'd'
0x61060E: jnz     short loc_61061F
0x610610: mov     ecx, ebx
0x610612: call    Actor_IsSneaking
0x610617: test    al, al
0x610619: jnz     loc_6108FB
0x61061F: push    30h ; '0'; Size
0x610621: call    FormHeapAlloc
0x610626: add     esp, 4
0x610629: mov     [esp+154h+var_140], eax
0x61062D: test    eax, eax
0x61062F: mov     [esp+154h+var_4], 0
0x61063A: jz      short loc_610656
0x61063C: mov     ecx, [esp+154h+arg_8]
0x610643: push    0
0x610645: push    ecx
0x610646: push    edi
0x610647: push    ebx
0x610648: push    esi
0x610649: push    1
0x61064B: mov     ecx, eax
0x61064D: call    sub_6070B0
0x610652: mov     edi, eax
0x610654: jmp     short loc_610658
0x610656: xor     edi, edi
0x610658: mov     ecx, [edi+8]; this
0x61065B: cmp     esi, ecx
0x61065D: mov     [esp+154h+var_4], 0FFFFFFFFh
0x610668: mov     byte ptr [esp+154h+var_140], 0
0x61066D: jz      short loc_610678
0x61066F: call    TESObjectREFR_GetOwner
0x610674: cmp     eax, esi
0x610676: jnz     short loc_61067D
0x610678: mov     byte ptr [esp+154h+var_140], 1
0x61067D: mov     ecx, [esi+58h]
0x610680: mov     eax, [edi+0Ch]
0x610683: mov     edx, [ecx]
0x610685: push    eax
0x610686: mov     eax, [edx+3B0h]
0x61068C: call    eax
0x61068E: test    eax, eax
0x610690: jnz     short loc_6106A4
0x610692: mov     ecx, [esi+58h]
0x610695: mov     edx, [ecx]
0x610697: mov     eax, [edx+3B4h]
0x61069D: push    3
0x61069F: push    esi
0x6106A0: call    eax
0x6106A2: jmp     short loc_6106AB
0x6106A4: mov     dword ptr [eax+4], 3
0x6106AB: mov     ecx, ebx
0x6106AD: call    sub_4DB760
0x6106B2: test    al, al
0x6106B4: jz      short loc_61070E
0x6106B6: mov     ecx, esi
0x6106B8: call    sub_4DB760
0x6106BD: test    al, al
0x6106BF: jnz     short loc_61070E
0x6106C1: mov     ebx, [edi+8]
0x6106C4: mov     ecx, esi; this
0x6106C6: call    TESObjectREFR_GetName
0x6106CB: push    eax
0x6106CC: mov     ecx, ebx; this
0x6106CE: call    TESObjectREFR_GetName
0x6106D3: mov     ecx, ds:0B333C4h; this
0x6106D9: push    eax
0x6106DA: call    TESObjectREFR_GetName
0x6106DF: push    eax
0x6106E0: lea     ecx, [esp+160h+var_13C]
0x6106E4: push    offset aSTriedToPickpo; "%s  tried to pickpocket %s and %s did n"...
0x6106E9: push    ecx
0x6106EA: call    __sprintf
0x6106EF: mov     edx, ds:0B38CF0h
0x6106F5: push    0
0x6106F7: push    edx
0x6106F8: push    1
0x6106FA: lea     eax, [esp+174h+var_13C]
0x6106FE: push    0
0x610700: push    eax
0x610701: call    ShowUIMessageBox
0x610706: add     esp, 28h
0x610709: jmp     loc_610889
0x61070E: mov     ecx, [esp+154h+var_140]
0x610712: push    ecx
0x610713: push    esi
0x610714: mov     ecx, edi
0x610716: call    sub_605F60
0x61071B: mov     edx, [esi]
0x61071D: mov     edx, [edx+374h]
0x610723: mov     [esp+154h+var_140], eax
0x610727: fild    [esp+154h+var_140]
0x61072B: mov     eax, [edi+0Ch]
0x61072E: push    ecx
0x61072F: fstp    [esp+158h+var_140]
0x610733: mov     ecx, esi
0x610735: fld     [esp+158h+var_140]
0x610739: fstp    [esp+158h+var_158]
0x61073C: push    eax
0x61073D: call    edx
0x61073F: mov     eax, [esi]
0x610741: mov     edx, [eax+170h]
0x610747: push    0; int
0x610749: push    offset ??_R0?AVTESNPC@@@8; struct TypeDescriptor *
0x61074E: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x610753: push    0; int
0x610755: mov     ecx, esi
0x610757: call    edx
0x610759: push    eax; void *
0x61075A: call    OblivionDynamicCast
0x61075F: add     esp, 14h
0x610762: cmp     ebx, ds:0B333C4h
0x610768: jnz     short loc_610778
0x61076A: test    eax, eax
0x61076C: jz      short loc_610778
0x61076E: push    2
0x610770: lea     ecx, [eax+24h]
0x610773: call    TESActorBaseData_SetSharedPlayerFactionFlags
0x610778: mov     eax, [edi+0Ch]
0x61077B: mov     edx, [esi]
0x61077D: push    esi
0x61077E: push    eax
0x61077F: mov     eax, [edx+224h]
0x610785: mov     ecx, esi
0x610787: call    eax
0x610789: push    eax
0x61078A: mov     ecx, edi
0x61078C: call    sub_605E20
0x610791: test    al, al
0x610793: jz      short loc_610812
0x610795: mov     ecx, [ebp+58h]
0x610798: mov     edx, [ecx]
0x61079A: mov     eax, [edx+0B0h]
0x6107A0: push    1
0x6107A2: call    eax
0x6107A4: mov     ecx, ebx
0x6107A6: call    sub_5E8A90
0x6107AB: test    al, al
0x6107AD: jnz     short loc_6107FD
0x6107AF: mov     edx, [ebp+0]
0x6107B2: mov     eax, [edx+170h]
0x6107B8: mov     ecx, ebp
0x6107BA: call    eax
0x6107BC: push    ebx
0x6107BD: mov     ecx, edi
0x6107BF: mov     ds:0B361C4h, eax
0x6107C4: call    sub_605F00
0x6107C9: mov     ecx, [edi+0Ch]
0x6107CC: push    7
0x6107CE: push    2
0x6107D0: mov     [esi+0E4h], ecx
0x6107D6: call    TESTopic__GEtTopic
0x6107DB: mov     ecx, [esi+58h]
0x6107DE: mov     edx, [ecx]
0x6107E0: add     esp, 8
0x6107E3: push    1
0x6107E5: push    0
0x6107E7: push    0
0x6107E9: push    eax
0x6107EA: mov     eax, [edx+1A4h]
0x6107F0: push    esi
0x6107F1: call    eax
0x6107F3: mov     dword ptr ds:0B361C4h, 0
0x6107FD: mov     edx, [esi]
0x6107FF: mov     eax, [edx+310h]
0x610805: push    0
0x610807: push    1
0x610809: push    0
0x61080B: push    edi
0x61080C: mov     ecx, esi
0x61080E: call    eax
0x610810: jmp     short loc_610889
0x610812: mov     edx, [ebp+0]
0x610815: mov     eax, [edx+170h]
0x61081B: mov     ecx, ebp
0x61081D: call    eax
0x61081F: mov     ds:0B361C4h, eax
0x610824: mov     ecx, [edi+0Ch]
0x610827: push    0Dh
0x610829: push    2
0x61082B: mov     [esi+0E4h], ecx
0x610831: call    TESTopic__GEtTopic
0x610836: mov     ebx, eax
0x610838: mov     eax, [edi+0Ch]
0x61083B: add     esp, 8
0x61083E: test    eax, eax
0x610840: jz      short loc_61086A
0x610842: push    eax
0x610843: mov     ecx, esi
0x610845: call    sub_5EA050
0x61084A: test    al, al
0x61084C: jz      short loc_61086A
0x61084E: mov     edx, [esi]
0x610850: mov     eax, [edi+0Ch]
0x610853: mov     edx, [edx+32Ch]
0x610859: push    1
0x61085B: push    0
0x61085D: push    0
0x61085F: push    0
0x610861: push    0
0x610863: push    eax
0x610864: mov     ecx, esi
0x610866: call    edx
0x610868: jmp     short loc_61087F
0x61086A: mov     ecx, [esi+58h]
0x61086D: mov     eax, [ecx]
0x61086F: mov     edx, [eax+1A4h]
0x610875: push    1
0x610877: push    0
0x610879: push    0
0x61087B: push    ebx
0x61087C: push    esi
0x61087D: call    edx
0x61087F: mov     dword ptr ds:0B361C4h, 0
0x610889: mov     ecx, edi
0x61088B: call    sub_605F30
0x610890: test    eax, eax
0x610892: jnz     short loc_6108A6
0x610894: mov     ecx, edi
0x610896: call    sub_605E80
0x61089B: push    edi
0x61089C: call    FormHeapFree
0x6108A1: add     esp, 4
0x6108A4: jmp     short loc_6108FB
0x6108A6: push    edi
0x6108A7: mov     ecx, offset ActorProcessManager_ptr
0x6108AC: call    sub_675B30
0x6108B1: mov     edi, [edi+0Ch]
0x6108B4: push    1; a2
0x6108B6: mov     ecx, esi; this
0x6108B8: call    Actor_GetActorBaseForm
0x6108BD: cmp     dword ptr [eax+40h], 0
0x6108C1: jnz     short loc_6108D2
0x6108C3: cmp     dword ptr [eax+3Ch], 0
0x6108C7: jnz     short loc_6108D2
0x6108C9: push    0; a2
0x6108CB: mov     ecx, esi; this
0x6108CD: call    Actor_GetActorBaseForm
0x6108D2: push    0; int
0x6108D4: push    offset ??_R0?AVTESNPC@@@8; struct TypeDescriptor *
0x6108D9: push    offset ??_R0?AVTESActorBase@@@8; struct _s_RTTICompleteObjectLocator *
0x6108DE: push    0; int
0x6108E0: push    eax; void *
0x6108E1: call    OblivionDynamicCast
0x6108E6: add     esp, 14h
0x6108E9: cmp     edi, ds:0B333C4h
0x6108EF: jnz     short loc_6108FB
0x6108F1: push    2
0x6108F3: lea     ecx, [eax+24h]
0x6108F6: call    TESActorBaseData_SetSharedPlayerFactionFlags
0x6108FB: mov     ecx, dword ptr [esp+154h+var_C]
0x610902: mov     large fs:0, ecx
0x610909: pop     ecx
0x61090A: pop     edi
0x61090B: pop     esi
0x61090C: pop     ebp
0x61090D: pop     ebx
0x61090E: mov     ecx, [esp+140h+var_10]
0x610915: xor     ecx, esp
0x610917: call    @__security_check_cookie@4; __security_check_cookie(x)
0x61091C: add     esp, 140h
0x610922: retn    0Ch
