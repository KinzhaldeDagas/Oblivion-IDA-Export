0x68B0F0: cmp     byte ptr [ecx+4], 0; Verified returns payload as TESObjectREFR* only when kind==0 (reference node); returns null for position nodes or other kinds.
0x68B0F4: jnz     short loc_68B0F9
0x68B0F6: mov     eax, [ecx]
0x68B0F8: retn
0x68B0F9: xor     eax, eax
0x68B0FB: retn
