0x4DA0A0: sub     esp, 14h
0x4DA0A3: push    ebx
0x4DA0A4: push    ebp
0x4DA0A5: push    esi
0x4DA0A6: push    edi
0x4DA0A7: push    0; int
0x4DA0A9: push    offset ??_R0?AVExtraTeleport@@@8; struct TypeDescriptor *
0x4DA0AE: mov     ebx, ecx
0x4DA0B0: push    offset ??_R0?AVBSExtraData@@@8; struct _s_RTTICompleteObjectLocator *
0x4DA0B5: push    0; int
0x4DA0B7: lea     esi, [ebx+44h]
0x4DA0BA: push    32h ; '2'; a2
0x4DA0BC: mov     ecx, esi; this
0x4DA0BE: call    BaseExtraList_GetExtraData
0x4DA0C3: push    eax; void *
0x4DA0C4: call    OblivionDynamicCast
0x4DA0C9: mov     ebp, eax
0x4DA0CB: add     esp, 14h
0x4DA0CE: test    ebp, ebp
0x4DA0D0: jz      short loc_4DA0DC
0x4DA0D2: push    0
0x4DA0D4: push    ebp
0x4DA0D5: mov     ecx, esi
0x4DA0D7: call    BaseExtraList_RemoveExtraByPtr
0x4DA0DC: push    0; int
0x4DA0DE: push    offset ??_R0?AVExtraEnableStateParent@@@8; struct TypeDescriptor *
0x4DA0E3: push    offset ??_R0?AVBSExtraData@@@8; struct _s_RTTICompleteObjectLocator *
0x4DA0E8: push    0; int
0x4DA0EA: push    3Fh ; '?'; a2
0x4DA0EC: mov     ecx, esi; this
0x4DA0EE: call    BaseExtraList_GetExtraData
0x4DA0F3: push    eax; void *
0x4DA0F4: call    OblivionDynamicCast
0x4DA0F9: add     esp, 14h
0x4DA0FC: test    eax, eax
0x4DA0FE: mov     [esp+24h+var_14], eax
0x4DA102: jz      short loc_4DA10E
0x4DA104: push    0
0x4DA106: push    eax
0x4DA107: mov     ecx, esi
0x4DA109: call    BaseExtraList_RemoveExtraByPtr
0x4DA10E: push    0; int
0x4DA110: push    offset ??_R0?AVExtraRandomTeleportMarker@@@8; struct TypeDescriptor *
0x4DA115: push    offset ??_R0?AVBSExtraData@@@8; struct _s_RTTICompleteObjectLocator *
0x4DA11A: push    0; int
0x4DA11C: push    43h ; 'C'; a2
0x4DA11E: mov     ecx, esi; this
0x4DA120: call    BaseExtraList_GetExtraData
0x4DA125: push    eax; void *
0x4DA126: call    OblivionDynamicCast
0x4DA12B: add     esp, 14h
0x4DA12E: test    eax, eax
0x4DA130: mov     [esp+24h+var_10], eax
0x4DA134: jz      short loc_4DA140
0x4DA136: push    0
0x4DA138: push    eax
0x4DA139: mov     ecx, esi
0x4DA13B: call    BaseExtraList_RemoveExtraByPtr
0x4DA140: push    0; int
0x4DA142: push    offset ??_R0?AVExtraMerchantContainer@@@8; struct TypeDescriptor *
0x4DA147: push    offset ??_R0?AVBSExtraData@@@8; struct _s_RTTICompleteObjectLocator *
0x4DA14C: push    0; int
0x4DA14E: push    44h ; 'D'; a2
0x4DA150: mov     ecx, esi; this
0x4DA152: call    BaseExtraList_GetExtraData
0x4DA157: push    eax; void *
0x4DA158: call    OblivionDynamicCast
0x4DA15D: add     esp, 14h
0x4DA160: test    eax, eax
0x4DA162: mov     [esp+24h+var_C], eax
0x4DA166: jz      short loc_4DA172
0x4DA168: push    0
0x4DA16A: push    eax
0x4DA16B: mov     ecx, esi
0x4DA16D: call    BaseExtraList_RemoveExtraByPtr
0x4DA172: push    0; int
0x4DA174: push    offset ??_R0?AVExtraTravelHorse@@@8; struct TypeDescriptor *
0x4DA179: push    offset ??_R0?AVBSExtraData@@@8; struct _s_RTTICompleteObjectLocator *
0x4DA17E: push    0; int
0x4DA180: push    58h ; 'X'; a2
0x4DA182: mov     ecx, esi; this
0x4DA184: call    BaseExtraList_GetExtraData
0x4DA189: push    eax; void *
0x4DA18A: call    OblivionDynamicCast
0x4DA18F: add     esp, 14h
0x4DA192: test    eax, eax
0x4DA194: mov     [esp+24h+var_8], eax
0x4DA198: jz      short loc_4DA1A4
0x4DA19A: push    0
0x4DA19C: push    eax
0x4DA19D: mov     ecx, esi
0x4DA19F: call    BaseExtraList_RemoveExtraByPtr
0x4DA1A4: mov     eax, [ebx+40h]
0x4DA1A7: mov     edx, [ebx]
0x4DA1A9: mov     [esp+24h+var_4], eax
0x4DA1AD: mov     eax, [edx+194h]
0x4DA1B3: push    0
0x4DA1B5: mov     ecx, ebx
0x4DA1B7: call    eax
0x4DA1B9: mov     ecx, [esp+24h+cloneMap]
0x4DA1BD: push    0; int
0x4DA1BF: push    offset ??_R0?AVTESObjectREFR@@@8; struct TypeDescriptor *
0x4DA1C4: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4DA1C9: push    0; int
0x4DA1CB: push    ecx; cloneMap
0x4DA1CC: push    0; a2
0x4DA1CE: mov     ecx, ebx; this
0x4DA1D0: call    TESForm_Clone
0x4DA1D5: push    eax; void *
0x4DA1D6: call    OblivionDynamicCast
0x4DA1DB: add     esp, 14h
0x4DA1DE: test    ebp, ebp
0x4DA1E0: mov     edi, eax
0x4DA1E2: jz      short loc_4DA1EC
0x4DA1E4: push    ebp; BSExtraData *
0x4DA1E5: mov     ecx, esi; ExtraDataList *
0x4DA1E7: call    BaseExtraList_AddExtra
0x4DA1EC: mov     eax, [esp+24h+var_14]
0x4DA1F0: test    eax, eax
0x4DA1F2: jz      short loc_4DA1FC
0x4DA1F4: push    eax; BSExtraData *
0x4DA1F5: mov     ecx, esi; ExtraDataList *
0x4DA1F7: call    BaseExtraList_AddExtra
0x4DA1FC: mov     eax, [esp+24h+var_10]
0x4DA200: test    eax, eax
0x4DA202: jz      short loc_4DA20C
0x4DA204: push    eax; BSExtraData *
0x4DA205: mov     ecx, esi; ExtraDataList *
0x4DA207: call    BaseExtraList_AddExtra
0x4DA20C: mov     eax, [esp+24h+var_C]
0x4DA210: test    eax, eax
0x4DA212: jz      short loc_4DA21C
0x4DA214: push    eax; BSExtraData *
0x4DA215: mov     ecx, esi; ExtraDataList *
0x4DA217: call    BaseExtraList_AddExtra
0x4DA21C: mov     eax, [esp+24h+var_8]
0x4DA220: test    eax, eax
0x4DA222: jz      short loc_4DA22C
0x4DA224: push    eax; BSExtraData *
0x4DA225: mov     ecx, esi; ExtraDataList *
0x4DA227: call    BaseExtraList_AddExtra
0x4DA22C: mov     edx, [ebx]
0x4DA22E: mov     eax, [esp+24h+var_4]
0x4DA232: mov     edx, [edx+194h]
0x4DA238: push    eax
0x4DA239: mov     ecx, ebx
0x4DA23B: call    edx
0x4DA23D: mov     eax, [edi]
0x4DA23F: mov     edx, [eax+150h]
0x4DA245: push    0
0x4DA247: mov     ecx, edi
0x4DA249: call    edx
0x4DA24B: mov     eax, [edi+18h]
0x4DA24E: mov     edx, [eax]
0x4DA250: lea     ecx, [edi+18h]
0x4DA253: call    edx
0x4DA255: and     dword ptr [edi+8], 0FFFFFBFFh
0x4DA25C: mov     esi, eax
0x4DA25E: test    esi, esi
0x4DA260: jz      short loc_4DA28A
0x4DA262: mov     ecx, esi; this
0x4DA264: call    TESForm_GetQuestItem
0x4DA269: test    al, al
0x4DA26B: jz      short loc_4DA28A
0x4DA26D: mov     ecx, esi; this
0x4DA26F: call    TESObjectCELL_GetWorldSpace
0x4DA274: push    edi
0x4DA275: mov     ecx, eax
0x4DA277: call    sub_4F03D0
0x4DA27C: mov     eax, [edi]
0x4DA27E: mov     edx, [eax+90h]
0x4DA284: push    1
0x4DA286: mov     ecx, edi
0x4DA288: call    edx
0x4DA28A: mov     eax, edi
0x4DA28C: pop     edi
0x4DA28D: pop     esi
0x4DA28E: pop     ebp
0x4DA28F: pop     ebx
0x4DA290: add     esp, 14h
0x4DA293: retn    8
