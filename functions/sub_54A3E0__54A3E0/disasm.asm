0x54A3E0: mov     eax, [esp+arg_0]
0x54A3E4: cmp     eax, [ecx+10h]
0x54A3E7: jnb     short loc_54A40C
0x54A3E9: mov     ecx, [ecx+0Ch]
0x54A3EC: fld     dword ptr [ecx+eax*4]
0x54A3EF: lea     ecx, [ecx+eax*4]
0x54A3F2: fld     [esp+arg_4]
0x54A3F6: fld     st
0x54A3F8: fucomp  st(2)
0x54A3FA: fnstsw  ax
0x54A3FC: fstp    st(1)
0x54A3FE: test    ah, 44h
0x54A401: jnp     short loc_54A40A
0x54A403: fstp    dword ptr [ecx]
0x54A405: mov     al, 1
0x54A407: retn    8
0x54A40A: fstp    st
0x54A40C: xor     al, al
0x54A40E: retn    8
