0x47D2D0: mov     cx, [esp+arg_4]
0x47D2D5: cmp     cx, 0Ch
0x47D2D9: push    esi
0x47D2DA: push    edi
0x47D2DB: mov     di, word ptr [esp+8+arg_0]
0x47D2E0: movzx   esi, di
0x47D2E3: movzx   eax, cx
0x47D2E6: jbe     short loc_47D2ED
0x47D2E8: mov     eax, 0Bh
0x47D2ED: movzx   edx, ax
0x47D2F0: movzx   eax, word ptr ds:0B06710h[edx*2]
0x47D2F8: cmp     di, ax
0x47D2FB: jb      short loc_47D303
0x47D2FD: add     eax, 0FFFFFFFFh
0x47D300: movzx   esi, ax
0x47D303: movzx   eax, si
0x47D306: xor     ecx, ecx
0x47D308: test    edx, edx
0x47D30A: pop     edi
0x47D30B: mov     [esp+4+arg_0], eax
0x47D30F: pop     esi
0x47D310: jle     short locret_47D321
0x47D312: add     ax, ds:0B06710h[ecx*2]
0x47D31A: add     ecx, 1
0x47D31D: cmp     ecx, edx
0x47D31F: jl      short loc_47D312
0x47D321: retn
