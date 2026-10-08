0x57B420: push    1; arg1
0x57B422: push    0; canCreate
0x57B424: call    InterfaceManager_GetSingleton
0x57B429: add     esp, 8
0x57B42C: test    eax, eax
0x57B42E: jz      locret_57B4BE
0x57B434: push    1; arg1
0x57B436: push    0; canCreate
0x57B438: call    InterfaceManager_GetSingleton
0x57B43D: add     esp, 8
0x57B440: cmp     dword ptr [eax+1Ch], 0
0x57B444: jz      short locret_57B4BE
0x57B446: push    1; arg1
0x57B448: push    0; canCreate
0x57B44A: call    InterfaceManager_GetSingleton
0x57B44F: add     esp, 8
0x57B452: cmp     dword ptr [eax+68h], 0
0x57B456: jz      short locret_57B4BE
0x57B458: push    1; arg1
0x57B45A: push    0; canCreate
0x57B45C: call    InterfaceManager_GetSingleton
0x57B461: mov     eax, [eax+68h]
0x57B464: add     esp, 8
0x57B467: push    0FAEh
0x57B46C: mov     ecx, eax
0x57B46E: call    Tile_GetFloat
0x57B473: fcomp   dword ptr ds:0A379B4h
0x57B479: fnstsw  ax
0x57B47B: test    ah, 44h
0x57B47E: jp      short locret_57B4BE
0x57B480: push    0; int
0x57B482: push    offset ??_R0?AVSleepWaitMenu@@@8; struct TypeDescriptor *
0x57B487: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x57B48C: push    0; int
0x57B48E: push    3F4h
0x57B493: call    Menu_GetOpenMenuTile
0x57B498: add     esp, 4
0x57B49B: mov     ecx, eax
0x57B49D: call    Tile_GetParentMenu
0x57B4A2: push    eax; void *
0x57B4A3: call    OblivionDynamicCast
0x57B4A8: add     esp, 14h
0x57B4AB: test    eax, eax
0x57B4AD: jz      short loc_57B4B9
0x57B4AF: mov     edx, [eax]
0x57B4B1: mov     ecx, eax
0x57B4B3: mov     eax, [edx]
0x57B4B5: push    1
0x57B4B7: call    eax
0x57B4B9: jmp     loc_5D6D20
0x57B4BE: retn
0x5D6D20: push    0FFFFFFFFh
0x5D6D22: push    offset loc_9C1F90
0x5D6D27: mov     eax, large fs:0
0x5D6D2D: push    eax
0x5D6D2E: sub     esp, 18h
0x5D6D31: push    ebx
0x5D6D32: push    ebp
0x5D6D33: push    esi
0x5D6D34: push    edi
0x5D6D35: mov     eax, ds:0B30AACh
0x5D6D3A: xor     eax, esp
0x5D6D3C: push    eax
0x5D6D3D: lea     eax, [esp+38h+var_C]
0x5D6D41: mov     large fs:0, eax
0x5D6D47: xor     ebx, ebx
0x5D6D49: push    3F4h
0x5D6D4E: mov     ds:0B3B728h, bl
0x5D6D54: call    Menu_GetOpenMenuTile
0x5D6D59: add     esp, 4
0x5D6D5C: mov     ecx, eax
0x5D6D5E: call    Tile_GetParentMenu
0x5D6D63: test    eax, eax
0x5D6D65: jnz     loc_5D7078
0x5D6D6B: push    1; arg1
0x5D6D6D: push    ebx; canCreate
0x5D6D6E: call    InterfaceManager_GetSingleton
0x5D6D73: add     esp, 8
0x5D6D76: mov     esi, eax
0x5D6D78: call    InterfaceManager_GetDepth
0x5D6D7D: fstp    [esp+38h+var_20]
0x5D6D81: mov     ecx, [esi+68h]; this
0x5D6D84: push    offset aDataMenusSleep; "Data\\Menus\\sleep_wait_menu.xml"
0x5D6D89: call    Tile__ReadFile; Verified: SDK ReadXML entry. Builds named tree under receiver via 0x590330, connects/evaluates traits via 0x58CF40, registers subtemplates with owning Menu, frees build storage, refreshes returned subtree via 0x58FBA0. Returns first created tile. Fallout analogue 0x827E2588; cache/cleanup differs.
0x5D6D8E: mov     ebp, eax
0x5D6D90: mov     ecx, ebp
0x5D6D92: call    Tile_GetParentMenu
0x5D6D97: mov     edi, eax
0x5D6D99: cmp     edi, ebx
0x5D6D9B: jz      loc_5D7078
0x5D6DA1: mov     eax, [edi]
0x5D6DA3: mov     edx, [eax+34h]
0x5D6DA6: mov     ecx, edi
0x5D6DA8: call    edx
0x5D6DAA: cmp     eax, 3F4h
0x5D6DAF: jnz     loc_5D7069
0x5D6DB5: push    ebx; int
0x5D6DB6: push    offset ??_R0?AVTileMenu@@@8; struct TypeDescriptor *
0x5D6DBB: push    offset ??_R0?AVTile@@@8; struct _s_RTTICompleteObjectLocator *
0x5D6DC0: push    ebx; int
0x5D6DC1: push    ebp; void *
0x5D6DC2: call    OblivionDynamicCast
0x5D6DC7: add     esp, 14h
0x5D6DCA: push    eax
0x5D6DCB: mov     ecx, edi
0x5D6DCD: call    Menu_SetTileMenu
0x5D6DD2: push    ebx; int
0x5D6DD3: push    offset ??_R0?AVSleepWaitMenu@@@8; struct TypeDescriptor *
0x5D6DD8: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x5D6DDD: push    ebx; int
0x5D6DDE: push    edi; void *
0x5D6DDF: call    OblivionDynamicCast
0x5D6DE4: mov     esi, eax
0x5D6DE6: add     esp, 14h
0x5D6DE9: mov     ecx, esi
0x5D6DEB: call    sub_5D68A0
0x5D6DF0: test    al, al
0x5D6DF2: jnz     short loc_5D6E06
0x5D6DF4: push    offset aSleepMenuCreat; "Sleep Menu Creation Failed... Are your "...
0x5D6DF9: call    PrintError
0x5D6DFE: add     esp, 4
0x5D6E01: jmp     loc_5D7078
0x5D6E06: push    0FA5h
0x5D6E0B: mov     ecx, ebp
0x5D6E0D: call    Tile_GetFloat
0x5D6E12: fcomp   dword ptr ds:0A69770h
0x5D6E18: fnstsw  ax
0x5D6E1A: test    ah, 44h
0x5D6E1D: jnp     short loc_5D6E38
0x5D6E1F: push    0FA5h
0x5D6E24: mov     ecx, ebp
0x5D6E26: call    Tile_GetFloat
0x5D6E2B: fcomp   qword ptr ds:0A69778h
0x5D6E31: fnstsw  ax
0x5D6E33: test    ah, 44h
0x5D6E36: jp      short loc_5D6E4C
0x5D6E38: fld     [esp+38h+var_20]
0x5D6E3C: push    ecx
0x5D6E3D: fstp    [esp+3Ch+a3]; value
0x5D6E40: push    0FABh; propertyCode
0x5D6E45: mov     ecx, ebp; this
0x5D6E47: call    Tile_SetFloat; Set or create a numeric Tile property. A missing property is handled, but a null Tile is dereferenced by Tile_GetPropertyByCode_.
0x5D6E4C: mov     ecx, [esi+2Ch]; this
0x5D6E4F: fld     dword ptr ds:0A6B1F0h
0x5D6E55: push    ecx
0x5D6E56: fstp    [esp+3Ch+a3]; value
0x5D6E59: push    0FB7h; propertyCode
0x5D6E5E: call    Tile_SetFloat; Set or create a numeric Tile property. A missing property is handled, but a null Tile is dereferenced by Tile_GetPropertyByCode_.
0x5D6E63: fldz
0x5D6E65: mov     ecx, [esi+2Ch]; this
0x5D6E68: push    ecx
0x5D6E69: fstp    [esp+3Ch+a3]; value
0x5D6E6C: push    0FB7h; propertyCode
0x5D6E71: call    Tile_SetFloat; Set or create a numeric Tile property. A missing property is handled, but a null Tile is dereferenced by Tile_GetPropertyByCode_.
0x5D6E76: fild    dword ptr ds:0B14778h
0x5D6E7C: mov     ecx, [esi+28h]; this
0x5D6E7F: push    ecx
0x5D6E80: fstp    [esp+3Ch+a3]; value
0x5D6E83: push    0FB3h; propertyCode
0x5D6E88: call    Tile_SetFloat; Set or create a numeric Tile property. A missing property is handled, but a null Tile is dereferenced by Tile_GetPropertyByCode_.
0x5D6E8D: fldz
0x5D6E8F: mov     ecx, [esi+28h]; this
0x5D6E92: push    ecx
0x5D6E93: fstp    [esp+3Ch+a3]; value
0x5D6E96: push    0FB3h; propertyCode
0x5D6E9B: call    Tile_SetFloat; Set or create a numeric Tile property. A missing property is handled, but a null Tile is dereferenced by Tile_GetPropertyByCode_.
0x5D6EA0: fld1
0x5D6EA2: mov     ecx, [esi+28h]; this
0x5D6EA5: push    ecx
0x5D6EA6: fstp    [esp+3Ch+a3]; value
0x5D6EA9: push    0FAFh; propertyCode
0x5D6EAE: call    Tile_SetFloat; Set or create a numeric Tile property. A missing property is handled, but a null Tile is dereferenced by Tile_GetPropertyByCode_.
0x5D6EB3: fld     dword ptr ds:0A2F930h
0x5D6EB9: mov     ecx, [esi+28h]; this
0x5D6EBC: push    ecx
0x5D6EBD: fstp    [esp+3Ch+a3]; value
0x5D6EC0: push    0FB0h; propertyCode
0x5D6EC5: call    Tile_SetFloat; Set or create a numeric Tile property. A missing property is handled, but a null Tile is dereferenced by Tile_GetPropertyByCode_.
0x5D6ECA: fld     dword ptr ds:0A5977Ch
0x5D6ED0: mov     ecx, [esi+28h]; this
0x5D6ED3: push    ecx
0x5D6ED4: fstp    [esp+3Ch+a3]; value
0x5D6ED7: push    0FB2h; propertyCode
0x5D6EDC: call    Tile_SetFloat; Set or create a numeric Tile property. A missing property is handled, but a null Tile is dereferenced by Tile_GetPropertyByCode_.
0x5D6EE1: cmp     [esp+38h+a4], bl
0x5D6EE5: mov     eax, ds:0B333C4h
0x5D6EEA: mov     ecx, [eax+590h]
0x5D6EF0: mov     ds:0B3B730h, ecx
0x5D6EF6: mov     ds:0B3B72Ch, bl
0x5D6EFC: jnz     short loc_5D6F19
0x5D6EFE: mov     edx, ds:0B38AC8h
0x5D6F04: mov     ecx, [esi+30h]
0x5D6F07: push    edx
0x5D6F08: push    0FAEh
0x5D6F0D: call    Tile_SetString
0x5D6F12: fld1
0x5D6F14: mov     [esi+4Ch], bl
0x5D6F17: jmp     short loc_5D6F1F
0x5D6F19: fld     dword ptr ds:0A379B4h
0x5D6F1F: push    ecx
0x5D6F20: fstp    [esp+3Ch+a3]; value
0x5D6F23: push    0FAEh; propertyCode
0x5D6F28: mov     ecx, ebp; this
0x5D6F2A: call    Tile_SetFloat; Set or create a numeric Tile property. A missing property is handled, but a null Tile is dereferenced by Tile_GetPropertyByCode_.
0x5D6F2F: mov     [esp+38h+var_1C.m_data], ebx
0x5D6F33: mov     [esp+38h+var_1C.m_dataLen], bx
0x5D6F38: mov     [esp+38h+var_1C.m_bufLen], bx
0x5D6F3D: mov     ecx, 0B332E0h
0x5D6F42: mov     [esp+38h+var_4], ebx
0x5D6F46: call    TimeGlobals_GetGameHour
0x5D6F4B: fstp    [esp+38h+var_20]
0x5D6F4F: fld     [esp+38h+var_20]
0x5D6F53: fld     st
0x5D6F55: call    Double_To_SInt32; Double_To_SInt32 consumes ST0 double and returns EAX. SSE path uses cvttsd2si, matching C/C++ truncation toward zero.
0x5D6F5A: movsx   eax, al
0x5D6F5D: mov     [esp+38h+var_20], eax
0x5D6F61: fild    [esp+38h+var_20]
0x5D6F65: fsub    st(1), st
0x5D6F67: fxch    st(1)
0x5D6F69: fmul    qword ptr ds:0A2FCC8h
0x5D6F6F: call    Double_To_SInt32; Double_To_SInt32 consumes ST0 double and returns EAX. SSE path uses cvttsd2si, matching C/C++ truncation toward zero.
0x5D6F74: fld1
0x5D6F76: fcomp   st(1)
0x5D6F78: mov     byte ptr [esp+38h+var_24+3], al
0x5D6F7C: fnstsw  ax
0x5D6F7E: fld     qword ptr ds:0A2F910h
0x5D6F84: test    ah, 41h
0x5D6F87: jnz     short loc_5D6F8D
0x5D6F89: fld     st
0x5D6F8B: jmp     short loc_5D6F9A
0x5D6F8D: fcom    st(1)
0x5D6F8F: fnstsw  ax
0x5D6F91: fld     st(1)
0x5D6F93: test    ah, 5
0x5D6F96: jp      short loc_5D6F9A
0x5D6F98: fsub    st, st(1)
0x5D6F9A: call    Double_To_SInt32; Double_To_SInt32 consumes ST0 double and returns EAX. SSE path uses cvttsd2si, matching C/C++ truncation toward zero.
0x5D6F9F: fcompp
0x5D6FA1: mov     cl, al
0x5D6FA3: fnstsw  ax
0x5D6FA5: test    ah, 41h
0x5D6FA8: mov     eax, offset aPm; "pm"
0x5D6FAD: jnp     short loc_5D6FB4
0x5D6FAF: mov     eax, offset aAm; "am"
0x5D6FB4: movsx   edx, byte ptr [esp+38h+var_24+3]
0x5D6FB9: push    eax
0x5D6FBA: movsx   eax, cl
0x5D6FBD: push    edx
0x5D6FBE: push    eax
0x5D6FBF: mov     ecx, 0B332E0h
0x5D6FC4: call    TimeGlobals_GetGameDayOfWeekName
0x5D6FC9: push    eax
0x5D6FCA: lea     ecx, [esp+48h+var_1C]
0x5D6FCE: push    offset aSD02dS; "%s %d:%02d %s"
0x5D6FD3: push    ecx
0x5D6FD4: call    BSStringT_Static_Format
0x5D6FD9: mov     edx, [esp+50h+var_1C.m_data]
0x5D6FDD: mov     ecx, [esi+38h]
0x5D6FE0: add     esp, 18h
0x5D6FE3: push    edx
0x5D6FE4: push    0FDEh
0x5D6FE9: call    Tile_SetString
0x5D6FEE: lea     eax, [esp+38h+var_14]
0x5D6FF2: push    eax
0x5D6FF3: mov     ecx, 0B332E0h
0x5D6FF8: call    TimeGlobals_FormatGameDate; Builds the in-game date string '%s %d, 3E%d' from a month-name table, game day, and game year. Observed in HUD and Sleep/Wait menu.
0x5D6FFD: mov     eax, [eax]
0x5D6FFF: push    ebx; a3
0x5D7000: push    eax; a2
0x5D7001: lea     ecx, [esp+40h+var_1C]; this
0x5D7005: mov     byte ptr [esp+40h+var_4], 1
0x5D700A: call    BSStringT_Set
0x5D700F: mov     ecx, dword ptr [esp+38h+var_14]
0x5D7013: push    ecx
0x5D7014: mov     byte ptr [esp+3Ch+var_4], bl
0x5D7018: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x5D701D: mov     ebp, [esp+3Ch+var_1C.m_data]
0x5D7021: mov     ecx, [esi+3Ch]
0x5D7024: add     esp, 4
0x5D7027: push    ebp
0x5D7028: push    0FDEh
0x5D702D: call    Tile_SetString
0x5D7032: push    0Bh; int
0x5D7034: mov     ds:0B3B729h, bl
0x5D703A: call    sub_57DE50
0x5D703F: add     esp, 4
0x5D7042: push    ebx
0x5D7043: mov     ecx, edi
0x5D7045: call    EnableMenu
0x5D704A: push    ebp
0x5D704B: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x5D7050: add     esp, 4
0x5D7053: mov     al, 1
0x5D7055: mov     ecx, [esp+38h+var_C]
0x5D7059: mov     large fs:0, ecx
0x5D7060: pop     ecx
0x5D7061: pop     edi
0x5D7062: pop     esi
0x5D7063: pop     ebp
0x5D7064: pop     ebx
0x5D7065: add     esp, 24h
0x5D7068: retn
0x5D7069: cmp     [edi+4], ebx
0x5D706C: jz      short loc_5D7078
0x5D706E: mov     edx, [edi]
0x5D7070: mov     eax, [edx]
0x5D7072: push    1
0x5D7074: mov     ecx, edi
0x5D7076: call    eax
0x5D7078: xor     al, al
0x5D707A: mov     ecx, [esp+38h+var_C]
0x5D707E: mov     large fs:0, ecx
0x5D7085: pop     ecx
0x5D7086: pop     edi
0x5D7087: pop     esi
0x5D7088: pop     ebp
0x5D7089: pop     ebx
0x5D708A: add     esp, 24h
0x5D708D: retn
0x9C1F80: lea     ecx, [ebp-1Ch]; void *
0x9C1F83: jmp     BSStringT_Clear
0x9C1F88: lea     ecx, [ebp-14h]; void *
0x9C1F8B: jmp     BSStringT_Clear
0x9C1F90: mov     edx, [esp+arg_4]
0x9C1F94: lea     eax, [edx-28h]
0x9C1F97: mov     ecx, [edx-2Ch]
0x9C1F9A: xor     ecx, eax
0x9C1F9C: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C1FA1: mov     eax, offset stru_AEAF04
0x9C1FA6: jmp     ___CxxFrameHandler3
