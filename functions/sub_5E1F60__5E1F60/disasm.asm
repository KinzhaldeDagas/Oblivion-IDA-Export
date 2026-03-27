0x5E1F60: push    esi
0x5E1F61: mov     esi, [ecx+0F8h]
0x5E1F67: xor     eax, eax
0x5E1F69: test    esi, esi
0x5E1F6B: jz      short loc_5E1F84
0x5E1F6D: cmp     byte ptr [esi+4], 30h ; '0'
0x5E1F71: jnz     short loc_5E1F84
0x5E1F73: mov     ecx, esi; this
0x5E1F75: call    TESObjectCELL_IsInterior
0x5E1F7A: test    al, al
0x5E1F7C: jnz     short loc_5E1F82
0x5E1F7E: xor     eax, eax
0x5E1F80: pop     esi
0x5E1F81: retn
0x5E1F82: mov     eax, esi
0x5E1F84: pop     esi
0x5E1F85: retn
