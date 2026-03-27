0x7F2BA0: mov     eax, [esp+arg_0]
0x7F2BA4: cdq
0x7F2BA5: push    esi
0x7F2BA6: mov     esi, [ecx+14Ch]
0x7F2BAC: idiv    esi
0x7F2BAE: add     [ecx+84h], edx
0x7F2BB4: cmp     byte ptr [ecx+180h], 0
0x7F2BBB: mov     eax, [ecx+84h]
0x7F2BC1: jz      short loc_7F2BD6
0x7F2BC3: cmp     eax, esi
0x7F2BC5: jl      short loc_7F2BD6
0x7F2BC7: sub     eax, esi
0x7F2BC9: mov     [ecx+84h], eax
0x7F2BCF: mov     byte ptr [ecx+180h], 0
0x7F2BD6: sub     [ecx+190h], edx
0x7F2BDC: cmp     byte ptr [ecx+180h], 0
0x7F2BE3: pop     esi
0x7F2BE4: jnz     short locret_7F2BFA
0x7F2BE6: mov     eax, [ecx+88h]
0x7F2BEC: cmp     [ecx+84h], eax
0x7F2BF2: jl      short locret_7F2BFA
0x7F2BF4: mov     [ecx+84h], eax
0x7F2BFA: retn    4
