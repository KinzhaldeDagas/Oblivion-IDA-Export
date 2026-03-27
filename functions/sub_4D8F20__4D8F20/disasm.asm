0x4D8F20: push    ebx
0x4D8F21: push    esi
0x4D8F22: push    edi
0x4D8F23: mov     edi, [esp+0Ch+arg_0]
0x4D8F27: xor     bl, bl
0x4D8F29: test    edi, edi
0x4D8F2B: mov     esi, ecx
0x4D8F2D: jz      short loc_4D8F9C
0x4D8F2F: mov     eax, [esi]
0x4D8F31: mov     edx, [eax+170h]
0x4D8F37: call    edx
0x4D8F39: test    eax, eax
0x4D8F3B: jz      short loc_4D8F9C
0x4D8F3D: mov     eax, [esi]
0x4D8F3F: mov     edx, [eax+170h]
0x4D8F45: mov     ecx, esi
0x4D8F47: call    edx
0x4D8F49: cmp     byte ptr [eax+4], 18h
0x4D8F4D: jz      short loc_4D8F9C
0x4D8F4F: push    edi
0x4D8F50: call    sub_6FA970
0x4D8F55: add     esp, 4
0x4D8F58: test    eax, eax
0x4D8F5A: jz      short loc_4D8F66
0x4D8F5C: mov     eax, [eax+0Ch]
0x4D8F5F: and     eax, 8
0x4D8F62: jz      short loc_4D8F66
0x4D8F64: mov     bl, 1
0x4D8F66: mov     eax, [esi]
0x4D8F68: mov     edx, [eax+170h]
0x4D8F6E: mov     ecx, esi
0x4D8F70: call    edx
0x4D8F72: cmp     byte ptr [eax+4], 1Ch
0x4D8F76: jnz     short loc_4D8F85
0x4D8F78: push    edi
0x4D8F79: call    sub_5368B0
0x4D8F7E: add     esp, 4
0x4D8F81: test    al, al
0x4D8F83: jmp     short loc_4D8F87
0x4D8F85: test    bl, bl
0x4D8F87: jz      short loc_4D8FA4
0x4D8F89: mov     eax, [esi]
0x4D8F8B: mov     edx, [eax+48h]
0x4D8F8E: push    8
0x4D8F90: mov     ecx, esi
0x4D8F92: call    edx
0x4D8F94: pop     edi
0x4D8F95: pop     esi
0x4D8F96: mov     al, 1
0x4D8F98: pop     ebx
0x4D8F99: retn    4
0x4D8F9C: pop     edi
0x4D8F9D: pop     esi
0x4D8F9E: mov     al, bl
0x4D8FA0: pop     ebx
0x4D8FA1: retn    4
0x4D8FA4: pop     edi
0x4D8FA5: pop     esi
0x4D8FA6: xor     al, al
0x4D8FA8: pop     ebx
0x4D8FA9: retn    4
