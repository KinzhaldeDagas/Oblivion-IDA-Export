0x8BB8A0: push    esi
0x8BB8A1: mov     esi, ecx
0x8BB8A3: mov     eax, [esi+1Ch]
0x8BB8A6: test    eax, eax
0x8BB8A8: js      short loc_8BB8DE
0x8BB8AA: mov     ecx, ds:0BA9DE4h
0x8BB8B0: mov     edx, large fs:2Ch
0x8BB8B7: mov     ecx, [edx+ecx*4]
0x8BB8BA: mov     ecx, [ecx+19Ch]
0x8BB8C0: test    ecx, ecx
0x8BB8C2: jnz     short loc_8BB8CA
0x8BB8C4: mov     ecx, ds:0BA7D9Ch
0x8BB8CA: mov     edx, [esi+14h]
0x8BB8CD: and     eax, 3FFFFFFFh
0x8BB8D2: push    14h
0x8BB8D4: shl     eax, 2
0x8BB8D7: push    eax
0x8BB8D8: push    edx
0x8BB8D9: call    sub_8A75D0
0x8BB8DE: lea     ecx, [esi+8]
0x8BB8E1: call    sub_8B0E60
0x8BB8E6: mov     dword ptr [esi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x8BB8EC: pop     esi
0x8BB8ED: retn
