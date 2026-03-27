0x4D8E60: push    esi
0x4D8E61: push    edi
0x4D8E62: mov     edi, [esp+8+arg_0]
0x4D8E66: mov     esi, ecx
0x4D8E68: push    edi
0x4D8E69: push    esi
0x4D8E6A: lea     ecx, [esi+44h]
0x4D8E6D: call    sub_4201A0
0x4D8E72: test    edi, edi
0x4D8E74: mov     eax, [esi]
0x4D8E76: push    4000h
0x4D8E7B: mov     ecx, esi
0x4D8E7D: jz      short loc_4D8E89
0x4D8E7F: mov     edx, [eax+40h]
0x4D8E82: call    edx
0x4D8E84: pop     edi
0x4D8E85: pop     esi
0x4D8E86: retn    4
0x4D8E89: mov     edx, [eax+44h]
0x4D8E8C: call    edx
0x4D8E8E: pop     edi
0x4D8E8F: pop     esi
0x4D8E90: retn    4
