0x8BC370: push    esi
0x8BC371: mov     esi, ecx
0x8BC373: mov     eax, [esi+8]
0x8BC376: push    edi
0x8BC377: xor     edi, edi
0x8BC379: test    eax, eax
0x8BC37B: mov     dword ptr [esi], offset off_A98360
0x8BC381: jle     short loc_8BC39B
0x8BC383: mov     eax, [esi+4]
0x8BC386: mov     ecx, [eax+edi*4]
0x8BC389: test    ecx, ecx
0x8BC38B: jz      short loc_8BC393
0x8BC38D: mov     edx, [ecx]
0x8BC38F: push    1
0x8BC391: call    dword ptr [edx]
0x8BC393: mov     eax, [esi+8]
0x8BC396: inc     edi
0x8BC397: cmp     edi, eax
0x8BC399: jl      short loc_8BC383
0x8BC39B: mov     eax, [esi+0Ch]
0x8BC39E: test    eax, eax
0x8BC3A0: js      short loc_8BC3D6
0x8BC3A2: mov     ecx, ds:0BA9DE4h
0x8BC3A8: mov     edx, large fs:2Ch
0x8BC3AF: mov     ecx, [edx+ecx*4]
0x8BC3B2: mov     ecx, [ecx+19Ch]
0x8BC3B8: test    ecx, ecx
0x8BC3BA: jnz     short loc_8BC3C2
0x8BC3BC: mov     ecx, ds:0BA7D9Ch
0x8BC3C2: mov     edx, [esi+4]
0x8BC3C5: and     eax, 3FFFFFFFh
0x8BC3CA: push    14h
0x8BC3CC: shl     eax, 2
0x8BC3CF: push    eax
0x8BC3D0: push    edx
0x8BC3D1: call    sub_8A75D0
0x8BC3D6: pop     edi
0x8BC3D7: mov     dword ptr [esi], offset off_A99B50
0x8BC3DD: pop     esi
0x8BC3DE: retn
