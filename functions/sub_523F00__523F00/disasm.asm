0x523F00: movzx   eax, word ptr [ecx+8]
0x523F04: cmp     ax, 0FFFFh
0x523F08: jnz     short loc_523F1F
0x523F0A: mov     eax, [ecx+4]
0x523F0D: push    esi
0x523F0E: lea     esi, [eax+1]
0x523F11: mov     dl, [eax]
0x523F13: add     eax, 1
0x523F16: test    dl, dl
0x523F18: jnz     short loc_523F11
0x523F1A: sub     eax, esi
0x523F1C: pop     esi
0x523F1D: jmp     short loc_523F22
0x523F1F: movzx   eax, ax
0x523F22: test    eax, eax
0x523F24: jz      short loc_523F33
0x523F26: mov     eax, [ecx+4]
0x523F29: test    eax, eax
0x523F2B: jnz     short locret_523F38
0x523F2D: mov     eax, offset EmptyString
0x523F32: retn
0x523F33: mov     eax, offset aCharacters_mal; "Characters\\_Male\\skeleton.nif"
0x523F38: retn
