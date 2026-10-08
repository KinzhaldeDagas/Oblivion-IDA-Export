0x51CE70: mov     eax, [ecx+28h]
0x51CE73: shr     eax, 8
0x51CE76: test    al, 1
0x51CE78: jnz     short loc_51CE9F
0x51CE7A: lea     ebx, [ebx+0]
0x51CE80: mov     edx, [ecx+28h]
0x51CE83: shr     edx, 8
0x51CE86: test    dl, 1
0x51CE89: jnz     short loc_51CEB9
0x51CE8B: mov     ecx, [ecx+100h]
0x51CE91: test    ecx, ecx
0x51CE93: jz      short loc_51CEB9
0x51CE95: mov     eax, [ecx+28h]
0x51CE98: shr     eax, 8
0x51CE9B: test    al, 1
0x51CE9D: jz      short loc_51CE80
0x51CE9F: mov     edx, [ecx+28h]
0x51CEA2: shr     edx, 8
0x51CEA5: test    dl, 1
0x51CEA8: jz      short loc_51CEB9
0x51CEAA: mov     ecx, [ecx+100h]
0x51CEB0: test    ecx, ecx
0x51CEB2: jz      short loc_51CEB9
0x51CEB4: jmp     loc_519AD0
0x51CEB9: xor     eax, eax
0x51CEBB: retn    4
0x519AD0: mov     edx, [esp+arg_0]
0x519AD4: push    ebx
0x519AD5: xor     ebx, ebx
0x519AD7: xor     eax, eax
0x519AD9: cmp     edx, 9
0x519ADC: push    edi
0x519ADD: ja      short loc_519AE2
0x519ADF: mov     eax, [ecx+edx*4]
0x519AE2: test    eax, eax
0x519AE4: mov     edi, eax
0x519AE6: jz      short loc_519B39
0x519AE8: push    esi
0x519AE9: lea     esp, [esp+0]
0x519AF0: cmp     dword ptr [edi+4], 0
0x519AF4: jnz     short loc_519AFB
0x519AF6: cmp     dword ptr [edi], 0
0x519AF9: jz      short loc_519B38
0x519AFB: test    ebx, ebx
0x519AFD: jnz     short loc_519B38
0x519AFF: mov     esi, [edi]
0x519B01: cmp     [esi], ebx
0x519B03: jz      short loc_519B31
0x519B05: push    ebx; Seed
0x519B06: call    Game_RandomLargeInteger; Engine RNG: optional explicit seed, otherwise lazy time seed once, then return MSVC rand() in [0,32767]. FaceGen consumes three separate endpoint-inclusive draws for age, relative sex morph, and hair length.
0x519B0B: cdq
0x519B0C: mov     ecx, 64h ; 'd'
0x519B11: idiv    ecx
0x519B13: movzx   eax, byte ptr [esi+4]
0x519B17: add     esp, 4
0x519B1A: cmp     edx, eax
0x519B1C: jge     short loc_519B31
0x519B1E: mov     eax, [esi]
0x519B20: add     eax, 24h ; '$'
0x519B23: mov     eax, [eax+4]
0x519B26: test    eax, eax
0x519B28: jnz     short loc_519B2F
0x519B2A: mov     eax, offset EmptyString
0x519B2F: mov     ebx, eax
0x519B31: mov     edi, [edi+4]
0x519B34: test    edi, edi
0x519B36: jnz     short loc_519AF0
0x519B38: pop     esi
0x519B39: pop     edi
0x519B3A: mov     eax, ebx
0x519B3C: pop     ebx
0x519B3D: retn    4
