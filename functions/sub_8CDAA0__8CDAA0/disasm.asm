0x8CDAA0: push    esi
0x8CDAA1: mov     esi, ecx
0x8CDAA3: mov     dword ptr [esi], offset off_A99BF0
0x8CDAA9: mov     eax, [esi+98h]
0x8CDAAF: test    eax, eax
0x8CDAB1: js      short loc_8CDAEA
0x8CDAB3: mov     ecx, ds:0BA9DE4h
0x8CDAB9: mov     edx, large fs:2Ch
0x8CDAC0: mov     ecx, [edx+ecx*4]
0x8CDAC3: mov     ecx, [ecx+19Ch]
0x8CDAC9: test    ecx, ecx
0x8CDACB: jnz     short loc_8CDAD3
0x8CDACD: mov     ecx, ds:0BA7D9Ch
0x8CDAD3: mov     edx, [esi+90h]
0x8CDAD9: and     eax, 3FFFFFFFh
0x8CDADE: push    14h
0x8CDAE0: shl     eax, 2
0x8CDAE3: push    eax
0x8CDAE4: push    edx
0x8CDAE5: call    sub_8A75D0
0x8CDAEA: mov     ecx, esi
0x8CDAEC: pop     esi
0x8CDAED: jmp     sub_8DE8B0
