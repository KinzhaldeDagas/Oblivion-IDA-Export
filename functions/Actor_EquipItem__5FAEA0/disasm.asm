0x5FAEA0: push    0FFFFFFFFh
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
0x5FAFF4: call    ContainerExtraData_GetItemCount
0x5FAFF9: push    edi
0x5FAFFA: mov     ebx, eax
0x5FAFFC: call    sub_4691B0
0x5FB001: add     esp, 4
0x5FB004: test    ebx, ebx
0x5FB006: mov     ebp, eax
0x5FB008: jle     loc_5FB98E
0x5FB00E: cmp     [esp+2Ch+arg_4], 0
0x5FB013: jg      short loc_5FB02C
0x5FB015: mov     al, [edi+4]
0x5FB018: cmp     al, 22h ; '"'
0x5FB01A: jz      short loc_5FB028
0x5FB01C: cmp     edi, ds:0B35ED0h
0x5FB022: jz      short loc_5FB028
0x5FB024: cmp     al, 26h ; '&'
0x5FB026: jnz     short loc_5FB02C
0x5FB028: mov     [esp+2Ch+arg_4], ebx
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
0x5FB0AD: mov     ecx, [esp+2Ch+arg_4]
0x5FB0B1: cmp     ecx, 1
0x5FB0B4: jle     short loc_5FB0BF
0x5FB0B6: mov     ecx, 1
0x5FB0BB: mov     [esp+2Ch+arg_4], ecx
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
0x5FB0E9: call    InterfaceManager_IsMenuMode
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
0x5FB153: call    InterfaceManager_IsMenuMode
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
0x5FB19F: call    sub_447490
0x5FB1A4: mov     ebx, eax
0x5FB1A6: test    ebx, ebx
0x5FB1A8: jz      short Actor_EquipItem___Player_EquipItem_TESObjectCLOT; jumptable 005FB082 case 22
0x5FB1AA: cmp     esi, ds:0B333C4h
0x5FB1B0: jnz     short loc_5FB1C4
0x5FB1B2: call    InterfaceManager_IsMenuMode
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
0x5FB1E6: call    FormHeapFree
0x5FB1EB: add     esp, 4
0x5FB1EE: mov     ebx, [esp+2Ch+arg_8]; jumptable 005FB082 case 22
0x5FB1F2: push    ebx
0x5FB1F3: push    edi
0x5FB1F4: mov     ecx, esi
0x5FB1F6: call    sub_5E3DE0
0x5FB1FB: test    al, al
0x5FB1FD: jz      short loc_5FB257
0x5FB1FF: mov     eax, [esp+2Ch+arg_4]
0x5FB203: cmp     eax, 1
0x5FB206: jle     short loc_5FB211
0x5FB208: mov     eax, 1
0x5FB20D: mov     [esp+2Ch+arg_4], eax
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
0x5FB28D: mov     ebx, [esp+2Ch+arg_4]
0x5FB291: push    edx
0x5FB292: push    eax
0x5FB293: push    ebx
0x5FB294: push    edi
0x5FB295: mov     ecx, esi
0x5FB297: call    sub_5F3140
0x5FB29C: cmp     dword ptr ds:0B3B7D0h, 0
0x5FB2A3: jle     loc_5FB685
0x5FB2A9: push    1
0x5FB2AB: push    1
0x5FB2AD: push    esi
0x5FB2AE: push    ebx
0x5FB2AF: push    edi
0x5FB2B0: call    sub_607F90
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
