0x425040: sub     esp, 0Ch
0x425043: push    ebx
0x425044: mov     ebx, [esp+10h+arg_8]
0x425048: test    ebx, ebx
0x42504A: push    ebp
0x42504B: push    esi
0x42504C: mov     ebp, ecx
0x42504E: push    edi
0x42504F: mov     [esp+1Ch+var_8], ebp
0x425053: mov     [esp+1Ch+var_9], 0
0x425058: jz      short loc_42506F
0x42505A: mov     eax, [ebx]
0x42505C: mov     edx, [eax+190h]
0x425062: mov     ecx, ebx
0x425064: call    edx
0x425066: test    al, al
0x425068: jz      short loc_42506F
0x42506A: mov     [esp+1Ch+var_9], 1
0x42506F: test    [esp+1Ch+arg_0], 4000020h
0x425077: jz      short loc_4250E8
0x425079: push    12h; a2
0x42507B: mov     ecx, ebp; this
0x42507D: call    BaseExtraList_GetExtraData
0x425082: mov     edi, eax
0x425084: test    edi, edi
0x425086: jz      short loc_4250E8
0x425088: mov     eax, [esp+1Ch+arg_C]
0x42508C: test    eax, eax
0x42508E: jz      short loc_4250E8
0x425090: push    0; int
0x425092: push    offset ??_R0?AVTESScriptableForm@@@8; struct TypeDescriptor *
0x425097: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x42509C: push    0; int
0x42509E: push    eax; void *
0x42509F: call    OblivionDynamicCast
0x4250A4: add     esp, 14h
0x4250A7: cmp     [esp+1Ch+var_9], 0
0x4250AC: mov     esi, eax
0x4250AE: jz      short loc_4250C3
0x4250B0: push    1; a2
0x4250B2: mov     ecx, ebx; this
0x4250B4: call    Actor_GetActorBaseForm
0x4250B9: test    eax, eax
0x4250BB: jz      short loc_4250C3
0x4250BD: lea     esi, [eax+0C4h]
0x4250C3: mov     eax, [edi+0Ch]
0x4250C6: xor     ecx, ecx
0x4250C8: test    eax, eax
0x4250CA: jz      short loc_4250CF
0x4250CC: mov     ecx, [eax+0Ch]
0x4250CF: test    esi, esi
0x4250D1: jz      short loc_4250E8
0x4250D3: mov     eax, [esi+4]
0x4250D6: test    eax, eax
0x4250D8: jz      short loc_4250DF
0x4250DA: cmp     [eax+0Ch], ecx
0x4250DD: jz      short loc_4250E8
0x4250DF: push    12h
0x4250E1: mov     ecx, ebp
0x4250E3: call    BaseExtraList_RemoveExtraByType
0x4250E8: mov     ebx, [esp+1Ch+arg_0]
0x4250EC: mov     edi, ebx
0x4250EE: and     edi, 20h
0x4250F1: jz      short loc_425143
0x4250F3: push    22h ; '"'; a2
0x4250F5: mov     ecx, ebp; this
0x4250F7: call    BaseExtraList_GetExtraData
0x4250FC: mov     esi, eax
0x4250FE: test    esi, esi
0x425100: jz      short loc_425143
0x425102: mov     eax, [esi+0Ch]
0x425105: push    0; int
0x425107: push    offset ??_R0?AVTESObjectREFR@@@8; struct TypeDescriptor *
0x42510C: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x425111: push    0; int
0x425113: push    eax; a1
0x425114: call    TESForm_LookupByFormID
0x425119: add     esp, 4
0x42511C: push    eax; void *
0x42511D: call    OblivionDynamicCast
0x425122: add     esp, 14h
0x425125: test    eax, eax
0x425127: mov     [esi+0Ch], eax
0x42512A: jnz     short loc_425143
0x42512C: push    22h ; '"'; a2
0x42512E: mov     ecx, ebp; this
0x425130: call    BaseExtraList_GetExtraData
0x425135: test    eax, eax
0x425137: jz      short loc_425143
0x425139: push    1
0x42513B: push    eax
0x42513C: mov     ecx, ebp
0x42513E: call    BaseExtraList_RemoveExtraByPtr
0x425143: test    edi, edi
0x425145: jz      short loc_425183
0x425147: push    48h ; 'H'; a2
0x425149: mov     ecx, ebp; this
0x42514B: call    BaseExtraList_GetExtraData
0x425150: test    eax, eax
0x425152: jz      short loc_425183
0x425154: mov     eax, [eax+0Ch]
0x425157: push    0; int
0x425159: push    offset ??_R0?AVAlchemyItem@@@8; struct TypeDescriptor *
0x42515E: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x425163: push    0; int
0x425165: push    eax; a1
0x425166: call    TESForm_LookupByFormID
0x42516B: add     esp, 4
0x42516E: push    eax; void *
0x42516F: call    OblivionDynamicCast
0x425174: add     esp, 14h
0x425177: test    eax, eax
0x425179: jz      short loc_425183
0x42517B: push    eax
0x42517C: mov     ecx, ebp
0x42517E: call    sub_41EFD0
0x425183: cmp     [esp+1Ch+var_9], 0
0x425188: jz      loc_4252DC
0x42518E: push    1Fh; a2
0x425190: mov     ecx, ebp; this
0x425192: call    BaseExtraList_GetExtraData
0x425197: mov     esi, eax
0x425199: test    esi, esi
0x42519B: jz      short loc_4251F2
0x42519D: mov     eax, [esi+0Ch]
0x4251A0: mov     eax, [eax+0Ch]
0x4251A3: mov     ecx, TESDataHandler
0x4251A9: push    eax; _DWORD
0x4251AA: call    TESDataHandler_IsFormIDCreated?
0x4251AF: test    al, al
0x4251B1: jz      short loc_4251C0
0x4251B3: mov     ecx, [esi+0Ch]
0x4251B6: mov     edx, [ecx]
0x4251B8: mov     eax, [edx+0E8h]
0x4251BE: call    eax
0x4251C0: mov     ecx, [esi+0Ch]
0x4251C3: call    sub_5672A0
0x4251C8: mov     eax, [esi+14h]
0x4251CB: test    eax, eax
0x4251CD: jz      short loc_4251F2
0x4251CF: push    0; int
0x4251D1: push    offset ??_R0?AVTESObjectREFR@@@8; struct TypeDescriptor *
0x4251D6: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4251DB: push    0; int
0x4251DD: push    eax; a1
0x4251DE: call    TESForm_LookupByFormID
0x4251E3: add     esp, 4
0x4251E6: push    eax; void *
0x4251E7: call    OblivionDynamicCast
0x4251EC: add     esp, 14h
0x4251EF: mov     [esi+14h], eax
0x4251F2: test    ebx, 40000h
0x4251F8: jz      short loc_42521C
0x4251FA: push    20h ; ' '; a2
0x4251FC: mov     ecx, ebp; this
0x4251FE: call    BaseExtraList_GetExtraData
0x425203: test    eax, eax
0x425205: jz      short loc_42521C
0x425207: cmp     dword ptr [eax+0Ch], 0
0x42520B: jz      short loc_42521C
0x42520D: mov     eax, [eax+0Ch]
0x425210: mov     edx, [eax]
0x425212: mov     ecx, eax
0x425214: mov     eax, [edx+0E8h]
0x42521A: call    eax
0x42521C: push    23h ; '#'; a2
0x42521E: mov     ecx, ebp; this
0x425220: call    BaseExtraList_GetExtraData
0x425225: test    eax, eax
0x425227: jz      short loc_425292
0x425229: mov     esi, [eax+0Ch]
0x42522C: test    esi, esi
0x42522E: jz      short loc_425292
0x425230: cmp     dword ptr [esi+4], 0
0x425234: jnz     short loc_42523B
0x425236: cmp     dword ptr [esi], 0
0x425239: jz      short loc_425292
0x42523B: mov     eax, [esi]
0x42523D: test    eax, eax
0x42523F: jz      short loc_425265
0x425241: push    0; int
0x425243: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x425248: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x42524D: push    0; int
0x42524F: push    eax; a1
0x425250: call    TESForm_LookupByFormID
0x425255: add     esp, 4
0x425258: push    eax; void *
0x425259: call    OblivionDynamicCast
0x42525E: add     esp, 14h
0x425261: test    eax, eax
0x425263: jnz     short loc_425289
0x425265: mov     eax, [esi+4]
0x425268: test    eax, eax
0x42526A: jz      short loc_425281
0x42526C: mov     ecx, [eax+4]
0x42526F: mov     [esi+4], ecx
0x425272: mov     edx, [eax]
0x425274: push    eax
0x425275: mov     [esi], edx
0x425277: call    FormHeapFree
0x42527C: add     esp, 4
0x42527F: jmp     short loc_42528E
0x425281: mov     dword ptr [esi], 0
0x425287: jmp     short loc_42528E
0x425289: mov     [esi], eax
0x42528B: mov     esi, [esi+4]
0x42528E: test    esi, esi
0x425290: jnz     short loc_425230
0x425292: test    ebx, 4000h
0x425298: jz      loc_425440
0x42529E: push    3Eh ; '>'; a2
0x4252A0: mov     ecx, ebp; this
0x4252A2: call    BaseExtraList_GetExtraData
0x4252A7: mov     esi, eax
0x4252A9: mov     eax, [esi+18h]
0x4252AC: test    eax, eax
0x4252AE: jz      loc_425440
0x4252B4: push    0; int
0x4252B6: push    offset ??_R0?AVTESObjectREFR@@@8; struct TypeDescriptor *
0x4252BB: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4252C0: push    0; int
0x4252C2: push    eax; a1
0x4252C3: call    TESForm_LookupByFormID
0x4252C8: add     esp, 4
0x4252CB: push    eax; void *
0x4252CC: call    OblivionDynamicCast
0x4252D1: add     esp, 14h
0x4252D4: mov     [esi+18h], eax
0x4252D7: jmp     loc_425440
0x4252DC: test    ebx, 200000h
0x4252E2: jz      loc_425419
0x4252E8: push    0; int
0x4252EA: push    offset ??_R0?AVNonActorMagicCaster@@@8; struct TypeDescriptor *
0x4252EF: push    offset ??_R0?AVBSExtraData@@@8; struct _s_RTTICompleteObjectLocator *
0x4252F4: push    0; int
0x4252F6: push    39h ; '9'; a2
0x4252F8: mov     ecx, ebp; this
0x4252FA: call    BaseExtraList_GetExtraData
0x4252FF: push    eax; void *
0x425300: call    OblivionDynamicCast
0x425305: mov     ebx, eax
0x425307: add     esp, 14h
0x42530A: test    ebx, ebx
0x42530C: jz      loc_4253A4
0x425312: mov     eax, [ebx+0Ch]
0x425315: mov     edx, [eax+30h]
0x425318: lea     esi, [ebx+0Ch]
0x42531B: mov     ecx, esi
0x42531D: call    edx
0x42531F: mov     edi, eax
0x425321: mov     eax, [esi]
0x425323: mov     edx, [eax+38h]
0x425326: mov     ecx, esi
0x425328: call    edx
0x42532A: mov     ebp, eax
0x42532C: mov     eax, [esi]
0x42532E: mov     edx, [eax+20h]
0x425331: mov     ecx, esi
0x425333: mov     [esp+1Ch+arg_C], ebp
0x425337: call    edx
0x425339: test    edi, edi
0x42533B: mov     [esp+1Ch+a1], eax
0x42533F: jz      short loc_42535B
0x425341: mov     ebp, [esi]
0x425343: push    edi
0x425344: add     ebp, 34h ; '4'
0x425347: call    MagicItem_LookupByFormID
0x42534C: add     esp, 4
0x42534F: push    eax
0x425350: mov     eax, [ebp+0]
0x425353: mov     ecx, esi
0x425355: call    eax
0x425357: mov     ebp, [esp+1Ch+arg_C]
0x42535B: test    ebp, ebp
0x42535D: jz      short loc_425374
0x42535F: mov     edi, [esi]
0x425361: push    ebp
0x425362: add     edi, 3Ch ; '<'
0x425365: call    MagicTarget_LookupByFormID
0x42536A: mov     edx, [edi]
0x42536C: add     esp, 4
0x42536F: push    eax
0x425370: mov     ecx, esi
0x425372: call    edx
0x425374: mov     eax, [esp+1Ch+a1]
0x425378: test    eax, eax
0x42537A: jz      short loc_4253A4
0x42537C: push    0; int
0x42537E: push    offset ??_R0?AVTESObjectREFR@@@8; struct TypeDescriptor *
0x425383: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x425388: push    0; int
0x42538A: push    eax; a1
0x42538B: call    TESForm_LookupByFormID
0x425390: add     esp, 4
0x425393: push    eax; void *
0x425394: call    OblivionDynamicCast
0x425399: add     esp, 14h
0x42539C: push    eax
0x42539D: mov     ecx, ebx
0x42539F: call    sub_4A6D70
0x4253A4: mov     ecx, [esp+1Ch+var_8]; this
0x4253A8: push    0; int
0x4253AA: push    offset ??_R0?AVNonActorMagicTarget@@@8; struct TypeDescriptor *
0x4253AF: push    offset ??_R0?AVBSExtraData@@@8; struct _s_RTTICompleteObjectLocator *
0x4253B4: push    0; int
0x4253B6: push    3Ah ; ':'; a2
0x4253B8: call    BaseExtraList_GetExtraData
0x4253BD: push    eax; void *
0x4253BE: call    OblivionDynamicCast
0x4253C3: mov     esi, eax
0x4253C5: add     esp, 14h
0x4253C8: test    esi, esi
0x4253CA: jz      short loc_425419
0x4253CC: mov     eax, [esi+0Ch]
0x4253CF: mov     edx, [eax+4]
0x4253D2: lea     edi, [esi+0Ch]
0x4253D5: mov     ecx, edi
0x4253D7: call    edx
0x4253D9: test    eax, eax
0x4253DB: jz      short loc_425405
0x4253DD: push    0; int
0x4253DF: push    offset ??_R0?AVTESObjectREFR@@@8; struct TypeDescriptor *
0x4253E4: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4253E9: push    0; int
0x4253EB: push    eax; a1
0x4253EC: call    TESForm_LookupByFormID
0x4253F1: add     esp, 4
0x4253F4: push    eax; void *
0x4253F5: call    OblivionDynamicCast
0x4253FA: add     esp, 14h
0x4253FD: push    eax
0x4253FE: mov     ecx, esi
0x425400: call    sub_6A32C0
0x425405: mov     eax, [edi]
0x425407: mov     edx, [eax+8]
0x42540A: push    0
0x42540C: mov     ecx, edi
0x42540E: call    edx
0x425410: push    eax
0x425411: call    ActiveEffect_Base_LinkAEList
0x425416: add     esp, 8
0x425419: test    [esp+1Ch+arg_0], 100000h
0x425421: jz      short loc_425440
0x425423: mov     ecx, [esp+1Ch+var_8]; this
0x425427: push    32h ; '2'; a2
0x425429: call    BaseExtraList_GetExtraData
0x42542E: test    eax, eax
0x425430: jz      short loc_425437
0x425432: mov     eax, [eax+0Ch]
0x425435: jmp     short loc_425439
0x425437: xor     eax, eax
0x425439: mov     ecx, eax
0x42543B: call    sub_42B550
0x425440: mov     eax, SaveLoad_CurrentSavegame
0x425445: cmp     byte ptr [eax+7Ch], 46h ; 'F'
0x425449: mov     ebx, [esp+1Ch+var_8]
0x42544D: jnb     loc_425507
0x425453: push    42h ; 'B'; a2
0x425455: mov     ecx, ebx; this
0x425457: xor     esi, esi
0x425459: call    BaseExtraList_GetExtraData
0x42545E: test    eax, eax
0x425460: jz      short loc_425465
0x425462: lea     esi, [eax+0Ch]
0x425465: xor     ebp, ebp
0x425467: test    esi, esi
0x425469: jz      loc_425507
0x42546F: nop
0x425470: cmp     dword ptr [esi+4], 0
0x425474: jnz     short loc_42547F
0x425476: cmp     dword ptr [esi], 0
0x425479: jz      loc_425507
0x42547F: mov     eax, [esi]
0x425481: test    eax, eax
0x425483: mov     edi, eax
0x425485: jz      short loc_4254AB
0x425487: push    0; int
0x425489: push    offset ??_R0?AVTESObjectREFR@@@8; struct TypeDescriptor *
0x42548E: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x425493: push    0; int
0x425495: push    eax; a1
0x425496: call    TESForm_LookupByFormID
0x42549B: add     esp, 4
0x42549E: push    eax; void *
0x42549F: call    OblivionDynamicCast
0x4254A4: add     esp, 14h
0x4254A7: test    eax, eax
0x4254A9: jnz     short loc_4254EB
0x4254AB: test    ebp, ebp
0x4254AD: jnz     short loc_4254DE
0x4254AF: mov     eax, [esi+4]
0x4254B2: test    eax, eax
0x4254B4: jz      short loc_4254CB
0x4254B6: mov     ecx, [eax+4]
0x4254B9: mov     [esi+4], ecx
0x4254BC: mov     edx, [eax]
0x4254BE: push    eax
0x4254BF: mov     [esi], edx
0x4254C1: call    FormHeapFree
0x4254C6: add     esp, 4
0x4254C9: jmp     short loc_4254D1
0x4254CB: mov     dword ptr [esi], 0
0x4254D1: cmp     dword ptr [esi+4], 0
0x4254D5: jnz     short loc_4254FF
0x4254D7: cmp     dword ptr [esi], 0
0x4254DA: jz      short loc_425507
0x4254DC: jmp     short loc_4254FF
0x4254DE: push    edi
0x4254DF: mov     ecx, ebp
0x4254E1: call    BSSimpleList_Remove
0x4254E6: mov     esi, [ebp+4]
0x4254E9: jmp     short loc_4254FF
0x4254EB: mov     ecx, [esp+1Ch+arg_8]
0x4254EF: push    ecx
0x4254F0: lea     ecx, [eax+44h]
0x4254F3: mov     [esi], eax
0x4254F5: call    sub_4203E0
0x4254FA: mov     ebp, esi
0x4254FC: mov     esi, [esi+4]
0x4254FF: test    esi, esi
0x425501: jnz     loc_425470
0x425507: mov     edx, SaveLoad_CurrentSavegame
0x42550D: cmp     byte ptr [edx+7Ch], 46h ; 'F'
0x425511: jb      short loc_425562
0x425513: push    41h ; 'A'; a2
0x425515: mov     ecx, ebx; this
0x425517: call    BaseExtraList_GetExtraData
0x42551C: test    eax, eax
0x42551E: jz      short loc_425562
0x425520: mov     eax, [eax+0Ch]
0x425523: test    eax, eax
0x425525: jz      short loc_425562
0x425527: push    0; int
0x425529: push    offset ??_R0?AVTESObjectREFR@@@8; struct TypeDescriptor *
0x42552E: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x425533: push    0; int
0x425535: push    eax; a1
0x425536: call    TESForm_LookupByFormID
0x42553B: add     esp, 4
0x42553E: push    eax; void *
0x42553F: call    OblivionDynamicCast
0x425544: add     esp, 14h
0x425547: mov     esi, eax
0x425549: push    esi
0x42554A: mov     ecx, ebx
0x42554C: call    sub_4203E0
0x425551: test    esi, esi
0x425553: jz      short loc_425562
0x425555: mov     eax, [esp+1Ch+arg_8]
0x425559: push    eax
0x42555A: lea     ecx, [esi+44h]
0x42555D: call    sub_424B60
0x425562: push    0; int
0x425564: push    offset ??_R0?AVExtraFriendHitList@@@8; struct TypeDescriptor *
0x425569: push    offset ??_R0?AVBSExtraData@@@8; struct _s_RTTICompleteObjectLocator *
0x42556E: push    0; int
0x425570: push    4Eh ; 'N'; a2
0x425572: mov     ecx, ebx; this
0x425574: call    BaseExtraList_GetExtraData
0x425579: push    eax; void *
0x42557A: call    OblivionDynamicCast
0x42557F: add     esp, 14h
0x425582: test    eax, eax
0x425584: jz      short loc_4255F9
0x425586: mov     esi, [eax+0Ch]
0x425589: test    esi, esi
0x42558B: jz      short loc_4255F9
0x42558D: lea     ecx, [ecx+0]
0x425590: mov     edi, [esi]
0x425592: test    edi, edi
0x425594: jz      short loc_4255F2
0x425596: mov     eax, [edi]
0x425598: push    0; int
0x42559A: push    offset ??_R0?AVTESObjectREFR@@@8; struct TypeDescriptor *
0x42559F: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4255A4: push    0; int
0x4255A6: push    eax; a1
0x4255A7: call    TESForm_LookupByFormID
0x4255AC: add     esp, 4
0x4255AF: push    eax; void *
0x4255B0: call    OblivionDynamicCast
0x4255B5: add     esp, 14h
0x4255B8: test    eax, eax
0x4255BA: mov     [edi], eax
0x4255BC: jnz     short loc_4255F2
0x4255BE: mov     eax, [esi+4]
0x4255C1: test    eax, eax
0x4255C3: jz      short loc_4255DA
0x4255C5: mov     ecx, [eax+4]
0x4255C8: mov     [esi+4], ecx
0x4255CB: mov     edx, [eax]
0x4255CD: push    eax
0x4255CE: mov     [esi], edx
0x4255D0: call    FormHeapFree
0x4255D5: add     esp, 4
0x4255D8: jmp     short loc_4255E0
0x4255DA: mov     dword ptr [esi], 0
0x4255E0: mov     ecx, edi; void *
0x4255E2: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x4255E7: push    edi
0x4255E8: call    FormHeapFree
0x4255ED: add     esp, 4
0x4255F0: jmp     short loc_4255F5
0x4255F2: mov     esi, [esi+4]
0x4255F5: test    esi, esi
0x4255F7: jnz     short loc_425590
0x4255F9: mov     esi, [esp+1Ch+var_8]
0x4255FD: push    4Fh ; 'O'; a2
0x4255FF: mov     ecx, esi; this
0x425601: call    BaseExtraList_GetExtraData
0x425606: test    eax, eax
0x425608: jz      short loc_425639
0x42560A: mov     eax, [eax+0Ch]
0x42560D: test    eax, eax
0x42560F: jz      short loc_425639
0x425611: push    0; int
0x425613: push    offset ??_R0?AVTESObjectREFR@@@8; struct TypeDescriptor *
0x425618: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x42561D: push    0; int
0x42561F: push    eax; a1
0x425620: call    TESForm_LookupByFormID
0x425625: add     esp, 4
0x425628: push    eax; void *
0x425629: call    OblivionDynamicCast
0x42562E: add     esp, 14h
0x425631: push    eax
0x425632: mov     ecx, esi
0x425634: call    sub_423970
0x425639: pop     edi
0x42563A: pop     esi
0x42563B: pop     ebp
0x42563C: pop     ebx
0x42563D: add     esp, 0Ch
0x425640: retn    10h
