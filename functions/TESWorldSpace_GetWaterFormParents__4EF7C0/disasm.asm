0x4EF7C0: mov     eax, [ecx+7Ch]
0x4EF7C3: test    eax, eax
0x4EF7C5: jz      short loc_4EF7D0; Verified Oblivion: walks every parentWorldspace link and returns root WaterForm, falling back to global default water at 0xB360AC. Fallout divergence: separate GetWaterType and GetLODWaterType use parent-use flags bits 3 and 1 respectively.
0x4EF7C7: mov     ecx, eax
0x4EF7C9: mov     eax, [ecx+7Ch]
0x4EF7CC: test    eax, eax
0x4EF7CE: jnz     short loc_4EF7C7
0x4EF7D0: mov     eax, [ecx+80h]
0x4EF7D6: test    eax, eax
0x4EF7D8: jnz     short locret_4EF7DF
0x4EF7DA: mov     eax, ds:0B360ACh
0x4EF7DF: retn
