0x90C830: push    esi
0x90C831: mov     esi, ecx
0x90C833: mov     eax, [esi+68h]
0x90C836: test    eax, eax
0x90C838: js      short loc_90C86E
0x90C83A: mov     ecx, ds:0BA9DE4h
0x90C840: mov     edx, large fs:2Ch
0x90C847: mov     ecx, [edx+ecx*4]
0x90C84A: mov     ecx, [ecx+19Ch]
0x90C850: test    ecx, ecx
0x90C852: jnz     short loc_90C85A
0x90C854: mov     ecx, ds:0BA7D9Ch
0x90C85A: mov     edx, [esi+60h]
0x90C85D: and     eax, 3FFFFFFFh
0x90C862: push    14h
0x90C864: shl     eax, 2
0x90C867: push    eax
0x90C868: push    edx
0x90C869: call    sub_8A75D0
0x90C86E: mov     dword ptr [esi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x90C874: pop     esi
0x90C875: retn
