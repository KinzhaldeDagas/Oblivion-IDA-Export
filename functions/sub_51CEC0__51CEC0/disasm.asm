0x51CEC0: mov     eax, [ecx+28h]; TESCreature sound selector: walks inherited creature data, chooses a sound entry by category index and probability.
0x51CEC3: shr     eax, 8
0x51CEC6: test    al, 1
0x51CEC8: jnz     short loc_51CEEF
0x51CECA: lea     ebx, [ebx+0]
0x51CED0: mov     edx, [ecx+28h]
0x51CED3: shr     edx, 8
0x51CED6: test    dl, 1
0x51CED9: jnz     short loc_51CF09
0x51CEDB: mov     ecx, [ecx+100h]
0x51CEE1: test    ecx, ecx
0x51CEE3: jz      short loc_51CF09
0x51CEE5: mov     eax, [ecx+28h]
0x51CEE8: shr     eax, 8
0x51CEEB: test    al, 1
0x51CEED: jz      short loc_51CED0
0x51CEEF: mov     edx, [ecx+28h]
0x51CEF2: shr     edx, 8
0x51CEF5: test    dl, 1
0x51CEF8: jz      short loc_51CF09
0x51CEFA: mov     ecx, [ecx+100h]
0x51CF00: test    ecx, ecx
0x51CF02: jz      short loc_51CF09
0x51CF04: jmp     loc_519900
0x51CF09: xor     eax, eax
0x51CF0B: retn    4
0x519900: mov     eax, [esp+arg_0]
0x519904: push    ebx
0x519905: push    edi
0x519906: xor     ebx, ebx
0x519908: xor     edi, edi
0x51990A: cmp     eax, 9
0x51990D: ja      short loc_519912
0x51990F: mov     edi, [ecx+eax*4]
0x519912: test    edi, edi
0x519914: jz      short loc_51994F
0x519916: push    esi
0x519917: cmp     dword ptr [edi+4], 0
0x51991B: jnz     short loc_519922
0x51991D: cmp     dword ptr [edi], 0
0x519920: jz      short loc_51994E
0x519922: test    ebx, ebx
0x519924: jnz     short loc_51994E
0x519926: mov     esi, [edi]
0x519928: cmp     [esi], ebx
0x51992A: jz      short loc_519947
0x51992C: push    ebx; Seed
0x51992D: call    Game_RandomLargeInteger; Engine RNG: optional explicit seed, otherwise lazy time seed once, then return MSVC rand() in [0,32767]. FaceGen consumes three separate endpoint-inclusive draws for age, relative sex morph, and hair length.
0x519932: cdq
0x519933: mov     ecx, 64h ; 'd'
0x519938: idiv    ecx
0x51993A: movzx   eax, byte ptr [esi+4]
0x51993E: add     esp, 4
0x519941: cmp     edx, eax
0x519943: jge     short loc_519947
0x519945: mov     ebx, [esi]
0x519947: mov     edi, [edi+4]
0x51994A: test    edi, edi
0x51994C: jnz     short loc_519917
0x51994E: pop     esi
0x51994F: pop     edi
0x519950: mov     eax, ebx
0x519952: pop     ebx
0x519953: retn    4
