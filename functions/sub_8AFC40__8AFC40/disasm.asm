0x8AFC40: mov     ecx, [esp+arg_0]
0x8AFC44: mov     eax, [ecx+0Ch]
0x8AFC47: test    eax, eax
0x8AFC49: jnz     short loc_8AFC4D
0x8AFC4B: mov     eax, ecx
0x8AFC4D: push    esi
0x8AFC4E: xor     esi, esi
0x8AFC50: test    eax, eax
0x8AFC52: jz      short loc_8AFC83
0x8AFC54: mov     eax, [eax]
0x8AFC56: test    eax, eax
0x8AFC58: jz      short loc_8AFC5F
0x8AFC5A: mov     eax, [eax+8]
0x8AFC5D: jmp     short loc_8AFC61
0x8AFC5F: xor     eax, eax
0x8AFC61: push    eax
0x8AFC62: push    offset dword_BA7F9C
0x8AFC67: call    NiRTTI_Cast
0x8AFC6C: add     esp, 8
0x8AFC6F: test    eax, eax
0x8AFC71: jz      short loc_8AFC83
0x8AFC73: mov     eax, [eax+8]
0x8AFC76: test    eax, eax
0x8AFC78: jz      short loc_8AFC7F
0x8AFC7A: mov     eax, [eax+0Ch]
0x8AFC7D: pop     esi
0x8AFC7E: retn
0x8AFC7F: xor     eax, eax
0x8AFC81: pop     esi
0x8AFC82: retn
0x8AFC83: mov     eax, esi
0x8AFC85: pop     esi
0x8AFC86: retn
