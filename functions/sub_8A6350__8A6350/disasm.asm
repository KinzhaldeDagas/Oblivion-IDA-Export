0x8A6350: push    esi
0x8A6351: mov     esi, [ecx+0A4h]
0x8A6357: xor     eax, eax
0x8A6359: test    esi, esi
0x8A635B: push    edi
0x8A635C: jle     short loc_8A6374
0x8A635E: mov     edx, [ecx+0A0h]
0x8A6364: mov     edi, [esp+8+arg_0]
0x8A6368: cmp     [edx], edi
0x8A636A: jz      short loc_8A6389
0x8A636C: inc     eax
0x8A636D: add     edx, 4
0x8A6370: cmp     eax, esi
0x8A6372: jl      short loc_8A6368
0x8A6374: mov     edx, [ecx+0A0h]
0x8A637A: pop     edi
0x8A637B: or      eax, 0FFFFFFFFh
0x8A637E: pop     esi
0x8A637F: mov     dword ptr [edx+eax*4], 0
0x8A6386: retn    4
0x8A6389: mov     ecx, [ecx+0A0h]
0x8A638F: pop     edi
0x8A6390: pop     esi
0x8A6391: mov     dword ptr [ecx+eax*4], 0
0x8A6398: retn    4
