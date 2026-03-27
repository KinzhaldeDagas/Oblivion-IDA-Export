0x57ADD0: fldz
0x57ADD2: push    esi
0x57ADD3: fld     [esp+4+arg_4]
0x57ADD7: mov     esi, [esp+4+arg_0]
0x57ADDB: fcom    st(1)
0x57ADDD: fnstsw  ax
0x57ADDF: fstp    st(1)
0x57ADE1: test    ah, 41h
0x57ADE4: jp      short loc_57AE30
0x57ADE6: mov     eax, esi
0x57ADE8: fstp    st
0x57ADEA: lea     edx, [eax+1]
0x57ADED: lea     ecx, [ecx+0]
0x57ADF0: mov     cl, [eax]
0x57ADF2: add     eax, 1
0x57ADF5: test    cl, cl
0x57ADF7: jnz     short loc_57ADF0
0x57ADF9: sub     eax, edx
0x57ADFB: test    eax, eax
0x57ADFD: mov     [esp+4+arg_4], eax
0x57AE01: fild    [esp+4+arg_4]
0x57AE05: jge     short loc_57AE0D
0x57AE07: fadd    dword ptr ds:0A2FC78h
0x57AE0D: fmul    dword ptr ds:0B394F8h
0x57AE13: fstp    [esp+4+arg_4]
0x57AE17: fld     [esp+4+arg_4]
0x57AE1B: fld     dword ptr ds:0B394F0h
0x57AE21: fcom    st(1)
0x57AE23: fnstsw  ax
0x57AE25: test    ah, 5
0x57AE28: jp      short loc_57AE2E
0x57AE2A: fstp    st
0x57AE2C: jmp     short loc_57AE30
0x57AE2E: fstp    st(1)
0x57AE30: push    1; arg1
0x57AE32: fstp    [esp+8+arg_4]
0x57AE36: push    0; canCreate
0x57AE38: call    InterfaceManager_GetSingleton
0x57AE3D: add     esp, 8
0x57AE40: test    eax, eax
0x57AE42: jz      loc_57AF0C
0x57AE48: push    1; arg1
0x57AE4A: push    0; canCreate
0x57AE4C: call    InterfaceManager_GetSingleton
0x57AE51: add     esp, 8
0x57AE54: cmp     dword ptr [eax+1Ch], 0
0x57AE58: jz      loc_57AF0C
0x57AE5E: push    1; arg1
0x57AE60: push    0; canCreate
0x57AE62: call    InterfaceManager_GetSingleton
0x57AE67: add     esp, 8
0x57AE6A: cmp     dword ptr [eax+68h], 0
0x57AE6E: jz      loc_57AF0C
0x57AE74: push    1; arg1
0x57AE76: push    0; canCreate
0x57AE78: call    InterfaceManager_GetSingleton
0x57AE7D: mov     eax, [eax+68h]
0x57AE80: add     esp, 8
0x57AE83: push    0FAEh
0x57AE88: mov     ecx, eax
0x57AE8A: call    Tile_GetFloat
0x57AE8F: fcomp   dword ptr ds:0A379B4h
0x57AE95: fnstsw  ax
0x57AE97: test    ah, 44h
0x57AE9A: jp      short loc_57AF0C
0x57AE9C: push    0; int
0x57AE9E: push    offset ??_R0?AVHUDSubtitleMenu@@@8; struct TypeDescriptor *
0x57AEA3: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x57AEA8: push    0; int
0x57AEAA: push    3F2h
0x57AEAF: call    Menu_GetOpenMenuTile
0x57AEB4: add     esp, 4
0x57AEB7: mov     ecx, eax
0x57AEB9: call    Tile_GetParentMenu
0x57AEBE: push    eax; void *
0x57AEBF: call    OblivionDynamicCast
0x57AEC4: add     esp, 14h
0x57AEC7: test    eax, eax
0x57AEC9: jnz     short loc_57AEF0
0x57AECB: push    eax; int
0x57AECC: push    offset ??_R0?AVHUDSubtitleMenu@@@8; struct TypeDescriptor *
0x57AED1: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x57AED6: push    eax; int
0x57AED7: call    sub_5A8E30
0x57AEDC: mov     ecx, eax
0x57AEDE: call    Tile_GetParentMenu
0x57AEE3: push    eax; void *
0x57AEE4: call    OblivionDynamicCast
0x57AEE9: add     esp, 14h
0x57AEEC: test    eax, eax
0x57AEEE: jz      short loc_57AF0C
0x57AEF0: mov     ecx, [esp+4+arg_C]
0x57AEF4: fld     [esp+4+arg_4]
0x57AEF8: mov     edx, [esp+4+arg_8]
0x57AEFC: push    ecx; int
0x57AEFD: push    edx; int
0x57AEFE: push    ecx
0x57AEFF: fstp    [esp+10h+var_10]; float
0x57AF02: push    esi; int
0x57AF03: mov     ecx, eax
0x57AF05: call    sub_5A95C0
0x57AF0A: pop     esi
0x57AF0B: retn
0x57AF0C: xor     al, al
0x57AF0E: pop     esi
0x57AF0F: retn
