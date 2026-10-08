0x59EB90: push    ecx
0x59EB91: fld1
0x59EB93: push    ebx
0x59EB94: push    ebp
0x59EB95: push    esi; a3
0x59EB96: push    edi; a3
0x59EB97: push    ecx
0x59EB98: mov     esi, ecx
0x59EB9A: fstp    [esp+18h+a2]; value
0x59EB9D: mov     ecx, [esi+38h]; this
0x59EBA0: push    0FA1h; propertyCode
0x59EBA5: call    Tile_SetFloat; Set or create a numeric Tile property. A missing property is handled, but a null Tile is dereferenced by Tile_GetPropertyByCode_.
0x59EBAA: call    MenuTopicManager__GetSingleton
0x59EBAF: mov     ebx, eax
0x59EBB1: mov     ecx, ebx; this
0x59EBB3: call    MenuTopicManager__GetCurrentTopic
0x59EBB8: mov     edi, eax
0x59EBBA: test    edi, edi
0x59EBBC: jz      loc_59ECB5
0x59EBC2: mov     ecx, edi; this
0x59EBC4: call    MenuTopic__GetCurrentResponse
0x59EBC9: mov     ebp, eax
0x59EBCB: test    ebp, ebp
0x59EBCD: jz      loc_59ECB5
0x59EBD3: mov     ecx, [esi+60h]
0x59EBD6: fldz
0x59EBD8: mov     eax, [ecx]
0x59EBDA: mov     edx, [eax+304h]
0x59EBE0: push    ebp; a3
0x59EBE1: push    ecx
0x59EBE2: fstp    [esp+1Ch+var_1C]; a3
0x59EBE5: call    edx
0x59EBE7: fld     dword ptr ds:0A379B4h
0x59EBED: lea     eax, [ebx+4]
0x59EBF0: fstp    dword ptr [esi+84h]
0x59EBF6: mov     dword ptr [esi+80h], 2
0x59EC00: mov     ecx, ebx; this
0x59EC02: mov     [ebx], eax
0x59EC04: call    MenuTopicManager__GetCurrentTopic
0x59EC09: test    eax, eax
0x59EC0B: jz      short loc_59EC2D
0x59EC0D: lea     ecx, [ecx+0]
0x59EC10: mov     ecx, ebx; this
0x59EC12: call    MenuTopicManager__GetCurrentTopic
0x59EC17: cmp     eax, edi
0x59EC19: jz      short loc_59EC2D
0x59EC1B: mov     ecx, ebx; this
0x59EC1D: call    MenuTopicManager__NextTopic
0x59EC22: mov     ecx, ebx; this
0x59EC24: call    MenuTopicManager__GetCurrentTopic
0x59EC29: test    eax, eax
0x59EC2B: jnz     short loc_59EC10
0x59EC2D: mov     ecx, edi; this
0x59EC2F: call    MenuTopic__FirstResponse
0x59EC34: mov     ecx, edi; this
0x59EC36: call    MenuTopic__GetCurrentResponse
0x59EC3B: test    eax, eax
0x59EC3D: jz      short loc_59EC5D
0x59EC3F: nop
0x59EC40: mov     ecx, edi; this
0x59EC42: call    MenuTopic__GetCurrentResponse
0x59EC47: cmp     eax, ebp
0x59EC49: jz      short loc_59EC5D
0x59EC4B: mov     ecx, edi; this
0x59EC4D: call    MenuTopic__NextResponse
0x59EC52: mov     ecx, edi; this
0x59EC54: call    MenuTopic__GetCurrentResponse
0x59EC59: test    eax, eax
0x59EC5B: jnz     short loc_59EC40
0x59EC5D: xor     ecx, ecx
0x59EC5F: cmp     ds:0B13200h, cl
0x59EC65: setnz   cl
0x59EC68: add     ecx, 1
0x59EC6B: mov     [esp+14h+var_4], ecx
0x59EC6F: fild    [esp+14h+var_4]
0x59EC73: push    ecx
0x59EC74: mov     ecx, [esi+2Ch]; this
0x59EC77: fstp    [esp+18h+a2]; value
0x59EC7A: push    0FA1h; propertyCode
0x59EC7F: call    Tile_SetFloat; Set or create a numeric Tile property. A missing property is handled, but a null Tile is dereferenced by Tile_GetPropertyByCode_.
0x59EC84: mov     edx, [ebp+0]
0x59EC87: mov     ecx, [esi+2Ch]
0x59EC8A: push    edx
0x59EC8B: push    0FDEh
0x59EC90: call    Tile_SetString
0x59EC95: mov     ecx, edi; this
0x59EC97: call    MenuTopic__NextResponse; After starting/displaying the current DialogueResponse, advance the MenuTopic cursor immediately. The next DoIdle completion callback therefore selects the following response; a null cursor means the just-finished response was final.
0x59EC9C: fld1
0x59EC9E: push    ecx
0x59EC9F: fstp    [esp+18h+a2]; value
0x59ECA2: mov     ecx, [esi+3Ch]; this
0x59ECA5: push    0FA1h; propertyCode
0x59ECAA: call    Tile_SetFloat; Set or create a numeric Tile property. A missing property is handled, but a null Tile is dereferenced by Tile_GetPropertyByCode_.
0x59ECAF: pop     edi
0x59ECB0: pop     esi
0x59ECB1: pop     ebp
0x59ECB2: pop     ebx
0x59ECB3: pop     ecx
0x59ECB4: retn
0x59ECB5: fld     dword ptr ds:0A379B4h
0x59ECBB: push    ecx
0x59ECBC: mov     ecx, [esi+3Ch]; this
0x59ECBF: fstp    [esp+18h+a2]; value
0x59ECC2: push    0FA1h; propertyCode
0x59ECC7: call    Tile_SetFloat; Set or create a numeric Tile property. A missing property is handled, but a null Tile is dereferenced by Tile_GetPropertyByCode_.
0x59ECCC: test    edi, edi
0x59ECCE: jz      short loc_59ECDA
0x59ECD0: cmp     byte ptr [edi+8], 0
0x59ECD4: jz      short loc_59ECDA
0x59ECD6: mov     al, 1
0x59ECD8: jmp     short loc_59ECDC
0x59ECDA: xor     al, al
0x59ECDC: test    al, al
0x59ECDE: setz    al
0x59ECE1: mov     ecx, esi; this
0x59ECE3: push    eax; enableActions
0x59ECE4: call    DialogMenu__RefreshActionAvailability; Refreshes DialogMenu topic/persuasion/service tile availability from the current speaker and package/service flags. Called when entering or leaving response display; it does not run TESTopicInfo results.
0x59ECE9: call    MenuTopicManager__GetSingleton
0x59ECEE: cmp     byte ptr [esi+96h], 0
0x59ECF5: mov     edi, eax
0x59ECF7: jz      short loc_59ED08
0x59ECF9: push    1; enableActions
0x59ECFB: mov     ecx, esi; this
0x59ECFD: mov     dword ptr [edi], 0
0x59ED03: call    DialogMenu__RefreshActionAvailability; Refreshes DialogMenu topic/persuasion/service tile availability from the current speaker and package/service flags. Called when entering or leaving response display; it does not run TESTopicInfo results.
0x59ED08: push    0; clearAll
0x59ED0A: push    1; processCurrentInfo
0x59ED0C: mov     ecx, edi; this
0x59ED0E: call    MenuTopicManager__LoadNextTopicList; Player-menu post-response transition. AddTopicList is unconditional for a processed INFO. Only INFOGENERAL/D7 without RunForRumors skips Goodbye handling and RunResult; INFOGENERAL always rebuilds from player known topics instead of following INFO links. The 0x40 flag has no effect on ordinary topics.
0x59ED13: pop     edi
0x59ED14: mov     [esi+88h], al; Overwrite closePending with LoadNextTopicList's result after response exhaustion. INFOGENERAL without RunForRumors returns false even when Goodbye is set, so the menu stays open while the parked Goodbye INFO survives for a later manual/other close.
0x59ED1A: mov     byte ptr [esi+96h], 0
0x59ED21: mov     ecx, esi; this
0x59ED23: pop     esi
0x59ED24: pop     ebp
0x59ED25: pop     ebx
0x59ED26: add     esp, 4
0x59ED29: jmp     DialogMenu__LoadTopicsList; Verified: tail JMP to bool DialogMenu::LoadTopicsList, not CALL. Replacement wrapper must preserve caller return stack and AL semantics, including the close path.
