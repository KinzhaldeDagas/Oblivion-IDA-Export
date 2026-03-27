0x6A2250: push    esi
0x6A2251: mov     esi, ecx
0x6A2253: mov     eax, [esi]
0x6A2255: mov     edx, [eax+0Ch]
0x6A2258: call    edx
0x6A225A: test    al, al
0x6A225C: jz      short loc_6A2263
0x6A225E: mov     eax, [esi-5Ch]
0x6A2261: pop     esi
0x6A2262: retn
0x6A2263: mov     ecx, esi
0x6A2265: mov     eax, [ecx]
0x6A2267: mov     edx, [eax+4]
0x6A226A: call    edx
0x6A226C: mov     eax, [eax+0Ch]
0x6A226F: pop     esi
0x6A2270: retn
