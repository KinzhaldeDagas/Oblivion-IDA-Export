0x926CA0: push    ebx
0x926CA1: push    esi
0x926CA2: mov     esi, ecx
0x926CA4: mov     ebx, [esi+0Ch]
0x926CA7: test    ebx, ebx
0x926CA9: mov     dword ptr [esi], offset off_AA1828
0x926CAF: jle     short loc_926CC6
0x926CB1: push    edi
0x926CB2: xor     edi, edi
0x926CB4: mov     eax, [esi+8]
0x926CB7: mov     ecx, [eax+edi]
0x926CBA: call    sub_8BC730
0x926CBF: add     edi, 50h ; 'P'
0x926CC2: dec     ebx
0x926CC3: jnz     short loc_926CB4
0x926CC5: pop     edi
0x926CC6: mov     eax, [esi+10h]
0x926CC9: test    eax, eax
0x926CCB: js      short loc_926D04
0x926CCD: mov     ecx, ds:0BA9DE4h
0x926CD3: mov     edx, large fs:2Ch
0x926CDA: mov     ecx, [edx+ecx*4]
0x926CDD: mov     ecx, [ecx+19Ch]
0x926CE3: test    ecx, ecx
0x926CE5: jnz     short loc_926CED
0x926CE7: mov     ecx, ds:0BA7D9Ch
0x926CED: and     eax, 3FFFFFFFh
0x926CF2: lea     edx, [eax+eax*4]
0x926CF5: mov     eax, [esi+8]
0x926CF8: push    14h
0x926CFA: shl     edx, 4
0x926CFD: push    edx
0x926CFE: push    eax
0x926CFF: call    sub_8A75D0
0x926D04: mov     dword ptr [esi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x926D0A: pop     esi
0x926D0B: pop     ebx
0x926D0C: retn
