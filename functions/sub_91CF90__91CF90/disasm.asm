0x91CF90: push    esi
0x91CF91: mov     esi, ecx
0x91CF93: mov     eax, [esi+10h]
0x91CF96: test    eax, eax
0x91CF98: js      short loc_91CFCE
0x91CF9A: mov     ecx, ds:0BA9DE4h
0x91CFA0: mov     edx, large fs:2Ch
0x91CFA7: mov     ecx, [edx+ecx*4]
0x91CFAA: mov     ecx, [ecx+19Ch]
0x91CFB0: test    ecx, ecx
0x91CFB2: jnz     short loc_91CFBA
0x91CFB4: mov     ecx, ds:0BA7D9Ch
0x91CFBA: mov     edx, [esi+8]
0x91CFBD: and     eax, 3FFFFFFFh
0x91CFC2: push    14h
0x91CFC4: shl     eax, 2
0x91CFC7: push    eax
0x91CFC8: push    edx
0x91CFC9: call    sub_8A75D0
0x91CFCE: mov     dword ptr [esi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x91CFD4: pop     esi
0x91CFD5: retn
