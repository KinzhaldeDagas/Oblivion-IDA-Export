0x8BC310: push    esi
0x8BC311: mov     esi, ecx
0x8BC313: mov     eax, [esi+8]
0x8BC316: test    eax, eax
0x8BC318: js      short loc_8BC34A
0x8BC31A: mov     ecx, ds:0BA9DE4h
0x8BC320: mov     edx, large fs:2Ch
0x8BC327: mov     ecx, [edx+ecx*4]
0x8BC32A: mov     ecx, [ecx+19Ch]
0x8BC330: test    ecx, ecx
0x8BC332: jnz     short loc_8BC33A
0x8BC334: mov     ecx, ds:0BA7D9Ch
0x8BC33A: mov     edx, [esi]
0x8BC33C: push    14h
0x8BC33E: and     eax, 3FFFFFFFh
0x8BC343: push    eax
0x8BC344: push    edx
0x8BC345: call    sub_8A75D0
0x8BC34A: test    [esp+4+arg_0], 1
0x8BC34F: jz      short loc_8BC361
0x8BC351: mov     ecx, ds:0BA7D98h
0x8BC357: mov     eax, [ecx]
0x8BC359: push    14h
0x8BC35B: push    0Ch
0x8BC35D: push    esi
0x8BC35E: call    dword ptr [eax+14h]
0x8BC361: mov     eax, esi
0x8BC363: pop     esi
0x8BC364: retn    4
