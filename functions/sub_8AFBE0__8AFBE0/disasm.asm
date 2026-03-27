0x8AFBE0: mov     ecx, [esp+arg_0]
0x8AFBE4: mov     eax, [ecx+0Ch]
0x8AFBE7: test    eax, eax
0x8AFBE9: jnz     short loc_8AFBED
0x8AFBEB: mov     eax, ecx
0x8AFBED: push    esi
0x8AFBEE: xor     esi, esi
0x8AFBF0: test    eax, eax
0x8AFBF2: jz      short loc_8AFC2E
0x8AFBF4: mov     eax, [eax]
0x8AFBF6: test    eax, eax
0x8AFBF8: jz      short loc_8AFBFF
0x8AFBFA: mov     eax, [eax+8]
0x8AFBFD: jmp     short loc_8AFC01
0x8AFBFF: xor     eax, eax
0x8AFC01: push    eax
0x8AFC02: push    offset dword_BA7F9C
0x8AFC07: call    NiRTTI_Cast
0x8AFC0C: add     esp, 8
0x8AFC0F: test    eax, eax
0x8AFC11: jz      short loc_8AFC2E
0x8AFC13: mov     eax, [eax+8]
0x8AFC16: test    eax, eax
0x8AFC18: jz      short loc_8AFC1F
0x8AFC1A: mov     eax, [eax+0Ch]
0x8AFC1D: jmp     short loc_8AFC21
0x8AFC1F: xor     eax, eax
0x8AFC21: test    eax, eax
0x8AFC23: jz      short loc_8AFC2A
0x8AFC25: mov     eax, [eax+8]
0x8AFC28: pop     esi
0x8AFC29: retn
0x8AFC2A: xor     eax, eax
0x8AFC2C: pop     esi
0x8AFC2D: retn
0x8AFC2E: mov     eax, esi
0x8AFC30: pop     esi
0x8AFC31: retn
