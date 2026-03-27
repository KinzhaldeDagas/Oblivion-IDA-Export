0x8D9930: push    esi
0x8D9931: mov     esi, ecx
0x8D9933: mov     ecx, [esi+10h]
0x8D9936: test    ecx, ecx
0x8D9938: mov     dword ptr [esi], offset off_A9A274
0x8D993E: jz      short loc_8D9945
0x8D9940: call    sub_8BC730
0x8D9945: mov     ecx, [esi+14h]
0x8D9948: test    ecx, ecx
0x8D994A: jz      short loc_8D9951
0x8D994C: call    sub_8BC730
0x8D9951: mov     ecx, [esi+0Ch]
0x8D9954: test    ecx, ecx
0x8D9956: jz      short loc_8D9970
0x8D9958: cmp     word ptr [ecx+4], 0
0x8D995D: jz      short loc_8D9970
0x8D995F: dec     word ptr [ecx+6]
0x8D9963: cmp     word ptr [ecx+6], 0
0x8D9968: jnz     short loc_8D9970
0x8D996A: mov     eax, [ecx]
0x8D996C: push    1
0x8D996E: call    dword ptr [eax]
0x8D9970: test    [esp+4+arg_0], 1
0x8D9975: mov     dword ptr [esi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x8D997B: jz      short loc_8D9990
0x8D997D: movzx   eax, word ptr [esi+4]
0x8D9981: mov     ecx, ds:0BA7D98h
0x8D9987: mov     edx, [ecx]
0x8D9989: push    29h ; ')'
0x8D998B: push    eax
0x8D998C: push    esi
0x8D998D: call    dword ptr [edx+14h]
0x8D9990: mov     eax, esi
0x8D9992: pop     esi
0x8D9993: retn    4
