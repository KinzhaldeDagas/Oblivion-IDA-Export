0x898A30: push    esi
0x898A31: mov     esi, [ecx+0E0h]
0x898A37: xor     eax, eax
0x898A39: test    esi, esi
0x898A3B: push    edi
0x898A3C: jle     short loc_898A54
0x898A3E: mov     edx, [ecx+0DCh]
0x898A44: mov     edi, [esp+8+arg_0]
0x898A48: cmp     [edx], edi
0x898A4A: jz      short loc_898A69
0x898A4C: inc     eax
0x898A4D: add     edx, 4
0x898A50: cmp     eax, esi
0x898A52: jl      short loc_898A48
0x898A54: mov     edx, [ecx+0DCh]
0x898A5A: pop     edi
0x898A5B: or      eax, 0FFFFFFFFh
0x898A5E: pop     esi
0x898A5F: mov     dword ptr [edx+eax*4], 0
0x898A66: retn    4
0x898A69: mov     ecx, [ecx+0DCh]
0x898A6F: pop     edi
0x898A70: pop     esi
0x898A71: mov     dword ptr [ecx+eax*4], 0
0x898A78: retn    4
