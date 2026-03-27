0x421340: push    ecx
0x421341: push    esi
0x421342: push    edi
0x421343: mov     esi, ecx
0x421345: push    offset aExtradatalistG; lpCriticalSection
0x42134A: mov     ecx, offset BSExtraDataCS
0x42134F: call    NiEnterCriticalSection
0x421354: mov     ecx, SaveLoad_CurrentSavegame
0x42135A: xor     edi, edi
0x42135C: call    sub_45A170
0x421361: test    al, al
0x421363: jz      short loc_42136A
0x421365: mov     edi, 6
0x42136A: add     edi, 2
0x42136D: mov     [esp+0Ch+var_4], edi
0x421371: mov     edi, [esi+4]
0x421374: test    edi, edi
0x421376: jz      loc_421895
0x42137C: push    ebx
0x42137D: mov     ebx, [esp+10h+arg_0]
0x421381: push    ebp
0x421382: mov     esi, 4
0x421387: jmp     short loc_421390
0x421389: align 10h
0x421390: movzx   eax, byte ptr [edi+4]
0x421394: movzx   ebp, word ptr [esp+14h+var_4]
0x421399: add     eax, 0FFFFFFEFh; switch 76 cases
0x42139C: cmp     eax, 4Bh
0x42139F: ja      ExtraDataList_GetSaveSize___def_4213AC; jumptable 004213AC default case, cases 19-29,36-38,48,52,53,56,59,60,63,64,66-69,71,73,76,77,80,81,84,86-88,91
0x4213A5: movzx   eax, ds:byte_4219A8[eax]
0x4213AC: jmp     ds:jpt_4213AC[eax*4]; switch jump
0x4213B3: test    bl, 20h; jumptable 004213AC case 42
0x4213B6: jz      ExtraDataList_GetSaveSize___def_4213AC; jumptable 004213AC default case, cases 19-29,36-38,48,52,53,56,59,60,63,64,66-69,71,73,76,77,80,81,84,86-88,91
0x4213BC: add     [esp+14h+var_4], 2
0x4213C1: jmp     loc_421500
0x4213C6: test    bl, 20h; jumptable 004213AC cases 34,43,45,46,55,72,83
0x4213C9: jz      ExtraDataList_GetSaveSize___def_4213AC; jumptable 004213AC default case, cases 19-29,36-38,48,52,53,56,59,60,63,64,66-69,71,73,76,77,80,81,84,86-88,91
0x4213CF: add     [esp+14h+var_4], esi; jumptable 004213AC cases 65,79,92
0x4213D3: jmp     loc_421500
0x4213D8: test    bl, 20h; jumptable 004213AC cases 44,47,85
0x4213DB: jz      ExtraDataList_GetSaveSize___def_4213AC; jumptable 004213AC default case, cases 19-29,36-38,48,52,53,56,59,60,63,64,66-69,71,73,76,77,80,81,84,86-88,91
0x4213E1: add     [esp+14h+var_4], 1; jumptable 004213AC case 90
0x4213E6: jmp     loc_421500
0x4213EB: test    bl, 40h; jumptable 004213AC case 49
0x4213EE: jz      ExtraDataList_GetSaveSize___def_4213AC; jumptable 004213AC default case, cases 19-29,36-38,48,52,53,56,59,60,63,64,66-69,71,73,76,77,80,81,84,86-88,91
0x4213F4: add     [esp+14h+var_4], 6
0x4213F9: jmp     loc_421500
0x4213FE: test    ebx, 2000h; jumptable 004213AC case 82
0x421404: jz      ExtraDataList_GetSaveSize___def_4213AC; jumptable 004213AC default case, cases 19-29,36-38,48,52,53,56,59,60,63,64,66-69,71,73,76,77,80,81,84,86-88,91
0x42140A: add     [esp+14h+var_4], esi
0x42140E: jmp     loc_421500
0x421413: test    bl, bl; jumptable 004213AC case 61
0x421415: jns     ExtraDataList_GetSaveSize___def_4213AC; jumptable 004213AC default case, cases 19-29,36-38,48,52,53,56,59,60,63,64,66-69,71,73,76,77,80,81,84,86-88,91
0x42141B: add     [esp+14h+var_4], esi
0x42141F: jmp     loc_421500
0x421424: test    bl, 0A0h; jumptable 004213AC case 39
0x421427: jz      ExtraDataList_GetSaveSize___def_4213AC; jumptable 004213AC default case, cases 19-29,36-38,48,52,53,56,59,60,63,64,66-69,71,73,76,77,80,81,84,86-88,91
0x42142D: add     [esp+14h+var_4], esi
0x421431: jmp     loc_421500
0x421436: test    ebx, 120h; jumptable 004213AC case 40
0x42143C: jz      ExtraDataList_GetSaveSize___def_4213AC; jumptable 004213AC default case, cases 19-29,36-38,48,52,53,56,59,60,63,64,66-69,71,73,76,77,80,81,84,86-88,91
0x421442: add     [esp+14h+var_4], esi
0x421446: jmp     loc_421500
0x42144B: test    ebx, 220h; jumptable 004213AC case 41
0x421451: jz      ExtraDataList_GetSaveSize___def_4213AC; jumptable 004213AC default case, cases 19-29,36-38,48,52,53,56,59,60,63,64,66-69,71,73,76,77,80,81,84,86-88,91
0x421457: add     [esp+14h+var_4], esi
0x42145B: jmp     loc_421500
0x421460: test    ebx, 4000020h; jumptable 004213AC case 18
0x421466: jz      ExtraDataList_GetSaveSize___def_4213AC; jumptable 004213AC default case, cases 19-29,36-38,48,52,53,56,59,60,63,64,66-69,71,73,76,77,80,81,84,86-88,91
0x42146C: push    0; int
0x42146E: push    offset ??_R0?AVExtraScript@@@8; struct TypeDescriptor *
0x421473: push    offset ??_R0?AVBSExtraData@@@8; struct _s_RTTICompleteObjectLocator *
0x421478: push    0; int
0x42147A: push    edi; void *
0x42147B: call    OblivionDynamicCast
0x421480: mov     ecx, [eax+10h]
0x421483: add     esp, 14h
0x421486: call    ScriptEventList_GetSaveSize?
0x42148B: add     ax, si
0x42148E: add     word ptr [esp+14h+var_4], ax
0x421493: jmp     short loc_421500
0x421495: test    bl, 20h; jumptable 004213AC case 54
0x421498: jz      ExtraDataList_GetSaveSize___def_4213AC; jumptable 004213AC default case, cases 19-29,36-38,48,52,53,56,59,60,63,64,66-69,71,73,76,77,80,81,84,86-88,91
0x42149E: add     [esp+14h+var_4], 5
0x4214A3: jmp     short loc_421500
0x4214A5: push    0; jumptable 004213AC case 31
0x4214A7: push    offset ??_R0?AVExtraPackage@@@8; struct TypeDescriptor *
0x4214AC: push    offset ??_R0?AVBSExtraData@@@8; struct _s_RTTICompleteObjectLocator *
0x4214B1: push    0; int
0x4214B3: push    edi; void *
0x4214B4: call    OblivionDynamicCast
0x4214B9: mov     ecx, SaveLoad_CurrentSavegame
0x4214BF: add     [esp+28h+var_4], 0Eh
0x4214C4: add     esp, 14h
0x4214C7: cmp     byte ptr [ecx+7Ch], 40h ; '@'
0x4214CB: mov     esi, eax
0x4214CD: jb      short loc_4214FB
0x4214CF: mov     edx, [esi+0Ch]
0x4214D2: mov     eax, [edx+0Ch]
0x4214D5: mov     ecx, TESDataHandler
0x4214DB: push    eax; _DWORD
0x4214DC: call    TESDataHandler_IsFormIDCreated?
0x4214E1: test    al, al
0x4214E3: jz      short loc_4214FB
0x4214E5: mov     ecx, [esi+0Ch]
0x4214E8: mov     eax, [ecx]
0x4214EA: mov     edx, [eax+0DCh]
0x4214F0: call    edx
0x4214F2: add     ax, 1
0x4214F6: add     word ptr [esp+14h+var_4], ax
0x4214FB: mov     esi, 4
0x421500: cmp     bp, word ptr [esp+14h+var_4]
0x421505: jz      ExtraDataList_GetSaveSize___def_4213AC; jumptable 004213AC default case, cases 19-29,36-38,48,52,53,56,59,60,63,64,66-69,71,73,76,77,80,81,84,86-88,91
0x42150B: jmp     loc_421883
0x421510: test    ebx, 40000h; jumptable 004213AC case 32
0x421516: jz      ExtraDataList_GetSaveSize___def_4213AC; jumptable 004213AC default case, cases 19-29,36-38,48,52,53,56,59,60,63,64,66-69,71,73,76,77,80,81,84,86-88,91
0x42151C: add     [esp+14h+var_4], esi
0x421520: push    0; int
0x421522: push    offset ??_R0?AVExtraTresPassPackage@@@8; struct TypeDescriptor *
0x421527: push    offset ??_R0?AVBSExtraData@@@8; struct _s_RTTICompleteObjectLocator *
0x42152C: push    0; int
0x42152E: push    edi; void *
0x42152F: call    OblivionDynamicCast
0x421534: add     esp, 14h
0x421537: cmp     dword ptr [eax+0Ch], 0
0x42153B: jz      short loc_421500
0x42153D: mov     eax, [eax+0Ch]
0x421540: mov     edx, [eax]
0x421542: mov     ecx, eax
0x421544: mov     eax, [edx+0DCh]
0x42154A: call    eax
0x42154C: add     word ptr [esp+14h+var_4], ax
0x421551: jmp     short loc_421500
0x421553: push    0; jumptable 004213AC case 33
0x421555: push    offset ??_R0?AVExtraRunOncePacks@@@8; struct TypeDescriptor *
0x42155A: push    offset ??_R0?AVBSExtraData@@@8; struct _s_RTTICompleteObjectLocator *
0x42155F: push    0; int
0x421561: push    edi; void *
0x421562: call    OblivionDynamicCast
0x421567: mov     edx, [esp+28h+var_4]
0x42156B: mov     eax, [eax+0Ch]
0x42156E: add     esp, 14h
0x421571: add     edx, 2
0x421574: xor     ecx, ecx
0x421576: test    eax, eax
0x421578: jz      short loc_42158F
0x42157A: lea     ebx, [ebx+0]
0x421580: cmp     dword ptr [eax], 0
0x421583: jz      short loc_421588
0x421585: add     ecx, 1
0x421588: mov     eax, [eax+4]
0x42158B: test    eax, eax
0x42158D: jnz     short loc_421580
0x42158F: add     edx, ecx
0x421591: lea     eax, [edx+ecx*4]
0x421594: mov     [esp+14h+var_4], eax
0x421598: jmp     loc_421500
0x42159D: push    0; jumptable 004213AC case 30
0x42159F: push    offset ??_R0?AVExtraPackageStartLocation@@@8; struct TypeDescriptor *
0x4215A4: push    offset ??_R0?AVBSExtraData@@@8; struct _s_RTTICompleteObjectLocator *
0x4215A9: push    0; int
0x4215AB: push    edi; void *
0x4215AC: call    OblivionDynamicCast
0x4215B1: add     esp, 14h
0x4215B4: add     [esp+14h+var_4], 14h
0x4215B9: jmp     loc_421500
0x4215BE: push    0; jumptable 004213AC case 35
0x4215C0: push    offset ??_R0?AVExtraFollower@@@8; struct TypeDescriptor *
0x4215C5: push    offset ??_R0?AVBSExtraData@@@8; struct _s_RTTICompleteObjectLocator *
0x4215CA: push    0; int
0x4215CC: push    edi; void *
0x4215CD: call    OblivionDynamicCast
0x4215D2: mov     eax, [eax+0Ch]
0x4215D5: add     esp, 14h
0x4215D8: xor     ecx, ecx
0x4215DA: test    eax, eax
0x4215DC: jz      short loc_4215EF
0x4215DE: mov     edi, edi
0x4215E0: cmp     dword ptr [eax], 0
0x4215E3: jz      short loc_4215E8
0x4215E5: add     ecx, 1
0x4215E8: mov     eax, [eax+4]
0x4215EB: test    eax, eax
0x4215ED: jnz     short loc_4215E0
0x4215EF: mov     edx, [esp+14h+var_4]
0x4215F3: lea     eax, [edx+ecx*4+2]
0x4215F7: mov     [esp+14h+var_4], eax
0x4215FB: jmp     loc_421500
0x421600: test    ebx, 200000h; jumptable 004213AC case 57
0x421606: jz      ExtraDataList_GetSaveSize___def_4213AC; jumptable 004213AC default case, cases 19-29,36-38,48,52,53,56,59,60,63,64,66-69,71,73,76,77,80,81,84,86-88,91
0x42160C: add     [esp+14h+var_4], 0Ch
0x421611: jmp     loc_421500
0x421616: test    ebx, 200000h; jumptable 004213AC case 58
0x42161C: jz      ExtraDataList_GetSaveSize___def_4213AC; jumptable 004213AC default case, cases 19-29,36-38,48,52,53,56,59,60,63,64,66-69,71,73,76,77,80,81,84,86-88,91
0x421622: push    0; int
0x421624: push    offset ??_R0?AVNonActorMagicTarget@@@8; struct TypeDescriptor *
0x421629: push    offset ??_R0?AVBSExtraData@@@8; struct _s_RTTICompleteObjectLocator *
0x42162E: push    0; int
0x421630: push    edi; void *
0x421631: call    OblivionDynamicCast
0x421636: mov     edx, [eax+0Ch]
0x421639: lea     ecx, [eax+0Ch]
0x42163C: mov     eax, [edx+8]
0x42163F: add     esp, 14h
0x421642: push    0
0x421644: call    eax
0x421646: push    eax
0x421647: call    ActiveEffect_Base_GetAEListSaveSize?
0x42164C: add     ax, si
0x42164F: add     esp, 8
0x421652: add     word ptr [esp+14h+var_4], ax
0x421657: jmp     loc_421500
0x42165C: test    ebx, 100000h; jumptable 004213AC case 50
0x421662: jz      ExtraDataList_GetSaveSize___def_4213AC; jumptable 004213AC default case, cases 19-29,36-38,48,52,53,56,59,60,63,64,66-69,71,73,76,77,80,81,84,86-88,91
0x421668: push    0; int
0x42166A: push    offset ??_R0?AVExtraTeleport@@@8; struct TypeDescriptor *
0x42166F: push    offset ??_R0?AVBSExtraData@@@8; struct _s_RTTICompleteObjectLocator *
0x421674: push    0; int
0x421676: push    edi; void *
0x421677: call    OblivionDynamicCast
0x42167C: mov     ecx, [eax+0Ch]
0x42167F: add     esp, 14h
0x421682: call    sub_42B4F0
0x421687: add     word ptr [esp+14h+var_4], ax
0x42168C: jmp     loc_421500
0x421691: test    ebx, 4000h; jumptable 004213AC case 62
0x421697: jz      ExtraDataList_GetSaveSize___def_4213AC; jumptable 004213AC default case, cases 19-29,36-38,48,52,53,56,59,60,63,64,66-69,71,73,76,77,80,81,84,86-88,91
0x42169D: add     [esp+14h+var_4], 10h
0x4216A2: jmp     loc_421500
0x4216A7: test    ebx, 1000h; jumptable 004213AC case 70
0x4216AD: jz      ExtraDataList_GetSaveSize___def_4213AC; jumptable 004213AC default case, cases 19-29,36-38,48,52,53,56,59,60,63,64,66-69,71,73,76,77,80,81,84,86-88,91
0x4216B3: push    0; int
0x4216B5: push    offset ??_R0?AVExtraPersuasionPercent@@@8; struct TypeDescriptor *
0x4216BA: push    offset ??_R0?AVBSExtraData@@@8; struct _s_RTTICompleteObjectLocator *
0x4216BF: push    0; int
0x4216C1: push    edi; void *
0x4216C2: call    OblivionDynamicCast
0x4216C7: add     esp, 14h
0x4216CA: add     [esp+14h+var_4], 0Dh
0x4216CF: jmp     loc_421500
0x4216D4: test    ebx, 2000000h; jumptable 004213AC case 74
0x4216DA: jz      ExtraDataList_GetSaveSize___def_4213AC; jumptable 004213AC default case, cases 19-29,36-38,48,52,53,56,59,60,63,64,66-69,71,73,76,77,80,81,84,86-88,91
0x4216E0: push    0; int
0x4216E2: push    offset ??_R0?AVExtraLastFinishedSequence@@@8; struct TypeDescriptor *
0x4216E7: push    offset ??_R0?AVBSExtraData@@@8; struct _s_RTTICompleteObjectLocator *
0x4216EC: push    0; int
0x4216EE: push    edi; void *
0x4216EF: call    OblivionDynamicCast
0x4216F4: mov     eax, [eax+0Ch]
0x4216F7: add     esp, 14h
0x4216FA: lea     edx, [eax+1]
0x4216FD: lea     ecx, [ecx+0]
0x421700: mov     cl, [eax]
0x421702: add     eax, 1
0x421705: test    cl, cl
0x421707: jnz     short loc_421700
0x421709: mov     ecx, [esp+14h+var_4]
0x42170D: sub     eax, edx
0x42170F: lea     edx, [ecx+eax+1]
0x421713: mov     [esp+14h+var_4], edx
0x421717: jmp     loc_421500
0x42171C: test    ebx, 400h; jumptable 004213AC case 51
0x421722: jz      ExtraDataList_GetSaveSize___def_4213AC; jumptable 004213AC default case, cases 19-29,36-38,48,52,53,56,59,60,63,64,66-69,71,73,76,77,80,81,84,86-88,91
0x421728: add     [esp+14h+var_4], 1
0x42172D: jmp     loc_421500
0x421732: mov     esi, [esp+14h+arg_4]; jumptable 004213AC case 17
0x421736: test    esi, esi
0x421738: jz      loc_42183F
0x42173E: mov     eax, [esi]
0x421740: mov     edx, [eax+190h]
0x421746: mov     ecx, esi
0x421748: call    edx
0x42174A: test    al, al
0x42174C: jz      loc_42183F
0x421752: cmp     esi, TESDataHandler_g_PlayerRef
0x421758: jz      loc_42183F
0x42175E: add     [esp+14h+var_4], 4
0x421763: jmp     loc_4214FB
0x421768: test    ebx, 1000000h; jumptable 004213AC case 75
0x42176E: jz      ExtraDataList_GetSaveSize___def_4213AC; jumptable 004213AC default case, cases 19-29,36-38,48,52,53,56,59,60,63,64,66-69,71,73,76,77,80,81,84,86-88,91
0x421774: push    0; int
0x421776: push    offset ??_R0?AVExtraSavedMovementData@@@8; struct TypeDescriptor *
0x42177B: push    offset ??_R0?AVBSExtraData@@@8; struct _s_RTTICompleteObjectLocator *
0x421780: push    0; int
0x421782: push    edi; void *
0x421783: call    OblivionDynamicCast
0x421788: mov     ecx, SaveLoad_CurrentSavegame
0x42178E: mov     esi, eax
0x421790: mov     eax, [esi+10h]
0x421793: add     esp, 14h
0x421796: push    eax
0x421797: call    sub_4522F0
0x42179C: mov     ecx, [esi+14h]
0x42179F: add     ax, 6
0x4217A3: add     word ptr [esp+14h+var_4], ax
0x4217A8: push    ecx
0x4217A9: mov     ecx, SaveLoad_CurrentSavegame
0x4217AF: call    sub_4522F0
0x4217B4: mov     edx, [esi+18h]
0x4217B7: mov     ecx, SaveLoad_CurrentSavegame
0x4217BD: add     word ptr [esp+14h+var_4], ax
0x4217C2: push    edx
0x4217C3: call    sub_4522F0
0x4217C8: jmp     loc_4214F6
0x4217CD: push    0; jumptable 004213AC case 78
0x4217CF: push    offset ??_R0?AVExtraFriendHitList@@@8; struct TypeDescriptor *
0x4217D4: push    offset ??_R0?AVBSExtraData@@@8; struct _s_RTTICompleteObjectLocator *
0x4217D9: push    0; int
0x4217DB: push    edi; void *
0x4217DC: call    OblivionDynamicCast
0x4217E1: mov     edx, [esp+28h+var_4]
0x4217E5: mov     eax, [eax+0Ch]
0x4217E8: add     esp, 14h
0x4217EB: add     edx, 2
0x4217EE: xor     ecx, ecx
0x4217F0: test    eax, eax
0x4217F2: jz      short loc_421803
0x4217F4: cmp     dword ptr [eax], 0
0x4217F7: jz      short loc_4217FC
0x4217F9: add     ecx, 1
0x4217FC: mov     eax, [eax+4]
0x4217FF: test    eax, eax
0x421801: jnz     short loc_4217F4
0x421803: lea     eax, [ecx+ecx*4]
0x421806: lea     ecx, [edx+eax*2]
0x421809: mov     [esp+14h+var_4], ecx
0x42180D: jmp     loc_421500
0x421812: push    0; jumptable 004213AC case 89
0x421814: push    offset ??_R0?AVExtraInfoGeneralTopic@@@8; struct TypeDescriptor *
0x421819: push    offset ??_R0?AVBSExtraData@@@8; struct _s_RTTICompleteObjectLocator *
0x42181E: push    0; int
0x421820: push    edi; void *
0x421821: call    OblivionDynamicCast
0x421826: mov     ecx, [eax+0Ch]
0x421829: add     esp, 14h
0x42182C: test    ecx, ecx
0x42182E: jz      short loc_42183F
0x421830: call    sub_6B86A0
0x421835: add     word ptr [esp+14h+var_4], ax
0x42183A: jmp     loc_421500
0x42183F: mov     esi, 4
0x421844: mov     eax, ebx; jumptable 004213AC default case, cases 19-29,36-38,48,52,53,56,59,60,63,64,66-69,71,73,76,77,80,81,84,86-88,91
0x421846: and     eax, 20h
0x421849: jz      short loc_421851
0x42184B: cmp     byte ptr [edi+4], 1Bh
0x42184F: jz      short loc_421883
0x421851: test    eax, eax
0x421853: jz      short loc_42186F
0x421855: cmp     byte ptr [edi+4], 1Ch
0x421859: jz      short loc_421883
0x42185B: test    eax, eax
0x42185D: jz      short loc_42186F
0x42185F: cmp     byte ptr [edi+4], 47h ; 'G'
0x421863: jz      short loc_421883
0x421865: test    eax, eax
0x421867: jz      short loc_42186F
0x421869: cmp     byte ptr [edi+4], 50h ; 'P'
0x42186D: jz      short loc_421883
0x42186F: test    ebx, 10000000h
0x421875: jz      short loc_42187D
0x421877: cmp     byte ptr [edi+4], 35h ; '5'
0x42187B: jz      short loc_421883
0x42187D: cmp     byte ptr [edi+4], 25h ; '%'
0x421881: jnz     short loc_421888
0x421883: add     [esp+14h+var_4], 1
0x421888: mov     edi, [edi+8]
0x42188B: test    edi, edi
0x42188D: jnz     loc_421390
0x421893: pop     ebp
0x421894: pop     ebx
0x421895: cmp     Global_DebugSaveBuffer, 0
0x42189C: mov     di, word ptr [esp+0Ch+var_4]
0x4218A1: jz      short loc_42191B
0x4218A3: mov     edx, SaveLoad_CurrentSavegame
0x4218A9: mov     esi, [edx+84h]
0x4218AF: test    esi, esi
0x4218B1: jz      short loc_421900
0x4218B3: mov     eax, [esi]
0x4218B5: push    eax; a1
0x4218B6: call    TESForm_LookupByFormID
0x4218BB: mov     ecx, [esi+5]
0x4218BE: mov     edx, [eax]
0x4218C0: add     esp, 4
0x4218C3: push    offset a__TesSharedExt; "..\\TES Shared\\ExtraDataList.cpp"
0x4218C8: push    18CDh
0x4218CD: push    ecx
0x4218CE: mov     ecx, eax
0x4218D0: mov     eax, [edx+0D4h]
0x4218D6: call    eax
0x4218D8: mov     ecx, [esi]
0x4218DA: push    eax
0x4218DB: movzx   edx, di
0x4218DE: push    ecx
0x4218DF: push    edx; ArgList
0x4218E0: push    offset aGetsavesize5iF; "GetSaveSize(): %-5i for form %08X %s wi"...
0x4218E5: call    sub_40FEC0
0x4218EA: add     esp, 1Ch
0x4218ED: mov     ecx, offset BSExtraDataCS; lpCriticalSection
0x4218F2: call    NiLeaveCriticalSection_0
0x4218F7: mov     ax, di
0x4218FA: pop     edi
0x4218FB: pop     esi
0x4218FC: pop     ecx
0x4218FD: retn    8
0x421900: push    offset a__TesSharedExt; "..\\TES Shared\\ExtraDataList.cpp"
0x421905: movzx   eax, di
0x421908: push    18CDh
0x42190D: push    eax; ArgList
0x42190E: push    offset aGetsavesize5iE; "GetSaveSize(): %-5i ending at line %i i"...
0x421913: call    sub_40FEC0
0x421918: add     esp, 10h
0x42191B: mov     ecx, offset BSExtraDataCS; lpCriticalSection
0x421920: call    NiLeaveCriticalSection_0
0x421925: mov     ax, di
0x421928: pop     edi
0x421929: pop     esi
0x42192A: pop     ecx
0x42192B: retn    8
