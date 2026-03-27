0x5A6B00: push    0FFFFFFFFh
0x5A6B02: push    offset SEH_616530
0x5A6B07: mov     eax, large fs:0
0x5A6B0D: push    eax
0x5A6B0E: sub     esp, 0Ch
0x5A6B11: push    ebx
0x5A6B12: push    ebp
0x5A6B13: push    esi; a3
0x5A6B14: push    edi; a3
0x5A6B15: mov     eax, ds:0B30AACh
0x5A6B1A: xor     eax, esp
0x5A6B1C: push    eax; a3
0x5A6B1D: lea     eax, [esp+2Ch+var_C]
0x5A6B21: mov     large fs:0, eax
0x5A6B27: push    1; arg1
0x5A6B29: push    0; canCreate
0x5A6B2B: call    InterfaceManager_GetSingleton
0x5A6B30: add     esp, 8
0x5A6B33: test    eax, eax
0x5A6B35: jz      loc_5A6DBE
0x5A6B3B: push    1; arg1
0x5A6B3D: push    0; canCreate
0x5A6B3F: call    InterfaceManager_GetSingleton
0x5A6B44: add     esp, 8
0x5A6B47: cmp     dword ptr [eax+60h], 0
0x5A6B4B: jz      loc_5A6DBE
0x5A6B51: push    3ECh
0x5A6B56: call    Menu_GetOpenMenuTile
0x5A6B5B: add     esp, 4
0x5A6B5E: test    eax, eax
0x5A6B60: jz      short loc_5A6B6C
0x5A6B62: mov     edx, [eax]
0x5A6B64: mov     ecx, eax
0x5A6B66: mov     eax, [edx]
0x5A6B68: push    1
0x5A6B6A: call    eax
0x5A6B6C: push    1; arg1
0x5A6B6E: push    0; canCreate
0x5A6B70: call    InterfaceManager_GetSingleton
0x5A6B75: add     esp, 8
0x5A6B78: mov     esi, eax
0x5A6B7A: call    InterfaceManager_GetDepth
0x5A6B7F: fstp    [esp+2Ch+var_14]
0x5A6B83: mov     ecx, [esi+68h]; TileWindow *
0x5A6B86: push    offset aDataMenusMai_1; "Data\\Menus\\Main\\hud_main_menu.xml"
0x5A6B8B: call    Menu_LoadXML
0x5A6B90: mov     ebp, eax
0x5A6B92: mov     ecx, ebp
0x5A6B94: call    Tile_GetParentMenu
0x5A6B99: mov     esi, eax
0x5A6B9B: test    esi, esi
0x5A6B9D: jz      loc_5A6DBE
0x5A6BA3: mov     edx, [esi]
0x5A6BA5: mov     eax, [edx+34h]
0x5A6BA8: mov     ecx, esi
0x5A6BAA: call    eax
0x5A6BAC: cmp     eax, 3ECh
0x5A6BB1: jnz     loc_5A6DAE
0x5A6BB7: push    0; int
0x5A6BB9: push    offset ??_R0?AVTileMenu@@@8; struct TypeDescriptor *
0x5A6BBE: push    offset ??_R0?AVTile@@@8; struct _s_RTTICompleteObjectLocator *
0x5A6BC3: push    0; int
0x5A6BC5: push    ebp; void *
0x5A6BC6: call    OblivionDynamicCast
0x5A6BCB: add     esp, 14h
0x5A6BCE: push    eax
0x5A6BCF: mov     ecx, esi
0x5A6BD1: call    Menu_SetTileMenu
0x5A6BD6: push    0; int
0x5A6BD8: push    offset ??_R0?AVHUDMainMenu@@@8; struct TypeDescriptor *
0x5A6BDD: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x5A6BE2: push    0; int
0x5A6BE4: push    esi; void *
0x5A6BE5: call    OblivionDynamicCast
0x5A6BEA: mov     edi, eax
0x5A6BEC: add     esp, 14h
0x5A6BEF: mov     ecx, edi
0x5A6BF1: call    sub_5A55A0
0x5A6BF6: test    al, al
0x5A6BF8: jnz     short loc_5A6C07
0x5A6BFA: push    offset aHudMenuCreatio; "Hud Menu Creation Failed... Are your me"...
0x5A6BFF: call    sub_404EC0
0x5A6C04: add     esp, 4
0x5A6C07: push    0FA5h
0x5A6C0C: mov     ecx, ebp
0x5A6C0E: call    Tile_GetFloat
0x5A6C13: fcomp   dword ptr ds:0A69770h
0x5A6C19: fnstsw  ax
0x5A6C1B: test    ah, 44h
0x5A6C1E: jnp     short loc_5A6C39
0x5A6C20: push    0FA5h
0x5A6C25: mov     ecx, ebp
0x5A6C27: call    Tile_GetFloat
0x5A6C2C: fcomp   qword ptr ds:0A69778h
0x5A6C32: fnstsw  ax
0x5A6C34: test    ah, 44h
0x5A6C37: jp      short loc_5A6C4D
0x5A6C39: fld     [esp+2Ch+var_14]
0x5A6C3D: push    ecx
0x5A6C3E: fstp    [esp+30h+a2]; a3
0x5A6C41: push    0FABh; a2
0x5A6C46: mov     ecx, ebp; this
0x5A6C48: call    Tile_SetFloat
0x5A6C4D: push    8
0x5A6C4F: mov     ecx, edi
0x5A6C51: call    sub_5A5B50
0x5A6C56: push    9
0x5A6C58: mov     ecx, edi
0x5A6C5A: call    sub_5A5B50
0x5A6C5F: push    0Ah
0x5A6C61: mov     ecx, edi
0x5A6C63: call    sub_5A5B50
0x5A6C68: mov     eax, ds:0B333C4h
0x5A6C6D: test    eax, eax
0x5A6C6F: mov     byte ptr [esp+2Ch+var_18+3], 0
0x5A6C74: jz      loc_5A6D1E
0x5A6C7A: mov     ecx, [eax+58h]
0x5A6C7D: test    ecx, ecx
0x5A6C7F: jz      loc_5A6D1E
0x5A6C85: mov     edx, [ecx]
0x5A6C87: mov     eax, [edx+8]
0x5A6C8A: call    eax
0x5A6C8C: test    eax, eax
0x5A6C8E: jnz     loc_5A6D1E
0x5A6C94: mov     ecx, ds:0B333C4h
0x5A6C9A: mov     ecx, [ecx+58h]
0x5A6C9D: mov     edx, [ecx]
0x5A6C9F: mov     eax, [edx+0ECh]
0x5A6CA5: push    1
0x5A6CA7: call    eax
0x5A6CA9: test    eax, eax
0x5A6CAB: jz      short loc_5A6D1E
0x5A6CAD: mov     ecx, ds:0B333C4h
0x5A6CB3: mov     eax, [eax+8]
0x5A6CB6: push    ecx
0x5A6CB7: push    eax
0x5A6CB8: call    sub_4702D0
0x5A6CBD: mov     ecx, eax
0x5A6CBF: add     esp, 8
0x5A6CC2: lea     ebx, [ecx+1]
0x5A6CC5: mov     dl, [ecx]
0x5A6CC7: add     ecx, 1
0x5A6CCA: test    dl, dl
0x5A6CCC: jnz     short loc_5A6CC5
0x5A6CCE: sub     ecx, ebx
0x5A6CD0: jz      short loc_5A6D1E
0x5A6CD2: xor     ecx, ecx
0x5A6CD4: mov     [esp+2Ch+var_14], ecx
0x5A6CD8: mov     [esp+2Ch+var_10], cx
0x5A6CDD: mov     [esp+2Ch+var_E], cx
0x5A6CE2: push    eax
0x5A6CE3: push    offset aIcons; "Icons"
0x5A6CE8: lea     edx, [esp+34h+var_14]
0x5A6CEC: push    offset aSS_2; "%s\\%s"
0x5A6CF1: push    edx; int
0x5A6CF2: mov     [esp+3Ch+var_4], ecx
0x5A6CF6: call    BSStringT_Static_Format
0x5A6CFB: mov     eax, [esp+3Ch+var_14]
0x5A6CFF: push    eax
0x5A6D00: call    sub_57B190
0x5A6D05: add     esp, 14h
0x5A6D08: lea     ecx, [esp+2Ch+var_14]; void *
0x5A6D0C: mov     byte ptr [esp+2Ch+var_18+3], 1
0x5A6D11: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x5A6D19: call    BSStringT_Clear
0x5A6D1E: fild    dword ptr ds:0B37BC0h
0x5A6D24: push    ecx
0x5A6D25: mov     ecx, [edi+44h]; this
0x5A6D28: fstp    [esp+30h+a2]; a3
0x5A6D2B: push    0FB0h; a2
0x5A6D30: call    Tile_SetFloat
0x5A6D35: fild    dword ptr ds:0B37BC8h
0x5A6D3B: push    ecx
0x5A6D3C: mov     ecx, [edi+44h]; this
0x5A6D3F: fstp    [esp+30h+a2]; a3
0x5A6D42: push    0FB1h; a2
0x5A6D47: call    Tile_SetFloat
0x5A6D4C: cmp     byte ptr [esp+2Ch+var_18+3], 0
0x5A6D51: jnz     short loc_5A6D62
0x5A6D53: mov     ecx, ds:0B33D84h
0x5A6D59: push    ecx
0x5A6D5A: call    sub_57B190
0x5A6D5F: add     esp, 4
0x5A6D62: push    0FB4h
0x5A6D67: mov     ecx, ebp
0x5A6D69: call    Tile_GetFloat
0x5A6D6E: fdiv    qword ptr ds:0A309F0h
0x5A6D74: sub     esp, 8
0x5A6D77: fld1
0x5A6D79: fsubrp  st(1), st
0x5A6D7B: fstp    dword ptr [edi+70h]
0x5A6D7E: fldz
0x5A6D80: fst     [esp+34h+a2]; float
0x5A6D84: fstp    [esp+34h+var_34]; float
0x5A6D87: call    sub_5A5900
0x5A6D8C: add     esp, 8
0x5A6D8F: push    1; char
0x5A6D91: mov     ecx, esi; int
0x5A6D93: call    EnableMenu
0x5A6D98: mov     eax, ebp
0x5A6D9A: mov     ecx, [esp+2Ch+var_C]
0x5A6D9E: mov     large fs:0, ecx
0x5A6DA5: pop     ecx
0x5A6DA6: pop     edi
0x5A6DA7: pop     esi
0x5A6DA8: pop     ebp
0x5A6DA9: pop     ebx
0x5A6DAA: add     esp, 18h
0x5A6DAD: retn
0x5A6DAE: cmp     dword ptr [esi+4], 0
0x5A6DB2: jz      short loc_5A6DBE
0x5A6DB4: mov     edx, [esi]
0x5A6DB6: mov     eax, [edx]
0x5A6DB8: push    1
0x5A6DBA: mov     ecx, esi
0x5A6DBC: call    eax
0x5A6DBE: xor     eax, eax
0x5A6DC0: mov     ecx, [esp+2Ch+var_C]
0x5A6DC4: mov     large fs:0, ecx
0x5A6DCB: pop     ecx
0x5A6DCC: pop     edi
0x5A6DCD: pop     esi
0x5A6DCE: pop     ebp
0x5A6DCF: pop     ebx
0x5A6DD0: add     esp, 18h
0x5A6DD3: retn
