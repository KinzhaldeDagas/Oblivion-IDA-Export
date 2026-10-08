0x8A7AD0: mov     ecx, ds:0BA7D98h
0x8A7AD6: mov     eax, [ecx]
0x8A7AD8: push    32h ; '2'
0x8A7ADA: push    18h
0x8A7ADC: call    dword ptr [eax+10h]
0x8A7ADF: mov     word ptr [eax+4], 18h
0x8A7AE5: mov     ecx, eax
0x8A7AE7: jmp     loc_8A79B0
0x8A79B0: push    esi
0x8A79B1: mov     esi, ecx
0x8A79B3: mov     word ptr [esi+6], 1
0x8A79B9: mov     dword ptr [esi], offset off_A975F0
0x8A79BF: push    edi
0x8A79C0: mov     dword ptr [esi+8], 0
0x8A79C7: mov     dword ptr [esi+0Ch], 0
0x8A79CE: mov     dword ptr [esi+10h], 80000000h
0x8A79D5: mov     ecx, ds:0BA7D98h
0x8A79DB: mov     eax, [ecx]
0x8A79DD: push    12h
0x8A79DF: push    18h
0x8A79E1: call    dword ptr [eax+10h]
0x8A79E4: mov     edi, eax
0x8A79E6: test    edi, edi
0x8A79E8: jz      short loc_8A79FE
0x8A79EA: push    3E8h; dwSpinCount
0x8A79EF: push    edi; lpCriticalSection
0x8A79F0: call    dword ptr ds:0A2818Ch
0x8A79F6: mov     [esi+14h], edi
0x8A79F9: pop     edi
0x8A79FA: mov     eax, esi
0x8A79FC: pop     esi
0x8A79FD: retn
0x8A79FE: xor     eax, eax
0x8A7A00: mov     [esi+14h], eax
0x8A7A03: pop     edi
0x8A7A04: mov     eax, esi
0x8A7A06: pop     esi
0x8A7A07: retn
