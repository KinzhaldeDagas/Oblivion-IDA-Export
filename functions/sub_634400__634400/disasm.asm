0x634400: mov     eax, [esp+arg_0]
0x634404: push    esi
0x634405: mov     esi, ecx
0x634407: mov     edx, [esi]
0x634409: mov     [esi+2CCh], eax
0x63440F: mov     eax, [edx+4CCh]
0x634415: mov     byte ptr [esi+2DDh], 1
0x63441C: call    eax
0x63441E: cmp     [esi+2E4h], eax
0x634424: jz      short loc_63443F
0x634426: mov     edx, [esi]
0x634428: mov     eax, [edx+4CCh]
0x63442E: mov     ecx, esi
0x634430: mov     byte ptr [esi+2E8h], 0
0x634437: call    eax
0x634439: mov     [esi+2E4h], eax
0x63443F: pop     esi
0x634440: retn    4
