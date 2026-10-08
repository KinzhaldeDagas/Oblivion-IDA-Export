0x578D50: mov     ecx, ds:0B333C4h
0x578D56: test    ecx, ecx
0x578D58: jz      short locret_578D6D
0x578D5A: mov     eax, [ecx]
0x578D5C: mov     edx, [eax+154h]
0x578D62: call    edx
0x578D64: test    eax, eax
0x578D66: jz      short locret_578D6D
0x578D68: jmp     loc_5A8C90
0x578D6D: retn
0x5A8C90: cmp     byte ptr ds:0B13238h, 0
0x5A8C97: push    esi
0x5A8C98: jnz     loc_5A8DA4
0x5A8C9E: mov     esi, [esp+4+arg_0]
0x5A8CA2: test    esi, esi
0x5A8CA4: jz      loc_5A8DA4
0x5A8CAA: push    ebx
0x5A8CAB: push    edi
0x5A8CAC: mov     ecx, esi
0x5A8CAE: call    sub_4DE980
0x5A8CB3: mov     ebx, eax
0x5A8CB5: mov     eax, [esi]
0x5A8CB7: mov     edx, [eax+170h]
0x5A8CBD: mov     ecx, esi
0x5A8CBF: call    edx
0x5A8CC1: xor     ecx, ecx
0x5A8CC3: cmp     byte ptr [eax+4], 23h ; '#'
0x5A8CC7: setnz   cl
0x5A8CCA: sub     ecx, 1
0x5A8CCD: and     ecx, esi
0x5A8CCF: cmp     ebx, 7
0x5A8CD2: mov     edi, ecx
0x5A8CD4: jz      short loc_5A8CDB
0x5A8CD6: cmp     ebx, 0Ah
0x5A8CD9: jnz     short loc_5A8D08
0x5A8CDB: mov     ecx, ds:0B333C4h
0x5A8CE1: call    Actor_IsInDialogueProcedure; 3DTheft 2026-05-17: returns true when the actor's current package type is 0x12 (Dialogue). AddScriptPackage uses this as a pre-handoff gate.
0x5A8CE6: test    al, al
0x5A8CE8: jnz     loc_5A8D94
0x5A8CEE: test    edi, edi
0x5A8CF0: jz      short loc_5A8D08
0x5A8CF2: mov     edx, [edi]
0x5A8CF4: mov     eax, [edx+334h]
0x5A8CFA: push    1
0x5A8CFC: mov     ecx, edi
0x5A8CFE: call    eax
0x5A8D00: test    al, al
0x5A8D02: jnz     loc_5A8D94
0x5A8D08: cmp     ebx, 1
0x5A8D0B: jnz     short loc_5A8D35
0x5A8D0D: test    edi, edi
0x5A8D0F: jz      short loc_5A8D35
0x5A8D11: mov     edx, [edi]
0x5A8D13: mov     eax, [edx+334h]
0x5A8D19: push    ebx; a3
0x5A8D1A: mov     ecx, edi
0x5A8D1C: call    eax
0x5A8D1E: test    al, al
0x5A8D20: jnz     short loc_5A8D94
0x5A8D22: mov     edi, [edi+58h]
0x5A8D25: mov     edx, [edi]
0x5A8D27: mov     eax, [edx+0ACh]
0x5A8D2D: mov     ecx, edi
0x5A8D2F: call    eax
0x5A8D31: test    al, al
0x5A8D33: jnz     short loc_5A8D94
0x5A8D35: push    ebx
0x5A8D36: call    sub_5A8BC0
0x5A8D3B: add     esp, 4
0x5A8D3E: cmp     dword ptr ds:0B3B350h, 0
0x5A8D45: jz      short loc_5A8D90
0x5A8D47: cmp     ebx, 7
0x5A8D4A: jz      short loc_5A8D90
0x5A8D4C: test    ebx, ebx
0x5A8D4E: jz      short loc_5A8D90
0x5A8D50: mov     ecx, esi
0x5A8D52: call    IsOffLimitToThePlayer; Verified IsOffLimitToThePlayer flow: door access first checks actor/owner policy and the effective lock. For linked interior cells it also checks TESObjectCELL_HasPublicOrTempPublicState (flags0 bits 0x20|0x40). Oblivion's bit 0x40 is toggled by linked-door lock/unlock operations and cleared during ordinary cell load; Probable meaning is TempPublic, corroborated by Fallout's SetTempPublic.
0x5A8D57: test    al, al
0x5A8D59: jz      short loc_5A8D90
0x5A8D5B: push    0; int
0x5A8D5D: push    offset ??_R0?AVArrowProjectile@@@8; struct TypeDescriptor *
0x5A8D62: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x5A8D67: push    0; int
0x5A8D69: push    esi; void *
0x5A8D6A: call    OblivionDynamicCast
0x5A8D6F: add     esp, 14h
0x5A8D72: test    eax, eax
0x5A8D74: jnz     short loc_5A8D90
0x5A8D76: fld     dword ptr ds:0A379B4h
0x5A8D7C: push    ecx
0x5A8D7D: mov     ecx, ds:0B3B350h; this
0x5A8D83: fstp    [esp+10h+a3]; value
0x5A8D86: push    0FAFh; propertyCode
0x5A8D8B: call    Tile_SetFloat; Set or create a numeric Tile property. A missing property is handled, but a null Tile is dereferenced by Tile_GetPropertyByCode_.
0x5A8D90: pop     edi
0x5A8D91: pop     ebx
0x5A8D92: pop     esi
0x5A8D93: retn
0x5A8D94: pop     edi
0x5A8D95: pop     ebx
0x5A8D96: pop     esi
0x5A8D97: mov     [esp+arg_0], 0
0x5A8D9F: jmp     sub_5A8BC0
0x5A8DA4: pop     esi
0x5A8DA5: mov     [esp+arg_0], 0
0x5A8DAD: jmp     sub_5A8BC0
