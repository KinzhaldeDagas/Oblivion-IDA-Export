0x76D3D0: push    edi
0x76D3D1: mov     edi, ecx
0x76D3D3: mov     eax, [edi+0Ch]
0x76D3D6: test    eax, eax
0x76D3D8: jz      short loc_76D41D
0x76D3DA: push    esi
0x76D3DB: mov     esi, [esp+8+arg_4]
0x76D3DF: cmp     esi, ds:0B42614h
0x76D3E5: ja      short loc_76D405
0x76D3E7: cmp     eax, ds:0B42600h[esi*4]
0x76D3EE: jz      short loc_76D416
0x76D3F0: mov     ecx, [esp+8+arg_0]
0x76D3F4: mov     edx, [ecx]
0x76D3F6: push    eax
0x76D3F7: mov     eax, [edx+94h]
0x76D3FD: push    esi
0x76D3FE: push    ecx
0x76D3FF: call    eax
0x76D401: test    eax, eax
0x76D403: jge     short loc_76D40C
0x76D405: pop     esi
0x76D406: xor     al, al
0x76D408: pop     edi
0x76D409: retn    8
0x76D40C: mov     ecx, [edi+0Ch]
0x76D40F: mov     ds:0B42600h[esi*4], ecx
0x76D416: pop     esi
0x76D417: mov     al, 1
0x76D419: pop     edi
0x76D41A: retn    8
0x76D41D: xor     al, al
0x76D41F: pop     edi
0x76D420: retn    8
