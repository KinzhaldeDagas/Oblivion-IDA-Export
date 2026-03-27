0x88EDC0: mov     eax, ds:0BA7A8Ch
0x88EDC5: cmp     eax, 3
0x88EDC8: push    esi
0x88EDC9: mov     esi, ecx
0x88EDCB: jz      short loc_88EDEA
0x88EDCD: mov     cl, [esi+0Ch]
0x88EDD0: shr     cl, 6
0x88EDD3: test    cl, 1
0x88EDD6: jz      short loc_88EDEC
0x88EDD8: cmp     eax, 2
0x88EDDB: jz      short loc_88EDEA
0x88EDDD: mov     ecx, esi
0x88EDDF: call    sub_89EAE0
0x88EDE4: and     word ptr [esi+0Ch], 0FFBFh
0x88EDEA: pop     esi
0x88EDEB: retn
0x88EDEC: test    byte ptr [esi+0Ch], 1
0x88EDF0: jz      short loc_88EDEA
0x88EDF2: mov     ecx, [esi+10h]
0x88EDF5: test    ecx, ecx
0x88EDF7: jz      short loc_88EE02
0x88EDF9: call    sub_607840
0x88EDFE: test    al, al
0x88EE00: jnz     short loc_88EE14
0x88EE02: fld1
0x88EE04: fcomp   dword ptr [esi+14h]
0x88EE07: fnstsw  ax
0x88EE09: test    ah, 41h
0x88EE0C: jz      short loc_88EE14
0x88EE0E: cmp     dword ptr [esi+1Ch], 1
0x88EE12: jnz     short loc_88EDEA
0x88EE14: mov     edx, [esi]
0x88EE16: mov     eax, [edx+64h]
0x88EE19: mov     ecx, esi
0x88EE1B: pop     esi
0x88EE1C: jmp     eax
