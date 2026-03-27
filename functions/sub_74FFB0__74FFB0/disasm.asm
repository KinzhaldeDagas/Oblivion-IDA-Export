0x74FFB0: push    esi
0x74FFB1: push    edi
0x74FFB2: mov     edi, [esp+8+arg_0]
0x74FFB6: push    edi
0x74FFB7: mov     esi, ecx
0x74FFB9: call    sub_75E490
0x74FFBE: test    al, al
0x74FFC0: jnz     short loc_74FFC7
0x74FFC2: pop     edi
0x74FFC3: pop     esi
0x74FFC4: retn    4
0x74FFC7: mov     ecx, [edi+48h]
0x74FFCA: mov     eax, [esi+48h]
0x74FFCD: mov     edx, [ecx]
0x74FFCF: push    eax
0x74FFD0: mov     eax, [edx+2Ch]
0x74FFD3: call    eax
0x74FFD5: test    al, al
0x74FFD7: pop     edi
0x74FFD8: setnz   al
0x74FFDB: pop     esi
0x74FFDC: retn    4
