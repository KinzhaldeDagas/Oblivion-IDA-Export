0x4EF7A0: mov     eax, [ecx+7Ch]
0x4EF7A3: test    eax, eax
0x4EF7A5: jz      short loc_4EF7B0; Verified Oblivion: follows every non-null TESWorldSpace.parentWorldspace link to the root without testing an inheritance flag, then returns root climate at +0x58. Fallout divergence: TESWorldSpace::GetClimate follows parent only when sParentUseFlags bit 4 is set.
0x4EF7A7: mov     ecx, eax
0x4EF7A9: mov     eax, [ecx+7Ch]
0x4EF7AC: test    eax, eax
0x4EF7AE: jnz     short loc_4EF7A7
0x4EF7B0: mov     eax, [ecx+58h]
0x4EF7B3: retn; Verified: returns root TESWorldSpace climate pointer at +0x58; worldspace copy and comparison helpers independently use this result.
