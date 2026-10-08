0x58D1C0: push    ecx
0x58D1C1: push    esi
0x58D1C2: mov     esi, ecx
0x58D1C4: push    edi
0x58D1C5: mov     edi, [esi+10h]
0x58D1C8: test    edi, edi
0x58D1CA: jz      short loc_58D21B
0x58D1CC: cmp     byte ptr [edi+4], 0
0x58D1D0: jnz     short loc_58D21B
0x58D1D2: push    0FD0h
0x58D1D7: mov     ecx, edi
0x58D1D9: call    Tile_GetFloat
0x58D1DE: fsub    qword ptr ds:0A2F928h
0x58D1E4: push    0FD0h; trait
0x58D1E9: mov     ecx, edi; this
0x58D1EB: fstp    [esp+10h+data]
0x58D1EF: call    Tile__GetOrCreateValue; Verified: sorted trait lookup; if absent allocates 0x1C bytes, constructs Value at 0x589DF0, stores owner Tile at +0 and inserts into Tile value list. Corrects misleading existing-property-only interpretation.
0x58D1F4: test    eax, eax
0x58D1F6: jz      short loc_58D207
0x58D1F8: fld     [esp+0Ch+data]
0x58D1FC: push    ecx
0x58D1FD: mov     ecx, eax; this
0x58D1FF: fstp    [esp+10h+value]; value
0x58D202: call    Tile__Value__SetFloat; Verified: marks numeric; if changed or string trait 0xFDE, clears string, stores number, clears own expression actions via 0x588930, then CalculateValue(this,true). Same-value ordinary traits bypass clear/evaluation. Unlike Fallout SetFloat, no abClearActions parameter.
0x58D207: mov     ecx, [esi+10h]
0x58D20A: lea     eax, [esp+0Ch+data]
0x58D20E: push    eax; data
0x58D20F: add     ecx, 30h ; '0'; list
0x58D212: mov     [esp+10h+data], esi
0x58D216: call    NiTPointerList_RemoveByData; [Verified] Generic NiTPointerList remove-by-data helper. Scans node payloads for the supplied pointer, then delegates removal of the matching node to NiTPointerList_RemoveNode. The decal-list path calls it with the DECAL_DATA* payload address.
0x58D21B: mov     edi, [esp+0Ch+parent]
0x58D21F: test    edi, edi
0x58D221: mov     [esi+10h], edi
0x58D224: jz      loc_58D2DC
0x58D22A: push    0FD0h
0x58D22F: mov     ecx, edi
0x58D231: call    Tile_GetFloat
0x58D236: fadd    qword ptr ds:0A2F928h
0x58D23C: push    0FD0h; trait
0x58D241: mov     ecx, edi; this
0x58D243: fstp    [esp+10h+parent]
0x58D247: call    Tile__GetOrCreateValue; Verified: sorted trait lookup; if absent allocates 0x1C bytes, constructs Value at 0x589DF0, stores owner Tile at +0 and inserts into Tile value list. Corrects misleading existing-property-only interpretation.
0x58D24C: test    eax, eax
0x58D24E: jz      short loc_58D25F
0x58D250: fld     [esp+0Ch+parent]
0x58D254: push    ecx
0x58D255: mov     ecx, eax; this
0x58D257: fstp    [esp+10h+value]; value
0x58D25A: call    Tile__Value__SetFloat; Verified: marks numeric; if changed or string trait 0xFDE, clears string, stores number, clears own expression actions via 0x588930, then CalculateValue(this,true). Same-value ordinary traits bypass clear/evaluation. Unlike Fallout SetFloat, no abClearActions parameter.
0x58D25F: push    ebx
0x58D260: mov     ebx, [esp+10h+sibling]
0x58D264: test    ebx, ebx
0x58D266: jz      short loc_58D2C7
0x58D268: mov     edx, [esi+10h]
0x58D26B: mov     eax, [edx+34h]
0x58D26E: test    eax, eax
0x58D270: jz      short loc_58D282
0x58D272: cmp     [eax+8], ebx
0x58D275: lea     ecx, [eax+8]
0x58D278: mov     edi, eax
0x58D27A: mov     eax, [eax]
0x58D27C: jz      short loc_58D29A
0x58D27E: test    eax, eax
0x58D280: jnz     short loc_58D272
0x58D282: lea     eax, [esp+10h+parent]
0x58D286: push    eax
0x58D287: lea     ecx, [edx+30h]
0x58D28A: mov     [esp+14h+parent], esi
0x58D28E: call    NiTList_AddHead; NiTList AddHead helper. Allocates a node, stores payload at +0x08, installs it as the list head, repairs the previous head/backlink or empty-list tail, and increments count. Repeated per-light calls reverse the source iterator order.
0x58D293: pop     ebx
0x58D294: pop     edi
0x58D295: pop     esi
0x58D296: pop     ecx
0x58D297: retn    8
0x58D29A: lea     ecx, [esp+10h+parent]
0x58D29E: push    ecx; data
0x58D29F: lea     ecx, [edx+30h]; list
0x58D2A2: mov     [esp+14h+parent], esi
0x58D2A6: call    NiTPointerList_RemoveByData; [Verified] Generic NiTPointerList remove-by-data helper. Scans node payloads for the supplied pointer, then delegates removal of the matching node to NiTPointerList_RemoveNode. The decal-list path calls it with the DECAL_DATA* payload address.
0x58D2AB: mov     ecx, [esi+10h]
0x58D2AE: lea     edx, [esp+10h+parent]
0x58D2B2: push    edx
0x58D2B3: push    edi
0x58D2B4: add     ecx, 30h ; '0'
0x58D2B7: mov     [esp+18h+parent], esi
0x58D2BB: call    sub_5986D0
0x58D2C0: pop     ebx
0x58D2C1: pop     edi
0x58D2C2: pop     esi
0x58D2C3: pop     ecx
0x58D2C4: retn    8
0x58D2C7: lea     ecx, [esp+10h+parent]
0x58D2CB: push    ecx
0x58D2CC: mov     ecx, [esi+10h]
0x58D2CF: add     ecx, 30h ; '0'
0x58D2D2: mov     [esp+14h+parent], esi
0x58D2D6: call    NiTList_AddHead; Verified: null insertion-sibling path adds new child to head of parent child list. XML expression sibling order must be interpreted using engine list semantics, not assumed file/array order.
0x58D2DB: pop     ebx
0x58D2DC: pop     edi
0x58D2DD: pop     esi
0x58D2DE: pop     ecx
0x58D2DF: retn    8
