0x57ACC0: push    ecx
0x57ACC1: fldz
0x57ACC3: fst     [esp+4+var_4]
0x57ACC6: fld     [esp+4+duration]
0x57ACCA: fcom    st(1)
0x57ACCC: fnstsw  ax
0x57ACCE: fstp    st(1)
0x57ACD0: test    ah, 41h
0x57ACD3: jnz     short loc_57ACDA
0x57ACD5: fstp    [esp+4+var_4]
0x57ACD8: jmp     short loc_57ACDC
0x57ACDA: fstp    st
0x57ACDC: push    1; arg1
0x57ACDE: push    0; canCreate
0x57ACE0: call    InterfaceManager_GetSingleton
0x57ACE5: add     esp, 8
0x57ACE8: test    eax, eax
0x57ACEA: jz      loc_57ADBF
0x57ACF0: push    1; arg1
0x57ACF2: push    0; canCreate
0x57ACF4: call    InterfaceManager_GetSingleton
0x57ACF9: add     esp, 8
0x57ACFC: cmp     dword ptr [eax+1Ch], 0
0x57AD00: jz      loc_57ADBF
0x57AD06: push    1; arg1
0x57AD08: push    0; canCreate
0x57AD0A: call    InterfaceManager_GetSingleton
0x57AD0F: add     esp, 8
0x57AD12: cmp     dword ptr [eax+68h], 0
0x57AD16: jz      loc_57ADBF
0x57AD1C: push    1; arg1
0x57AD1E: push    0; canCreate
0x57AD20: call    InterfaceManager_GetSingleton
0x57AD25: mov     eax, [eax+68h]
0x57AD28: add     esp, 8
0x57AD2B: push    0FAEh
0x57AD30: mov     ecx, eax
0x57AD32: call    Tile_GetFloat
0x57AD37: fcomp   dword ptr ds:0A379B4h
0x57AD3D: fnstsw  ax
0x57AD3F: test    ah, 44h
0x57AD42: jp      short loc_57ADBF
0x57AD44: push    0; int
0x57AD46: push    offset ??_R0?AVHUDSubtitleMenu@@@8; struct TypeDescriptor *
0x57AD4B: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x57AD50: push    0; int
0x57AD52: push    3F2h
0x57AD57: call    Menu_GetOpenMenuTile
0x57AD5C: add     esp, 4
0x57AD5F: mov     ecx, eax
0x57AD61: call    Tile_GetParentMenu
0x57AD66: push    eax; void *
0x57AD67: call    OblivionDynamicCast
0x57AD6C: add     esp, 14h
0x57AD6F: test    eax, eax
0x57AD71: jnz     short loc_57AD98
0x57AD73: push    eax; int
0x57AD74: push    offset ??_R0?AVHUDSubtitleMenu@@@8; struct TypeDescriptor *
0x57AD79: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x57AD7E: push    eax; int
0x57AD7F: call    sub_5A8E30
0x57AD84: mov     ecx, eax
0x57AD86: call    Tile_GetParentMenu
0x57AD8B: push    eax; void *
0x57AD8C: call    OblivionDynamicCast
0x57AD91: add     esp, 14h
0x57AD94: test    eax, eax
0x57AD96: jz      short loc_57ADBF
0x57AD98: fld     [esp+4+var_4]
0x57AD9B: mov     edx, [esp+4+unk1]
0x57AD9F: push    ecx
0x57ADA0: xor     ecx, ecx
0x57ADA2: fstp    [esp+8+var_8]; float
0x57ADA5: cmp     [esp+8+unk2], ecx
0x57ADA9: setnz   cl
0x57ADAC: add     ecx, 1
0x57ADAF: push    ecx; int
0x57ADB0: mov     ecx, [esp+0Ch+string]
0x57ADB4: push    edx; int
0x57ADB5: push    ecx; int
0x57ADB6: mov     ecx, eax
0x57ADB8: call    sub_5A9980
0x57ADBD: pop     ecx
0x57ADBE: retn
0x57ADBF: xor     al, al
0x57ADC1: pop     ecx
0x57ADC2: retn
