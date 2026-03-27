0x8B9B60: push    esi
0x8B9B61: push    edi
0x8B9B62: mov     edi, ecx
0x8B9B64: test    edi, edi
0x8B9B66: jz      short loc_8B9B7D
0x8B9B68: mov     ecx, [edi+8]
0x8B9B6B: test    ecx, ecx
0x8B9B6D: jz      short loc_8B9B7D
0x8B9B6F: call    sub_8AC0C0
0x8B9B74: test    eax, eax
0x8B9B76: jz      short loc_8B9B7D
0x8B9B78: mov     ecx, [eax+0Ch]
0x8B9B7B: jmp     short loc_8B9B7F
0x8B9B7D: xor     ecx, ecx
0x8B9B7F: test    ecx, ecx
0x8B9B81: mov     esi, [esp+8+arg_0]
0x8B9B85: jz      short loc_8B9B8F
0x8B9B87: mov     eax, [ecx]
0x8B9B89: mov     edx, [eax+24h]
0x8B9B8C: push    esi
0x8B9B8D: call    edx
0x8B9B8F: push    esi
0x8B9B90: mov     ecx, edi
0x8B9B92: call    sub_6E7270
0x8B9B97: pop     edi
0x8B9B98: pop     esi
0x8B9B99: retn    4
