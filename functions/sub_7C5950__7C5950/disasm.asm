0x7C5950: mov     eax, [esp+arg_0]
0x7C5954: mov     edx, [esp+arg_4]
0x7C5958: cmp     eax, edx
0x7C595A: jz      short locret_7C59A2
0x7C595C: cmp     [ecx+4], eax
0x7C595F: push    esi
0x7C5960: jnz     short loc_7C5967
0x7C5962: mov     esi, [eax]
0x7C5964: mov     [ecx+4], esi
0x7C5967: cmp     [ecx+8], eax
0x7C596A: jnz     short loc_7C5972
0x7C596C: mov     esi, [eax+4]
0x7C596F: mov     [ecx+8], esi
0x7C5972: cmp     [ecx+8], edx
0x7C5975: jnz     short loc_7C597A
0x7C5977: mov     [ecx+8], eax
0x7C597A: mov     ecx, [eax]
0x7C597C: test    ecx, ecx
0x7C597E: jz      short loc_7C5986
0x7C5980: mov     esi, [eax+4]
0x7C5983: mov     [ecx+4], esi
0x7C5986: mov     ecx, [eax+4]
0x7C5989: test    ecx, ecx
0x7C598B: jz      short loc_7C5991
0x7C598D: mov     esi, [eax]
0x7C598F: mov     [ecx], esi
0x7C5991: mov     ecx, [edx]
0x7C5993: test    ecx, ecx
0x7C5995: mov     [eax], ecx
0x7C5997: mov     [eax+4], edx
0x7C599A: pop     esi
0x7C599B: jz      short loc_7C59A0
0x7C599D: mov     [ecx+4], eax
0x7C59A0: mov     [edx], eax
0x7C59A2: retn    8
