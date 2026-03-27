0x6A8D50: push    ecx
0x6A8D51: push    esi
0x6A8D52: mov     esi, ecx
0x6A8D54: mov     eax, [esi+0DCh]
0x6A8D5A: test    al, 2
0x6A8D5C: jnz     short loc_6A8D6A
0x6A8D5E: and     eax, 0FFFFFFFBh
0x6A8D61: mov     [esi+0DCh], eax
0x6A8D67: pop     esi
0x6A8D68: pop     ecx
0x6A8D69: retn
0x6A8D6A: mov     eax, [esi+70h]
0x6A8D6D: test    eax, eax
0x6A8D6F: jz      short loc_6A8DA5
0x6A8D71: mov     ecx, [eax]
0x6A8D73: lea     edx, [esp+8+var_4]
0x6A8D77: push    edx
0x6A8D78: push    offset CLSID_IMediaControl
0x6A8D7D: push    eax
0x6A8D7E: mov     eax, [ecx]
0x6A8D80: call    eax
0x6A8D82: test    eax, eax
0x6A8D84: jl      short loc_6A8DA5
0x6A8D86: mov     eax, dword ptr [esp+8+var_4]
0x6A8D8A: mov     ecx, [eax]
0x6A8D8C: mov     edx, [ecx+1Ch]
0x6A8D8F: push    eax
0x6A8D90: call    edx
0x6A8D92: mov     eax, dword ptr [esp+8+var_4]
0x6A8D96: mov     ecx, [eax]
0x6A8D98: mov     edx, [ecx+8]
0x6A8D9B: push    eax
0x6A8D9C: call    edx
0x6A8D9E: and     dword ptr [esi+0DCh], 0FFFFFFFBh
0x6A8DA5: pop     esi
0x6A8DA6: pop     ecx
0x6A8DA7: retn
