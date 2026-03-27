0x626E60: push    esi
0x626E61: lea     esi, [ecx+54h]
0x626E64: mov     eax, esi
0x626E66: xor     edx, edx
0x626E68: test    eax, eax
0x626E6A: jz      short loc_626E9C
0x626E6C: lea     esp, [esp+0]
0x626E70: cmp     dword ptr [eax], 0
0x626E73: jz      short loc_626E78
0x626E75: add     edx, 1
0x626E78: mov     eax, [eax+4]
0x626E7B: test    eax, eax
0x626E7D: jnz     short loc_626E70
0x626E7F: cmp     edx, 1
0x626E82: jnz     short loc_626E9C
0x626E84: mov     ecx, ds:0B333C4h
0x626E8A: cmp     [esi], ecx
0x626E8C: jnz     short loc_626E9C
0x626E8E: push    eax
0x626E8F: call    PlayerCharacter_IsPlayerInCombat
0x626E94: test    al, al
0x626E96: jnz     short loc_626E9C
0x626E98: mov     al, 1
0x626E9A: pop     esi
0x626E9B: retn
0x626E9C: xor     al, al
0x626E9E: pop     esi
0x626E9F: retn
