0x5D39A0: sub     esp, 13Ch
0x5D39A6: mov     eax, ds:0B30AACh
0x5D39AB: xor     eax, esp
0x5D39AD: mov     [esp+13Ch+var_4], eax
0x5D39B4: push    40Fh
0x5D39B9: call    Menu_GetOpenMenuTile
0x5D39BE: add     esp, 4
0x5D39C1: test    eax, eax
0x5D39C3: jz      short loc_5D39CF
0x5D39C5: mov     edx, [eax]
0x5D39C7: mov     ecx, eax
0x5D39C9: mov     eax, [edx]
0x5D39CB: push    1
0x5D39CD: call    eax
0x5D39CF: push    esi
0x5D39D0: push    edi
0x5D39D1: push    1; arg1
0x5D39D3: push    0; canCreate
0x5D39D5: call    InterfaceManager_GetSingleton
0x5D39DA: add     esp, 8
0x5D39DD: mov     esi, eax
0x5D39DF: call    InterfaceManager_GetDepth
0x5D39E4: fstp    [esp+144h+var_134]
0x5D39E8: mov     ecx, [esi+68h]; TileWindow *
0x5D39EB: push    offset aDataMenusOpt_7; "Data\\Menus\\Options\\save_menu.xml"
0x5D39F0: call    Menu_LoadXML
0x5D39F5: mov     edi, eax
0x5D39F7: mov     ecx, edi
0x5D39F9: mov     [esp+144h+var_138], edi
0x5D39FD: call    Tile_GetParentMenu
0x5D3A02: mov     esi, eax
0x5D3A04: test    esi, esi
0x5D3A06: mov     [esp+144h+var_13C], esi
0x5D3A0A: jz      loc_5D3B4D
0x5D3A10: mov     edx, [esi]
0x5D3A12: mov     eax, [edx+34h]
0x5D3A15: mov     ecx, esi
0x5D3A17: call    eax
0x5D3A19: cmp     eax, 40Fh
0x5D3A1E: jnz     loc_5D3B3D
0x5D3A24: push    ebx
0x5D3A25: push    ebp; a3
0x5D3A26: push    0; int
0x5D3A28: push    offset ??_R0?AVTileMenu@@@8; struct TypeDescriptor *
0x5D3A2D: push    offset ??_R0?AVTile@@@8; struct _s_RTTICompleteObjectLocator *
0x5D3A32: push    0; int
0x5D3A34: push    edi; void *
0x5D3A35: call    OblivionDynamicCast
0x5D3A3A: add     esp, 14h
0x5D3A3D: push    eax
0x5D3A3E: mov     ecx, esi
0x5D3A40: call    Menu_SetTileMenu
0x5D3A45: push    0; int
0x5D3A47: push    offset ??_R0?AVSaveMenu@@@8; struct TypeDescriptor *
0x5D3A4C: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x5D3A51: push    0; int
0x5D3A53: push    esi; void *
0x5D3A54: call    OblivionDynamicCast
0x5D3A59: add     esp, 14h
0x5D3A5C: push    0FA5h
0x5D3A61: mov     ecx, edi
0x5D3A63: mov     ebx, eax
0x5D3A65: call    Tile_GetFloat
0x5D3A6A: fcomp   dword ptr ds:0A69770h
0x5D3A70: fnstsw  ax
0x5D3A72: test    ah, 44h
0x5D3A75: jnp     short loc_5D3A90
0x5D3A77: push    0FA5h
0x5D3A7C: mov     ecx, edi
0x5D3A7E: call    Tile_GetFloat
0x5D3A83: fcomp   qword ptr ds:0A69778h
0x5D3A89: fnstsw  ax
0x5D3A8B: test    ah, 44h
0x5D3A8E: jp      short loc_5D3AA4
0x5D3A90: fld     [esp+14Ch+var_134]
0x5D3A94: push    ecx
0x5D3A95: fstp    [esp+150h+a3]; a3
0x5D3A98: push    0FABh; a2
0x5D3A9D: mov     ecx, edi; this
0x5D3A9F: call    Tile_SetFloat
0x5D3AA4: mov     ecx, ds:0B33B00h
0x5D3AAA: call    sub_45E6A0
0x5D3AAF: mov     ecx, ds:0B38708h
0x5D3AB5: push    0
0x5D3AB7: push    0
0x5D3AB9: push    0
0x5D3ABB: push    ecx
0x5D3ABC: mov     ecx, ebx
0x5D3ABE: call    sub_5D3650
0x5D3AC3: mov     ecx, ds:0B33B00h
0x5D3AC9: call    sub_45D450
0x5D3ACE: mov     edx, ds:0B33B00h
0x5D3AD4: mov     esi, [edx+6Ch]
0x5D3AD7: xor     ebp, ebp
0x5D3AD9: test    esi, esi
0x5D3ADB: mov     [ebx+4Ch], esi
0x5D3ADE: mov     edi, 1
0x5D3AE3: mov     eax, esi
0x5D3AE5: jz      short loc_5D3B15
0x5D3AE7: cmp     dword ptr [eax], 0
0x5D3AEA: jz      short loc_5D3AEF
0x5D3AEC: add     ebp, 1
0x5D3AEF: mov     eax, [eax+4]
0x5D3AF2: test    eax, eax
0x5D3AF4: jnz     short loc_5D3AE7
0x5D3AF6: mov     eax, [esi]
0x5D3AF8: test    eax, eax
0x5D3AFA: jz      short loc_5D3B15
0x5D3AFC: push    ebp
0x5D3AFD: push    eax
0x5D3AFE: push    edi
0x5D3AFF: lea     eax, [esp+158h+var_130]
0x5D3B03: push    eax
0x5D3B04: mov     ecx, ebx
0x5D3B06: call    sub_5D3650
0x5D3B0B: mov     esi, [esi+4]
0x5D3B0E: add     edi, 1
0x5D3B11: test    esi, esi
0x5D3B13: jnz     short loc_5D3AF6
0x5D3B15: mov     ecx, [esp+14Ch+var_13C]; int
0x5D3B19: push    0; char
0x5D3B1B: call    EnableMenu
0x5D3B20: mov     eax, [esp+14Ch+var_138]
0x5D3B24: pop     ebp
0x5D3B25: pop     ebx
0x5D3B26: pop     edi
0x5D3B27: pop     esi
0x5D3B28: mov     ecx, [esp+13Ch+var_4]
0x5D3B2F: xor     ecx, esp
0x5D3B31: call    @__security_check_cookie@4; __security_check_cookie(x)
0x5D3B36: add     esp, 13Ch
0x5D3B3C: retn
0x5D3B3D: cmp     dword ptr [esi+4], 0
0x5D3B41: jz      short loc_5D3B4D
0x5D3B43: mov     edx, [esi]
0x5D3B45: mov     eax, [edx]
0x5D3B47: push    1
0x5D3B49: mov     ecx, esi
0x5D3B4B: call    eax
0x5D3B4D: mov     ecx, [esp+144h+var_4]
0x5D3B54: pop     edi
0x5D3B55: pop     esi
0x5D3B56: xor     ecx, esp
0x5D3B58: xor     eax, eax
0x5D3B5A: call    @__security_check_cookie@4; __security_check_cookie(x)
0x5D3B5F: add     esp, 13Ch
0x5D3B65: retn
