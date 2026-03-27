0x8B17C0: mov     eax, [esp+arg_4]
0x8B17C4: push    ebx
0x8B17C5: push    esi
0x8B17C6: push    edi
0x8B17C7: mov     edi, [esp+0Ch+arg_0]
0x8B17CB: mov     esi, eax
0x8B17CD: sub     edi, eax
0x8B17CF: nop
0x8B17D0: mov     al, [edi+esi]
0x8B17D3: test    al, al
0x8B17D5: jnz     short loc_8B17DC
0x8B17D7: cmp     byte ptr [esi], 0
0x8B17DA: jz      short loc_8B1824
0x8B17DC: cmp     al, 41h ; 'A'
0x8B17DE: jl      short loc_8B17EB
0x8B17E0: cmp     al, 5Ah ; 'Z'
0x8B17E2: jg      short loc_8B17EB
0x8B17E4: mov     bl, al
0x8B17E6: add     bl, 20h ; ' '
0x8B17E9: jmp     short loc_8B17ED
0x8B17EB: mov     bl, al
0x8B17ED: mov     cl, [esi]
0x8B17EF: cmp     cl, 41h ; 'A'
0x8B17F2: jl      short loc_8B1800
0x8B17F4: cmp     cl, 5Ah ; 'Z'
0x8B17F7: jg      short loc_8B1800
0x8B17F9: mov     dl, cl
0x8B17FB: add     dl, 20h ; ' '
0x8B17FE: jmp     short loc_8B1802
0x8B1800: mov     dl, cl
0x8B1802: cmp     bl, dl
0x8B1804: jl      short loc_8B182A
0x8B1806: cmp     al, 41h ; 'A'
0x8B1808: jl      short loc_8B1810
0x8B180A: cmp     al, 5Ah ; 'Z'
0x8B180C: jg      short loc_8B1810
0x8B180E: add     al, 20h ; ' '
0x8B1810: cmp     cl, 41h ; 'A'
0x8B1813: jl      short loc_8B181D
0x8B1815: cmp     cl, 5Ah ; 'Z'
0x8B1818: jg      short loc_8B181D
0x8B181A: add     cl, 20h ; ' '
0x8B181D: cmp     al, cl
0x8B181F: jg      short loc_8B1831
0x8B1821: inc     esi
0x8B1822: jmp     short loc_8B17D0
0x8B1824: pop     edi
0x8B1825: pop     esi
0x8B1826: xor     eax, eax
0x8B1828: pop     ebx
0x8B1829: retn
0x8B182A: pop     edi
0x8B182B: pop     esi
0x8B182C: or      eax, 0FFFFFFFFh
0x8B182F: pop     ebx
0x8B1830: retn
0x8B1831: pop     edi
0x8B1832: pop     esi
0x8B1833: mov     eax, 1
0x8B1838: pop     ebx
0x8B1839: retn
