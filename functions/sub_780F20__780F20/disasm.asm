0x780F20: push    esi
0x780F21: mov     esi, [esp+4+arg_0]
0x780F25: push    edi
0x780F26: mov     edi, ecx
0x780F28: mov     eax, [edi+34h]
0x780F2B: cmp     eax, esi
0x780F2D: jz      short loc_780F4A
0x780F2F: test    eax, eax
0x780F31: jz      short loc_780F3B
0x780F33: mov     ecx, [eax]
0x780F35: mov     edx, [ecx+8]
0x780F38: push    eax
0x780F39: call    edx
0x780F3B: test    esi, esi
0x780F3D: mov     [edi+34h], esi
0x780F40: jz      short loc_780F4A
0x780F42: mov     eax, [esi]
0x780F44: mov     ecx, [eax+4]
0x780F47: push    esi
0x780F48: call    ecx
0x780F4A: pop     edi
0x780F4B: pop     esi
0x780F4C: retn    4
