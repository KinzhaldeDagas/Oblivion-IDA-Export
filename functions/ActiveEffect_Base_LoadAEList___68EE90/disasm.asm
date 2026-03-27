0x68EE90: sub     esp, 14h
0x68EE93: mov     ecx, ds:0B33B00h
0x68EE99: push    ebx
0x68EE9A: push    ebp
0x68EE9B: push    esi
0x68EE9C: xor     eax, eax
0x68EE9E: push    edi
0x68EE9F: mov     [esp+24h+var_10], eax
0x68EEA3: mov     [esp+24h+var_C], eax
0x68EEA7: call    sub_45A170
0x68EEAC: test    al, al
0x68EEAE: jz      loc_68EF51
0x68EEB4: mov     ecx, ds:0B33B00h
0x68EEBA: push    4; Size
0x68EEBC: lea     eax, [esp+28h+Dst]
0x68EEC0: push    eax; Dst
0x68EEC1: call    SaveLoad_LoadData
0x68EEC6: cmp     [esp+24h+Dst], 4B4F4C42h
0x68EECE: jz      short loc_68EF38
0x68EED0: mov     eax, ds:0B33B00h
0x68EED5: mov     esi, [eax+80h]
0x68EEDB: test    esi, esi
0x68EEDD: jz      short loc_68EF1C
0x68EEDF: mov     ecx, [esi]
0x68EEE1: push    ecx; a1
0x68EEE2: call    TESForm_LookupByFormID
0x68EEE7: mov     edx, [esi+5]
0x68EEEA: movzx   ecx, byte ptr [esi+9]
0x68EEEE: add     esp, 4
0x68EEF1: push    edx
0x68EEF2: mov     edx, [eax]
0x68EEF4: push    ecx
0x68EEF5: mov     ecx, eax
0x68EEF7: mov     eax, [edx+0D4h]
0x68EEFD: call    eax
0x68EEFF: mov     ecx, [esi]
0x68EF01: push    eax
0x68EF02: push    ecx
0x68EF03: push    373h
0x68EF08: push    offset a_MagicActiveef; ".\\Magic\\ActiveEffect.cpp"
0x68EF0D: push    offset aLoadgameBuffer; "LoadGame Buffer error: Block Header is "...
0x68EF12: call    PrintError
0x68EF17: add     esp, 1Ch
0x68EF1A: jmp     short loc_68EF38
0x68EF1C: movzx   edx, byte ptr [eax+7Ch]
0x68EF20: push    edx
0x68EF21: push    373h
0x68EF26: push    offset a_MagicActiveef; ".\\Magic\\ActiveEffect.cpp"
0x68EF2B: push    offset aLoadgameBuff_0; "LoadGame Buffer error: Block Header is "...
0x68EF30: call    PrintError
0x68EF35: add     esp, 10h
0x68EF38: mov     ecx, ds:0B33B00h
0x68EF3E: mov     eax, [ecx+14h]
0x68EF41: push    2; Size
0x68EF43: lea     edx, [esp+28h+var_10]
0x68EF47: push    edx; Dst
0x68EF48: mov     [esp+2Ch+var_C], eax
0x68EF4C: call    SaveLoad_LoadData
0x68EF51: fldz
0x68EF53: push    0; int
0x68EF55: push    offset ??_R0?AVHUDMainMenu@@@8; struct TypeDescriptor *
0x68EF5A: fstp    [esp+2Ch+var_8]
0x68EF5E: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x68EF63: push    0; int
0x68EF65: push    3ECh
0x68EF6A: call    Menu_GetOpenMenuTile
0x68EF6F: add     esp, 4
0x68EF72: mov     ecx, eax
0x68EF74: call    Tile_GetParentMenu
0x68EF79: push    eax; void *
0x68EF7A: call    OblivionDynamicCast
0x68EF7F: mov     ebx, [esp+38h+arg_0]
0x68EF83: add     esp, 14h
0x68EF86: test    ebx, ebx
0x68EF88: mov     ebp, eax
0x68EF8A: mov     edi, ebx
0x68EF8C: jz      short ActiveEffect_Base_LoadAEList?___ClearActiveEffectList
0x68EF8E: mov     edi, edi
0x68EF90: cmp     dword ptr [edi+4], 0
0x68EF94: jnz     short loc_68EF9B
0x68EF96: cmp     dword ptr [edi], 0
0x68EF99: jz      short ActiveEffect_Base_LoadAEList?___ClearActiveEffectList
0x68EF9B: mov     esi, [edi]
0x68EF9D: push    0; int
0x68EF9F: push    offset ??_R0?AVVampirismEffect@@@8; struct TypeDescriptor *
0x68EFA4: push    offset ??_R0?AVActiveEffect@@@8; struct _s_RTTICompleteObjectLocator *
0x68EFA9: push    0; int
0x68EFAB: push    esi; void *
0x68EFAC: call    OblivionDynamicCast
0x68EFB1: add     esp, 14h
0x68EFB4: test    eax, eax
0x68EFB6: jz      short loc_68EFBF
0x68EFB8: fld     dword ptr [esi+18h]
0x68EFBB: fstp    [esp+24h+var_8]
0x68EFBF: mov     eax, [esp+24h+arg_4]
0x68EFC3: cmp     eax, ds:0B333C4h
0x68EFC9: jnz     short loc_68EFD9
0x68EFCB: test    ebp, ebp
0x68EFCD: jz      short loc_68EFD9
0x68EFCF: push    1
0x68EFD1: push    esi
0x68EFD2: mov     ecx, ebp
0x68EFD4: call    HUDMainMenu_UpdateActiveEffects
0x68EFD9: test    esi, esi
0x68EFDB: jz      short loc_68EFE7
0x68EFDD: mov     edx, [esi]
0x68EFDF: mov     eax, [edx]
0x68EFE1: push    1
0x68EFE3: mov     ecx, esi
0x68EFE5: call    eax
0x68EFE7: mov     edi, [edi+4]
0x68EFEA: test    edi, edi
0x68EFEC: jnz     short loc_68EF90
