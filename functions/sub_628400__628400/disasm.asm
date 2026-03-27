0x628400: push    esi
0x628401: mov     esi, ecx
0x628403: cmp     dword ptr [esi+2Ch], 0
0x628407: jz      short loc_628456
0x628409: mov     ecx, [esi+2Ch]
0x62840C: mov     eax, [ecx]
0x62840E: mov     edx, [eax+198h]
0x628414: push    0
0x628416: call    edx
0x628418: test    al, al
0x62841A: mov     eax, [esi]
0x62841C: jz      short loc_628433
0x62841E: mov     ecx, [esp+4+arg_0]
0x628422: mov     edx, [eax+51Ch]
0x628428: push    0
0x62842A: push    ecx
0x62842B: mov     ecx, esi
0x62842D: call    edx
0x62842F: pop     esi
0x628430: retn    4
0x628433: mov     ecx, [esi+2Ch]
0x628436: mov     edx, [esp+4+arg_0]
0x62843A: mov     eax, [eax+228h]
0x628440: push    1
0x628442: push    0
0x628444: push    0
0x628446: push    0
0x628448: push    1
0x62844A: push    1
0x62844C: push    0
0x62844E: push    0
0x628450: push    ecx
0x628451: push    edx
0x628452: mov     ecx, esi
0x628454: call    eax
0x628456: pop     esi
0x628457: retn    4
