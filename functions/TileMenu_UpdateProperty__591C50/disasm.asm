0x591C50: cmp     [esp+arg_0], 0FA2h
0x591C58: push    ebx
0x591C59: push    esi; ArgList
0x591C5A: mov     esi, ecx
0x591C5C: jnz     short loc_591C9A
0x591C5E: fld     [esp+8+arg_4]
0x591C62: call    Double_To_SInt32
0x591C67: mov     ebx, eax
0x591C69: push    ebx
0x591C6A: push    1
0x591C6C: call    Menu_GetB3A708
0x591C71: add     esp, 4
0x591C74: mov     ecx, eax
0x591C76: call    Menu_CreateDynamic
0x591C7B: test    eax, eax
0x591C7D: mov     [esi+44h], eax
0x591C80: jnz     short loc_591CA1
0x591C82: push    offset aErrorCantFindM; "ERROR: Cant find menu class!"
0x591C87: push    1
0x591C89: call    GetGlobalScriptStateObj??
0x591C8E: add     esp, 4
0x591C91: push    eax; int
0x591C92: call    sub_585F40
0x591C97: add     esp, 8
0x591C9A: pop     esi
0x591C9B: xor     eax, eax
0x591C9D: pop     ebx
0x591C9E: retn    0Ch
0x591CA1: push    edi; a3
0x591CA2: push    esi
0x591CA3: mov     ecx, eax
0x591CA5: call    Menu_SetTileMenu
0x591CAA: mov     edi, [esi+44h]
0x591CAD: mov     eax, [edi]
0x591CAF: mov     edx, [eax+34h]
0x591CB2: mov     ecx, edi
0x591CB4: call    edx
0x591CB6: push    0FA5h
0x591CBB: mov     ecx, esi
0x591CBD: mov     [edi+20h], eax
0x591CC0: call    Tile_GetFloat
0x591CC5: fcomp   qword ptr ds:0A69778h
0x591CCB: fnstsw  ax
0x591CCD: test    ah, 44h
0x591CD0: jnp     short loc_591CEB
0x591CD2: push    0FA5h
0x591CD7: mov     ecx, esi
0x591CD9: call    Tile_GetFloat
0x591CDE: fcomp   qword ptr ds:0A69768h
0x591CE4: fnstsw  ax
0x591CE6: test    ah, 44h
0x591CE9: jp      short loc_591D0F
0x591CEB: mov     edi, [esi+44h]
0x591CEE: mov     eax, [edi]
0x591CF0: mov     edx, [eax+34h]
0x591CF3: mov     ecx, edi
0x591CF5: call    edx
0x591CF7: mov     [edi+14h], eax
0x591CFA: call    InterfaceManager_GetDepthR
0x591CFF: push    ecx
0x591D00: fstp    [esp+10h+a2]; a3
0x591D03: push    0FABh; a2
0x591D08: mov     ecx, esi; this
0x591D0A: call    Tile_SetFloat
0x591D0F: lea     eax, [esp+0Ch+arg_0]
0x591D13: push    eax
0x591D14: add     ebx, 0FFFFFC17h
0x591D1A: push    ebx
0x591D1B: mov     ecx, offset Menu_OpenMenuArray
0x591D20: mov     [esp+14h+arg_0], esi
0x591D24: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x591D29: pop     edi
0x591D2A: mov     eax, esi
0x591D2C: pop     esi
0x591D2D: pop     ebx
0x591D2E: retn    0Ch
