0x76B090: sub     esp, 38h; Oblivion-authoritative resize/recreate wrapper. Saves the current 0x38-byte presentation block, substitutes requested width/height, and runs full device recreation. Returns 2 for requested parameters, 1 after successfully restoring originals, or 0 if both attempts fail.
0x76B093: push    esi
0x76B094: push    edi
0x76B095: mov     edi, ecx
0x76B097: mov     ecx, [edi+878h]
0x76B09D: mov     eax, [ecx]
0x76B09F: mov     edx, [eax+70h]
0x76B0A2: push    0
0x76B0A4: call    edx
0x76B0A6: mov     esi, [eax+10h]
0x76B0A9: test    esi, esi
0x76B0AB: jnz     short loc_76B0B1
0x76B0AD: xor     eax, eax
0x76B0AF: jmp     short loc_76B0D6
0x76B0B1: mov     eax, [esi]
0x76B0B3: mov     edx, [eax+10h]
0x76B0B6: mov     ecx, esi
0x76B0B8: call    edx
0x76B0BA: test    eax, eax
0x76B0BC: jz      short loc_76B0CE
0x76B0BE: mov     edi, edi
0x76B0C0: cmp     eax, offset stru_B4265C
0x76B0C5: jz      short loc_76B13D
0x76B0C7: mov     eax, [eax+4]
0x76B0CA: test    eax, eax
0x76B0CC: jnz     short loc_76B0C0
0x76B0CE: xor     al, al
0x76B0D0: neg     al
0x76B0D2: sbb     eax, eax
0x76B0D4: and     eax, esi
0x76B0D6: lea     esi, [eax+14h]
0x76B0D9: push    38h ; '8'; byteCount
0x76B0DB: lea     eax, [esp+44h+Dst]
0x76B0DF: push    esi; source
0x76B0E0: push    eax; destination
0x76B0E1: call    _memcpy;
0x76B0E6: mov     ecx, [esp+4Ch+width]
0x76B0EA: mov     edx, [esp+4Ch+height]
0x76B0EE: mov     [esi], ecx
0x76B0F0: add     esp, 0Ch
0x76B0F3: mov     ecx, edi; this
0x76B0F5: mov     [esi+4], edx
0x76B0F8: call    NiDX9Renderer_RecreateDevice; Oblivion-authoritative NiDX9 device reset transaction: releases light/index/vertex buffers and RT slots 1-3; invalidates screen RT groups, rendered textures/cubemaps/dynamic textures, shaders and geometry; runs pre-reset callbacks; Reset()s using the default RT group's saved D3DPRESENT_PARAMETERS; increments ResetCounter; rebuilds targets/textures/defaults/shaders/render state; then runs post-reset callbacks. Any failed phase returns false.
0x76B0FD: test    al, al
0x76B0FF: jnz     short loc_76B14E
0x76B101: push    offset aNidx9rendere_2; "NiDX9Renderer::Recreate> Could not rese"...
0x76B106: call    Shared_NoOpVirtual_60D0A0; Shared one-instruction virtual no-op. Oblivion's base Actor vtable uses this at post-shot slot +0x2E8, so ordinary Actor dispatch performs no ammo-decrement transaction; PlayerCharacter overrides that slot at 0x662590. Other classes may share the same RET stub.
0x76B10B: push    38h ; '8'; byteCount
0x76B10D: lea     eax, [esp+48h+Dst]
0x76B111: push    eax; source
0x76B112: push    esi; destination
0x76B113: call    _memcpy;
0x76B118: add     esp, 10h
0x76B11B: mov     ecx, edi; this
0x76B11D: call    NiDX9Renderer_RecreateDevice; Oblivion-authoritative NiDX9 device reset transaction: releases light/index/vertex buffers and RT slots 1-3; invalidates screen RT groups, rendered textures/cubemaps/dynamic textures, shaders and geometry; runs pre-reset callbacks; Reset()s using the default RT group's saved D3DPRESENT_PARAMETERS; increments ResetCounter; rebuilds targets/textures/defaults/shaders/render state; then runs post-reset callbacks. Any failed phase returns false.
0x76B122: test    al, al
0x76B124: jnz     short loc_76B141
0x76B126: push    offset aNidx9rendere_3; "NiDX9Renderer::Recreate> Could not reco"...
0x76B12B: call    Shared_NoOpVirtual_60D0A0; Shared one-instruction virtual no-op. Oblivion's base Actor vtable uses this at post-shot slot +0x2E8, so ordinary Actor dispatch performs no ammo-decrement transaction; PlayerCharacter overrides that slot at 0x662590. Other classes may share the same RET stub.
0x76B130: add     esp, 4
0x76B133: pop     edi
0x76B134: xor     eax, eax
0x76B136: pop     esi
0x76B137: add     esp, 38h
0x76B13A: retn    8
0x76B13D: mov     al, 1
0x76B13F: jmp     short loc_76B0D0
0x76B141: pop     edi
0x76B142: mov     eax, 1
0x76B147: pop     esi
0x76B148: add     esp, 38h
0x76B14B: retn    8
0x76B14E: pop     edi
0x76B14F: mov     eax, 2
0x76B154: pop     esi
0x76B155: add     esp, 38h
0x76B158: retn    8
