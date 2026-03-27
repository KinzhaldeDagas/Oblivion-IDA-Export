0x4E4D70: push    ebx
0x4E4D71: push    esi
0x4E4D72: mov     esi, [esp+8+arg_0]
0x4E4D76: xor     bl, bl
0x4E4D78: test    esi, esi
0x4E4D7A: jz      short loc_4E4DEA
0x4E4D7C: mov     eax, [esi]
0x4E4D7E: cmp     eax, ds:0B05E20h
0x4E4D84: jnz     short loc_4E4DEA
0x4E4D86: mov     eax, [esi+0Ch]
0x4E4D89: cmp     eax, 6
0x4E4D8C: mov     ecx, [ecx+20h]
0x4E4D8F: jz      short loc_4E4DBB
0x4E4D91: cmp     eax, 7
0x4E4D94: jbe     short loc_4E4D9B
0x4E4D96: cmp     eax, 0Ah
0x4E4D99: jbe     short loc_4E4DC9
0x4E4D9B: mov     eax, [esp+8+arg_4]
0x4E4D9F: test    al, al
0x4E4DA1: jz      short loc_4E4DEA
0x4E4DA3: mov     edx, [ecx]
0x4E4DA5: push    edi
0x4E4DA6: mov     edi, [esp+0Ch+arg_8]
0x4E4DAA: push    edi
0x4E4DAB: push    eax
0x4E4DAC: mov     eax, [edx+0BCh]
0x4E4DB2: push    esi
0x4E4DB3: call    eax
0x4E4DB5: pop     edi
0x4E4DB6: pop     esi
0x4E4DB7: pop     ebx
0x4E4DB8: retn    0Ch
0x4E4DBB: cmp     byte ptr [esp+8+arg_4], 0
0x4E4DC0: jnz     short loc_4E4DC9
0x4E4DC2: pop     esi
0x4E4DC3: xor     al, al
0x4E4DC5: pop     ebx
0x4E4DC6: retn    0Ch
0x4E4DC9: mov     edx, [esi+8]
0x4E4DCC: push    edx
0x4E4DCD: call    sub_46AF50
0x4E4DD2: test    al, al
0x4E4DD4: jz      short loc_4E4DEA
0x4E4DD6: mov     esi, [esi+0Ch]
0x4E4DD9: sub     esi, 8
0x4E4DDC: jz      short loc_4E4DC2
0x4E4DDE: sub     esi, 2
0x4E4DE1: jz      short loc_4E4DC2
0x4E4DE3: pop     esi
0x4E4DE4: mov     al, 1
0x4E4DE6: pop     ebx
0x4E4DE7: retn    0Ch
0x4E4DEA: pop     esi
0x4E4DEB: mov     al, bl
0x4E4DED: pop     ebx
0x4E4DEE: retn    0Ch
