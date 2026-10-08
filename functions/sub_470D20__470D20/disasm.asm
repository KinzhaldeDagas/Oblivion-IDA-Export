0x470D20: push    ecx; Native encoded animation-key resolver. A candidate is valid only when its map entry's selector virtual returns a sequence. Order: exact key; weapon-prefix compatibility; fast-move group to normal-move group; on the outer pass only, strip movement prefix; finally replace nonzero group with Idle (0). Returns 0 on failure.
0x470D21: push    ebx
0x470D22: push    esi
0x470D23: mov     esi, ecx
0x470D25: jmp     short loc_470D30
0x470D30: mov     ebx, dword ptr [esp+0Ch+requestedKey]
0x470D34: mov     ecx, [esi+9Ch]
0x470D3A: lea     eax, [esp+0Ch+var_4]
0x470D3E: push    eax
0x470D3F: push    ebx
0x470D40: call    ActorAnimData_FindAnimMapEntry; CustomAnimSupport decode: anim-map lookup helper used by playback, validators, and save/load restore to test an encoded group key.
0x470D45: test    al, al
0x470D47: jz      short loc_470D5E
0x470D49: mov     ecx, [esp+0Ch+var_4]
0x470D4D: mov     edx, [ecx]
0x470D4F: mov     eax, [edx+10h]
0x470D52: push    0FFFFFFFFh
0x470D54: call    eax; Exact candidate validation is stronger than map presence: invoke AnimSequenceSingle/Multiple vtable +0x10 with selector -1 and accept only a non-null sequence.
0x470D56: test    eax, eax
0x470D58: jnz     loc_470EDF
0x470D5E: test    ebx, 0F00h
0x470D64: jz      loc_470E34
0x470D6A: push    ebx
0x470D6B: call    AnimKey_GetWeaponPrefix; Final name: AnimKey_GetWeaponPrefix. Returns (encoded key >> 8) & 0xF.
0x470D70: add     esp, 4
0x470D73: sub     eax, 3
0x470D76: jz      short loc_470DCA
0x470D78: sub     eax, 1
0x470D7B: jz      short loc_470D84
0x470D7D: sub     eax, 1
0x470D80: jz      short loc_470DCA
0x470D82: jmp     short loc_470E02
0x470D84: mov     ecx, ebx; Weapon prefix 4 (Staff): unless movement prefix is Swimming (2), try TwoHand (3) before the shared OneHand/unprefixed fallbacks.
0x470D86: and     ecx, 0F000h
0x470D8C: cmp     ecx, 2000h
0x470D92: jz      short loc_470DCA
0x470D94: mov     ecx, [esi+9Ch]
0x470D9A: mov     eax, ebx
0x470D9C: lea     edx, [esp+0Ch+var_4]
0x470DA0: and     eax, 0F3FFh
0x470DA5: push    edx
0x470DA6: or      eax, 300h
0x470DAB: push    eax
0x470DAC: call    ActorAnimData_FindAnimMapEntry; CustomAnimSupport decode: anim-map lookup helper used by playback, validators, and save/load restore to test an encoded group key.
0x470DB1: test    al, al
0x470DB3: jz      short loc_470DCA
0x470DB5: mov     ecx, [esp+0Ch+var_4]
0x470DB9: mov     edx, [ecx]
0x470DBB: mov     eax, [edx+10h]
0x470DBE: push    0FFFFFFFFh
0x470DC0: call    eax
0x470DC2: test    eax, eax
0x470DC4: jnz     loc_470EE8
0x470DCA: mov     edx, ebx; Weapon prefixes TwoHand (3), Staff (4), and Bow (5) try OneHand (2). Other nonzero weapon prefixes skip directly to unprefixed.
0x470DCC: lea     ecx, [esp+0Ch+var_4]
0x470DD0: and     edx, 0F2FFh
0x470DD6: push    ecx
0x470DD7: mov     ecx, [esi+9Ch]
0x470DDD: or      edx, 200h
0x470DE3: push    edx
0x470DE4: call    ActorAnimData_FindAnimMapEntry; CustomAnimSupport decode: anim-map lookup helper used by playback, validators, and save/load restore to test an encoded group key.
0x470DE9: test    al, al
0x470DEB: jz      short loc_470E02
0x470DED: mov     ecx, [esp+0Ch+var_4]
0x470DF1: mov     eax, [ecx]
0x470DF3: mov     edx, [eax+10h]
0x470DF6: push    0FFFFFFFFh
0x470DF8: call    edx
0x470DFA: test    eax, eax
0x470DFC: jnz     loc_470EFA
0x470E02: lea     eax, [esp+0Ch+var_4]; Final same-movement/group weapon fallback clears bits 8..11 to the unprefixed key.
0x470E06: mov     ecx, ebx
0x470E08: and     ecx, 0F0FFh
0x470E0E: push    eax
0x470E0F: push    ecx
0x470E10: mov     ecx, [esi+9Ch]
0x470E16: call    ActorAnimData_FindAnimMapEntry; CustomAnimSupport decode: anim-map lookup helper used by playback, validators, and save/load restore to test an encoded group key.
0x470E1B: test    al, al
0x470E1D: jz      short loc_470E34
0x470E1F: mov     ecx, [esp+0Ch+var_4]
0x470E23: mov     edx, [ecx]
0x470E25: mov     eax, [edx+10h]
0x470E28: push    0FFFFFFFFh
0x470E2A: call    eax
0x470E2C: test    eax, eax
0x470E2E: jnz     loc_470F0C
0x470E34: test    bx, bx
0x470E37: jz      short def_470E4A; jumptable 00470E4A default case
0x470E39: push    ebx
0x470E3A: call    AnimKey_GetGroupID; Final name: AnimKey_GetGroupID. Returns low native group byte from encoded key.
0x470E3F: add     eax, 0FFFFFFF9h; switch 4 cases
0x470E42: add     esp, 4
0x470E45: cmp     eax, 3
0x470E48: ja      short def_470E4A; jumptable 00470E4A default case
0x470E4A: jmp     ds:jpt_470E4A[eax*4]; switch jump
0x470E51: and     ebx, 0FF03h; FastForward (7) recursively resolves Forward (3), preserving movement and weapon prefix bits.
0x470E57: or      ebx, 3
0x470E5A: jmp     short loc_470E7B
0x470E5C: and     ebx, 0FF04h; FastBackward (8) recursively resolves Backward (4), preserving movement and weapon prefix bits.
0x470E62: or      ebx, 4
0x470E65: jmp     short loc_470E7B
0x470E67: and     ebx, 0FF05h; FastLeft (9) recursively resolves Left (5), preserving movement and weapon prefix bits.
0x470E6D: or      ebx, 5
0x470E70: jmp     short loc_470E7B
0x470E72: and     ebx, 0FF06h; FastRight (10) recursively resolves Right (6), preserving movement and weapon prefix bits.
0x470E78: or      ebx, 6
0x470E7B: cmp     bx, 0FFh
0x470E80: jz      short loc_470E99
0x470E82: push    1; fallbackPass
0x470E84: push    ebx; requestedKey
0x470E85: mov     ecx, esi; this
0x470E87: call    ActorAnimData_ResolveAnimKeyFallback; Native encoded animation-key resolver. A candidate is valid only when its map entry's selector virtual returns a sequence. Order: exact key; weapon-prefix compatibility; fast-move group to normal-move group; on the outer pass only, strip movement prefix; finally replace nonzero group with Idle (0). Returns 0 on failure.
0x470E8C: movzx   eax, ax
0x470E8F: mov     cl, al
0x470E91: xor     cl, bl
0x470E93: jz      loc_470F1C
0x470E99: mov     ebx, dword ptr [esp+0Ch+requestedKey]
0x470E9D: cmp     [esp+0Ch+fallbackPass], 0; jumptable 00470E4A default case
0x470EA2: jnz     short loc_470F19; fallbackPass is a recursion guard: nested fast/movement fallback may use exact/weapon/fast resolution but cannot continue into another movement-strip or group-to-Idle pass.
0x470EA4: test    ebx, 0F000h
0x470EAA: jz      short loc_470EC7
0x470EAC: mov     edx, ebx; Outer pass only: clear movement-prefix bits 12..15 and recursively resolve the same weapon/group with fallbackPass=1.
0x470EAE: push    1; fallbackPass
0x470EB0: and     edx, 0FFFh
0x470EB6: push    edx; requestedKey
0x470EB7: mov     ecx, esi; this
0x470EB9: call    ActorAnimData_ResolveAnimKeyFallback; Native encoded animation-key resolver. A candidate is valid only when its map entry's selector virtual returns a sequence. Order: exact key; weapon-prefix compatibility; fast-move group to normal-move group; on the outer pass only, strip movement prefix; finally replace nonzero group with Idle (0). Returns 0 on failure.
0x470EBE: movzx   eax, ax
0x470EC1: mov     cl, al
0x470EC3: xor     cl, bl
0x470EC5: jz      short loc_470F1C
0x470EC7: test    bl, bl
0x470EC9: jz      short loc_470F19
0x470ECB: and     ebx, 0FF00h; Last outer fallback: if group is nonzero, replace only the low group byte with Idle (0), preserve movement/weapon prefixes, and restart the resolver.
0x470ED1: mov     [esp+0Ch+fallbackPass], 0
0x470ED6: mov     dword ptr [esp+0Ch+requestedKey], ebx
0x470EDA: jmp     loc_470D30
0x470EDF: pop     esi
0x470EE0: mov     ax, bx
0x470EE3: pop     ebx
0x470EE4: pop     ecx
0x470EE5: retn    8
0x470EE8: mov     eax, ebx
0x470EEA: and     eax, 0F0FFh
0x470EEF: pop     esi
0x470EF0: or      eax, 300h
0x470EF5: pop     ebx
0x470EF6: pop     ecx
0x470EF7: retn    8
0x470EFA: mov     eax, ebx
0x470EFC: and     eax, 0F0FFh
0x470F01: pop     esi
0x470F02: or      eax, 200h
0x470F07: pop     ebx
0x470F08: pop     ecx
0x470F09: retn    8
0x470F0C: mov     eax, ebx
0x470F0E: pop     esi
0x470F0F: and     eax, 0F0FFh
0x470F14: pop     ebx
0x470F15: pop     ecx
0x470F16: retn    8
0x470F19: xor     ax, ax
0x470F1C: pop     esi
0x470F1D: pop     ebx
0x470F1E: pop     ecx
0x470F1F: retn    8
