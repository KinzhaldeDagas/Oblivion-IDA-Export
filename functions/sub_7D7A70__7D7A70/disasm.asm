0x7D7A70: push    ebx; Verified (Oblivion): replaces the TextureEffectData pointer at +0xE0 on the supplied NiProperty-derived shader property, with Interlocked release/addref handling, then clears a 32-bit state at +0x24. BSShaderPPLightingProperty constructor/destructor and viewer export independently confirm +0xE0 is its spTexEffectData ownership slot. Direct callers select property ID 4 subtypes 5..10: PP-lighting/SpeedTree PP (5), Hair (6), SpeedTree Branch (7), SpeedTree Leaf (9), and Lighting30 (10); subtype 8 remains Unknown.
0x7D7A71: mov     ebx, [esp+4+data]
0x7D7A75: push    esi
0x7D7A76: push    edi
0x7D7A77: mov     edi, ecx
0x7D7A79: mov     esi, [edi+0E0h]
0x7D7A7F: cmp     esi, ebx
0x7D7A81: jz      short loc_7D7AB7
0x7D7A83: test    esi, esi
0x7D7A85: jz      short loc_7D7AA3
0x7D7A87: lea     eax, [esi+4]
0x7D7A8A: push    eax; lpAddend
0x7D7A8B: call    dword ptr ds:0A2807Ch
0x7D7A91: test    eax, eax
0x7D7A93: jnz     short loc_7D7AA3
0x7D7A95: test    esi, esi
0x7D7A97: jz      short loc_7D7AA3
0x7D7A99: mov     edx, [esi]
0x7D7A9B: mov     eax, [edx]
0x7D7A9D: push    1
0x7D7A9F: mov     ecx, esi
0x7D7AA1: call    eax
0x7D7AA3: test    ebx, ebx
0x7D7AA5: mov     [edi+0E0h], ebx
0x7D7AAB: jz      short loc_7D7AB7
0x7D7AAD: add     ebx, 4
0x7D7AB0: push    ebx; lpAddend
0x7D7AB1: call    dword ptr ds:0A28078h
0x7D7AB7: mov     dword ptr [edi+24h], 0
0x7D7ABE: pop     edi
0x7D7ABF: pop     esi
0x7D7AC0: pop     ebx
0x7D7AC1: retn    4
