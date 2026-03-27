0x8DBCE0: push    ebx
0x8DBCE1: mov     ebx, large fs:2Ch
0x8DBCE8: push    esi
0x8DBCE9: mov     esi, ecx
0x8DBCEB: mov     eax, [esi+40h]
0x8DBCEE: test    eax, eax
0x8DBCF0: push    edi
0x8DBCF1: mov     edi, ds:0BA9DE4h
0x8DBCF7: js      short loc_8DBD23
0x8DBCF9: mov     ecx, [ebx+edi*4]
0x8DBCFC: mov     ecx, [ecx+19Ch]
0x8DBD02: test    ecx, ecx
0x8DBD04: jnz     short loc_8DBD0C
0x8DBD06: mov     ecx, ds:0BA7D9Ch
0x8DBD0C: and     eax, 3FFFFFFFh
0x8DBD11: lea     edx, [eax+eax*4]
0x8DBD14: mov     eax, [esi+38h]
0x8DBD17: push    14h
0x8DBD19: shl     edx, 2
0x8DBD1C: push    edx
0x8DBD1D: push    eax
0x8DBD1E: call    sub_8A75D0
0x8DBD23: mov     eax, [esi+28h]
0x8DBD26: test    eax, eax
0x8DBD28: js      short loc_8DBD51
0x8DBD2A: mov     ecx, [ebx+edi*4]
0x8DBD2D: mov     ecx, [ecx+19Ch]
0x8DBD33: test    ecx, ecx
0x8DBD35: jnz     short loc_8DBD3D
0x8DBD37: mov     ecx, ds:0BA7D9Ch
0x8DBD3D: mov     edx, [esi+20h]
0x8DBD40: and     eax, 3FFFFFFFh
0x8DBD45: push    14h
0x8DBD47: shl     eax, 5
0x8DBD4A: push    eax
0x8DBD4B: push    edx
0x8DBD4C: call    sub_8A75D0
0x8DBD51: mov     eax, [esi+14h]
0x8DBD54: test    eax, eax
0x8DBD56: js      short loc_8DBD7C
0x8DBD58: mov     ecx, [ebx+edi*4]
0x8DBD5B: mov     ecx, [ecx+19Ch]
0x8DBD61: test    ecx, ecx
0x8DBD63: jnz     short loc_8DBD6B
0x8DBD65: mov     ecx, ds:0BA7D9Ch
0x8DBD6B: mov     edx, [esi+0Ch]
0x8DBD6E: push    14h
0x8DBD70: and     eax, 3FFFFFFFh
0x8DBD75: push    eax
0x8DBD76: push    edx
0x8DBD77: call    sub_8A75D0
0x8DBD7C: pop     edi
0x8DBD7D: mov     dword ptr [esi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x8DBD83: pop     esi
0x8DBD84: pop     ebx
0x8DBD85: retn
