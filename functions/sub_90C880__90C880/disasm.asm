0x90C880: push    esi
0x90C881: mov     esi, ecx
0x90C883: mov     eax, [esi+2Ch]
0x90C886: test    eax, eax
0x90C888: js      short loc_90C8C1
0x90C88A: mov     ecx, ds:0BA9DE4h
0x90C890: mov     edx, large fs:2Ch
0x90C897: mov     ecx, [edx+ecx*4]
0x90C89A: mov     ecx, [ecx+19Ch]
0x90C8A0: test    ecx, ecx
0x90C8A2: jnz     short loc_90C8AA
0x90C8A4: mov     ecx, ds:0BA7D9Ch
0x90C8AA: and     eax, 3FFFFFFFh
0x90C8AF: lea     edx, [eax+eax*2]
0x90C8B2: mov     eax, [esi+24h]
0x90C8B5: push    14h
0x90C8B7: shl     edx, 4
0x90C8BA: push    edx
0x90C8BB: push    eax
0x90C8BC: call    sub_8A75D0
0x90C8C1: mov     dword ptr [esi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x90C8C7: pop     esi
0x90C8C8: retn
