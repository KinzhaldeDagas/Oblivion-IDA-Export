0x5992C0: push    0FFFFFFFFh
0x5992C2: push    offset ContainerMenu_Update_SEH
0x5992C7: mov     eax, large fs:0
0x5992CD: push    eax
0x5992CE: sub     esp, 154h
0x5992D4: mov     eax, ds:0B30AACh
0x5992D9: xor     eax, esp
0x5992DB: mov     [esp+160h+var_10], eax
0x5992E2: push    ebx; a3
0x5992E3: push    ebp; a3
0x5992E4: push    esi; a3
0x5992E5: push    edi; a3
0x5992E6: mov     eax, ds:0B30AACh
0x5992EB: xor     eax, esp
0x5992ED: push    eax; a3
0x5992EE: lea     eax, [esp+174h+var_C]
0x5992F5: mov     large fs:0, eax
0x5992FB: push    3F0h
0x599300: call    Menu_GetOpenMenuTile
0x599305: xor     ebp, ebp
0x599307: add     esp, 4
0x59930A: cmp     eax, ebp
0x59930C: mov     [esp+174h+var_134], eax
0x599310: jz      loc_599EAE
0x599316: mov     ecx, eax
0x599318: call    Tile_GetParentMenu
0x59931D: cmp     ds:0B333C4h, ebp
0x599323: mov     ebx, eax
0x599325: jz      loc_599EAE
0x59932B: mov     eax, [ebx+44h]
0x59932E: cmp     eax, ebp
0x599330: jz      loc_599EAE
0x599336: mov     ecx, [ebx+30h]
0x599339: movzx   edx, byte ptr [ebx+61h]
0x59933D: mov     esi, eax
0x59933F: mov     [esp+174h+var_124], ecx
0x599343: push    edx
0x599344: mov     ecx, esi
0x599346: mov     [esp+178h+var_158], esi
0x59934A: call    TESObjectREF_GetTotalEntryCountForITem
0x59934F: push    ebp; int
0x599350: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x599355: mov     edi, eax
0x599357: mov     eax, [ebx+44h]
0x59935A: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x59935F: push    ebp; int
0x599360: push    eax; void *
0x599361: mov     [esp+188h+var_12C], edi
0x599365: call    OblivionDynamicCast
0x59936A: add     esp, 14h
0x59936D: mov     [esp+174h+var_128], eax
0x599371: call    sub_5B3E50
0x599376: mov     [esp+174h+var_138], ebp
0x59937A: mov     [esp+174h+var_140], ebp
0x59937E: mov     [esp+174h+var_13C], ebp
0x599382: mov     [esp+174h+var_144], offset ??_7?$NiTList@PAVContainerItemAndIndex@@@@6B@; const NiTList<ContainerItemAndIndex *>::`vftable'
0x59938A: mov     [esp+174h+var_4], ebp
0x599391: mov     [esp+174h+var_150], ebp
0x599395: jmp     short loc_5993A0
0x599397: align 10h
0x5993A0: cmp     edi, ebp
0x5993A2: mov     [esp+174h+a3], ebp
0x5993A6: jle     loc_59962E
0x5993AC: lea     esp, [esp+0]
0x5993B0: cmp     esi, ds:0B333C4h
0x5993B6: jnz     short loc_5993C0
0x5993B8: mov     ecx, [esp+174h+a3]
0x5993BC: push    ebp
0x5993BD: push    ecx
0x5993BE: jmp     short loc_5993CA
0x5993C0: movzx   edx, byte ptr [ebx+61h]
0x5993C4: mov     eax, [esp+174h+a3]
0x5993C8: push    edx; a3
0x5993C9: push    eax; a2
0x5993CA: mov     ecx, esi; this
0x5993CC: call    GetInventoryEntryOfItem
0x5993D1: mov     ebp, eax
0x5993D3: test    ebp, ebp
0x5993D5: jz      loc_5994D5
0x5993DB: mov     ecx, ds:0B333C4h
0x5993E1: cmp     esi, ecx
0x5993E3: jz      short loc_5993EB
0x5993E5: cmp     byte ptr [ebx+63h], 0
0x5993E9: jnz     short loc_5993F5
0x5993EB: cmp     byte ptr [ebx+61h], 0
0x5993EF: jz      loc_599481
0x5993F5: xor     eax, eax
0x5993F7: cmp     [ebx+63h], al
0x5993FA: jz      short loc_59940B
0x5993FC: mov     ecx, offset TimeGlobals
0x599401: call    TimeGlobals_GetGameHour
0x599406: call    Double_To_SInt32
0x59940B: movzx   ecx, byte ptr [ebx+61h]
0x59940F: mov     edi, [esp+174h+var_128]
0x599413: push    0; a6
0x599415: push    0; a5
0x599417: push    eax; a4
0x599418: push    ecx; a3
0x599419: push    edi; a2
0x59941A: mov     ecx, ebp; this
0x59941C: call    sub_4854F0
0x599421: test    al, al
0x599423: mov     [esp+174h+var_151], al
0x599427: jz      short loc_59946C
0x599429: cmp     esi, ds:0B333C4h
0x59942F: jz      short loc_599458
0x599431: cmp     byte ptr [ebx+61h], 0
0x599435: jz      short loc_599450
0x599437: push    1
0x599439: push    edi
0x59943A: push    1
0x59943C: mov     ecx, ebp
0x59943E: call    sub_488E50
0x599443: fcomp   qword ptr ds:0A68FE0h
0x599449: fnstsw  ax
0x59944B: test    ah, 41h
0x59944E: jnp     short loc_59946C
0x599450: cmp     esi, ds:0B333C4h
0x599456: jnz     short loc_59949F
0x599458: cmp     byte ptr [ebx+61h], 0
0x59945C: jz      short loc_59949F
0x59945E: mov     ecx, [ebp+8]
0x599461: mov     edx, [ecx]
0x599463: mov     eax, [edx+78h]
0x599466: call    eax
0x599468: test    al, al
0x59946A: jz      short loc_59949F
0x59946C: mov     ecx, ebp
0x59946E: call    ContainerEntryExtraData_DestroyDataTable
0x599473: push    ebp
0x599474: call    FormHeapFree
0x599479: add     esp, 4
0x59947C: jmp     loc_599617
0x599481: cmp     esi, ecx
0x599483: mov     eax, [esp+174h+var_128]
0x599487: jnz     short loc_59948B
0x599489: mov     eax, ecx
0x59948B: push    0; a6
0x59948D: push    1; a5
0x59948F: push    1; a4
0x599491: push    0; a3
0x599493: push    eax; a2
0x599494: mov     ecx, ebp; this
0x599496: call    sub_4854F0
0x59949B: mov     [esp+174h+var_151], al
0x59949F: cmp     [esp+174h+var_151], 0
0x5994A4: jz      short loc_59946C
0x5994A6: cmp     [esp+174h+var_150], 1
0x5994AB: jz      short loc_5994B3
0x5994AD: cmp     byte ptr [ebx+61h], 0
0x5994B1: jz      short loc_5994D5
0x5994B3: mov     eax, [ebp+8]
0x5994B6: push    eax
0x5994B7: call    sub_469980
0x5994BC: add     esp, 4
0x5994BF: test    al, al
0x5994C1: jz      short loc_5994D5
0x5994C3: mov     ecx, ebp
0x5994C5: call    ContainerEntryExtraData_DestroyDataTable
0x5994CA: push    ebp
0x5994CB: call    FormHeapFree
0x5994D0: add     esp, 4
0x5994D3: xor     ebp, ebp
0x5994D5: test    ebp, ebp
0x5994D7: mov     edi, [esp+174h+var_13C]
0x5994DB: mov     [esp+174h+var_14C], 0
0x5994E3: jz      short loc_599501
0x5994E5: mov     ecx, ebp
0x5994E7: call    sub_485150
0x5994EC: mov     [esp+174h+var_14C], eax; a3
0x5994F0: mov     eax, [ebp+8]
0x5994F3: push    eax
0x5994F4: lea     ecx, [esp+178h+var_14C]
0x5994F8: push    ecx
0x5994F9: call    sub_5AA210
0x5994FE: add     esp, 8
0x599501: test    edi, edi
0x599503: jz      loc_5995A5
0x599509: lea     esp, [esp+0]
0x599510: test    ebp, ebp
0x599512: jz      loc_599613
0x599518: lea     eax, [edi+8]
0x59951B: mov     eax, [eax]
0x59951D: mov     esi, [eax]
0x59951F: mov     [esp+174h+var_148], edi; a3
0x599523: mov     edi, [edi+4]
0x599526: mov     ecx, esi
0x599528: call    sub_485150
0x59952D: mov     [esp+174h+var_130], eax
0x599531: mov     eax, [esi+8]
0x599534: push    eax
0x599535: lea     edx, [esp+178h+var_130]
0x599539: push    edx
0x59953A: call    sub_5AA210
0x59953F: add     esp, 8
0x599542: push    0
0x599544: push    0
0x599546: push    0
0x599548: push    1
0x59954A: mov     ecx, ebp
0x59954C: call    ContainerEntryExtraData_GetHealthFracOrUses
0x599551: fstp    [esp+174h+var_120]
0x599555: push    0
0x599557: push    0
0x599559: push    0
0x59955B: push    1
0x59955D: mov     ecx, esi
0x59955F: call    ContainerEntryExtraData_GetHealthFracOrUses
0x599564: fstp    [esp+174h+var_160]
0x599568: push    ebp
0x599569: push    esi
0x59956A: lea     ecx, [ebx+60h]
0x59956D: call    sub_584500
0x599572: mov     ecx, [esp+174h+var_130]
0x599576: cmp     ecx, [esp+174h+var_14C]
0x59957A: jl      short loc_5995D6
0x59957C: jnz     short loc_599599
0x59957E: test    eax, eax
0x599580: jl      loc_5997C0
0x599586: jnz     short loc_599599
0x599588: fld     [esp+174h+var_120]
0x59958C: fld     [esp+174h+var_160]
0x599590: fcompp
0x599592: fnstsw  ax
0x599594: test    ah, 41h
0x599597: jz      short loc_5995D6
0x599599: test    edi, edi
0x59959B: jnz     loc_599510
0x5995A1: mov     esi, [esp+174h+var_158]
0x5995A5: test    ebp, ebp
0x5995A7: jz      short loc_599617
0x5995A9: push    0Ch; Size
0x5995AB: call    FormHeapAlloc
0x5995B0: add     esp, 4
0x5995B3: test    eax, eax
0x5995B5: jz      loc_59980A
0x5995BB: cmp     [esp+174h+var_150], 0
0x5995C0: mov     edx, [esp+174h+a3]
0x5995C4: setz    cl
0x5995C7: mov     [eax], ebp
0x5995C9: mov     [eax+4], edx
0x5995CC: mov     [eax+8], cl
0x5995CF: mov     edi, eax
0x5995D1: jmp     loc_59980C
0x5995D6: push    0Ch; Size
0x5995D8: call    FormHeapAlloc
0x5995DD: add     esp, 4
0x5995E0: test    eax, eax
0x5995E2: jz      short loc_5995FA
0x5995E4: cmp     [esp+174h+var_150], 0
0x5995E9: mov     ecx, [esp+174h+a3]
0x5995ED: mov     [eax], ebp
0x5995EF: setz    dl
0x5995F2: mov     [eax+4], ecx
0x5995F5: mov     [eax+8], dl
0x5995F8: jmp     short loc_5995FC
0x5995FA: xor     eax, eax
0x5995FC: mov     ecx, [esp+174h+var_148]
0x599600: mov     [esp+174h+var_160], eax; a3
0x599604: lea     eax, [esp+174h+var_160]
0x599608: push    eax
0x599609: push    ecx
0x59960A: lea     ecx, [esp+17Ch+var_144]
0x59960E: call    sub_5986D0
0x599613: mov     esi, [esp+174h+var_158]
0x599617: mov     eax, [esp+174h+a3]
0x59961B: add     eax, 1
0x59961E: xor     ebp, ebp
0x599620: cmp     eax, [esp+174h+var_12C]
0x599624: mov     [esp+174h+a3], eax; a3
0x599628: jl      loc_5993B0
0x59962E: mov     esi, ds:0B333C4h
0x599634: push    ebp
0x599635: mov     ecx, esi
0x599637: mov     [esp+178h+var_158], esi; a3
0x59963B: call    TESObjectREF_GetTotalEntryCountForITem
0x599640: mov     edi, eax
0x599642: mov     eax, [esp+174h+var_150]
0x599646: add     eax, 1
0x599649: cmp     eax, 2
0x59964C: mov     [esp+174h+var_12C], edi
0x599650: mov     [esp+174h+var_150], eax; a3
0x599654: jl      loc_5993A0
0x59965A: push    1; arg1
0x59965C: push    ebp; canCreate
0x59965D: call    InterfaceManager_GetSingleton
0x599662: mov     ecx, [eax+88h]
0x599668: add     esp, 8
0x59966B: cmp     ecx, ebp
0x59966D: jz      short loc_5996AD
0x59966F: push    0FA8h
0x599674: call    Tile_GetFloat
0x599679: fcomp   qword ptr ds:0A6B620h
0x59967F: fnstsw  ax
0x599681: test    ah, 44h
0x599684: jp      short loc_5996AD
0x599686: mov     ecx, [ebx+34h]; this
0x599689: fld1
0x59968B: push    ecx
0x59968C: fstp    [esp+178h+a2]; a3
0x59968F: push    0FA1h; a2
0x599694: mov     [ebx+3Ch], ebp
0x599697: call    Tile_SetFloat
0x59969C: push    1; arg1
0x59969E: push    ebp; canCreate
0x59969F: call    InterfaceManager_GetSingleton
0x5996A4: add     esp, 8
0x5996A7: mov     [eax+88h], ebp
0x5996AD: mov     edx, [esp+174h+var_124]
0x5996B1: mov     esi, [edx+34h]
0x5996B4: cmp     esi, ebp
0x5996B6: jz      short loc_5996EC
0x5996B8: mov     edi, [esi+8]
0x5996BB: lea     eax, [esi+8]
0x5996BE: mov     esi, [esi]
0x5996C0: push    0FB8h
0x5996C5: mov     ecx, edi
0x5996C7: call    sub_588B50
0x5996CC: test    eax, eax
0x5996CE: jz      short loc_5996E6
0x5996D0: fld     dword ptr ds:0A690E0h
0x5996D6: push    ecx
0x5996D7: fstp    [esp+178h+a2]; a3
0x5996DA: push    0FAAh; a2
0x5996DF: mov     ecx, edi; this
0x5996E1: call    Tile_SetFloat
0x5996E6: test    esi, esi
0x5996E8: jnz     short loc_5996B8
0x5996EA: xor     ebp, ebp
0x5996EC: mov     ecx, [ebx+4]; this
0x5996EF: fld     dword ptr ds:0A53954h
0x5996F5: push    ecx
0x5996F6: fstp    [esp+178h+a2]; a3
0x5996F9: push    0FAFh; a2
0x5996FE: call    Tile_SetFloat
0x599703: fld     dword ptr ds:0A53954h
0x599709: mov     ecx, [ebx+4]; this
0x59970C: push    ecx
0x59970D: fstp    [esp+178h+a2]; a3
0x599710: push    0FB0h; a2
0x599715: call    Tile_SetFloat
0x59971A: fld     dword ptr ds:0A53954h
0x599720: mov     ecx, [ebx+4]; this
0x599723: push    ecx
0x599724: fstp    [esp+178h+a2]; a3
0x599727: push    0FB1h; a2
0x59972C: call    Tile_SetFloat
0x599731: fld     dword ptr ds:0A53954h
0x599737: mov     ecx, [ebx+4]; this
0x59973A: push    ecx
0x59973B: fstp    [esp+178h+a2]; a3
0x59973E: push    0FB2h; a2
0x599743: call    Tile_SetFloat
0x599748: mov     eax, [esp+174h+var_140]
0x59974C: cmp     eax, ebp
0x59974E: mov     [esp+174h+a3], 0FFFFFFFFh
0x599756: mov     [esp+174h+var_12C], ebp
0x59975A: mov     [esp+174h+var_148], eax
0x59975E: jz      loc_599AEC
0x599764: mov     ecx, [esp+174h+var_148]
0x599768: lea     eax, [ecx+8]
0x59976B: mov     eax, [eax]
0x59976D: mov     ecx, [ecx]
0x59976F: mov     edi, [eax]
0x599771: mov     edx, [eax+4]
0x599774: mov     [esp+174h+var_130], eax
0x599778: mov     al, [eax+8]
0x59977B: mov     [esp+174h+var_148], ecx
0x59977F: mov     ecx, edi
0x599781: mov     [esp+174h+var_14C], edx
0x599785: mov     byte ptr [esp+174h+var_158], al; a3
0x599789: call    sub_485150
0x59978E: mov     esi, eax
0x599790: cmp     esi, [esp+174h+var_12C]
0x599794: mov     [esp+174h+var_150], esi
0x599798: jz      loc_5998A4
0x59979E: mov     ebp, 1
0x5997A3: cmp     esi, ebp
0x5997A5: jnz     loc_599854
0x5997AB: mov     ecx, [ebx+4]
0x5997AE: fild    [esp+174h+a3]
0x5997B2: push    ecx
0x5997B3: fstp    [esp+178h+a2]
0x5997B6: push    0FAFh
0x5997BB: jmp     loc_599897
0x5997C0: push    0Ch; Size
0x5997C2: call    FormHeapAlloc
0x5997C7: add     esp, 4
0x5997CA: test    eax, eax
0x5997CC: jz      short loc_5997F5
0x5997CE: mov     edx, [esp+174h+a3]
0x5997D2: cmp     [esp+174h+var_150], 0
0x5997D7: mov     [eax+4], edx
0x5997DA: setz    cl
0x5997DD: lea     edx, [esp+174h+var_160]
0x5997E1: mov     [eax], ebp
0x5997E3: mov     [eax+8], cl
0x5997E6: mov     [esp+174h+var_160], eax
0x5997EA: mov     eax, [esp+174h+var_148]
0x5997EE: push    edx
0x5997EF: push    eax
0x5997F0: jmp     loc_59960A
0x5997F5: xor     eax, eax
0x5997F7: lea     edx, [esp+174h+var_160]
0x5997FB: mov     [esp+174h+var_160], eax
0x5997FF: mov     eax, [esp+174h+var_148]
0x599803: push    edx
0x599804: push    eax
0x599805: jmp     loc_59960A
0x59980A: xor     edi, edi
0x59980C: mov     edx, [esp+174h+var_144]
0x599810: mov     eax, [edx+4]
0x599813: lea     ecx, [esp+174h+var_144]
0x599817: call    eax
0x599819: mov     [eax+8], edi
0x59981C: mov     dword ptr [eax+4], 0
0x599823: mov     ecx, [esp+174h+var_140]
0x599827: mov     [eax], ecx
0x599829: mov     ecx, [esp+174h+var_140]
0x59982D: test    ecx, ecx
0x59982F: jz      short loc_599842
0x599831: mov     [ecx+4], eax
0x599834: add     [esp+174h+var_138], 1
0x599839: mov     [esp+174h+var_140], eax
0x59983D: jmp     loc_599617
0x599842: add     [esp+174h+var_138], 1
0x599847: mov     [esp+174h+var_13C], eax
0x59984B: mov     [esp+174h+var_140], eax
0x59984F: jmp     loc_599617
0x599854: cmp     esi, 2
0x599857: jnz     short loc_59986B
0x599859: mov     ecx, [ebx+4]
0x59985C: fild    [esp+174h+a3]
0x599860: push    ecx
0x599861: fstp    [esp+178h+a2]
0x599864: push    0FB0h
0x599869: jmp     short loc_599897
0x59986B: cmp     esi, 4
0x59986E: jnz     short loc_599882
0x599870: mov     ecx, [ebx+4]
0x599873: fild    [esp+174h+a3]
0x599877: push    ecx
0x599878: fstp    [esp+178h+a2]
0x59987B: push    0FB1h
0x599880: jmp     short loc_599897
0x599882: cmp     esi, 8
0x599885: jnz     short loc_5998A0
0x599887: mov     ecx, [ebx+4]; this
0x59988A: fild    [esp+174h+a3]
0x59988E: push    ecx
0x59988F: fstp    [esp+178h+a2]; a3
0x599892: push    0FB2h; a2
0x599897: call    Tile_SetFloat
0x59989C: add     [esp+174h+a3], ebp
0x5998A0: mov     [esp+174h+var_12C], esi
0x5998A4: mov     ecx, ds:0B333C4h
0x5998AA: push    ecx
0x5998AB: mov     ecx, edi
0x5998AD: call    sub_4851B0
0x5998B2: push    eax
0x5998B3: push    offset aIcons; "Icons"
0x5998B8: lea     edx, [esp+17Ch+var_114]
0x5998BC: push    offset aSS_2; "%s\\%s"
0x5998C1: push    edx
0x5998C2: call    __sprintf
0x5998C7: mov     eax, [esp+184h+var_124]
0x5998CB: mov     ebp, [eax+38h]
0x5998CE: add     esp, 10h
0x5998D1: test    ebp, ebp
0x5998D3: jz      loc_599981
0x5998D9: lea     esp, [esp+0]
0x5998E0: mov     esi, [ebp+8]
0x5998E3: lea     eax, [ebp+8]
0x5998E6: mov     ebp, [ebp+4]
0x5998E9: push    0FBCh
0x5998EE: mov     ecx, esi
0x5998F0: call    Tile_GetFloat
0x5998F5: call    Double_To_SInt32
0x5998FA: push    0FAFh
0x5998FF: mov     ecx, esi
0x599901: mov     [esp+178h+var_120], eax
0x599905: call    sub_588C10
0x59990A: test    eax, eax
0x59990C: jz      short loc_599979
0x59990E: mov     ecx, [esp+174h+var_130]
0x599912: mov     ecx, [ecx]
0x599914: call    sub_488DF0
0x599919: test    eax, eax
0x59991B: jz      short loc_599979
0x59991D: push    0FAAh
0x599922: mov     ecx, esi
0x599924: call    Tile_GetFloat
0x599929: fcomp   dword ptr ds:0A690E0h
0x59992F: fnstsw  ax
0x599931: test    ah, 44h
0x599934: jp      short loc_599979
0x599936: mov     edx, [esp+174h+var_130]
0x59993A: mov     ecx, [edx]
0x59993C: call    sub_488DF0
0x599941: push    0FAFh
0x599946: mov     ecx, esi
0x599948: mov     [esp+178h+var_160], eax; a3
0x59994C: call    sub_588C10
0x599951: mov     ecx, [esp+174h+var_160]
0x599955: push    ecx; unsigned __int8 *
0x599956: push    eax; unsigned __int8 *
0x599957: call    __mbscmp
0x59995C: add     esp, 8
0x59995F: test    eax, eax
0x599961: jnz     short loc_599979
0x599963: xor     edx, edx
0x599965: cmp     byte ptr [esp+174h+var_158], dl
0x599969: setnz   dl
0x59996C: add     edx, 1
0x59996F: cmp     [esp+174h+var_120], edx
0x599973: jz      loc_599B7F
0x599979: test    ebp, ebp
0x59997B: jnz     loc_5998E0
0x599981: mov     edx, [esp+174h+a3]
0x599985: push    33h ; '3'
0x599987: push    edx
0x599988: mov     ecx, edi
0x59998A: call    sub_485150
0x59998F: push    eax
0x599990: mov     ecx, edi
0x599992: call    sub_488DF0
0x599997: push    eax
0x599998: lea     eax, [esp+184h+var_114]
0x59999C: push    eax
0x59999D: mov     ecx, ebx
0x59999F: call    sub_599070
0x5999A4: mov     ecx, [esp+174h+var_158]
0x5999A8: mov     edx, [ebx+44h]
0x5999AB: push    ecx
0x5999AC: mov     esi, eax
0x5999AE: movzx   eax, byte ptr [ebx+61h]
0x5999B2: push    edx
0x5999B3: push    eax
0x5999B4: push    1
0x5999B6: push    1
0x5999B8: mov     ecx, edi
0x5999BA: call    sub_48F450
0x5999BF: push    eax
0x5999C0: push    0FB0h
0x5999C5: mov     ecx, esi
0x5999C7: call    Tile_SetString
0x5999CC: push    0
0x5999CE: push    0
0x5999D0: push    0
0x5999D2: push    1
0x5999D4: push    2
0x5999D6: mov     ecx, edi
0x5999D8: call    sub_48F450
0x5999DD: push    eax
0x5999DE: push    0FB1h
0x5999E3: mov     ecx, esi
0x5999E5: call    Tile_SetString
0x5999EA: push    0
0x5999EC: push    0
0x5999EE: push    0
0x5999F0: push    1
0x5999F2: push    3
0x5999F4: mov     ecx, edi
0x5999F6: call    sub_48F450
0x5999FB: push    eax
0x5999FC: push    0FB2h
0x599A01: mov     ecx, esi
0x599A03: call    Tile_SetString
0x599A08: push    0
0x599A0A: push    0
0x599A0C: push    0
0x599A0E: push    1
0x599A10: push    4
0x599A12: mov     ecx, edi
0x599A14: call    sub_48F450
0x599A19: push    eax
0x599A1A: push    0FB3h
0x599A1F: mov     ecx, esi
0x599A21: call    Tile_SetString
0x599A26: push    0
0x599A28: push    0
0x599A2A: push    0
0x599A2C: push    1
0x599A2E: push    0
0x599A30: mov     ecx, edi
0x599A32: call    sub_48F450
0x599A37: push    eax
0x599A38: push    0FB5h
0x599A3D: mov     ecx, esi
0x599A3F: call    Tile_SetString
0x599A44: push    0
0x599A46: mov     ecx, edi
0x599A48: call    ContainerEntryExtraData_HasWorn
0x599A4D: neg     al
0x599A4F: sbb     eax, eax
0x599A51: neg     eax
0x599A53: add     eax, 1
0x599A56: mov     [esp+174h+var_160], eax; a3
0x599A5A: fild    [esp+174h+var_160]
0x599A5E: push    ecx
0x599A5F: fstp    [esp+178h+a2]; a3
0x599A62: push    0FB8h; a2
0x599A67: mov     ecx, esi; this
0x599A69: call    Tile_SetFloat
0x599A6E: fild    [esp+174h+var_14C]
0x599A72: push    ecx
0x599A73: mov     ecx, esi; this
0x599A75: fstp    [esp+178h+a2]; a3
0x599A78: push    0FB9h; a2
0x599A7D: call    Tile_SetFloat
0x599A82: xor     ecx, ecx
0x599A84: cmp     byte ptr [esp+174h+var_158], cl
0x599A88: setnz   cl
0x599A8B: add     ecx, 1
0x599A8E: mov     [esp+174h+var_160], ecx
0x599A92: fild    [esp+174h+var_160]
0x599A96: push    ecx
0x599A97: mov     ecx, esi; this
0x599A99: fstp    [esp+178h+a2]; a3
0x599A9C: push    0FBCh; a2
0x599AA1: call    Tile_SetFloat
0x599AA6: mov     ecx, edi
0x599AA8: call    sub_485C00
0x599AAD: mov     ebp, eax
0x599AAF: mov     [esp+174h+var_160], ebp
0x599AB3: fild    [esp+174h+var_160]
0x599AB7: push    ecx
0x599AB8: mov     ecx, esi; this
0x599ABA: fstp    [esp+178h+a2]; a3
0x599ABD: push    0FBAh; a2
0x599AC2: call    Tile_SetFloat
0x599AC7: push    ebp
0x599AC8: mov     ecx, edi
0x599ACA: call    sub_48F6A0
0x599ACF: push    eax
0x599AD0: push    0FBBh
0x599AD5: mov     ecx, esi
0x599AD7: call    Tile_SetString
0x599ADC: add     [esp+174h+a3], 1
0x599AE1: cmp     [esp+174h+var_148], 0
0x599AE6: jnz     loc_599764
0x599AEC: mov     edx, [esp+174h+a3]
0x599AF0: mov     esi, [esp+174h+var_124]
0x599AF4: add     edx, 0FFFFFFFFh
0x599AF7: mov     [esp+174h+var_160], edx
0x599AFB: fild    [esp+174h+var_160]
0x599AFF: push    ecx
0x599B00: mov     ecx, esi; this
0x599B02: fstp    [esp+178h+a2]; a3
0x599B05: push    0FAEh; a2
0x599B0A: call    Tile_SetFloat
0x599B0F: mov     esi, [esi+34h]
0x599B12: xor     ebp, ebp
0x599B14: cmp     esi, ebp
0x599B16: jz      short loc_599B4B
0x599B18: mov     edi, [esi+8]
0x599B1B: lea     eax, [esi+8]
0x599B1E: mov     esi, [esi]
0x599B20: push    0FAAh
0x599B25: mov     ecx, edi
0x599B27: call    Tile_GetFloat
0x599B2C: fcomp   dword ptr ds:0A690E0h
0x599B32: fnstsw  ax
0x599B34: test    ah, 44h
0x599B37: jp      short loc_599B47
0x599B39: cmp     edi, ebp
0x599B3B: jz      short loc_599B47
0x599B3D: mov     eax, [edi]
0x599B3F: mov     edx, [eax]
0x599B41: push    1; a3
0x599B43: mov     ecx, edi
0x599B45: call    edx
0x599B47: cmp     esi, ebp
0x599B49: jnz     short loc_599B18
0x599B4B: cmp     [esp+174h+var_138], ebp
0x599B4F: jz      loc_599DC2
0x599B55: mov     eax, [esp+174h+var_140]
0x599B59: lea     esp, [esp+0]
0x599B60: cmp     [eax+8], ebp
0x599B63: jz      loc_599DB8
0x599B69: mov     ecx, [eax]
0x599B6B: cmp     ecx, ebp
0x599B6D: mov     [esp+174h+var_140], ecx
0x599B71: jz      loc_599D77
0x599B77: mov     [ecx+4], ebp
0x599B7A: jmp     loc_599D7B
0x599B7F: mov     ecx, edi
0x599B81: call    sub_488DF0
0x599B86: push    eax
0x599B87: push    0FAFh
0x599B8C: mov     ecx, esi
0x599B8E: call    Tile_SetString
0x599B93: mov     eax, [esp+174h+var_158]
0x599B97: mov     ecx, [ebx+44h]
0x599B9A: movzx   edx, byte ptr [ebx+61h]
0x599B9E: push    eax
0x599B9F: push    ecx
0x599BA0: push    edx
0x599BA1: push    1
0x599BA3: push    1
0x599BA5: mov     ecx, edi
0x599BA7: call    sub_48F450
0x599BAC: push    eax
0x599BAD: push    0FB0h
0x599BB2: mov     ecx, esi
0x599BB4: call    Tile_SetString
0x599BB9: push    0
0x599BBB: push    0
0x599BBD: push    0
0x599BBF: push    1
0x599BC1: push    2
0x599BC3: mov     ecx, edi
0x599BC5: call    sub_48F450
0x599BCA: push    eax
0x599BCB: push    0FB1h
0x599BD0: mov     ecx, esi
0x599BD2: call    Tile_SetString
0x599BD7: push    0
0x599BD9: push    0
0x599BDB: push    0
0x599BDD: push    1
0x599BDF: push    3
0x599BE1: mov     ecx, edi
0x599BE3: call    sub_48F450
0x599BE8: push    eax
0x599BE9: push    0FB2h
0x599BEE: mov     ecx, esi
0x599BF0: call    Tile_SetString
0x599BF5: push    0
0x599BF7: push    0
0x599BF9: push    0
0x599BFB: push    1
0x599BFD: push    4
0x599BFF: mov     ecx, edi
0x599C01: call    sub_48F450
0x599C06: push    eax
0x599C07: push    0FB3h
0x599C0C: mov     ecx, esi
0x599C0E: call    Tile_SetString
0x599C13: lea     eax, [esp+174h+var_114]
0x599C17: push    eax
0x599C18: push    0FB4h
0x599C1D: mov     ecx, esi
0x599C1F: call    Tile_SetString
0x599C24: push    0
0x599C26: push    0
0x599C28: push    0
0x599C2A: push    1
0x599C2C: push    0
0x599C2E: mov     ecx, edi
0x599C30: call    sub_48F450
0x599C35: push    eax
0x599C36: push    0FB5h
0x599C3B: mov     ecx, esi
0x599C3D: call    Tile_SetString
0x599C42: fild    [esp+174h+var_150]
0x599C46: push    ecx
0x599C47: mov     ecx, esi; this
0x599C49: fstp    [esp+178h+a2]; a3
0x599C4C: push    0FB7h; a2
0x599C51: call    Tile_SetFloat
0x599C56: push    0
0x599C58: mov     ecx, edi
0x599C5A: call    ContainerEntryExtraData_HasWorn
0x599C5F: neg     al
0x599C61: sbb     eax, eax
0x599C63: neg     eax
0x599C65: add     eax, 1
0x599C68: mov     [esp+174h+var_160], eax
0x599C6C: fild    [esp+174h+var_160]
0x599C70: push    ecx
0x599C71: mov     ecx, esi; this
0x599C73: fstp    [esp+178h+a2]; a3
0x599C76: push    0FB8h; a2
0x599C7B: call    Tile_SetFloat
0x599C80: fild    [esp+174h+var_14C]
0x599C84: push    ecx
0x599C85: mov     ecx, esi; this
0x599C87: fstp    [esp+178h+a2]; a3
0x599C8A: push    0FB9h; a2
0x599C8F: call    Tile_SetFloat
0x599C94: fild    [esp+174h+a3]
0x599C98: push    ecx
0x599C99: mov     ecx, esi; this
0x599C9B: fstp    [esp+178h+a2]; a3
0x599C9E: push    0FAAh; a2
0x599CA3: call    Tile_SetFloat
0x599CA8: mov     ecx, edi
0x599CAA: call    sub_485C00
0x599CAF: mov     ebp, eax
0x599CB1: mov     [esp+174h+var_160], ebp
0x599CB5: fild    [esp+174h+var_160]
0x599CB9: push    ecx
0x599CBA: mov     ecx, esi; this
0x599CBC: fstp    [esp+178h+a2]; a3
0x599CBF: push    0FBAh; a2
0x599CC4: call    Tile_SetFloat
0x599CC9: push    ebp
0x599CCA: mov     ecx, edi
0x599CCC: call    sub_48F6A0
0x599CD1: push    eax
0x599CD2: push    0FBBh
0x599CD7: mov     ecx, esi
0x599CD9: call    Tile_SetString
0x599CDE: xor     ecx, ecx
0x599CE0: cmp     byte ptr [esp+174h+var_158], cl
0x599CE4: setnz   cl
0x599CE7: add     ecx, 1
0x599CEA: mov     [esp+174h+var_160], ecx
0x599CEE: fild    [esp+174h+var_160]
0x599CF2: push    ecx
0x599CF3: mov     ecx, esi; this
0x599CF5: fstp    [esp+178h+a2]; a3
0x599CF8: push    0FBCh; a2
0x599CFD: call    Tile_SetFloat
0x599D02: mov     eax, [esi+10h]
0x599D05: lea     ecx, [eax+30h]
0x599D08: mov     eax, [ecx+4]
0x599D0B: test    eax, eax
0x599D0D: jz      short loc_599D20
0x599D0F: nop
0x599D10: cmp     esi, [eax+8]
0x599D13: lea     edx, [eax+8]
0x599D16: mov     edi, eax
0x599D18: mov     eax, [eax]
0x599D1A: jz      short loc_599D22
0x599D1C: test    eax, eax
0x599D1E: jnz     short loc_599D10
0x599D20: xor     edi, edi
0x599D22: test    edi, edi
0x599D24: mov     [esp+174h+var_160], edi
0x599D28: jz      short loc_599D34
0x599D2A: lea     edx, [esp+174h+var_160]
0x599D2E: push    edx
0x599D2F: call    sub_7AA860
0x599D34: mov     eax, [esi+10h]
0x599D37: lea     edi, [eax+30h]
0x599D3A: mov     eax, [edi]
0x599D3C: mov     edx, [eax+4]
0x599D3F: mov     ecx, edi
0x599D41: call    edx
0x599D43: mov     [eax+8], esi
0x599D46: mov     dword ptr [eax+4], 0
0x599D4D: mov     ecx, [edi+4]
0x599D50: mov     [eax], ecx
0x599D52: mov     ecx, [edi+4]
0x599D55: test    ecx, ecx
0x599D57: jz      short loc_599D68
0x599D59: mov     [ecx+4], eax
0x599D5C: add     dword ptr [edi+0Ch], 1
0x599D60: mov     [edi+4], eax
0x599D63: jmp     loc_599ADC
0x599D68: add     dword ptr [edi+0Ch], 1
0x599D6C: mov     [edi+8], eax
0x599D6F: mov     [edi+4], eax
0x599D72: jmp     loc_599ADC
0x599D77: mov     [esp+174h+var_13C], ebp
0x599D7B: mov     esi, [eax+8]
0x599D7E: push    eax; a3
0x599D7F: mov     eax, [esp+178h+var_144]
0x599D83: mov     edx, [eax+8]
0x599D86: lea     ecx, [esp+178h+var_144]
0x599D8A: call    edx
0x599D8C: sub     [esp+174h+var_138], 1
0x599D91: cmp     esi, ebp
0x599D93: jz      short loc_599DB4
0x599D95: mov     edi, [esi]
0x599D97: cmp     edi, ebp
0x599D99: jz      short loc_599DAB
0x599D9B: mov     ecx, edi
0x599D9D: call    ContainerEntryExtraData_DestroyDataTable
0x599DA2: push    edi
0x599DA3: call    FormHeapFree
0x599DA8: add     esp, 4
0x599DAB: push    esi
0x599DAC: call    FormHeapFree
0x599DB1: add     esp, 4
0x599DB4: mov     eax, [esp+174h+var_140]
0x599DB8: cmp     [esp+174h+var_138], ebp
0x599DBC: jnz     loc_599B60
0x599DC2: mov     eax, [ebx+40h]
0x599DC5: push    eax
0x599DC6: mov     ecx, ebx
0x599DC8: call    sub_5987F0
0x599DCD: fldz
0x599DCF: lea     ecx, [esp+174h+var_11C]
0x599DD3: fst     [esp+174h+var_118]
0x599DD7: push    ecx
0x599DD8: fstp    [esp+178h+var_11C]
0x599DDC: mov     ecx, ds:0B333C4h
0x599DE2: lea     edx, [esp+178h+var_118]
0x599DE6: push    edx
0x599DE7: call    sub_65DFA0
0x599DEC: fld     [esp+174h+var_118]
0x599DF0: call    Double_To_SInt32
0x599DF5: mov     esi, [esp+174h+var_134]
0x599DF9: mov     [esp+174h+var_160], eax
0x599DFD: fild    [esp+174h+var_160]
0x599E01: push    ecx
0x599E02: mov     ecx, esi; this
0x599E04: fstp    [esp+178h+a2]; a3
0x599E07: push    0FBBh; a2
0x599E0C: call    Tile_SetFloat
0x599E11: fld     [esp+174h+var_11C]
0x599E15: call    Double_To_SInt32
0x599E1A: mov     [esp+174h+var_134], eax
0x599E1E: fild    [esp+174h+var_134]
0x599E22: push    ecx
0x599E23: mov     ecx, esi; this
0x599E25: fstp    [esp+178h+a2]; a3
0x599E28: push    0FBCh; a2
0x599E2D: call    Tile_SetFloat
0x599E32: mov     ecx, ds:0B333C4h
0x599E38: call    sub_5E4420
0x599E3D: mov     [esp+174h+var_134], eax
0x599E41: fild    [esp+174h+var_134]
0x599E45: push    ecx
0x599E46: mov     ecx, esi; this
0x599E48: fstp    [esp+178h+a2]; a3
0x599E4B: push    0FB4h; a2
0x599E50: call    Tile_SetFloat
0x599E55: mov     edi, [esp+174h+var_128]
0x599E59: cmp     edi, ebp
0x599E5B: jz      short loc_599E9A
0x599E5D: mov     ecx, edi; this
0x599E5F: call    TESObjectREFR_GetName
0x599E64: push    eax
0x599E65: push    0FB9h
0x599E6A: mov     ecx, esi
0x599E6C: call    Tile_SetString
0x599E71: mov     ecx, edi
0x599E73: call    sub_5FAA70
0x599E78: test    eax, eax
0x599E7A: mov     [esp+174h+var_134], eax
0x599E7E: fild    [esp+174h+var_134]
0x599E82: jge     short loc_599E8A
0x599E84: fadd    dword ptr ds:0A2FC78h
0x599E8A: push    ecx
0x599E8B: fstp    [esp+178h+a2]; a3
0x599E8E: push    0FBAh; a2
0x599E93: mov     ecx, esi; this
0x599E95: call    Tile_SetFloat
0x599E9A: lea     ecx, [esp+174h+var_144]
0x599E9E: mov     [esp+174h+var_4], 0FFFFFFFFh
0x599EA9: call    ??1?$NiTList@PAVContainerItemAndIndex@@@@UAE@XZ; NiTList<ContainerItemAndIndex *>::~NiTList<ContainerItemAndIndex *>(void)
0x599EAE: mov     ecx, dword ptr [esp+174h+var_C]
0x599EB5: mov     large fs:0, ecx
0x599EBC: pop     ecx
0x599EBD: pop     edi
0x599EBE: pop     esi
0x599EBF: pop     ebp
0x599EC0: pop     ebx
0x599EC1: mov     ecx, [esp+160h+var_10]
0x599EC8: xor     ecx, esp
0x599ECA: call    @__security_check_cookie@4; __security_check_cookie(x)
0x599ECF: add     esp, 160h
0x599ED5: retn
