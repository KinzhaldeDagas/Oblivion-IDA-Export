0x5BC8B0: push    0FFFFFFFFh
0x5BC8B2: push    offset SEH_5BC8B0
0x5BC8B7: mov     eax, large fs:0
0x5BC8BD: push    eax
0x5BC8BE: sub     esp, 18h
0x5BC8C1: push    ebx
0x5BC8C2: push    ebp; a3
0x5BC8C3: push    esi; a3
0x5BC8C4: push    edi; a3
0x5BC8C5: mov     eax, ds:0B30AACh
0x5BC8CA: xor     eax, esp
0x5BC8CC: push    eax; a3
0x5BC8CD: lea     eax, [esp+38h+var_C]
0x5BC8D1: mov     large fs:0, eax
0x5BC8D7: push    3E9h
0x5BC8DC: call    Menu_GetOpenMenuTile
0x5BC8E1: add     esp, 4
0x5BC8E4: test    eax, eax
0x5BC8E6: jz      short loc_5BC8F2
0x5BC8E8: mov     edx, [eax]
0x5BC8EA: mov     ecx, eax
0x5BC8EC: mov     eax, [edx]
0x5BC8EE: push    1
0x5BC8F0: call    eax
0x5BC8F2: push    1; arg1
0x5BC8F4: push    0; canCreate
0x5BC8F6: call    InterfaceManager_GetSingleton
0x5BC8FB: mov     edi, eax
0x5BC8FD: add     esp, 8
0x5BC900: mov     [esp+38h+var_18], edi
0x5BC904: call    InterfaceManager_GetDepth
0x5BC909: fstp    [esp+38h+var_24]
0x5BC90D: call    sub_5903E0
0x5BC912: mov     ecx, [edi+68h]; TileWindow *
0x5BC915: push    offset aDataMenusMessa; "Data\\Menus\\message_menu.xml"
0x5BC91A: call    Menu_LoadXML
0x5BC91F: mov     esi, eax
0x5BC921: mov     ecx, esi
0x5BC923: mov     [esp+38h+var_1C], esi
0x5BC927: call    Tile_GetParentMenu
0x5BC92C: mov     ebx, eax
0x5BC92E: test    ebx, ebx
0x5BC930: mov     [esp+38h+var_20], ebx
0x5BC934: jz      loc_5BCBDE
0x5BC93A: mov     edx, [ebx]
0x5BC93C: mov     eax, [edx+34h]
0x5BC93F: mov     ecx, ebx
0x5BC941: call    eax
0x5BC943: cmp     eax, 3E9h
0x5BC948: jnz     loc_5BCBCE
0x5BC94E: push    0; int
0x5BC950: push    offset ??_R0?AVTileMenu@@@8; struct TypeDescriptor *
0x5BC955: push    offset ??_R0?AVTile@@@8; struct _s_RTTICompleteObjectLocator *
0x5BC95A: push    0; int
0x5BC95C: push    esi; void *
0x5BC95D: call    OblivionDynamicCast
0x5BC962: add     esp, 14h
0x5BC965: push    eax
0x5BC966: mov     ecx, ebx
0x5BC968: call    Menu_SetTileMenu
0x5BC96D: push    0; int
0x5BC96F: push    offset ??_R0?AVMessageMenu@@@8; struct TypeDescriptor *
0x5BC974: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x5BC979: push    0; int
0x5BC97B: push    ebx; void *
0x5BC97C: call    OblivionDynamicCast
0x5BC981: mov     ebp, eax
0x5BC983: add     esp, 14h
0x5BC986: cmp     dword ptr [ebp+2Ch], 0
0x5BC98A: jz      short loc_5BC998
0x5BC98C: cmp     dword ptr [ebp+30h], 0
0x5BC990: jz      short loc_5BC998
0x5BC992: cmp     dword ptr [ebp+28h], 0
0x5BC996: jnz     short loc_5BC9AA
0x5BC998: push    offset aMessageMenuCre; "Message Menu Creation Failed... Are you"...
0x5BC99D: call    sub_404EC0
0x5BC9A2: add     esp, 4
0x5BC9A5: jmp     loc_5BCBDE
0x5BC9AA: push    0FA5h
0x5BC9AF: mov     ecx, esi
0x5BC9B1: call    Tile_GetFloat
0x5BC9B6: fcomp   dword ptr ds:0A69770h
0x5BC9BC: fnstsw  ax
0x5BC9BE: test    ah, 44h
0x5BC9C1: jnp     short loc_5BC9DC
0x5BC9C3: push    0FA5h
0x5BC9C8: mov     ecx, esi
0x5BC9CA: call    Tile_GetFloat
0x5BC9CF: fcomp   qword ptr ds:0A69778h
0x5BC9D5: fnstsw  ax
0x5BC9D7: test    ah, 44h
0x5BC9DA: jp      short loc_5BC9F0
0x5BC9DC: fld     [esp+38h+var_24]
0x5BC9E0: push    ecx
0x5BC9E1: fstp    [esp+3Ch+a2]; a3
0x5BC9E4: push    0FABh; a2
0x5BC9E9: mov     ecx, esi; this
0x5BC9EB: call    Tile_SetFloat
0x5BC9F0: mov     ecx, dword ptr [esp+38h+arg_4]
0x5BC9F4: mov     eax, [esp+38h+arg_C]
0x5BC9F8: test    eax, eax
0x5BC9FA: mov     byte ptr [edi+0B0h], 0FFh
0x5BCA01: mov     [ebp+5Ch], ecx
0x5BCA04: mov     ecx, [ebp+34h]; this
0x5BCA07: jz      short loc_5BCA2E
0x5BCA09: cmp     byte ptr [eax], 0
0x5BCA0C: jz      short loc_5BCA1B
0x5BCA0E: push    eax
0x5BCA0F: push    0FDEh
0x5BCA14: call    Tile_SetString
0x5BCA19: jmp     short loc_5BCA3E
0x5BCA1B: mov     edx, ds:0B38CF0h
0x5BCA21: push    edx
0x5BCA22: push    0FDEh
0x5BCA27: call    Tile_SetString
0x5BCA2C: jmp     short loc_5BCA3E
0x5BCA2E: fld1
0x5BCA30: push    ecx
0x5BCA31: fstp    [esp+3Ch+a2]; a3
0x5BCA34: push    0FA1h; a2
0x5BCA39: call    Tile_SetFloat
0x5BCA3E: mov     edi, [esp+38h+arg_10]
0x5BCA42: test    edi, edi
0x5BCA44: jz      loc_5BCB15
0x5BCA4A: add     dword ptr [edi], 4
0x5BCA4D: mov     eax, [edi]
0x5BCA4F: mov     eax, [eax-4]
0x5BCA52: push    eax
0x5BCA53: lea     ecx, [esp+3Ch+var_14]
0x5BCA57: call    BSStringT_constr_str
0x5BCA5C: mov     [esp+38h+var_4], 0
0x5BCA64: mov     esi, 4
0x5BCA69: lea     esp, [esp+0]
0x5BCA70: mov     ax, [esp+38h+var_14.m_dataLen]
0x5BCA75: cmp     ax, 0FFFFh
0x5BCA79: mov     ebx, [esp+38h+var_14.m_data]
0x5BCA7D: jnz     short loc_5BCA91
0x5BCA7F: mov     eax, ebx
0x5BCA81: lea     edx, [eax+1]
0x5BCA84: mov     cl, [eax]
0x5BCA86: add     eax, 1
0x5BCA89: test    cl, cl
0x5BCA8B: jnz     short loc_5BCA84
0x5BCA8D: sub     eax, edx
0x5BCA8F: jmp     short loc_5BCA94
0x5BCA91: movzx   eax, ax
0x5BCA94: test    eax, eax
0x5BCA96: jz      short loc_5BCAFC
0x5BCA98: add     esi, 1
0x5BCA9B: push    esi
0x5BCA9C: mov     ecx, ebp
0x5BCA9E: mov     [esp+3Ch+var_24], esi
0x5BCAA2: call    sub_5BC5E0
0x5BCAA7: mov     esi, eax
0x5BCAA9: test    esi, esi
0x5BCAAB: jz      short loc_5BCAD2
0x5BCAAD: push    ebx
0x5BCAAE: push    0FDEh
0x5BCAB3: mov     ecx, esi
0x5BCAB5: call    Tile_SetString
0x5BCABA: fld     dword ptr ds:0A379B4h
0x5BCAC0: push    ecx
0x5BCAC1: fstp    [esp+3Ch+a2]; a3
0x5BCAC4: push    0FA1h; a2
0x5BCAC9: mov     ecx, esi; this
0x5BCACB: call    Tile_SetFloat
0x5BCAD0: jmp     short loc_5BCADF
0x5BCAD2: push    offset aMissingMessage; "Missing MessageMenu button"
0x5BCAD7: call    sub_404EC0
0x5BCADC: add     esp, 4
0x5BCADF: add     dword ptr [edi], 4
0x5BCAE2: mov     eax, [edi]
0x5BCAE4: mov     ecx, [eax-4]
0x5BCAE7: push    0; a3
0x5BCAE9: push    ecx; a2
0x5BCAEA: lea     ecx, [esp+40h+var_14]; this
0x5BCAEE: call    BSStringT_Set
0x5BCAF3: mov     esi, [esp+38h+var_24]
0x5BCAF7: jmp     loc_5BCA70
0x5BCAFC: push    ebx
0x5BCAFD: mov     [esp+3Ch+var_4], 0FFFFFFFFh
0x5BCB05: call    FormHeapFree
0x5BCB0A: mov     ebx, [esp+3Ch+var_20]
0x5BCB0E: mov     esi, [esp+3Ch+var_1C]
0x5BCB12: add     esp, 4
0x5BCB15: mov     eax, [esp+38h+arg_0]
0x5BCB19: cmp     byte ptr [eax], 0
0x5BCB1C: mov     ecx, [ebp+2Ch]
0x5BCB1F: jz      short loc_5BCB24
0x5BCB21: push    eax
0x5BCB22: jmp     short loc_5BCB2B
0x5BCB24: mov     edx, ds:0B38E10h
0x5BCB2A: push    edx
0x5BCB2B: push    0FDEh
0x5BCB30: call    Tile_SetString
0x5BCB35: mov     al, byte ptr [esp+38h+arg_8]
0x5BCB39: mov     edx, [esp+38h+var_18]
0x5BCB3D: xor     ecx, ecx
0x5BCB3F: mov     [ebp+60h], al
0x5BCB42: cmp     byte ptr [edx+8], 1
0x5BCB46: setnz   cl
0x5BCB49: mov     [esp+38h+var_18], ecx
0x5BCB4D: fild    [esp+38h+var_18]
0x5BCB51: push    ecx
0x5BCB52: mov     ecx, esi; this
0x5BCB54: fstp    [esp+3Ch+a2]; a3
0x5BCB57: push    0FAEh; a2
0x5BCB5C: call    Tile_SetFloat
0x5BCB61: mov     ecx, ds:0B3A6B0h
0x5BCB67: push    2
0x5BCB69: call    sub_572DF0
0x5BCB6E: test    al, al
0x5BCB70: jz      short loc_5BCB7D
0x5BCB72: mov     ecx, ds:0B33398h
0x5BCB78: call    sub_40D160
0x5BCB7D: push    0Bh; int
0x5BCB7F: call    sub_57DE50
0x5BCB84: add     esp, 4
0x5BCB87: push    0; float
0x5BCB89: mov     ecx, esi
0x5BCB8B: call    sub_58FBA0
0x5BCB90: push    0; float
0x5BCB92: mov     ecx, esi
0x5BCB94: call    sub_58FBA0
0x5BCB99: push    0; char
0x5BCB9B: mov     ecx, ebx; int
0x5BCB9D: call    EnableMenu
0x5BCBA2: fld     dword ptr ds:0A379B4h
0x5BCBA8: push    ecx
0x5BCBA9: fstp    [esp+3Ch+a2]; a3
0x5BCBAC: push    0FA1h; a2
0x5BCBB1: mov     ecx, esi; this
0x5BCBB3: call    Tile_SetFloat
0x5BCBB8: mov     al, 1
0x5BCBBA: mov     ecx, [esp+38h+var_C.m_data]
0x5BCBBE: mov     large fs:0, ecx
0x5BCBC5: pop     ecx
0x5BCBC6: pop     edi
0x5BCBC7: pop     esi
0x5BCBC8: pop     ebp
0x5BCBC9: pop     ebx
0x5BCBCA: add     esp, 24h
0x5BCBCD: retn
0x5BCBCE: cmp     dword ptr [ebx+4], 0
0x5BCBD2: jz      short loc_5BCBDE
0x5BCBD4: mov     eax, [ebx]
0x5BCBD6: mov     edx, [eax]
0x5BCBD8: push    1
0x5BCBDA: mov     ecx, ebx
0x5BCBDC: call    edx
0x5BCBDE: xor     al, al
0x5BCBE0: mov     ecx, [esp+38h+var_C.m_data]
0x5BCBE4: mov     large fs:0, ecx
0x5BCBEB: pop     ecx
0x5BCBEC: pop     edi
0x5BCBED: pop     esi
0x5BCBEE: pop     ebp
0x5BCBEF: pop     ebx
0x5BCBF0: add     esp, 24h
0x5BCBF3: retn
