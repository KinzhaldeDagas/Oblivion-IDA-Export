0x583E60: mov     eax, ds:0B33398h
0x583E65: push    esi
0x583E66: push    edi; a3
0x583E67: mov     edi, [eax+20h]
0x583E6A: mov     esi, ecx
0x583E6C: call    sub_583C30
0x583E71: mov     al, [esi+8]
0x583E74: cmp     al, 3
0x583E76: jnz     loc_583F2B
0x583E7C: cmp     byte ptr [esi+9], 0
0x583E80: jnz     loc_583F2B
0x583E86: mov     ecx, edi; this
0x583E88: call    InputGlobals__FlushKeyboardBuffer
0x583E8D: fld     dword ptr ds:0A379B4h
0x583E93: mov     ecx, [esi+1Ch]
0x583E96: mov     byte ptr [esi+8], 5
0x583E9A: mov     eax, [ecx+24h]
0x583E9D: and     word ptr [eax+18h], 0FFFEh
0x583EA3: push    ecx
0x583EA4: mov     ecx, [esi+1Ch]; this
0x583EA7: fstp    [esp+0Ch+a2]; a3
0x583EAA: push    0FA1h; a2
0x583EAF: call    Tile_SetFloat
0x583EB4: mov     ecx, [esi+1Ch]
0x583EB7: push    offset aMenusMiscCurso; "Menus\\Misc\\cursor.dds"
0x583EBC: push    0FE6h
0x583EC1: call    Tile_SetString
0x583EC6: mov     ecx, [esi+1Ch]
0x583EC9: call    sub_58E870
0x583ECE: push    0
0x583ED0: mov     ecx, esi
0x583ED2: call    sub_57D940
0x583ED7: push    0
0x583ED9: push    0
0x583EDB: push    0
0x583EDD: call    sub_5A4980
0x583EE2: push    0
0x583EE4: mov     dword ptr [esi+88h], 0
0x583EEE: call    GetGlobalScriptStateObj??
0x583EF3: add     esp, 10h
0x583EF6: test    eax, eax
0x583EF8: jz      short loc_583F01
0x583EFA: mov     ecx, eax
0x583EFC: call    sub_585820
0x583F01: push    0
0x583F03: push    1
0x583F05: call    sub_5A6040
0x583F0A: push    3EDh
0x583F0F: call    Menu_GetOpenMenuTile
0x583F14: add     esp, 0Ch
0x583F17: test    eax, eax
0x583F19: jz      short loc_583F33
0x583F1B: mov     ecx, eax
0x583F1D: call    Tile_GetParentMenu
0x583F22: pop     edi
0x583F23: mov     ecx, eax; int
0x583F25: pop     esi
0x583F26: jmp     sub_584740
0x583F2B: cmp     al, 5
0x583F2D: jnz     short loc_583F33
0x583F2F: mov     byte ptr [esi+8], 2
0x583F33: pop     edi
0x583F34: pop     esi
0x583F35: retn
