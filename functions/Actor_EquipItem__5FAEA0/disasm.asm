0x5FAEA0: push    0FFFFFFFFh; UCWUS pipeline note: Actor equip path is not currently hooked by UCWUS.dll. Bridge replacement scripts own equip selection/token setup through OBSE commands.
0x5FAEA2: push    offset Actor_EquipItem_SEH
0x5FAEA7: mov     eax, large fs:0
0x5FAEAD: push    eax
0x5FAEAE: sub     esp, 0Ch
0x5FAEB1: push    ebx
0x5FAEB2: push    ebp
0x5FAEB3: push    esi
0x5FAEB4: push    edi
0x5FAEB5: mov     eax, ds:0B30AACh
0x5FAEBA: xor     eax, esp
0x5FAEBC: push    eax
0x5FAEBD: lea     eax, [esp+2Ch+var_C]
0x5FAEC1: mov     large fs:0, eax
0x5FAEC7: mov     esi, ecx
0x5FAEC9: mov     edi, [esp+2Ch+a2]
0x5FAECD: cmp     byte ptr [edi+4], 22h ; '"'
0x5FAED1: mov     byte ptr [esp+2Ch+var_18+3], 0
0x5FAED6: jnz     loc_5FAF78
0x5FAEDC: mov     eax, [edi]
0x5FAEDE: mov     edx, [eax+78h]
0x5FAEE1: mov     ecx, edi
0x5FAEE3: call    edx
0x5FAEE5: test    al, al
0x5FAEE7: jz      short loc_5FAF33
0x5FAEE9: mov     eax, [esp+2Ch+arg_8]
0x5FAEED: push    2
0x5FAEEF: push    eax
0x5FAEF0: push    esi
0x5FAEF1: call    Script_AddEventToExtraScript
0x5FAEF6: push    2
0x5FAEF8: lea     ecx, [esi+44h]
0x5FAEFB: push    ecx
0x5FAEFC: push    edi
0x5FAEFD: call    Script_AddEventToExtraScript
0x5FAF02: add     esp, 18h
0x5FAF05: cmp     esi, ds:0B333C4h
0x5FAF0B: jnz     loc_5FB98E
0x5FAF11: fld     dword ptr ds:0A30634h
0x5FAF17: mov     edx, ds:0B38570h
0x5FAF1D: push    ecx
0x5FAF1E: fstp    [esp+30h+duration]; duration
0x5FAF21: push    1; unk2
0x5FAF23: push    0; unk1
0x5FAF25: push    edx; string
0x5FAF26: call    GameUI_QueueMessage
0x5FAF2B: add     esp, 10h
0x5FAF2E: jmp     loc_5FB98E
0x5FAF33: cmp     dword ptr [esi+58h], 0
0x5FAF37: jz      short loc_5FAF78
0x5FAF39: mov     ecx, [esi+58h]
0x5FAF3C: mov     eax, [ecx]
0x5FAF3E: mov     edx, [eax+2D0h]
0x5FAF44: call    edx
0x5FAF46: cmp     eax, 5
0x5FAF49: jnz     short loc_5FAF78
0x5FAF4B: cmp     esi, ds:0B333C4h
0x5FAF51: jnz     loc_5FB98E
0x5FAF57: fld     dword ptr ds:0A30634h
0x5FAF5D: mov     eax, ds:0B38A30h
0x5FAF62: push    ecx
0x5FAF63: fstp    [esp+30h+duration]; duration
0x5FAF66: push    1; unk2
0x5FAF68: push    0; unk1
0x5FAF6A: push    eax; string
0x5FAF6B: call    GameUI_QueueMessage
0x5FAF70: add     esp, 10h
0x5FAF73: jmp     loc_5FB98E
0x5FAF78: mov     ecx, [esp+2Ch+arg_8]
0x5FAF7C: test    ecx, ecx
0x5FAF7E: jz      short loc_5FAFBE
0x5FAF80: call    sub_41DF40
0x5FAF85: test    al, al
0x5FAF87: jz      short loc_5FAFBE
0x5FAF89: cmp     [esp+2Ch+arg_10], 0
0x5FAF8E: jnz     short loc_5FAFBE
0x5FAF90: cmp     esi, ds:0B333C4h
0x5FAF96: jnz     loc_5FB98E
0x5FAF9C: fld     dword ptr ds:0A30634h
0x5FAFA2: push    ecx
0x5FAFA3: mov     ecx, ds:0B38A30h
0x5FAFA9: fstp    [esp+30h+duration]; duration
0x5FAFAC: push    1; unk2
0x5FAFAE: push    0; unk1
0x5FAFB0: push    ecx; string
0x5FAFB1: call    GameUI_QueueMessage
0x5FAFB6: add     esp, 10h
0x5FAFB9: jmp     loc_5FB98E
0x5FAFBE: mov     edx, [esi]
0x5FAFC0: mov     eax, [edx+170h]
0x5FAFC6: mov     ecx, esi
0x5FAFC8: call    eax
0x5FAFCA: mov     ebx, eax
0x5FAFCC: test    ebx, ebx
0x5FAFCE: jz      short loc_5FAFE5
0x5FAFD0: mov     edx, [esi]
0x5FAFD2: mov     eax, [edx+190h]
0x5FAFD8: mov     ecx, esi
0x5FAFDA: call    eax
0x5FAFDC: test    al, al
0x5FAFDE: jz      short loc_5FAFE5
0x5FAFE0: lea     eax, [ebx+44h]
0x5FAFE3: jmp     short loc_5FAFE7
0x5FAFE5: xor     eax, eax
0x5FAFE7: push    eax
0x5FAFE8: push    esi; a1
0x5FAFE9: call    ContainerExtraData_GetContainerExtraDataForRef
0x5FAFEE: add     esp, 8
0x5FAFF1: push    edi; a2
0x5FAFF2: mov     ecx, eax; this
0x5FAFF4: call    ContainerExtraData_GetItemCount; ContainerChanges item-count logic: start with the base TESContainer count (made absolute), find matching EntryData, then combine countDelta. If the base count and delta are both 0 but an EntryData exists, return 1; the GetItemCount evaluator takes the final absolute value.
0x5FAFF9: push    edi
0x5FAFFA: mov     ebx, eax
0x5FAFFC: call    sub_4691B0
0x5FB001: add     esp, 4
0x5FB004: test    ebx, ebx
0x5FB006: mov     ebp, eax
0x5FB008: jle     loc_5FB98E
0x5FB00E: cmp     [esp+2Ch+maximumMatches], 0
0x5FB013: jg      short loc_5FB02C
0x5FB015: mov     al, [edi+4]
0x5FB018: cmp     al, 22h ; '"'
0x5FB01A: jz      short loc_5FB028
0x5FB01C: cmp     edi, ds:0B35ED0h
0x5FB022: jz      short loc_5FB028
0x5FB024: cmp     al, 26h ; '&'
0x5FB026: jnz     short loc_5FB02C
0x5FB028: mov     [esp+2Ch+maximumMatches], ebx
0x5FB02C: cmp     [esp+2Ch+arg_8], 0
0x5FB031: jz      short loc_5FB047
0x5FB033: mov     ecx, [esp+2Ch+arg_8]; this
0x5FB037: push    2Bh ; '+'; a2
0x5FB039: call    BaseExtraList_GetExtraData
0x5FB03E: test    eax, eax
0x5FB040: jz      short loc_5FB047
0x5FB042: fld     dword ptr [eax+0Ch]
0x5FB045: jmp     short loc_5FB062
0x5FB047: push    edi
0x5FB048: call    TESHealthForm_GetHealthForForm
0x5FB04D: add     esp, 4
0x5FB050: test    eax, eax
0x5FB052: mov     [esp+2Ch+a2], eax
0x5FB056: fild    [esp+2Ch+a2]
0x5FB05A: jge     short loc_5FB062
0x5FB05C: fadd    dword ptr ds:0A2FC78h
0x5FB062: movzx   eax, byte ptr [edi+4]
0x5FB066: fstp    [esp+2Ch+a2]
0x5FB06A: add     eax, 0FFFFFFEDh; switch 24 cases
0x5FB06D: cmp     eax, 17h
0x5FB070: mov     byte ptr [esp+2Ch+var_14], 0
0x5FB075: ja      Actor_EquipItem___Player_EquipItem_Default; jumptable 005FB082 default case, cases 23,24,27-32,35-37,39,41
0x5FB07B: movzx   ecx, ds:byte_5FB9D4[eax]
0x5FB082: jmp     ds:jpt_5FB082[ecx*4]; switch jump
0x5FB089: mov     edx, [esi]; jumptable 005FB082 case 33
0x5FB08B: mov     eax, [edx+380h]
0x5FB091: mov     ecx, esi
0x5FB093: call    eax
0x5FB095: test    eax, eax
0x5FB097: jz      short loc_5FB0AD
0x5FB099: mov     edx, [esi]
0x5FB09B: mov     eax, [edx+18Ch]
0x5FB0A1: mov     ecx, esi
0x5FB0A3: call    eax
0x5FB0A5: test    eax, eax
0x5FB0A7: jnz     loc_5FAF90
0x5FB0AD: mov     ecx, [esp+2Ch+maximumMatches]
0x5FB0B1: cmp     ecx, 1
0x5FB0B4: jle     short loc_5FB0BF
0x5FB0B6: mov     ecx, 1
0x5FB0BB: mov     [esp+2Ch+maximumMatches], ecx
0x5FB0BF: fldz
0x5FB0C1: fcomp   [esp+2Ch+a2]
0x5FB0C5: fnstsw  ax
0x5FB0C7: test    ah, 5
0x5FB0CA: jp      short loc_5FB0E1
0x5FB0CC: mov     edx, dword ptr [esp+2Ch+arg_10]
0x5FB0D0: mov     eax, [esp+2Ch+arg_8]
0x5FB0D4: push    edx
0x5FB0D5: push    eax
0x5FB0D6: push    ecx
0x5FB0D7: push    edi
0x5FB0D8: mov     ecx, esi
0x5FB0DA: call    sub_5F3140
0x5FB0DF: jmp     short loc_5FB10F
0x5FB0E1: cmp     esi, ds:0B333C4h
0x5FB0E7: jnz     short loc_5FB10F
0x5FB0E9: call    InterfaceManager_IsMenuMode; InterfaceManager_IsMenuMode. For a next-frame encounter handler, use this as a conservative gate: if true, leave pending encounter queued until menus are closed so spawn/combat starts in world update context.
0x5FB0EE: test    al, al
0x5FB0F0: jz      short loc_5FB10F
0x5FB0F2: fld     dword ptr ds:0A30634h
0x5FB0F8: push    ecx
0x5FB0F9: mov     ecx, ds:0B38558h
0x5FB0FF: fstp    [esp+30h+duration]; duration
0x5FB102: push    1; unk2
0x5FB104: push    0; unk1
0x5FB106: push    ecx; string
0x5FB107: call    GameUI_QueueMessage
0x5FB10C: add     esp, 10h
0x5FB10F: mov     ecx, ds:0B333C4h
0x5FB115: call    sub_65DD20
0x5FB11A: mov     edx, [esi]
0x5FB11C: mov     eax, [edx+2C0h]
0x5FB122: mov     ecx, esi
0x5FB124: call    eax
0x5FB126: jmp     loc_5FB685
0x5FB12B: push    0; jumptable 005FB082 case 20
0x5FB12D: push    0Dh
0x5FB12F: mov     ecx, ebp
0x5FB131: call    TESBipedModelForm_CoversSlot
0x5FB136: test    al, al
0x5FB138: jz      short loc_5FB182
0x5FB13A: fldz
0x5FB13C: fcomp   [esp+2Ch+a2]
0x5FB140: fnstsw  ax
0x5FB142: test    ah, 1
0x5FB145: jnz     short loc_5FB182
0x5FB147: cmp     esi, ds:0B333C4h
0x5FB14D: jnz     loc_5FB98E
0x5FB153: call    InterfaceManager_IsMenuMode; InterfaceManager_IsMenuMode. For a next-frame encounter handler, use this as a conservative gate: if true, leave pending encounter queued until menus are closed so spawn/combat starts in world update context.
0x5FB158: test    al, al
0x5FB15A: jz      loc_5FB98E
0x5FB160: fld     dword ptr ds:0A30634h
0x5FB166: push    ecx
0x5FB167: mov     ecx, ds:0B38558h
0x5FB16D: fstp    [esp+30h+duration]; duration
0x5FB170: push    1; unk2
0x5FB172: push    0; unk1
0x5FB174: push    ecx; string
0x5FB175: call    GameUI_QueueMessage
0x5FB17A: add     esp, 10h
0x5FB17D: jmp     loc_5FB98E
0x5FB182: mov     edx, [esi]
0x5FB184: mov     eax, [edx+2C0h]
0x5FB18A: mov     ecx, esi
0x5FB18C: call    eax
0x5FB18E: cmp     byte ptr [edi+4], 1Ah; jumptable 005FB082 case 26
0x5FB192: jnz     short Actor_EquipItem___Player_EquipItem_TESObjectCLOT; jumptable 005FB082 case 22
0x5FB194: mov     ecx, ds:0B33A98h
0x5FB19A: push    offset aItmtorchheldeq; "ITMTorchHeldEquip"
0x5FB19F: call    SoundMap_ResolveAnimSoundNote; Animation Sound: note resolver. Looks up the note token in global sound map off_B06164 and accepts only entries whose form/type byte is 0x0A; returns the sound entry or 0.
0x5FB1A4: mov     ebx, eax
0x5FB1A6: test    ebx, ebx
0x5FB1A8: jz      short Actor_EquipItem___Player_EquipItem_TESObjectCLOT; jumptable 005FB082 case 22
0x5FB1AA: cmp     esi, ds:0B333C4h
0x5FB1B0: jnz     short loc_5FB1C4
0x5FB1B2: call    InterfaceManager_IsMenuMode; InterfaceManager_IsMenuMode. For a next-frame encounter handler, use this as a conservative gate: if true, leave pending encounter queued until menus are closed so spawn/combat starts in world update context.
0x5FB1B7: test    al, al
0x5FB1B9: jz      short loc_5FB1C4
0x5FB1BB: push    1
0x5FB1BD: push    121h
0x5FB1C2: jmp     short loc_5FB1CB
0x5FB1C4: push    1; a5
0x5FB1C6: push    102h; a4
0x5FB1CB: mov     ebx, [ebx+0Ch]
0x5FB1CE: push    0; a3
0x5FB1D0: push    ebx; a2
0x5FB1D1: mov     ecx, esi; this
0x5FB1D3: call    sub_65AC50
0x5FB1D8: mov     ebx, eax
0x5FB1DA: test    ebx, ebx
0x5FB1DC: jz      short Actor_EquipItem___Player_EquipItem_TESObjectCLOT; jumptable 005FB082 case 22
0x5FB1DE: mov     ecx, ebx; this
0x5FB1E0: call    sub_6B73E0
0x5FB1E5: push    ebx
0x5FB1E6: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x5FB1EB: add     esp, 4
0x5FB1EE: mov     ebx, [esp+2Ch+arg_8]; jumptable 005FB082 case 22
0x5FB1F2: push    ebx
0x5FB1F3: push    edi
0x5FB1F4: mov     ecx, esi
0x5FB1F6: call    sub_5E3DE0
0x5FB1FB: test    al, al
0x5FB1FD: jz      short loc_5FB257
0x5FB1FF: mov     eax, [esp+2Ch+maximumMatches]
0x5FB203: cmp     eax, 1
0x5FB206: jle     short loc_5FB211
0x5FB208: mov     eax, 1
0x5FB20D: mov     [esp+2Ch+maximumMatches], eax
0x5FB211: mov     ecx, dword ptr [esp+2Ch+arg_10]
0x5FB215: push    ecx
0x5FB216: push    ebx
0x5FB217: push    eax
0x5FB218: push    edi
0x5FB219: mov     ecx, esi
0x5FB21B: call    sub_5F3140
0x5FB220: test    al, al
0x5FB222: jz      loc_5FB685
0x5FB228: mov     ecx, ds:0B333C4h
0x5FB22E: cmp     esi, ecx
0x5FB230: jnz     short loc_5FB247
0x5FB232: cmp     byte ptr [esp+2Ch+arg_C], 0
0x5FB237: jnz     short loc_5FB247
0x5FB239: mov     edx, ebx
0x5FB23B: push    edx
0x5FB23C: push    edi
0x5FB23D: call    sub_662C10
0x5FB242: jmp     loc_5FB685
0x5FB247: mov     eax, ebx
0x5FB249: push    eax
0x5FB24A: push    edi
0x5FB24B: mov     ecx, esi
0x5FB24D: call    sub_5E48D0
0x5FB252: jmp     loc_5FB685
0x5FB257: cmp     esi, ds:0B333C4h
0x5FB25D: jnz     loc_5FB685
0x5FB263: fld     dword ptr ds:0A30634h
0x5FB269: push    ecx
0x5FB26A: mov     ecx, ds:0B38A80h
0x5FB270: fstp    [esp+30h+duration]; duration
0x5FB273: push    1; unk2
0x5FB275: push    0; unk1
0x5FB277: push    ecx; string
0x5FB278: call    GameUI_QueueMessage
0x5FB27D: add     esp, 10h
0x5FB280: jmp     loc_5FB98E
0x5FB285: mov     edx, dword ptr [esp+2Ch+arg_10]; jumptable 005FB082 case 34
0x5FB289: mov     eax, [esp+2Ch+arg_8]
0x5FB28D: mov     ebx, [esp+2Ch+maximumMatches]
0x5FB291: push    edx
0x5FB292: push    eax
0x5FB293: push    ebx
0x5FB294: push    edi
0x5FB295: mov     ecx, esi
0x5FB297: call    sub_5F3140
0x5FB29C: cmp     dword ptr ds:0B3B7D0h, 0
0x5FB2A3: jle     loc_5FB685
0x5FB2A9: push    1; requireInventoryTransfer
0x5FB2AB: push    1; destroyImmediately
0x5FB2AD: push    esi; target
0x5FB2AE: push    ebx; maximumMatches
0x5FB2AF: push    edi; baseForm
0x5FB2B0: call    ArrowProjectile_CleanupMatchingByBaseAndTarget; Scans two ActorProcessManager lists for ArrowProjectile objects matching baseForm and recorded target. Stops at maximumMatches; optionally requires transfer marker +0x95 and either destroys immediately or marks lifecycle state 3.
0x5FB2B5: add     esp, 14h
0x5FB2B8: jmp     loc_5FB685
0x5FB2BD: mov     ebx, [esp+2Ch+arg_8]; jumptable 005FB082 case 25
0x5FB2C1: push    2
0x5FB2C3: push    ebx
0x5FB2C4: push    esi
0x5FB2C5: call    Script_AddEventToExtraScript
0x5FB2CA: mov     edx, [edi]
0x5FB2CC: mov     eax, [edx+78h]
0x5FB2CF: add     esp, 0Ch
0x5FB2D2: mov     ecx, edi
0x5FB2D4: call    eax
0x5FB2D6: test    al, al
0x5FB2D8: jnz     short loc_5FB2FE
0x5FB2DA: cmp     esi, ds:0B333C4h
0x5FB2E0: setnz   cl
0x5FB2E3: push    ecx
0x5FB2E4: push    ebx
0x5FB2E5: push    edi
0x5FB2E6: mov     ecx, esi
0x5FB2E8: call    Actor_EquipIngredient?
0x5FB2ED: push    1
0x5FB2EF: push    1
0x5FB2F1: push    edi
0x5FB2F2: mov     ecx, esi
0x5FB2F4: call    sub_5E99C0
0x5FB2F9: jmp     loc_5FB98E
0x5FB2FE: cmp     esi, ds:0B333C4h
0x5FB304: jnz     loc_5FB98E
0x5FB30A: fld     dword ptr ds:0A30634h
0x5FB310: mov     edx, ds:0B394C0h
0x5FB316: push    ecx
0x5FB317: fstp    [esp+30h+duration]; duration
0x5FB31A: push    1; unk2
0x5FB31C: push    0; unk1
0x5FB31E: push    edx; string
0x5FB31F: call    GameUI_QueueMessage
0x5FB324: add     esp, 10h
0x5FB327: jmp     loc_5FB98E
0x5FB32C: lea     ecx, [edi+30h]; jumptable 005FB082 case 40
0x5FB32F: mov     byte ptr [esp+2Ch+var_14], 1
0x5FB334: call    EffectItemList_AllEffectsHostile
0x5FB339: test    al, al
0x5FB33B: jz      short loc_5FB356
0x5FB33D: mov     ecx, ds:0B333C4h
0x5FB343: cmp     esi, ecx
0x5FB345: jnz     loc_5FB685
0x5FB34B: push    edi
0x5FB34C: call    sub_66A490
0x5FB351: jmp     loc_5FB98E
0x5FB356: mov     ebx, [esp+2Ch+arg_8]
0x5FB35A: push    2
0x5FB35C: push    ebx
0x5FB35D: push    esi
0x5FB35E: call    Script_AddEventToExtraScript
0x5FB363: add     esp, 0Ch
0x5FB366: cmp     esi, ds:0B333C4h
0x5FB36C: mov     ecx, esi
0x5FB36E: setnz   al
0x5FB371: push    eax
0x5FB372: push    ebx
0x5FB373: push    edi
0x5FB374: call    Actor_ConsumePotion?
0x5FB379: test    al, al
0x5FB37B: jz      loc_5FB98E
0x5FB381: push    1
0x5FB383: push    1
0x5FB385: push    edi
0x5FB386: mov     ecx, esi
0x5FB388: call    sub_5E99C0
0x5FB38D: jmp     loc_5FB98E
0x5FB392: mov     ecx, ds:0B333C4h; jumptable 005FB082 case 19
0x5FB398: cmp     esi, ecx
0x5FB39A: jnz     loc_5FB685
0x5FB3A0: push    0
0x5FB3A2: call    PlayerCharacter_IsPlayerInCombat
0x5FB3A7: test    al, al
0x5FB3A9: jz      short Actor_EquipItem___Player_EquipItem_Apparatus
0x5FB3AB: cmp     dword ptr ds:0B38A98h, 0
0x5FB3B2: jnz     short Actor_EquipItem___Player_EquipItem_Apparatus
0x5FB3B4: fld     dword ptr ds:0A30634h
0x5FB3BA: push    ecx
0x5FB3BB: mov     ecx, ds:0B38A60h
0x5FB3C1: fstp    [esp+30h+duration]; duration
0x5FB3C4: push    1; unk2
0x5FB3C6: push    0; unk1
0x5FB3C8: push    ecx; string
0x5FB3C9: call    GameUI_QueueMessage
0x5FB3CE: add     esp, 10h
0x5FB3D1: jmp     loc_5FB98E
0x5FB49F: mov     ecx, ds:0B333C4h; jumptable 005FB082 case 21
0x5FB4A5: cmp     esi, ecx
0x5FB4A7: jnz     loc_5FB685
0x5FB4AD: push    0
0x5FB4AF: call    PlayerCharacter_IsPlayerInCombat
0x5FB4B4: test    al, al
0x5FB4B6: jz      short loc_5FB4E2
0x5FB4B8: call    InterfaceManager_IsMenuMode; InterfaceManager_IsMenuMode. For a next-frame encounter handler, use this as a conservative gate: if true, leave pending encounter queued until menus are closed so spawn/combat starts in world update context.
0x5FB4BD: test    al, al
0x5FB4BF: jnz     short loc_5FB4E2
0x5FB4C1: fld     dword ptr ds:0A30634h
0x5FB4C7: mov     eax, ds:0B38A68h
0x5FB4CC: push    ecx
0x5FB4CD: fstp    [esp+30h+duration]; duration
0x5FB4D0: push    1; unk2
0x5FB4D2: push    0; unk1
0x5FB4D4: push    eax; string
0x5FB4D5: call    GameUI_QueueMessage
0x5FB4DA: add     esp, 10h
0x5FB4DD: jmp     loc_5FB98E
0x5FB4E2: mov     edx, [edi]
0x5FB4E4: mov     eax, [edx+0CCh]
0x5FB4EA: push    1
0x5FB4EC: push    0
0x5FB4EE: push    0
0x5FB4F0: push    esi
0x5FB4F1: push    0
0x5FB4F3: mov     ecx, edi
0x5FB4F5: call    eax
0x5FB4F7: jmp     loc_5FB685
0x5FB4FC: mov     ecx, ds:0B333C4h; jumptable 005FB082 case 42
0x5FB502: cmp     esi, ecx
0x5FB504: jnz     loc_5FB685
0x5FB50A: push    0
0x5FB50C: call    PlayerCharacter_IsPlayerInCombat
0x5FB511: test    al, al
0x5FB513: jz      short loc_5FB540
0x5FB515: call    InterfaceManager_IsMenuMode; InterfaceManager_IsMenuMode. For a next-frame encounter handler, use this as a conservative gate: if true, leave pending encounter queued until menus are closed so spawn/combat starts in world update context.
0x5FB51A: test    al, al
0x5FB51C: jnz     short loc_5FB540
0x5FB51E: fld     dword ptr ds:0A30634h
0x5FB524: push    ecx
0x5FB525: mov     ecx, ds:0B38A68h
0x5FB52B: fstp    [esp+30h+duration]; duration
0x5FB52E: push    1; unk2
0x5FB530: push    0; unk1
0x5FB532: push    ecx; string
0x5FB533: call    GameUI_QueueMessage
0x5FB538: add     esp, 10h
0x5FB53B: jmp     loc_5FB98E
0x5FB540: mov     ecx, ds:0B333C4h
0x5FB546: mov     edx, [ecx]
0x5FB548: mov     eax, [edx+380h]
0x5FB54E: call    eax
0x5FB550: test    eax, eax
0x5FB552: jz      short loc_5FB586
0x5FB554: mov     edx, [esi]
0x5FB556: mov     eax, [edx+18Ch]
0x5FB55C: mov     ecx, esi
0x5FB55E: call    eax
0x5FB560: test    eax, eax
0x5FB562: jz      short loc_5FB586
0x5FB564: fld     dword ptr ds:0A30634h
0x5FB56A: push    ecx
0x5FB56B: mov     ecx, ds:0B38A40h
0x5FB571: fstp    [esp+30h+duration]; duration
0x5FB574: push    1; unk2
0x5FB576: push    0; unk1
0x5FB578: push    ecx; string
0x5FB579: call    GameUI_QueueMessage
0x5FB57E: add     esp, 10h
0x5FB581: jmp     loc_5FB98E
0x5FB586: call    sub_57CC00
0x5FB58B: push    edi
0x5FB58C: call    sub_5D5200
0x5FB591: add     esp, 4
0x5FB594: jmp     loc_5FB685
0x5FB599: mov     ecx, ds:0B333C4h; jumptable 005FB082 case 38
0x5FB59F: cmp     esi, ecx
0x5FB5A1: jnz     loc_5FB685
0x5FB5A7: push    0
0x5FB5A9: call    PlayerCharacter_IsPlayerInCombat
0x5FB5AE: test    al, al
0x5FB5B0: jz      short loc_5FB5DD
0x5FB5B2: cmp     dword ptr ds:0B38A88h, 0
0x5FB5B9: jnz     short loc_5FB5DD
0x5FB5BB: fld     dword ptr ds:0A30634h
0x5FB5C1: mov     edx, ds:0B38A70h
0x5FB5C7: push    ecx
0x5FB5C8: fstp    [esp+30h+duration]; duration
0x5FB5CB: push    1; unk2
0x5FB5CD: push    0; unk1
0x5FB5CF: push    edx; string
0x5FB5D0: call    GameUI_QueueMessage
0x5FB5D5: add     esp, 10h
0x5FB5D8: jmp     loc_5FB98E
0x5FB5DD: cmp     byte ptr [edi+70h], 0
0x5FB5E1: jnz     short loc_5FB615
0x5FB5E3: mov     ecx, [esp+2Ch+arg_8]
0x5FB5E7: test    ecx, ecx
0x5FB5E9: jz      short loc_5FB5F4
0x5FB5EB: call    ExtraDataList_GetExtraSoul
0x5FB5F0: test    eax, eax
0x5FB5F2: jnz     short loc_5FB615
0x5FB5F4: fld     dword ptr ds:0A30634h
0x5FB5FA: mov     eax, ds:0B38870h
0x5FB5FF: push    ecx
0x5FB600: fstp    [esp+30h+duration]; duration
0x5FB603: push    1; unk2
0x5FB605: push    0; unk1
0x5FB607: push    eax; string
0x5FB608: call    GameUI_QueueMessage
0x5FB60D: add     esp, 10h
0x5FB610: jmp     loc_5FB98E
0x5FB615: call    sub_57CC00
0x5FB61A: push    0Ch; Size
0x5FB61C: call    FormHeapAlloc
0x5FB621: add     esp, 4
0x5FB624: mov     [esp+2Ch+arg_C], eax
0x5FB628: test    eax, eax
0x5FB62A: mov     [esp+2Ch+var_4], 0
0x5FB632: jz      short loc_5FB642
0x5FB634: push    0
0x5FB636: push    edi
0x5FB637: mov     ecx, eax
0x5FB639: call    ContainerEntryExtraData_constr
0x5FB63E: mov     ebx, eax
0x5FB640: jmp     short loc_5FB644
0x5FB642: xor     ebx, ebx
0x5FB644: mov     ebp, [esp+2Ch+arg_8]
0x5FB648: mov     ecx, [ebx]
0x5FB64A: push    ebp
0x5FB64B: mov     [esp+30h+var_4], 0FFFFFFFFh
0x5FB653: call    BSSimpleList_PushFront
0x5FB658: test    ebp, ebp
0x5FB65A: jnz     short loc_5FB663
0x5FB65C: mov     ecx, [esp+2Ch+maximumMatches]
0x5FB660: push    ecx
0x5FB661: jmp     short loc_5FB66E
0x5FB663: mov     ecx, ebp
0x5FB665: call    ExtraDataList_GetExtraCount
0x5FB66A: movsx   edx, ax
0x5FB66D: push    edx; value
0x5FB66E: mov     ecx, ebx; this
0x5FB670: call    Shared_SetDwordAtOffset04; Identical-code-folded setter shared by unrelated engine classes: writes value to *(int *)(this+4) and returns value. In EntryData call sites, +0x04 is the canonical signed countDelta; shader/process vtable users give the same bytes unrelated meanings. Do not assign a globally EntryData-specific prototype.
0x5FB675: push    ebx
0x5FB676: call    sub_5CFB50
0x5FB67B: add     esp, 4
0x5FB67E: jmp     short loc_5FB685
0x5FB680: mov     byte ptr [esp+2Ch+var_18+3], 1; jumptable 005FB082 default case, cases 23,24,27-32,35-37,39,41
0x5FB685: cmp     edi, ds:0B35ED0h
0x5FB68B: jnz     short loc_5FB6E9
0x5FB68D: mov     ecx, ds:0B333C4h
0x5FB693: cmp     esi, ecx
0x5FB695: jnz     short loc_5FB6E9
0x5FB697: push    0
0x5FB699: call    PlayerCharacter_IsPlayerInCombat
0x5FB69E: test    al, al
0x5FB6A0: jz      short loc_5FB6CC
0x5FB6A2: cmp     dword ptr ds:0B38A90h, 0
0x5FB6A9: jnz     short loc_5FB6CC
0x5FB6AB: fld     dword ptr ds:0A30634h
0x5FB6B1: mov     eax, ds:0B38A78h
0x5FB6B6: push    ecx
0x5FB6B7: fstp    [esp+30h+duration]; duration
0x5FB6BA: push    1; unk2
0x5FB6BC: push    0; unk1
0x5FB6BE: push    eax; string
0x5FB6BF: call    GameUI_QueueMessage
0x5FB6C4: add     esp, 10h
0x5FB6C7: jmp     loc_5FB98E
0x5FB6CC: mov     byte ptr [esp+2Ch+var_18+3], 0
0x5FB6D1: call    sub_57CC00
0x5FB6D6: mov     ecx, [esp+2Ch+maximumMatches]
0x5FB6DA: push    0
0x5FB6DC: push    0
0x5FB6DE: push    ecx
0x5FB6DF: push    1
0x5FB6E1: call    RepairMenu_Create
0x5FB6E6: add     esp, 10h
0x5FB6E9: cmp     edi, ds:0B35EDCh
0x5FB6EF: jnz     loc_5FB7C1
0x5FB6F5: mov     ecx, ds:0B333C4h
0x5FB6FB: cmp     esi, ecx
0x5FB6FD: jnz     loc_5FB7C1
0x5FB703: push    0
0x5FB705: call    PlayerCharacter_IsPlayerInCombat
0x5FB70A: test    al, al
0x5FB70C: jz      short loc_5FB71B
0x5FB70E: cmp     dword ptr ds:0B38A88h, 0
0x5FB715: jz      loc_5FB5BB
0x5FB71B: mov     ecx, esi
0x5FB71D: mov     byte ptr [esp+2Ch+var_18+3], 0
0x5FB722: call    sub_5E0860
0x5FB727: test    al, al
0x5FB729: push    0; int
0x5FB72B: jz      short loc_5FB7A6
0x5FB72D: mov     ecx, [esp+30h+arg_8]
0x5FB731: mov     eax, [esi]
0x5FB733: mov     edx, [eax+100h]
0x5FB739: push    1
0x5FB73B: push    0
0x5FB73D: push    0
0x5FB73F: push    0
0x5FB741: push    0
0x5FB743: push    0
0x5FB745: push    1
0x5FB747: push    ecx
0x5FB748: push    edi
0x5FB749: mov     ecx, esi
0x5FB74B: call    edx
0x5FB74D: fld     dword ptr ds:0A379B4h
0x5FB753: mov     eax, ds:0B38890h
0x5FB758: push    0; int
0x5FB75A: push    0; int
0x5FB75C: push    ecx
0x5FB75D: fstp    [esp+38h+var_38]; float
0x5FB760: push    eax; int
0x5FB761: call    QueueUIMessage
0x5FB766: mov     ecx, ds:0B33A98h
0x5FB76C: add     esp, 10h
0x5FB76F: push    offset aItmwelkyndston; "ITMWelkyndStoneUse"
0x5FB774: call    SoundMap_ResolveAnimSoundNote; Animation Sound: note resolver. Looks up the note token in global sound map off_B06164 and accepts only entries whose form/type byte is 0x0A; returns the sound entry or 0.
0x5FB779: test    eax, eax
0x5FB77B: jz      short loc_5FB7C1
0x5FB77D: mov     eax, [eax+0Ch]
0x5FB780: push    1; a5
0x5FB782: push    1; a4
0x5FB784: push    0; a3
0x5FB786: push    eax; a2
0x5FB787: mov     ecx, esi; this
0x5FB789: call    sub_65AC50
0x5FB78E: mov     ebx, eax
0x5FB790: test    ebx, ebx
0x5FB792: jz      short loc_5FB7C1
0x5FB794: mov     ecx, ebx; this
0x5FB796: call    sub_6B73E0
0x5FB79B: push    ebx
0x5FB79C: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x5FB7A1: add     esp, 4
0x5FB7A4: jmp     short loc_5FB7C1
0x5FB7A6: fld     dword ptr ds:0A30634h
0x5FB7AC: push    0; int
0x5FB7AE: push    ecx
0x5FB7AF: mov     ecx, ds:0B38878h
0x5FB7B5: fstp    [esp+38h+var_38]; float
0x5FB7B8: push    ecx; int
0x5FB7B9: call    QueueUIMessage
0x5FB7BE: add     esp, 10h
0x5FB7C1: cmp     edi, ds:0B35ED8h
0x5FB7C7: mov     ecx, ds:0B333C4h
0x5FB7CD: jnz     loc_5FB924
0x5FB7D3: cmp     esi, ecx
0x5FB7D5: jnz     loc_5FB924
0x5FB7DB: push    9
0x5FB7DD: push    0
0x5FB7DF: call    Player_GetAVModifierf
0x5FB7E4: fstp    [esp+2Ch+arg_C]
0x5FB7E8: mov     edx, [esi]
0x5FB7EA: mov     eax, [edx+288h]
0x5FB7F0: push    9
0x5FB7F2: mov     ecx, esi
0x5FB7F4: call    eax
0x5FB7F6: fstp    [esp+2Ch+var_14]
0x5FB7FA: push    9
0x5FB7FC: mov     ecx, esi
0x5FB7FE: call    Actor_GetBaseCalcAVi
0x5FB803: mov     [esp+2Ch+maximumMatches], eax
0x5FB807: fild    [esp+2Ch+maximumMatches]
0x5FB80B: fadd    [esp+2Ch+arg_C]
0x5FB80F: fcomp   [esp+2Ch+var_14]
0x5FB813: fnstsw  ax
0x5FB815: test    ah, 41h
0x5FB818: jnz     loc_5FB905
0x5FB81E: push    9
0x5FB820: mov     ecx, esi
0x5FB822: call    Actor_GetBaseCalcAVi
0x5FB827: mov     edx, [esi]
0x5FB829: mov     [esp+2Ch+maximumMatches], eax
0x5FB82D: fild    [esp+2Ch+maximumMatches]
0x5FB831: mov     eax, [edx+288h]
0x5FB837: push    9
0x5FB839: mov     ecx, esi
0x5FB83B: fadd    [esp+30h+arg_C]
0x5FB83F: fstp    [esp+30h+arg_C]
0x5FB843: fld     [esp+30h+arg_C]
0x5FB847: fstp    [esp+30h+var_14]
0x5FB84B: call    eax
0x5FB84D: fsubr   [esp+2Ch+var_14]
0x5FB851: mov     edx, [esi]
0x5FB853: mov     eax, [edx+2A4h]
0x5FB859: push    0
0x5FB85B: push    ecx
0x5FB85C: fstp    [esp+34h+arg_C]
0x5FB860: fld     [esp+34h+arg_C]
0x5FB864: mov     ecx, esi
0x5FB866: fstp    [esp+34h+var_34]
0x5FB869: push    9
0x5FB86B: call    eax
0x5FB86D: cmp     ds:0B333C4h, esi
0x5FB873: jnz     short loc_5FB892
0x5FB875: fld     dword ptr ds:0A30634h
0x5FB87B: push    0; int
0x5FB87D: push    0; int
0x5FB87F: push    ecx
0x5FB880: mov     ecx, ds:0B38888h
0x5FB886: fstp    [esp+38h+var_38]; float
0x5FB889: push    ecx; int
0x5FB88A: call    QueueUIMessage
0x5FB88F: add     esp, 10h
0x5FB892: mov     ecx, ds:0B33A98h
0x5FB898: push    offset aItmwelkyndston; "ITMWelkyndStoneUse"
0x5FB89D: call    SoundMap_ResolveAnimSoundNote; Animation Sound: note resolver. Looks up the note token in global sound map off_B06164 and accepts only entries whose form/type byte is 0x0A; returns the sound entry or 0.
0x5FB8A2: test    eax, eax
0x5FB8A4: jz      short loc_5FB8CD
0x5FB8A6: mov     eax, [eax+0Ch]
0x5FB8A9: push    1; a5
0x5FB8AB: push    1; a4
0x5FB8AD: push    0; a3
0x5FB8AF: push    eax; a2
0x5FB8B0: mov     ecx, esi; this
0x5FB8B2: call    sub_65AC50
0x5FB8B7: mov     ebx, eax
0x5FB8B9: test    ebx, ebx
0x5FB8BB: jz      short loc_5FB8CD
0x5FB8BD: mov     ecx, ebx; this
0x5FB8BF: call    sub_6B73E0
0x5FB8C4: push    ebx
0x5FB8C5: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x5FB8CA: add     esp, 4
0x5FB8CD: mov     ebx, [esp+2Ch+arg_8]
0x5FB8D1: push    2
0x5FB8D3: push    ebx
0x5FB8D4: push    esi
0x5FB8D5: call    Script_AddEventToExtraScript
0x5FB8DA: mov     edx, [esi]
0x5FB8DC: mov     eax, [edx+100h]
0x5FB8E2: add     esp, 0Ch
0x5FB8E5: push    0
0x5FB8E7: push    1
0x5FB8E9: push    0
0x5FB8EB: push    0
0x5FB8ED: push    0
0x5FB8EF: push    0
0x5FB8F1: push    0
0x5FB8F3: push    1
0x5FB8F5: push    ebx
0x5FB8F6: push    edi
0x5FB8F7: mov     ecx, esi
0x5FB8F9: call    eax
0x5FB8FB: call    PlayerCharacter_ReconcileHotkeysAfterInventoryRemoval
0x5FB900: jmp     loc_5FB98E
0x5FB905: fld     dword ptr ds:0A30634h
0x5FB90B: push    ecx
0x5FB90C: mov     ecx, ds:0B38E98h
0x5FB912: fstp    [esp+30h+duration]; duration
0x5FB915: push    1; unk2
0x5FB917: push    0; unk1
0x5FB919: push    ecx; string
0x5FB91A: call    GameUI_QueueMessage
0x5FB91F: add     esp, 10h
0x5FB922: jmp     short loc_5FB98E
0x5FB924: cmp     byte ptr [esp+2Ch+var_18+3], 0
0x5FB929: jz      short loc_5FB94C
0x5FB92B: cmp     esi, ecx
0x5FB92D: jnz     short loc_5FB963
0x5FB92F: fld     dword ptr ds:0A30634h
0x5FB935: mov     edx, ds:0B38A30h
0x5FB93B: push    ecx
0x5FB93C: fstp    [esp+30h+duration]; duration
0x5FB93F: push    1; unk2
0x5FB941: push    0; unk1
0x5FB943: push    edx; string
0x5FB944: call    GameUI_QueueMessage
0x5FB949: add     esp, 10h
0x5FB94C: cmp     esi, ds:0B333C4h
0x5FB952: jnz     short loc_5FB963
0x5FB954: mov     eax, dword ptr [esp+2Ch+var_14]
0x5FB958: push    eax
0x5FB959: push    1
0x5FB95B: push    edi
0x5FB95C: mov     ecx, esi
0x5FB95E: call    sub_5E99C0
0x5FB963: mov     ecx, ds:0B33B00h
0x5FB969: call    sub_45A500
0x5FB96E: test    al, al
0x5FB970: jnz     short loc_5FB98E
0x5FB972: mov     ecx, [esp+2Ch+arg_8]
0x5FB976: push    2
0x5FB978: push    ecx
0x5FB979: push    esi
0x5FB97A: call    Script_AddEventToExtraScript
0x5FB97F: push    2
0x5FB981: add     esi, 44h ; 'D'
0x5FB984: push    esi
0x5FB985: push    edi
0x5FB986: call    Script_AddEventToExtraScript
0x5FB98B: add     esp, 18h
0x5FB98E: mov     ecx, [esp+2Ch+var_C]
0x5FB992: mov     large fs:0, ecx
0x5FB999: pop     ecx
0x5FB99A: pop     edi
0x5FB99B: pop     esi
0x5FB99C: pop     ebp
0x5FB99D: pop     ebx
0x5FB99E: add     esp, 18h
0x5FB9A1: retn    14h
0x9C2B20: mov     eax, [ebp+10h]
0x9C2B23: push    eax
0x9C2B24: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9C2B29: pop     ecx
0x9C2B2A: retn
0x9C2B2B: mov     edx, [esp+maximumMatches]
0x9C2B2F: lea     eax, [edx-1Ch]
0x9C2B32: mov     ecx, [edx-20h]
0x9C2B35: xor     ecx, eax
0x9C2B37: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C2B3C: mov     eax, offset stru_AEB8B4
0x9C2B41: jmp     ___CxxFrameHandler3
