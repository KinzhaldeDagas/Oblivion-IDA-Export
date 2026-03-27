0x7E2430: fld1
0x7E2432: fcom    dword ptr [ecx+20h]
0x7E2435: fnstsw  ax
0x7E2437: fld     [esp+arg_0]
0x7E243B: test    ah, 41h
0x7E243E: jp      short loc_7E2449
0x7E2440: fcom    st(1)
0x7E2442: fnstsw  ax
0x7E2444: test    ah, 5
0x7E2447: jnp     short loc_7E246B
0x7E2449: fxch    st(1)
0x7E244B: fcom    dword ptr [ecx+20h]
0x7E244E: fnstsw  ax
0x7E2450: test    ah, 41h
0x7E2453: jnz     short loc_7E247A
0x7E2455: fcomp   st(1)
0x7E2457: fnstsw  ax
0x7E2459: test    ah, 41h
0x7E245C: jp      short loc_7E247C
0x7E245E: mov     dword ptr [ecx+24h], 0
0x7E2465: fstp    dword ptr [ecx+20h]
0x7E2468: retn    4
0x7E246B: fstp    st(1)
0x7E246D: mov     dword ptr [ecx+24h], 0
0x7E2474: fstp    dword ptr [ecx+20h]
0x7E2477: retn    4
0x7E247A: fstp    st
0x7E247C: fstp    dword ptr [ecx+20h]
0x7E247F: retn    4
