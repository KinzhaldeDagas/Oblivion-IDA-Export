0x5B5DF0: push    ecx
0x5B5DF1: push    ebx
0x5B5DF2: call    sub_578D70
0x5B5DF7: push    414h
0x5B5DFC: mov     bl, al
0x5B5DFE: call    Menu_GetOpenMenuTile
0x5B5E03: add     esp, 4
0x5B5E06: test    eax, eax
0x5B5E08: jz      loc_5B5F1C
0x5B5E0E: mov     ecx, eax
0x5B5E10: call    Tile_GetParentMenu
0x5B5E15: test    eax, eax
0x5B5E17: jz      loc_5B5F1C
0x5B5E1D: cmp     bl, 1
0x5B5E20: jnz     loc_5B5F1C
0x5B5E26: mov     ecx, ds:0B1436Ch
0x5B5E2C: push    edi
0x5B5E2D: push    10h; Radix
0x5B5E2F: lea     eax, [esp+10h+EndPtr]
0x5B5E33: push    eax; EndPtr
0x5B5E34: push    ecx; Str
0x5B5E35: call    _strtol
0x5B5E3A: push    eax; a1
0x5B5E3B: call    TESForm_LookupByFormID
0x5B5E40: add     esp, 10h
0x5B5E43: test    eax, eax
0x5B5E45: jz      loc_5B5F07
0x5B5E4B: cmp     byte ptr [eax+4], 3Bh ; ';'
0x5B5E4F: jnz     loc_5B5F07
0x5B5E55: push    0; int
0x5B5E57: push    offset ??_R0?AVTESQuest@@@8; struct TypeDescriptor *
0x5B5E5C: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x5B5E61: push    0; int
0x5B5E63: push    eax; void *
0x5B5E64: call    OblivionDynamicCast
0x5B5E69: mov     edi, eax
0x5B5E6B: add     esp, 14h
0x5B5E6E: test    edi, edi
0x5B5E70: jz      loc_5B5F07
0x5B5E76: push    esi
0x5B5E77: push    0; int
0x5B5E79: push    offset ??_R0?AVTESWorldSpace@@@8; struct TypeDescriptor *
0x5B5E7E: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x5B5E83: push    0; int
0x5B5E85: push    3Ch ; '<'; a1
0x5B5E87: call    TESForm_LookupByFormID
0x5B5E8C: add     esp, 4
0x5B5E8F: push    eax; void *
0x5B5E90: call    OblivionDynamicCast
0x5B5E95: mov     ecx, ds:0B333A0h
0x5B5E9B: add     esp, 14h
0x5B5E9E: push    eax
0x5B5E9F: call    sub_4431F0
0x5B5EA4: call    sub_5B5960
0x5B5EA9: mov     edx, ds:0B33398h
0x5B5EAF: mov     byte ptr ds:0B3C0ECh, 0
0x5B5EB6: mov     esi, [edx+24h]
0x5B5EB9: test    esi, esi
0x5B5EBB: jz      short loc_5B5EE1
0x5B5EBD: push    0
0x5B5EBF: push    0
0x5B5EC1: push    0FFFFh
0x5B5EC6: mov     ecx, esi
0x5B5EC8: call    SoundManager_OpenMusicFile
0x5B5ECD: push    0
0x5B5ECF: push    0
0x5B5ED1: push    2
0x5B5ED3: mov     ecx, esi
0x5B5ED5: call    SoundManager_OpenMusicFile
0x5B5EDA: mov     ecx, esi
0x5B5EDC: call    SoundManager_PlayMusic
0x5B5EE1: mov     eax, ds:0B333C4h
0x5B5EE6: mov     byte ptr ds:0B3A6D3h, 1
0x5B5EED: push    1
0x5B5EEF: mov     ecx, edi
0x5B5EF1: mov     byte ptr [eax+7F8h], 1
0x5B5EF8: call    sub_529820
0x5B5EFD: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x5B5F02: pop     esi
0x5B5F03: pop     edi
0x5B5F04: pop     ebx
0x5B5F05: pop     ecx
0x5B5F06: retn
0x5B5F07: mov     ecx, ds:0B1436Ch
0x5B5F0D: push    ecx; ArgList
0x5B5F0E: push    offset aUnableToFindCh; "Unable to find character generation que"...
0x5B5F13: call    PrintError
0x5B5F18: add     esp, 8
0x5B5F1B: pop     edi
0x5B5F1C: pop     ebx
0x5B5F1D: pop     ecx
0x5B5F1E: retn
