0x8F6E30: push    esi
0x8F6E31: mov     esi, ecx
0x8F6E33: mov     dword ptr [esi], offset off_A9B510
0x8F6E39: mov     eax, [esi+38h]
0x8F6E3C: test    eax, eax
0x8F6E3E: js      short loc_8F6E74
0x8F6E40: mov     ecx, ds:0BA9DE4h
0x8F6E46: mov     edx, large fs:2Ch
0x8F6E4D: mov     ecx, [edx+ecx*4]
0x8F6E50: mov     ecx, [ecx+19Ch]
0x8F6E56: test    ecx, ecx
0x8F6E58: jnz     short loc_8F6E60
0x8F6E5A: mov     ecx, ds:0BA7D9Ch
0x8F6E60: mov     edx, [esi+30h]
0x8F6E63: and     eax, 3FFFFFFFh
0x8F6E68: push    14h
0x8F6E6A: shl     eax, 2
0x8F6E6D: push    eax
0x8F6E6E: push    edx
0x8F6E6F: call    sub_8A75D0
0x8F6E74: mov     dword ptr [esi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x8F6E7A: pop     esi
0x8F6E7B: retn
