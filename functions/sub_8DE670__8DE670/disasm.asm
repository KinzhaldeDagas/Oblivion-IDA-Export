0x8DE670: push    esi
0x8DE671: mov     esi, [ecx+60h]
0x8DE674: xor     eax, eax
0x8DE676: test    esi, esi
0x8DE678: push    edi
0x8DE679: jle     short loc_8DE68E
0x8DE67B: mov     edx, [ecx+5Ch]
0x8DE67E: mov     edi, [esp+8+arg_0]
0x8DE682: cmp     [edx], edi
0x8DE684: jz      short loc_8DE691
0x8DE686: inc     eax
0x8DE687: add     edx, 4
0x8DE68A: cmp     eax, esi
0x8DE68C: jl      short loc_8DE682
0x8DE68E: or      eax, 0FFFFFFFFh
0x8DE691: mov     edi, [ecx+60h]
0x8DE694: dec     edi
0x8DE695: mov     edx, edi
0x8DE697: cmp     eax, edx
0x8DE699: mov     [ecx+60h], edi
0x8DE69C: jge     short loc_8DE6B4
0x8DE69E: mov     edi, edi
0x8DE6A0: mov     edx, [ecx+5Ch]
0x8DE6A3: mov     esi, [edx+eax*4+4]
0x8DE6A7: lea     edx, [edx+eax*4]
0x8DE6AA: mov     [edx], esi
0x8DE6AC: mov     edx, [ecx+60h]
0x8DE6AF: inc     eax
0x8DE6B0: cmp     eax, edx
0x8DE6B2: jl      short loc_8DE6A0
0x8DE6B4: pop     edi
0x8DE6B5: pop     esi
0x8DE6B6: retn    4
