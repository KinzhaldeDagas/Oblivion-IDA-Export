0x7383F0: mov     eax, [esp+arg_0]
0x7383F4: test    eax, eax
0x7383F6: jnz     short loc_7383FB
0x7383F8: xor     al, al
0x7383FA: retn
0x7383FB: mov     ecx, ds:0B40120h
0x738401: test    ecx, ecx
0x738403: jz      short loc_7383F8
0x738405: mov     edx, [ecx]
0x738407: push    esi
0x738408: mov     esi, [esp+4+arg_8]
0x73840C: push    esi
0x73840D: mov     esi, [esp+8+arg_4]
0x738411: push    esi
0x738412: push    eax
0x738413: mov     eax, [edx+10h]
0x738416: call    eax
0x738418: pop     esi
0x738419: retn
