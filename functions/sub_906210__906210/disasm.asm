0x906210: push    esi
0x906211: mov     esi, ecx
0x906213: mov     dword ptr [esi], offset off_A9BE50
0x906219: mov     eax, [esi+14h]
0x90621C: test    eax, eax
0x90621E: js      short loc_906257
0x906220: mov     ecx, ds:0BA9DE4h
0x906226: mov     edx, large fs:2Ch
0x90622D: mov     ecx, [edx+ecx*4]
0x906230: mov     ecx, [ecx+19Ch]
0x906236: test    ecx, ecx
0x906238: jnz     short loc_906240
0x90623A: mov     ecx, ds:0BA7D9Ch
0x906240: and     eax, 3FFFFFFFh
0x906245: lea     edx, [eax+eax*2]
0x906248: mov     eax, [esi+0Ch]
0x90624B: push    14h
0x90624D: shl     edx, 2
0x906250: push    edx
0x906251: push    eax
0x906252: call    sub_8A75D0
0x906257: mov     dword ptr [esi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x90625D: pop     esi
0x90625E: retn
