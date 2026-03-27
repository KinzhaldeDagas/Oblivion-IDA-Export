0x494410: mov     eax, ecx
0x494412: mov     ecx, [esp+arg_0]
0x494416: mov     ecx, [ecx]
0x494418: sub     ecx, 0
0x49441B: jz      short loc_494466
0x49441D: sub     ecx, 1
0x494420: jnz     short locret_494471
0x494422: mov     edx, [eax+8]
0x494425: lea     edx, [edx+eax+10h]
0x494429: add     edx, 0FFFFFFFFh
0x49442C: lea     esp, [esp+0]
0x494430: mov     cl, [edx+1]
0x494433: add     edx, 1
0x494436: test    cl, cl
0x494438: jnz     short loc_494430
0x49443A: mov     cx, ds:0A3D9B0h
0x494441: mov     [edx], cx
0x494444: mov     cl, ds:0A3D9B2h
0x49444A: mov     [edx+2], cl
0x49444D: lea     edx, [eax+10h]
0x494450: push    esi
0x494451: lea     esi, [edx+1]
0x494454: mov     cl, [edx]
0x494456: add     edx, 1
0x494459: test    cl, cl
0x49445B: jnz     short loc_494454
0x49445D: sub     edx, esi
0x49445F: mov     [eax+8], edx
0x494462: pop     esi
0x494463: retn    4
0x494466: mov     byte ptr [eax+10h], 0
0x49446A: mov     dword ptr [eax+8], 0
0x494471: retn    4
