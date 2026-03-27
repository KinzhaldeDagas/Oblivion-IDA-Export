0x634680: push    esi
0x634681: mov     esi, ecx
0x634683: mov     eax, [esi]
0x634685: mov     edx, [eax+4CCh]
0x63468B: mov     dword ptr [esi+2D4h], 0
0x634695: mov     byte ptr [esi+2DFh], 0
0x63469C: call    edx
0x63469E: cmp     [esi+2E4h], eax
0x6346A4: jz      short loc_6346BF
0x6346A6: mov     eax, [esi]
0x6346A8: mov     edx, [eax+4CCh]
0x6346AE: mov     ecx, esi
0x6346B0: mov     byte ptr [esi+2E8h], 0
0x6346B7: call    edx
0x6346B9: mov     [esi+2E4h], eax
0x6346BF: pop     esi
0x6346C0: retn
