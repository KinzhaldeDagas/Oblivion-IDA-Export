0x567CA0: push    ebx
0x567CA1: push    esi
0x567CA2: mov     esi, [ecx+28h]
0x567CA5: xor     bl, bl
0x567CA7: test    esi, esi
0x567CA9: jnz     short loc_567CB0
0x567CAB: pop     esi
0x567CAC: xor     al, al
0x567CAE: pop     ebx
0x567CAF: retn
0x567CB0: mov     ecx, esi
0x567CB2: call    TargetData__GetTargetType
0x567CB7: sub     eax, 0
0x567CBA: jz      short loc_567CF5
0x567CBC: sub     eax, 1
0x567CBF: jz      short loc_567CDC
0x567CC1: sub     eax, 1
0x567CC4: jnz     short loc_567D19
0x567CC6: mov     ecx, esi
0x567CC8: call    sub_569E80
0x567CCD: add     eax, 0FFFFFFF1h
0x567CD0: cmp     eax, 1
0x567CD3: ja      short loc_567D19
0x567CD5: mov     bl, 1
0x567CD7: pop     esi
0x567CD8: mov     al, bl
0x567CDA: pop     ebx
0x567CDB: retn
0x567CDC: mov     ecx, esi
0x567CDE: call    sub_569E70
0x567CE3: mov     al, [eax+4]
0x567CE6: cmp     al, 23h ; '#'
0x567CE8: jz      short loc_567D17
0x567CEA: cmp     al, 24h ; '$'
0x567CEC: jnz     short loc_567D19
0x567CEE: mov     bl, 1
0x567CF0: pop     esi
0x567CF1: mov     al, bl
0x567CF3: pop     ebx
0x567CF4: retn
0x567CF5: mov     ecx, esi
0x567CF7: call    sub_569E60
0x567CFC: test    eax, eax
0x567CFE: jz      short loc_567D19
0x567D00: mov     ecx, esi
0x567D02: call    sub_569E60
0x567D07: mov     edx, [eax]
0x567D09: mov     ecx, eax
0x567D0B: mov     eax, [edx+190h]
0x567D11: call    eax
0x567D13: test    al, al
0x567D15: jz      short loc_567D19
0x567D17: mov     bl, 1
0x567D19: pop     esi
0x567D1A: mov     al, bl
0x567D1C: pop     ebx
0x567D1D: retn
