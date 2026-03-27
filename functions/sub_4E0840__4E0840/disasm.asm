0x4E0840: push    esi
0x4E0841: mov     esi, ecx
0x4E0843: lea     ecx, [esi+44h]
0x4E0846: call    sub_4211C0
0x4E084B: test    eax, eax
0x4E084D: jz      short loc_4E0854
0x4E084F: xor     ax, ax
0x4E0852: pop     esi
0x4E0853: retn
0x4E0854: mov     esi, [esi+3Ch]
0x4E0857: xor     eax, eax
0x4E0859: test    esi, esi
0x4E085B: jz      short loc_4E0890
0x4E085D: cmp     [esi+0B6h], ax
0x4E0864: jbe     short loc_4E0890
0x4E0866: mov     ecx, [esi+0B0h]
0x4E086C: mov     ecx, [ecx]
0x4E086E: test    ecx, ecx
0x4E0870: jz      short loc_4E0890
0x4E0872: cmp     [ecx+0Ch], eax
0x4E0875: jz      short loc_4E0890
0x4E0877: push    eax
0x4E0878: mov     ecx, esi
0x4E087A: call    sub_405790
0x4E087F: mov     eax, [eax+0Ch]
0x4E0882: push    eax
0x4E0883: push    offset stru_B3CAC0
0x4E0888: call    NiRTTI_Cast
0x4E088D: add     esp, 8
0x4E0890: push    edi
0x4E0891: push    eax
0x4E0892: call    sub_4DA760
0x4E0897: add     esp, 4
0x4E089A: test    esi, esi
0x4E089C: movzx   edi, ax
0x4E089F: jz      short loc_4E08A6
0x4E08A1: mov     esi, [esi+0Ch]
0x4E08A4: jmp     short loc_4E08A8
0x4E08A6: xor     esi, esi
0x4E08A8: push    esi
0x4E08A9: push    offset stru_B3CAC0
0x4E08AE: call    NiRTTI_Cast
0x4E08B3: push    eax
0x4E08B4: call    sub_4DA760
0x4E08B9: add     esp, 0Ch
0x4E08BC: add     ax, di
0x4E08BF: pop     edi
0x4E08C0: pop     esi
0x4E08C1: retn
