0x6806B0: push    edi
0x6806B1: movzx   edi, word ptr ds:0B3BF08h
0x6806B8: cmp     di, 0FFFFh
0x6806BD: jnb     loc_680755
0x6806C3: cmp     dword ptr ds:0B3BF00h, 0
0x6806CA: jnz     short loc_6806D9
0x6806CC: push    1F4h
0x6806D1: call    sub_680620
0x6806D6: add     esp, 4
0x6806D9: mov     edx, ds:0B3BF00h
0x6806DF: movzx   eax, di
0x6806E2: mov     ecx, eax
0x6806E4: shl     ecx, 4
0x6806E7: or      byte ptr [ecx+edx+0Ch], 4
0x6806EC: lea     ecx, [ecx+edx+0Ch]
0x6806F0: push    esi
0x6806F1: movzx   esi, word ptr ds:0B3BF04h
0x6806F8: add     eax, 1
0x6806FB: cmp     eax, esi
0x6806FD: jge     short loc_680727
0x6806FF: mov     edx, ds:0B3BF00h
0x680705: mov     ecx, eax
0x680707: shl     ecx, 4
0x68070A: lea     ecx, [ecx+edx+0Ch]
0x68070E: mov     edi, edi
0x680710: test    byte ptr [ecx], 4
0x680713: jz      short loc_680721
0x680715: add     eax, 1
0x680718: add     ecx, 10h
0x68071B: cmp     eax, esi
0x68071D: jl      short loc_680710
0x68071F: jmp     short loc_680727
0x680721: mov     ds:0B3BF08h, ax
0x680727: cmp     ds:0B3BF08h, di
0x68072E: jnz     short loc_68074F
0x680730: lea     eax, [esi+64h]
0x680733: cmp     eax, 0FFFFh
0x680738: jle     short loc_68073F
0x68073A: mov     eax, 0FFFFh
0x68073F: push    eax
0x680740: call    sub_680620
0x680745: add     esp, 4
0x680748: mov     ds:0B3BF08h, si
0x68074F: pop     esi
0x680750: mov     ax, di
0x680753: pop     edi
0x680754: retn
0x680755: mov     ax, di
0x680758: pop     edi
0x680759: retn
