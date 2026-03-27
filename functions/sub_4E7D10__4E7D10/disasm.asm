0x4E7D10: cmp     byte ptr ds:0B35F84h, 0
0x4E7D17: setz    al
0x4E7D1A: push    eax
0x4E7D1B: call    sub_4E76D0
0x4E7D20: mov     ecx, ds:0B333A0h
0x4E7D26: mov     ecx, [ecx+34h]
0x4E7D29: add     esp, 4
0x4E7D2C: test    ecx, ecx
0x4E7D2E: jz      short loc_4E7D4E
0x4E7D30: call    sub_4AF170
0x4E7D35: mov     ecx, eax
0x4E7D37: test    ecx, ecx
0x4E7D39: jz      short locret_4E7DB3
0x4E7D3B: cmp     byte ptr ds:0B35F84h, 0
0x4E7D42: jz      short loc_4E7D49
0x4E7D44: jmp     sub_4E71A0
0x4E7D49: jmp     sub_4E5400
0x4E7D4E: mov     eax, ds:0B06A2Ch
0x4E7D53: push    edi
0x4E7D54: xor     edi, edi
0x4E7D56: push    esi
0x4E7D57: cmp     edi, eax
0x4E7D59: jnb     short loc_4E7DB1
0x4E7D5B: xor     esi, esi
0x4E7D5D: lea     ecx, [ecx+0]
0x4E7D60: cmp     esi, eax
0x4E7D62: jnb     short loc_4E7DAC
0x4E7D64: mov     edx, ds:0B333A0h
0x4E7D6A: mov     ecx, [edx+8]
0x4E7D6D: push    esi
0x4E7D6E: push    edi
0x4E7D6F: call    GetGridEntry
0x4E7D74: mov     ecx, [eax]
0x4E7D76: test    ecx, ecx
0x4E7D78: jz      short loc_4E7DA2
0x4E7D7A: call    sub_4AF170
0x4E7D7F: mov     ecx, eax
0x4E7D81: test    ecx, ecx
0x4E7D83: jz      short loc_4E7DA2
0x4E7D85: cmp     byte ptr ds:0B35F84h, 0
0x4E7D8C: jz      short loc_4E7D9D
0x4E7D8E: call    sub_4E71A0
0x4E7D93: mov     eax, ds:0B06A2Ch
0x4E7D98: add     esi, 1
0x4E7D9B: jmp     short loc_4E7D60
0x4E7D9D: call    sub_4E5400
0x4E7DA2: mov     eax, ds:0B06A2Ch
0x4E7DA7: add     esi, 1
0x4E7DAA: jmp     short loc_4E7D60
0x4E7DAC: add     edi, 1
0x4E7DAF: jmp     short loc_4E7D57
0x4E7DB1: pop     esi
0x4E7DB2: pop     edi
0x4E7DB3: retn
