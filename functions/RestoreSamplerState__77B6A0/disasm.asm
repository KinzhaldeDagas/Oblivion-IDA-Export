0x77B6A0: push    esi
0x77B6A1: mov     esi, [esp+4+arg_4]
0x77B6A5: movzx   edx, word ptr ds:0B427B0h[esi*2]
0x77B6AD: cmp     dx, 5
0x77B6B1: jnb     short loc_77B6D9
0x77B6B3: mov     eax, [esp+4+arg_0]
0x77B6B7: push    ebx
0x77B6B8: movzx   edx, dx
0x77B6BB: push    edi
0x77B6BC: mov     edi, [ecx]
0x77B6BE: lea     ebx, [eax+eax*4]
0x77B6C1: push    0
0x77B6C3: add     ebx, edx
0x77B6C5: mov     edx, [ecx+ebx*8+0D24h]
0x77B6CC: push    edx
0x77B6CD: push    esi
0x77B6CE: push    eax
0x77B6CF: mov     eax, [edi+0D0h]
0x77B6D5: call    eax
0x77B6D7: pop     edi
0x77B6D8: pop     ebx
0x77B6D9: pop     esi
0x77B6DA: retn    8
