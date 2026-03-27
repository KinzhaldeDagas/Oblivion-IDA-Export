0x8A6550: push    esi
0x8A6551: lea     esi, [ecx+0ACh]
0x8A6557: mov     ecx, [esi+4]
0x8A655A: xor     eax, eax
0x8A655C: test    ecx, ecx
0x8A655E: jle     short loc_8A656F
0x8A6560: mov     edx, [esi]
0x8A6562: cmp     dword ptr [edx], 0
0x8A6565: jz      short loc_8A65A0
0x8A6567: inc     eax
0x8A6568: add     edx, 4
0x8A656B: cmp     eax, ecx
0x8A656D: jl      short loc_8A6562
0x8A656F: mov     eax, [esi+8]
0x8A6572: mov     ecx, [esi+4]
0x8A6575: and     eax, 3FFFFFFFh
0x8A657A: cmp     ecx, eax
0x8A657C: jnz     short loc_8A6589
0x8A657E: push    4
0x8A6580: push    esi
0x8A6581: call    sub_8A6EE0
0x8A6586: add     esp, 8
0x8A6589: mov     ecx, [esi+4]
0x8A658C: mov     edx, [esi]
0x8A658E: mov     eax, [esp+4+arg_0]
0x8A6592: mov     [edx+ecx*4], eax
0x8A6595: mov     eax, [esi+4]
0x8A6598: inc     eax
0x8A6599: mov     [esi+4], eax
0x8A659C: pop     esi
0x8A659D: retn    4
0x8A65A0: test    eax, eax
0x8A65A2: jl      short loc_8A656F
0x8A65A4: mov     ecx, [esi]
0x8A65A6: mov     edx, [esp+4+arg_0]
0x8A65AA: mov     [ecx+eax*4], edx
0x8A65AD: pop     esi
0x8A65AE: retn    4
