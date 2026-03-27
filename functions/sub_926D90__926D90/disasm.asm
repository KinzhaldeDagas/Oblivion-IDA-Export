0x926D90: push    esi
0x926D91: mov     esi, ecx
0x926D93: mov     eax, [esi+0Ch]
0x926D96: push    edi
0x926D97: xor     edi, edi
0x926D99: test    eax, eax
0x926D9B: mov     dword ptr [esi], offset off_AA1838
0x926DA1: jle     short loc_926DC9
0x926DA3: mov     eax, [esi+8]
0x926DA6: mov     ecx, [eax+edi*4]
0x926DA9: cmp     word ptr [ecx+4], 0
0x926DAE: jz      short loc_926DC1
0x926DB0: dec     word ptr [ecx+6]
0x926DB4: cmp     word ptr [ecx+6], 0
0x926DB9: jnz     short loc_926DC1
0x926DBB: mov     edx, [ecx]
0x926DBD: push    1
0x926DBF: call    dword ptr [edx]
0x926DC1: mov     eax, [esi+0Ch]
0x926DC4: inc     edi
0x926DC5: cmp     edi, eax
0x926DC7: jl      short loc_926DA3
0x926DC9: mov     eax, [esi+10h]
0x926DCC: test    eax, eax
0x926DCE: js      short loc_926E04
0x926DD0: mov     ecx, ds:0BA9DE4h
0x926DD6: mov     edx, large fs:2Ch
0x926DDD: mov     ecx, [edx+ecx*4]
0x926DE0: mov     ecx, [ecx+19Ch]
0x926DE6: test    ecx, ecx
0x926DE8: jnz     short loc_926DF0
0x926DEA: mov     ecx, ds:0BA7D9Ch
0x926DF0: mov     edx, [esi+8]
0x926DF3: and     eax, 3FFFFFFFh
0x926DF8: push    14h
0x926DFA: shl     eax, 2
0x926DFD: push    eax
0x926DFE: push    edx
0x926DFF: call    sub_8A75D0
0x926E04: pop     edi
0x926E05: mov     dword ptr [esi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x926E0B: pop     esi
0x926E0C: retn
