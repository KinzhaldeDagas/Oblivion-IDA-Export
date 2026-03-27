0x8A7A10: push    esi
0x8A7A11: mov     esi, ecx
0x8A7A13: push    edi
0x8A7A14: mov     edi, [esi+14h]
0x8A7A17: test    edi, edi
0x8A7A19: mov     dword ptr [esi], offset off_A975F0
0x8A7A1F: jz      short loc_8A7A38
0x8A7A21: push    edi; lpCriticalSection
0x8A7A22: call    dword ptr ds:0A28068h
0x8A7A28: mov     ecx, ds:0BA7D98h
0x8A7A2E: mov     eax, [ecx]
0x8A7A30: push    12h
0x8A7A32: push    18h
0x8A7A34: push    edi
0x8A7A35: call    dword ptr [eax+14h]
0x8A7A38: mov     eax, [esi+10h]
0x8A7A3B: test    eax, eax
0x8A7A3D: js      short loc_8A7A73
0x8A7A3F: mov     ecx, ds:0BA9DE4h
0x8A7A45: mov     edx, large fs:2Ch
0x8A7A4C: mov     ecx, [edx+ecx*4]
0x8A7A4F: mov     ecx, [ecx+19Ch]
0x8A7A55: test    ecx, ecx
0x8A7A57: jnz     short loc_8A7A5F
0x8A7A59: mov     ecx, ds:0BA7D9Ch
0x8A7A5F: mov     edx, [esi+8]
0x8A7A62: and     eax, 3FFFFFFFh
0x8A7A67: push    14h
0x8A7A69: shl     eax, 2
0x8A7A6C: push    eax
0x8A7A6D: push    edx
0x8A7A6E: call    sub_8A75D0
0x8A7A73: pop     edi
0x8A7A74: mov     dword ptr [esi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x8A7A7A: pop     esi
0x8A7A7B: retn
