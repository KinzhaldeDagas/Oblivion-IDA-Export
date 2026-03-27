0x612D60: push    esi
0x612D61: mov     esi, ecx
0x612D63: mov     eax, [esi+3Ch]
0x612D66: test    eax, eax
0x612D68: jz      short loc_612D98
0x612D6A: mov     ecx, [eax+58h]
0x612D6D: test    ecx, ecx
0x612D6F: jz      short loc_612D98
0x612D71: mov     eax, [ecx]
0x612D73: mov     edx, [eax+0ECh]
0x612D79: push    1
0x612D7B: call    edx
0x612D7D: test    eax, eax
0x612D7F: jz      short loc_612D98
0x612D81: mov     eax, [esi+3Ch]
0x612D84: mov     ecx, [eax+58h]
0x612D87: mov     edx, [ecx]
0x612D89: mov     eax, [edx+0ECh]
0x612D8F: push    1
0x612D91: call    eax
0x612D93: mov     eax, [eax+8]
0x612D96: pop     esi
0x612D97: retn
0x612D98: xor     eax, eax
0x612D9A: pop     esi
0x612D9B: retn
