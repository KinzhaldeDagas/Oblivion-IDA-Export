0x7ED5D0: mov     ecx, [ecx+70h]; OBLIVION AUTHORITY (2026-08-24): Generic pass-list marker counter used by the SpeedTree leaf program selector. Walks property+0x70 entries and counts nonnull shader objects whose word at +0x118 is not 0x00FF. It does not test ShadowSceneLight disabled byte +0xF4. Result selects point-light shader program bit; it is not a leaf layer/card/LOD index.
0x7ED5D3: xor     eax, eax
0x7ED5D5: test    ecx, ecx
0x7ED5D7: jz      short locret_7ED5FD
0x7ED5D9: lea     esp, [esp+0]
0x7ED5E0: lea     edx, [ecx+8]
0x7ED5E3: mov     edx, [edx]
0x7ED5E5: test    edx, edx
0x7ED5E7: mov     ecx, [ecx]
0x7ED5E9: jz      short loc_7ED5F9
0x7ED5EB: cmp     word ptr [edx+118h], 0FFh
0x7ED5F4: jz      short loc_7ED5F9
0x7ED5F6: add     eax, 1
0x7ED5F9: test    ecx, ecx
0x7ED5FB: jnz     short loc_7ED5E0
0x7ED5FD: retn
