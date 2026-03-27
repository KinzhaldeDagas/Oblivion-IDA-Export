0x6D73F0: fld     dword ptr [ecx]
0x6D73F2: mov     edx, [esp+arg_0]
0x6D73F6: fld     dword ptr [edx]
0x6D73F8: fucompp
0x6D73FA: fnstsw  ax
0x6D73FC: test    ah, 44h
0x6D73FF: jp      short loc_6D7433
0x6D7401: mov     edx, [edx+4]
0x6D7404: mov     eax, [ecx+4]
0x6D7407: mov     cl, [eax]
0x6D7409: cmp     cl, [edx]
0x6D740B: jnz     short loc_6D7427
0x6D740D: test    cl, cl
0x6D740F: jz      short loc_6D7423
0x6D7411: mov     cl, [eax+1]
0x6D7414: cmp     cl, [edx+1]
0x6D7417: jnz     short loc_6D7427
0x6D7419: add     eax, 2
0x6D741C: add     edx, 2
0x6D741F: test    cl, cl
0x6D7421: jnz     short loc_6D7407
0x6D7423: xor     eax, eax
0x6D7425: jmp     short loc_6D742C
0x6D7427: sbb     eax, eax
0x6D7429: sbb     eax, 0FFFFFFFFh
0x6D742C: test    eax, eax
0x6D742E: jnz     short loc_6D7433
0x6D7430: retn    4
0x6D7433: mov     eax, 1
0x6D7438: retn    4
