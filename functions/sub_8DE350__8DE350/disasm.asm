0x8DE350: push    ebx
0x8DE351: mov     ebx, large fs:2Ch
0x8DE358: push    esi
0x8DE359: mov     esi, ecx
0x8DE35B: mov     dword ptr [esi], offset off_A9A4E4
0x8DE361: mov     eax, [esi+64h]
0x8DE364: test    eax, eax
0x8DE366: push    edi
0x8DE367: mov     edi, ds:0BA9DE4h
0x8DE36D: js      short loc_8DE396
0x8DE36F: mov     ecx, [ebx+edi*4]
0x8DE372: mov     ecx, [ecx+19Ch]
0x8DE378: test    ecx, ecx
0x8DE37A: jnz     short loc_8DE382
0x8DE37C: mov     ecx, ds:0BA7D9Ch
0x8DE382: mov     edx, [esi+5Ch]
0x8DE385: and     eax, 3FFFFFFFh
0x8DE38A: push    14h
0x8DE38C: shl     eax, 2
0x8DE38F: push    eax
0x8DE390: push    edx
0x8DE391: call    sub_8A75D0
0x8DE396: mov     eax, [esi+4Ch]
0x8DE399: test    eax, eax
0x8DE39B: js      short loc_8DE3C4
0x8DE39D: mov     ecx, [ebx+edi*4]
0x8DE3A0: mov     ecx, [ecx+19Ch]
0x8DE3A6: test    ecx, ecx
0x8DE3A8: jnz     short loc_8DE3B0
0x8DE3AA: mov     ecx, ds:0BA7D9Ch
0x8DE3B0: mov     edx, [esi+44h]
0x8DE3B3: and     eax, 3FFFFFFFh
0x8DE3B8: push    14h
0x8DE3BA: shl     eax, 2
0x8DE3BD: push    eax
0x8DE3BE: push    edx
0x8DE3BF: call    sub_8A75D0
0x8DE3C4: mov     eax, [esi+3Ch]
0x8DE3C7: test    eax, eax
0x8DE3C9: js      short loc_8DE3F2
0x8DE3CB: mov     ecx, [ebx+edi*4]
0x8DE3CE: mov     ecx, [ecx+19Ch]
0x8DE3D4: test    ecx, ecx
0x8DE3D6: jnz     short loc_8DE3DE
0x8DE3D8: mov     ecx, ds:0BA7D9Ch
0x8DE3DE: mov     edx, [esi+34h]
0x8DE3E1: and     eax, 3FFFFFFFh
0x8DE3E6: push    14h
0x8DE3E8: shl     eax, 2
0x8DE3EB: push    eax
0x8DE3EC: push    edx
0x8DE3ED: call    sub_8A75D0
0x8DE3F2: pop     edi
0x8DE3F3: mov     dword ptr [esi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x8DE3F9: pop     esi
0x8DE3FA: pop     ebx
0x8DE3FB: retn
