0x571720: fld     [esp+arg_4]
0x571724: push    esi
0x571725: fld     [esp+4+arg_0]
0x571729: push    edi
0x57172A: mov     edi, [esp+8+arg_8]
0x57172E: xor     edx, edx
0x571730: lea     esi, [ecx+8]
0x571733: fld     dword ptr [esi-8]
0x571736: fld     st(1)
0x571738: fucompp
0x57173A: fnstsw  ax
0x57173C: test    ah, 44h
0x57173F: jp      short loc_571753
0x571741: fld     dword ptr [esi-4]
0x571744: fld     st(2)
0x571746: fucompp
0x571748: fnstsw  ax
0x57174A: test    ah, 44h
0x57174D: jp      short loc_571753
0x57174F: cmp     [esi], edi
0x571751: jz      short loc_57176C
0x571753: add     edx, 1
0x571756: add     esi, 1Ch
0x571759: cmp     edx, 0C8h ; 'È'
0x57175F: jl      short loc_571733
0x571761: fstp    st(1)
0x571763: pop     edi
0x571764: fstp    st
0x571766: xor     eax, eax
0x571768: pop     esi
0x571769: retn    0Ch
0x57176C: lea     eax, ds:0[edx*8]
0x571773: fstp    st(1)
0x571775: sub     eax, edx
0x571777: fstp    st
0x571779: mov     eax, [ecx+eax*4+10h]
0x57177D: pop     edi
0x57177E: pop     esi
0x57177F: retn    0Ch
