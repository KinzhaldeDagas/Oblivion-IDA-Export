0x93B660: mov     al, [ecx]
0x93B662: push    ebx
0x93B663: push    ebp
0x93B664: push    esi
0x93B665: push    edi
0x93B666: mov     edi, [esp+10h+arg_0]
0x93B66A: mov     [edi+8], al
0x93B66D: mov     dl, [ecx+4]
0x93B670: mov     [edi+9], dl
0x93B673: mov     esi, [ecx]
0x93B675: cmp     esi, 2
0x93B678: mov     ax, [ecx+2Ch]
0x93B67C: jl      short loc_93B6C0
0x93B67E: xor     edx, edx
0x93B680: mov     dx, [ecx+3Ch]
0x93B684: xor     ebx, ebx
0x93B686: cmp     dx, ax
0x93B689: jbe     short loc_93B696
0x93B68B: mov     ebx, edx
0x93B68D: mov     edx, eax
0x93B68F: mov     eax, ebx
0x93B691: mov     ebx, 1
0x93B696: cmp     esi, 2
0x93B699: jle     short loc_93B6BC
0x93B69B: xor     esi, esi
0x93B69D: mov     si, [ecx+4Ch]
0x93B6A1: cmp     si, ax
0x93B6A4: jbe     short loc_93B6AD
0x93B6A6: mov     ebp, esi
0x93B6A8: mov     esi, eax
0x93B6AA: mov     eax, ebp
0x93B6AC: inc     ebx
0x93B6AD: cmp     ebx, 1
0x93B6B0: jnz     short loc_93B6B8
0x93B6B2: mov     ebx, esi
0x93B6B4: mov     esi, edx
0x93B6B6: mov     edx, ebx
0x93B6B8: mov     [edi+4], si
0x93B6BC: mov     [edi+2], dx
0x93B6C0: mov     [edi], ax
0x93B6C3: mov     ebp, [ecx+4]
0x93B6C6: cmp     ebp, 2
0x93B6C9: mov     ax, [ecx+0ECh]
0x93B6D0: jl      short loc_93B72D
0x93B6D2: xor     edx, edx
0x93B6D4: mov     dx, [ecx+0FCh]
0x93B6DB: xor     ebx, ebx
0x93B6DD: cmp     dx, ax
0x93B6E0: jbe     short loc_93B6ED
0x93B6E2: mov     esi, edx
0x93B6E4: mov     edx, eax
0x93B6E6: mov     eax, esi
0x93B6E8: mov     ebx, 1
0x93B6ED: cmp     ebp, 2
0x93B6F0: jle     short loc_93B719
0x93B6F2: xor     esi, esi
0x93B6F4: mov     si, [ecx+10Ch]
0x93B6FB: cmp     si, ax
0x93B6FE: jbe     short loc_93B707
0x93B700: mov     ebp, esi
0x93B702: mov     esi, eax
0x93B704: mov     eax, ebp
0x93B706: inc     ebx
0x93B707: cmp     ebx, 1
0x93B70A: jnz     short loc_93B712
0x93B70C: mov     ebx, esi
0x93B70E: mov     esi, edx
0x93B710: mov     edx, ebx
0x93B712: mov     ebx, [ecx]
0x93B714: mov     [edi+ebx*2+4], si
0x93B719: mov     esi, [ecx]
0x93B71B: mov     [edi+esi*2+2], dx
0x93B720: mov     ecx, [ecx]
0x93B722: mov     [edi+ecx*2], ax
0x93B726: pop     edi
0x93B727: pop     esi
0x93B728: pop     ebp
0x93B729: pop     ebx
0x93B72A: retn    4
0x93B72D: mov     edx, [ecx]
0x93B72F: mov     [edi+edx*2], ax
0x93B733: pop     edi
0x93B734: pop     esi
0x93B735: pop     ebp
0x93B736: pop     ebx
0x93B737: retn    4
