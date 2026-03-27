0x90A430: push    esi
0x90A431: mov     esi, ecx
0x90A433: mov     eax, [esi+14h]
0x90A436: test    eax, eax
0x90A438: js      short loc_90A46E
0x90A43A: mov     ecx, ds:0BA9DE4h
0x90A440: mov     edx, large fs:2Ch
0x90A447: mov     ecx, [edx+ecx*4]
0x90A44A: mov     ecx, [ecx+19Ch]
0x90A450: test    ecx, ecx
0x90A452: jnz     short loc_90A45A
0x90A454: mov     ecx, ds:0BA7D9Ch
0x90A45A: mov     edx, [esi+0Ch]
0x90A45D: and     eax, 3FFFFFFFh
0x90A462: push    14h
0x90A464: shl     eax, 3
0x90A467: push    eax
0x90A468: push    edx
0x90A469: call    sub_8A75D0
0x90A46E: mov     dword ptr [esi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x90A474: pop     esi
0x90A475: retn
