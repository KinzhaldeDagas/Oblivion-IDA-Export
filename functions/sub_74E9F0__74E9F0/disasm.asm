0x74E9F0: push    ebx
0x74E9F1: mov     ebx, [esp+4+arg_0]
0x74E9F5: push    esi
0x74E9F6: push    edi
0x74E9F7: mov     edi, [esp+0Ch+arg_8]
0x74E9FB: push    edi
0x74E9FC: push    1
0x74E9FE: push    ebx
0x74E9FF: mov     esi, ecx
0x74EA01: call    sub_749360
0x74EA06: mov     esi, [esi+0B4h]
0x74EA0C: mov     ecx, [esi+68h]
0x74EA0F: mov     eax, [ecx]
0x74EA11: mov     edx, [eax+5Ch]
0x74EA14: push    edi
0x74EA15: push    1
0x74EA17: push    ebx
0x74EA18: call    edx
0x74EA1A: mov     byte ptr [edi], 0
0x74EA1D: mov     esi, [esi+68h]
0x74EA20: and     word ptr [esi+18h], 0FFEFh
0x74EA26: pop     edi
0x74EA27: pop     esi
0x74EA28: pop     ebx
0x74EA29: retn    0Ch
