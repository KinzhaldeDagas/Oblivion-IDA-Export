0x8E8A10: push    esi
0x8E8A11: mov     esi, ecx
0x8E8A13: mov     eax, [esi+14h]
0x8E8A16: push    edi
0x8E8A17: xor     edi, edi
0x8E8A19: test    eax, eax
0x8E8A1B: mov     dword ptr [esi], offset off_A9AC24
0x8E8A21: jle     short loc_8E8A49
0x8E8A23: mov     eax, [esi+10h]
0x8E8A26: mov     ecx, [eax+edi*8]
0x8E8A29: cmp     word ptr [ecx+4], 0
0x8E8A2E: jz      short loc_8E8A41
0x8E8A30: dec     word ptr [ecx+6]
0x8E8A34: cmp     word ptr [ecx+6], 0
0x8E8A39: jnz     short loc_8E8A41
0x8E8A3B: mov     edx, [ecx]
0x8E8A3D: push    1
0x8E8A3F: call    dword ptr [edx]
0x8E8A41: mov     eax, [esi+14h]
0x8E8A44: inc     edi
0x8E8A45: cmp     edi, eax
0x8E8A47: jl      short loc_8E8A23
0x8E8A49: mov     eax, [esi+18h]
0x8E8A4C: test    eax, eax
0x8E8A4E: js      short loc_8E8A84
0x8E8A50: mov     ecx, ds:0BA9DE4h
0x8E8A56: mov     edx, large fs:2Ch
0x8E8A5D: mov     ecx, [edx+ecx*4]
0x8E8A60: mov     ecx, [ecx+19Ch]
0x8E8A66: test    ecx, ecx
0x8E8A68: jnz     short loc_8E8A70
0x8E8A6A: mov     ecx, ds:0BA7D9Ch
0x8E8A70: mov     edx, [esi+10h]
0x8E8A73: and     eax, 3FFFFFFFh
0x8E8A78: push    14h
0x8E8A7A: shl     eax, 3
0x8E8A7D: push    eax
0x8E8A7E: push    edx
0x8E8A7F: call    sub_8A75D0
0x8E8A84: pop     edi
0x8E8A85: mov     dword ptr [esi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x8E8A8B: pop     esi
0x8E8A8C: retn
