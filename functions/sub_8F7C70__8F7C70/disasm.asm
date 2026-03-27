0x8F7C70: push    esi
0x8F7C71: mov     esi, ecx
0x8F7C73: mov     eax, [esi+14h]
0x8F7C76: test    eax, eax
0x8F7C78: js      short loc_8F7CAD
0x8F7C7A: mov     ecx, ds:0BA9DE4h
0x8F7C80: mov     edx, large fs:2Ch
0x8F7C87: mov     ecx, [edx+ecx*4]
0x8F7C8A: mov     ecx, [ecx+19Ch]
0x8F7C90: test    ecx, ecx
0x8F7C92: jnz     short loc_8F7C9A
0x8F7C94: mov     ecx, ds:0BA7D9Ch
0x8F7C9A: mov     edx, [esi+0Ch]
0x8F7C9D: and     eax, 3FFFFFFFh
0x8F7CA2: push    14h
0x8F7CA4: shl     eax, 1
0x8F7CA6: push    eax
0x8F7CA7: push    edx
0x8F7CA8: call    sub_8A75D0
0x8F7CAD: mov     dword ptr [esi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x8F7CB3: pop     esi
0x8F7CB4: retn
