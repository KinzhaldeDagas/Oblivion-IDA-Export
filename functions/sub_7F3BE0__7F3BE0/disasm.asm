0x7F3BE0: push    esi
0x7F3BE1: mov     esi, ecx
0x7F3BE3: cmp     dword ptr [esi+24h], 0
0x7F3BE7: jz      short loc_7F3C03
0x7F3BE9: mov     ecx, [esi+19Ch]
0x7F3BEF: mov     eax, [ecx]
0x7F3BF1: mov     edx, [eax+5Ch]
0x7F3BF4: call    edx
0x7F3BF6: mov     ecx, [esi+1A0h]
0x7F3BFC: mov     eax, [ecx]
0x7F3BFE: mov     edx, [eax+44h]
0x7F3C01: call    edx
0x7F3C03: mov     ecx, esi
0x7F3C05: pop     esi
0x7F3C06: jmp     sub_77A4A0
