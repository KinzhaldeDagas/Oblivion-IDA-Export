0x569EF0: push    esi
0x569EF1: mov     esi, [esp+4+arg_0]
0x569EF5: test    esi, esi
0x569EF7: jz      short loc_569F61
0x569EF9: movzx   eax, byte ptr [esi]
0x569EFC: movzx   edx, byte ptr [ecx]
0x569EFF: cmp     edx, eax
0x569F01: jz      short loc_569F1E
0x569F03: mov     [ecx], al
0x569F05: movzx   eax, al
0x569F08: sub     eax, 0
0x569F0B: jz      short loc_569F17
0x569F0D: sub     eax, 1
0x569F10: jz      short loc_569F17
0x569F12: sub     eax, 1
0x569F15: jnz     short loc_569F1E
0x569F17: mov     dword ptr [ecx+4], 0
0x569F1E: cmp     byte ptr [esi], 0
0x569F21: jnz     short loc_569F28
0x569F23: mov     eax, [esi+4]
0x569F26: jmp     short loc_569F2A
0x569F28: xor     eax, eax
0x569F2A: mov     dl, [ecx]
0x569F2C: test    dl, dl
0x569F2E: jnz     short loc_569F33
0x569F30: mov     [ecx+4], eax
0x569F33: cmp     byte ptr [esi], 1
0x569F36: jnz     short loc_569F3D
0x569F38: mov     eax, [esi+4]
0x569F3B: jmp     short loc_569F3F
0x569F3D: xor     eax, eax
0x569F3F: cmp     dl, 1
0x569F42: jnz     short loc_569F47
0x569F44: mov     [ecx+4], eax
0x569F47: cmp     byte ptr [esi], 2
0x569F4A: jnz     short loc_569F51
0x569F4C: mov     eax, [esi+4]
0x569F4F: jmp     short loc_569F53
0x569F51: xor     eax, eax
0x569F53: cmp     dl, 2
0x569F56: jnz     short loc_569F5B
0x569F58: mov     [ecx+4], eax
0x569F5B: mov     eax, [esi+8]
0x569F5E: mov     [ecx+8], eax
0x569F61: pop     esi
0x569F62: retn    4
