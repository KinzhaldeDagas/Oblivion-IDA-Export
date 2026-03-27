0x65F6E8: cmp     dword ptr [eax+2Ch], 0
0x65F6EC: jnz     short loc_65F6F4
0x65F6EE: cmp     dword ptr [eax+28h], 0
0x65F6F2: jz      short PlayerCharacter_SetKnownEffect___Done
0x65F6F4: mov     ecx, [eax+28h]
0x65F6F7: test    ecx, ecx
0x65F6F9: jz      short loc_65F701
0x65F6FB: mov     ecx, [ecx+1Ch]
0x65F6FE: or      [ecx+58h], edx
0x65F701: mov     eax, [eax+2Ch]
0x65F704: test    eax, eax
0x65F706: jz      short PlayerCharacter_SetKnownEffect___Done
0x65F708: add     eax, 0FFFFFFD8h
0x65F70B: jnz     short PlayerCharacter_SetKnownEffect___EffectItemLoop
