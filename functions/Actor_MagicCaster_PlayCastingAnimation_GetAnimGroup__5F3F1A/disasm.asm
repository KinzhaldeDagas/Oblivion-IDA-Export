0x5F3F1A: cmp     [esp+arg_10], 0
0x5F3F1F: jz      Actor_MagicCaster_PlayCastingAnimation___Done
0x5F3F25: mov     edx, [edi]
0x5F3F27: mov     eax, [edx+30h]
0x5F3F2A: mov     ecx, edi
0x5F3F2C: call    eax
0x5F3F2E: test    eax, eax
0x5F3F30: jz      Actor_MagicCaster_PlayCastingAnimation___Done
0x5F3F36: mov     edx, [edi]
0x5F3F38: mov     eax, [edx+30h]
0x5F3F3B: mov     ecx, edi
0x5F3F3D: call    eax
0x5F3F3F: mov     ecx, eax
0x5F3F41: add     ecx, 0Ch
0x5F3F44: call    EffectItemList_HasOnTarget
0x5F3F49: test    al, al
0x5F3F4B: jz      short loc_5F3F54
0x5F3F4D: mov     ebx, 24h ; '$'
0x5F3F52: jmp     short loc_5F3F72
0x5F3F54: mov     edx, [edi]
0x5F3F56: mov     eax, [edx+30h]
0x5F3F59: mov     ecx, edi
0x5F3F5B: call    eax
0x5F3F5D: mov     ecx, eax
0x5F3F5F: add     ecx, 0Ch
0x5F3F62: call    EffectItemList_HasTouchEffect
0x5F3F67: neg     al
0x5F3F69: sbb     eax, eax
0x5F3F6B: neg     eax
0x5F3F6D: add     eax, 22h ; '"'
0x5F3F70: mov     ebx, eax
0x5F3F72: mov     ecx, [edi-4]
0x5F3F75: mov     edx, [ecx]
0x5F3F77: mov     eax, [edx+0F8h]
0x5F3F7D: push    1
0x5F3F7F: call    eax
0x5F3F81: test    eax, eax
0x5F3F83: jnz     short loc_5F3FB4
0x5F3F85: mov     ecx, [edi-4]
0x5F3F88: mov     edx, [ecx]
0x5F3F8A: mov     eax, [edx+0F0h]
0x5F3F90: push    1
0x5F3F92: call    eax
0x5F3F94: test    eax, eax
0x5F3F96: jnz     short loc_5F3FB4
0x5F3F98: mov     ecx, [edi-4]
0x5F3F9B: mov     edx, [ecx]
0x5F3F9D: mov     eax, [edx+138h]
0x5F3FA3: call    eax
0x5F3FA5: test    al, al
0x5F3FA7: jz      short Actor_MagicCaster_PlayCastingAnimation___LoadCastingAnim
0x5F3FA9: mov     ecx, esi
0x5F3FAB: call    Actor_IsWeaponOut
0x5F3FB0: test    al, al
0x5F3FB2: jz      short Actor_MagicCaster_PlayCastingAnimation___LoadCastingAnim
0x5F3FB4: add     ebx, 3
