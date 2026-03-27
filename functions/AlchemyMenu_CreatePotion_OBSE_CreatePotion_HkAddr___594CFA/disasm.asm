0x594CFA: call    Alchemy_MatchPotion
0x594CFF: test    eax, eax
0x594D01: jz      short loc_594D18
0x594D03: mov     ecx, ds:0B333C4h
0x594D09: push    1
0x594D0B: push    0
0x594D0D: push    eax
0x594D0E: call    TESObjectREFR_AddItem_Abbrev
0x594D13: jmp     loc_594DF1
0x594D18: mov     ecx, [edi+94h]
0x594D1E: push    ecx
0x594D1F: mov     ecx, ds:0B33A98h
0x594D25: call    TESDataHandler_AddForm
0x594D2A: mov     edx, [edi+94h]
0x594D30: mov     ecx, ds:0B33B00h
0x594D36: push    edx
0x594D37: call    SaveLoad_AddCreatedObj
0x594D3C: fld     dword ptr [edi+98h]
0x594D42: mov     eax, [edi+94h]
0x594D48: fstp    [esp-4+arg_14]
0x594D4C: fld     [esp-4+arg_14]
0x594D50: add     eax, 70h ; 'p'
0x594D53: fstp    dword ptr [eax+4]
0x594D56: mov     ecx, [edi+94h]
0x594D5C: add     ecx, 30h ; '0'
0x594D5F: call    EffectItemList_AllEffectsHostile
0x594D64: test    al, al
0x594D66: mov     eax, [edi+94h]
0x594D6C: lea     ecx, [eax+40h]
0x594D6F: mov     eax, [ecx]
0x594D71: mov     edx, [eax+18h]
0x594D74: jz      short loc_594D86
0x594D76: push    offset aClutterPotions; "Clutter\\Potions\\PotionPoison.NIF"
0x594D7B: call    edx
0x594D7D: push    0
0x594D7F: push    offset aClutterPotio_0; "Clutter\\Potions\\IconPotionPoison01.dd"...
0x594D84: jmp     short loc_594D94
0x594D86: push    offset aClutterPotio_1; "Clutter\\Potions\\Potion01.NIF"
0x594D8B: call    edx
0x594D8D: push    0; a3
0x594D8F: push    offset aClutterPotio_2; "Clutter\\Potions\\IconPotion01.dds"
0x594D94: mov     eax, [edi+94h]
0x594D9A: add     eax, 58h ; 'X'
0x594D9D: lea     ecx, [eax+4]; this
0x594DA0: call    BSStringT_Set
0x594DA5: mov     eax, [edi+94h]
0x594DAB: mov     ecx, ds:0B333C4h
0x594DB1: push    1
0x594DB3: push    0
0x594DB5: push    eax
0x594DB6: call    TESObjectREFR_AddItem_Abbrev
0x594DBB: push    80h ; '€'; Size
0x594DC0: call    FormHeapAlloc
0x594DC5: add     esp, 4
0x594DC8: mov     [esp+arg_10], eax
0x594DCC: test    eax, eax
0x594DCE: mov     [esp+arg_1C], 0
0x594DD6: jz      short loc_594DE1
0x594DD8: mov     ecx, eax; this
0x594DDA: call    ??0AlchemyItem@@QAE@XZ; AlchemyItem::AlchemyItem(void)
0x594DDF: jmp     short loc_594DE3
0x594DE1: xor     eax, eax
0x594DE3: mov     [esp+arg_1C], 0FFFFFFFFh
0x594DEB: mov     [edi+94h], eax
0x594DF1: fld     dword ptr ds:0A30634h
0x594DF7: push    ecx
0x594DF8: mov     ecx, ds:0B388E8h
0x594DFE: fstp    dword ptr [esp+0]; duration
0x594E01: push    1; unk2
0x594E03: push    0; unk1
0x594E05: push    ecx; string
0x594E06: call    GameUI_QueueMessage
0x594E0B: push    12h; int
0x594E0D: call    sub_57DE50
0x594E12: add     esp, 14h
0x594E15: mov     byte ptr [edi+0A4h], 3
0x594E1C: lea     esi, [edi+0B0h]
0x594E22: mov     ebp, 4
0x594E27: mov     eax, [esi]
0x594E29: test    eax, eax
0x594E2B: jz      loc_594ED1
0x594E31: mov     ecx, ds:0B333C4h
0x594E37: mov     edx, [ecx]
0x594E39: mov     eax, [eax+8]
0x594E3C: mov     edx, [edx+100h]
0x594E42: push    1
0x594E44: push    1
0x594E46: push    0
0x594E48: push    0
0x594E4A: push    0
0x594E4C: push    0
0x594E4E: push    0
0x594E50: push    1
0x594E52: push    0
0x594E54: push    eax; a3
0x594E55: call    edx
0x594E57: mov     ecx, [esi]
0x594E59: call    TESHealthForm_GetHealth
0x594E5E: cmp     eax, 1
0x594E61: jnz     short loc_594E9F
0x594E63: mov     ebx, [esi]
0x594E65: test    ebx, ebx
0x594E67: jz      short loc_594E79
0x594E69: mov     ecx, ebx
0x594E6B: call    ContainerEntryExtraData_DestroyDataTable
0x594E70: push    ebx
0x594E71: call    FormHeapFree
0x594E76: add     esp, 4
0x594E79: mov     ecx, [esi-70h]
0x594E7C: mov     dword ptr [esi], 0
0x594E82: mov     eax, ds:0B388F8h
0x594E87: push    eax
0x594E88: push    0FAEh
0x594E8D: call    Tile_SetString
0x594E92: fld1
0x594E94: push    ecx
0x594E95: fstp    [esp+28h+a2]
0x594E98: push    0FA1h
0x594E9D: jmp     short loc_594EC9
0x594E9F: mov     ecx, [esi]
0x594EA1: call    TESHealthForm_GetHealth
0x594EA6: mov     ecx, [esi]
0x594EA8: sub     eax, 1
0x594EAB: push    eax
0x594EAC: call    sub_60D020
0x594EB1: mov     ecx, [esi]
0x594EB3: call    TESHealthForm_GetHealth
0x594EB8: mov     [esp+24h+var_10], eax
0x594EBC: fild    [esp+24h+var_10]
0x594EC0: push    ecx
0x594EC1: fstp    [esp+28h+a2]; a3
0x594EC4: push    0FAEh; a2
0x594EC9: mov     ecx, [esi-48h]; this
0x594ECC: call    Tile_SetFloat
0x594ED1: add     esi, 4
0x594ED4: sub     ebp, 1
0x594ED7: jnz     loc_594E27
0x594EDD: mov     ecx, edi
0x594EDF: call    AlchemyMenu_CalcPotion?
0x594EE4: mov     ecx, [esp+24h+var_C]
0x594EE8: mov     large fs:0, ecx
0x594EEF: pop     ecx
0x594EF0: pop     edi
0x594EF1: pop     esi
0x594EF2: pop     ebp
0x594EF3: pop     ebx
0x594EF4: add     esp, 10h
0x594EF7: retn
