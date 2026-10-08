0x5D5E50: push    0FFFFFFFFh; Handles SkillsMenu row toggles and accept/back navigation. Multi-select is capped by SkillsMenu+0x44. In class-skill mode it copies selected row AV trait 0xFB0 into the staged ClassMenu array at +0x68, stopping at the cap of seven.
0x5D5E52: push    offset SEH_5ACE20
0x5D5E57: mov     eax, large fs:0
0x5D5E5D: push    eax
0x5D5E5E: sub     esp, 8
0x5D5E61: push    ebx
0x5D5E62: push    ebp
0x5D5E63: push    esi
0x5D5E64: push    edi; a3
0x5D5E65: mov     eax, ds:0B30AACh
0x5D5E6A: xor     eax, esp
0x5D5E6C: push    eax; a3
0x5D5E6D: lea     eax, [esp+28h+var_C]
0x5D5E71: mov     large fs:0, eax
0x5D5E77: mov     esi, ecx
0x5D5E79: mov     eax, [esi]
0x5D5E7B: mov     edx, [eax+34h]
0x5D5E7E: call    edx
0x5D5E80: mov     edi, eax
0x5D5E82: call    sub_578FE0
0x5D5E87: cmp     eax, edi
0x5D5E89: jnz     loc_5D61AE
0x5D5E8F: mov     ebx, [esp+28h+arg_0]
0x5D5E93: cmp     ebx, 4
0x5D5E96: jz      short loc_5D5EC5
0x5D5E98: cmp     ebx, 5
0x5D5E9B: jz      short loc_5D5EC5
0x5D5E9D: cmp     ebx, 6
0x5D5EA0: jz      short loc_5D5EC5
0x5D5EA2: cmp     ebx, 7
0x5D5EA5: jnz     short loc_5D5EFA
0x5D5EA7: mov     ecx, [esi+4]
0x5D5EAA: push    0FB7h
0x5D5EAF: call    Tile_GetFloat
0x5D5EB4: fcomp   dword ptr ds:0A379B4h
0x5D5EBA: fnstsw  ax
0x5D5EBC: test    ah, 44h
0x5D5EBF: jp      loc_5D61AE
0x5D5EC5: mov     ecx, [esi+4Ch]
0x5D5EC8: xor     ebp, ebp
0x5D5ECA: cmp     ecx, ebp
0x5D5ECC: jz      loc_5D60E2
0x5D5ED2: mov     eax, [esi+3Ch]
0x5D5ED5: cmp     eax, ebp
0x5D5ED7: jl      loc_5D607E
0x5D5EDD: cmp     eax, 1
0x5D5EE0: jle     loc_5D601C
0x5D5EE6: cmp     eax, 2
0x5D5EE9: jnz     loc_5D607E
0x5D5EEF: mov     edx, [esi+40h]
0x5D5EF2: mov     [ecx+5Ch], edx
0x5D5EF5: jmp     loc_5D607E
0x5D5EFA: cmp     ebx, 63h ; 'c'
0x5D5EFD: jnz     loc_5D61AE
0x5D5F03: cmp     dword ptr [esi+44h], 1
0x5D5F07: jnz     short loc_5D5F6F
0x5D5F09: mov     ecx, [esi+48h]; this
0x5D5F0C: test    ecx, ecx
0x5D5F0E: jz      short loc_5D5F20
0x5D5F10: fld1
0x5D5F12: push    ecx
0x5D5F13: fstp    [esp+2Ch+a2]; value
0x5D5F16: push    0FB1h; propertyCode
0x5D5F1B: call    Tile_SetFloat; Set or create a numeric Tile property. A missing property is handled, but a null Tile is dereferenced by Tile_GetPropertyByCode_.
0x5D5F20: cmp     dword ptr [esi+3Ch], 3
0x5D5F24: jnz     short loc_5D5F30
0x5D5F26: push    0Bh; int
0x5D5F28: call    sub_57DE50
0x5D5F2D: add     esp, 4
0x5D5F30: fld     dword ptr ds:0A379B4h
0x5D5F36: mov     edi, [esp+28h+arg_4]
0x5D5F3A: push    ecx
0x5D5F3B: fstp    [esp+2Ch+a2]; value
0x5D5F3E: push    0FB1h; propertyCode
0x5D5F43: mov     ecx, edi; this
0x5D5F45: call    Tile_SetFloat; Set or create a numeric Tile property. A missing property is handled, but a null Tile is dereferenced by Tile_GetPropertyByCode_.
0x5D5F4A: push    0FB0h
0x5D5F4F: mov     ecx, edi
0x5D5F51: mov     [esi+48h], edi
0x5D5F54: call    Tile_GetFloat
0x5D5F59: call    Double_To_SInt32; Double_To_SInt32 consumes ST0 double and returns EAX. SSE path uses cvttsd2si, matching C/C++ truncation toward zero.
0x5D5F5E: push    0FFFFFFFFh
0x5D5F60: mov     ecx, esi
0x5D5F62: mov     [esi+40h], eax
0x5D5F65: call    SkillsMenu_UpdateDetails; Native SkillsMenu detail refresh. Resolve the selected native skill AV, then populate the menu from its Oblivion TESSkill description and icon.
0x5D5F6A: jmp     loc_5D61AE
0x5D5F6F: mov     edi, [esp+28h+arg_4]
0x5D5F73: push    0FB1h
0x5D5F78: mov     ecx, edi
0x5D5F7A: call    Tile_GetFloat
0x5D5F7F: fcomp   dword ptr ds:0A379B4h
0x5D5F85: fnstsw  ax
0x5D5F87: test    ah, 44h
0x5D5F8A: jp      short loc_5D5FAC
0x5D5F8C: fld1
0x5D5F8E: push    ecx
0x5D5F8F: fstp    [esp+2Ch+a2]; value
0x5D5F92: mov     ecx, edi; this
0x5D5F94: push    0FB1h; propertyCode
0x5D5F99: call    Tile_SetFloat; Set or create a numeric Tile property. A missing property is handled, but a null Tile is dereferenced by Tile_GetPropertyByCode_.
0x5D5F9E: push    0FFFFFFFFh
0x5D5FA0: mov     ecx, esi
0x5D5FA2: call    SkillsMenu_UpdateDetails; Native SkillsMenu detail refresh. Resolve the selected native skill AV, then populate the menu from its Oblivion TESSkill description and icon.
0x5D5FA7: jmp     loc_5D61AE
0x5D5FAC: mov     ecx, esi; this
0x5D5FAE: call    SkillsMenu_CountSelectedRows; Count native SkillsMenu rows whose selection tile trait 0xFB1 equals 2. Class-major selection uses this count against the configured cap of seven.
0x5D5FB3: cmp     eax, [esi+44h]
0x5D5FB6: jge     short loc_5D5FF3
0x5D5FB8: fld     dword ptr ds:0A379B4h
0x5D5FBE: push    ecx
0x5D5FBF: fstp    [esp+2Ch+a2]; value
0x5D5FC2: push    0FB1h; propertyCode
0x5D5FC7: mov     ecx, edi; this
0x5D5FC9: call    Tile_SetFloat; Set or create a numeric Tile property. A missing property is handled, but a null Tile is dereferenced by Tile_GetPropertyByCode_.
0x5D5FCE: push    0FB0h
0x5D5FD3: mov     ecx, edi
0x5D5FD5: call    Tile_GetFloat
0x5D5FDA: call    Double_To_SInt32; Double_To_SInt32 consumes ST0 double and returns EAX. SSE path uses cvttsd2si, matching C/C++ truncation toward zero.
0x5D5FDF: push    0FFFFFFFFh
0x5D5FE1: mov     ecx, esi
0x5D5FE3: mov     [esi+40h], eax
0x5D5FE6: mov     [esi+48h], edi
0x5D5FE9: call    SkillsMenu_UpdateDetails; Native SkillsMenu detail refresh. Resolve the selected native skill AV, then populate the menu from its Oblivion TESSkill description and icon.
0x5D5FEE: jmp     loc_5D61AE
0x5D5FF3: mov     eax, ds:0B38CF0h
0x5D5FF8: mov     ecx, ds:0B38620h
0x5D5FFE: push    0
0x5D6000: push    eax
0x5D6001: push    1
0x5D6003: push    0
0x5D6005: push    ecx
0x5D6006: call    ShowUIMessageBox
0x5D600B: add     esp, 14h
0x5D600E: push    0FFFFFFFFh
0x5D6010: mov     ecx, esi
0x5D6012: call    SkillsMenu_UpdateDetails; Native SkillsMenu detail refresh. Resolve the selected native skill AV, then populate the menu from its Oblivion TESSkill description and icon.
0x5D6017: jmp     loc_5D61AE
0x5D601C: jnz     short loc_5D6023
0x5D601E: add     ecx, 60h ; '`'
0x5D6021: jmp     short loc_5D6026
0x5D6023: add     ecx, 68h ; 'h'
0x5D6026: mov     eax, [esi+28h]
0x5D6029: mov     edi, [eax+38h]
0x5D602C: cmp     edi, ebp
0x5D602E: mov     [esp+28h+arg_4], ecx
0x5D6032: jz      short loc_5D607E; Write selected row actor values in list order into the staged ClassMenu array, stopping at selectionCap. Native class-skill mode sets selectionCap to seven.
0x5D6034: cmp     ebp, [esi+44h]
0x5D6037: jge     short loc_5D607E
0x5D6039: mov     ebx, [edi+8]
0x5D603C: lea     eax, [edi+8]
0x5D603F: mov     edi, [edi+4]
0x5D6042: push    0FB1h
0x5D6047: mov     ecx, ebx
0x5D6049: call    Tile_GetFloat
0x5D604E: fcomp   dword ptr ds:0A379B4h
0x5D6054: fnstsw  ax
0x5D6056: test    ah, 44h
0x5D6059: jp      short loc_5D6076
0x5D605B: push    0FB0h
0x5D6060: mov     ecx, ebx
0x5D6062: call    Tile_GetFloat
0x5D6067: call    Double_To_SInt32; Double_To_SInt32 consumes ST0 double and returns EAX. SSE path uses cvttsd2si, matching C/C++ truncation toward zero.
0x5D606C: mov     ecx, [esp+28h+arg_4]
0x5D6070: mov     [ecx+ebp*4], eax
0x5D6073: add     ebp, 1
0x5D6076: test    edi, edi
0x5D6078: mov     ebx, [esp+28h+arg_0]
0x5D607C: jnz     short loc_5D6034
0x5D607E: cmp     ebx, 4
0x5D6081: jz      short loc_5D60C7
0x5D6083: cmp     ebx, 7
0x5D6086: jnz     short loc_5D60A2
0x5D6088: mov     ecx, [esi+4]
0x5D608B: push    0FB7h
0x5D6090: call    Tile_GetFloat
0x5D6095: fcomp   dword ptr ds:0A379B4h
0x5D609B: fnstsw  ax
0x5D609D: test    ah, 44h
0x5D60A0: jnp     short loc_5D60C7
0x5D60A2: mov     eax, [esi+4Ch]
0x5D60A5: add     eax, 58h ; 'X'
0x5D60A8: add     dword ptr [eax], 0FFFFFFFFh
0x5D60AB: jnz     short loc_5D60D0
0x5D60AD: mov     ecx, [esi+4Ch]; int
0x5D60B0: call    Menu__StartFadeIn; Oblivion ClassMenu step refresh: derives the active step value from tile traits 0xFDB/0xFDC, updates menu state, sets state 8, and refreshes the interface manager.
0x5D60B5: mov     edx, [esi+3Ch]
0x5D60B8: mov     eax, [esi+4Ch]
0x5D60BB: mov     ecx, [esi+40h]
0x5D60BE: mov     [eax+edx*4+48h], ecx
0x5D60C2: jmp     loc_5D61A9
0x5D60C7: mov     eax, [esi+4Ch]
0x5D60CA: add     eax, 58h ; 'X'
0x5D60CD: add     dword ptr [eax], 1
0x5D60D0: mov     edx, [esi+3Ch]
0x5D60D3: mov     eax, [esi+4Ch]
0x5D60D6: mov     ecx, [esi+40h]
0x5D60D9: mov     [eax+edx*4+48h], ecx
0x5D60DD: jmp     loc_5D61A9
0x5D60E2: cmp     dword ptr [esi+3Ch], 3
0x5D60E6: jnz     loc_5D616C
0x5D60EC: mov     edx, [esi+40h]
0x5D60EF: mov     ecx, ds:0B33A98h
0x5D60F5: push    edx
0x5D60F6: call    sub_447350
0x5D60FB: cmp     eax, ebp
0x5D60FD: jz      loc_5D61AE
0x5D6103: mov     [esp+28h+var_14], ebp
0x5D6107: mov     [esp+28h+var_10], bp
0x5D610C: mov     [esp+28h+var_E], bp
0x5D6111: mov     eax, [eax+1Ch]
0x5D6114: cmp     eax, ebp
0x5D6116: mov     [esp+28h+var_4], ebp
0x5D611A: jnz     short loc_5D6121
0x5D611C: mov     eax, offset EmptyString
0x5D6121: push    eax
0x5D6122: mov     eax, ds:0B38670h
0x5D6127: push    eax; ArgList
0x5D6128: lea     ecx, [esp+30h+var_14]
0x5D612C: push    offset aSS?; "%s %s?"
0x5D6131: push    ecx; int
0x5D6132: call    BSStringT_Static_Format
0x5D6137: mov     edx, ds:0B38CF8h
0x5D613D: mov     eax, ds:0B38D00h
0x5D6142: mov     ecx, [esp+38h+var_14]
0x5D6146: push    ebp
0x5D6147: push    edx
0x5D6148: push    eax
0x5D6149: push    1
0x5D614B: push    offset sub_5D5A50
0x5D6150: push    ecx
0x5D6151: call    ShowUIMessageBox
0x5D6156: add     esp, 28h
0x5D6159: lea     ecx, [esp+28h+var_14]; void *
0x5D615D: mov     [esp+28h+var_4], 0FFFFFFFFh
0x5D6165: call    BSStringT_Clear
0x5D616A: jmp     short loc_5D61AE
0x5D616C: push    413h
0x5D6171: call    Menu_GetOpenMenuTile
0x5D6176: add     esp, 4
0x5D6179: cmp     eax, ebp
0x5D617B: jz      short loc_5D61A9
0x5D617D: push    ebp; int
0x5D617E: push    offset ??_R0?AVEffectSettingMenu@@@8; struct TypeDescriptor *
0x5D6183: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x5D6188: push    ebp; int
0x5D6189: mov     ecx, eax
0x5D618B: call    Tile_GetParentMenu
0x5D6190: push    eax; void *
0x5D6191: call    OblivionDynamicCast
0x5D6196: add     esp, 14h
0x5D6199: cmp     eax, ebp
0x5D619B: jz      short loc_5D61A9
0x5D619D: mov     edx, [eax+94h]
0x5D61A3: mov     eax, [esi+40h]
0x5D61A6: mov     [edx+14h], eax
0x5D61A9: call    sub_5D5720; Close SkillsMenu after staging the selection. Oblivion has no subsequent minor-skill selection mode.
0x5D61AE: mov     ecx, [esp+28h+var_C]
0x5D61B2: mov     large fs:0, ecx
0x5D61B9: pop     ecx
0x5D61BA: pop     edi
0x5D61BB: pop     esi
0x5D61BC: pop     ebp
0x5D61BD: pop     ebx
0x5D61BE: add     esp, 14h
0x5D61C1: retn    8
0x9B5BD0: lea     ecx, [ebp-14h]; void *
0x9B5BD3: jmp     BSStringT_Clear
0x9B5BD8: mov     edx, [esp+arg_4]
0x9B5BDC: lea     eax, [edx-18h]
0x9B5BDF: mov     ecx, [edx-1Ch]
0x9B5BE2: xor     ecx, eax
0x9B5BE4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B5BE9: mov     eax, offset stru_AE0BB4
0x9B5BEE: jmp     ___CxxFrameHandler3
