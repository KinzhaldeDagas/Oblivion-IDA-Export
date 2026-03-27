0x903910: push    esi
0x903911: mov     esi, ecx
0x903913: mov     eax, [esi+14h]
0x903916: test    eax, eax
0x903918: js      short loc_90394E
0x90391A: mov     ecx, ds:0BA9DE4h
0x903920: mov     edx, large fs:2Ch
0x903927: mov     ecx, [edx+ecx*4]
0x90392A: mov     ecx, [ecx+19Ch]
0x903930: test    ecx, ecx
0x903932: jnz     short loc_90393A
0x903934: mov     ecx, ds:0BA7D9Ch
0x90393A: mov     edx, [esi+0Ch]
0x90393D: and     eax, 3FFFFFFFh
0x903942: push    14h
0x903944: shl     eax, 2
0x903947: push    eax
0x903948: push    edx
0x903949: call    sub_8A75D0
0x90394E: mov     dword ptr [esi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x903954: pop     esi
0x903955: retn
