0x6CE2F0: push    esi
0x6CE2F1: push    edi
0x6CE2F2: mov     edi, [esp+8+arg_0]
0x6CE2F6: push    edi
0x6CE2F7: mov     esi, ecx
0x6CE2F9: call    sub_715E40
0x6CE2FE: mov     ecx, [esi+3Ch]
0x6CE301: test    ecx, ecx
0x6CE303: jz      short loc_6CE30D
0x6CE305: mov     eax, [ecx]
0x6CE307: mov     edx, [eax+38h]
0x6CE30A: push    edi
0x6CE30B: call    edx
0x6CE30D: pop     edi
0x6CE30E: pop     esi
0x6CE30F: retn    4
