0x6D0CF0: push    esi
0x6D0CF1: mov     esi, ecx
0x6D0CF3: cmp     dword ptr [esi+30h], 0
0x6D0CF7: jz      short loc_6D0D2C
0x6D0CF9: cmp     byte ptr [esi+58h], 0
0x6D0CFD: jz      short loc_6D0D2C
0x6D0CFF: call    sub_6D0C30
0x6D0D04: mov     eax, [esi+30h]
0x6D0D07: mov     ecx, [eax+0B4h]
0x6D0D0D: mov     eax, 1
0x6D0D12: or      [ecx+2Eh], ax
0x6D0D16: test    [esi+3Ch], al
0x6D0D19: jz      short loc_6D0D28
0x6D0D1B: cmp     dword ptr [ecx+20h], 0
0x6D0D1F: jz      short loc_6D0D28
0x6D0D21: mov     edx, [ecx]
0x6D0D23: mov     eax, [edx+54h]
0x6D0D26: call    eax
0x6D0D28: mov     byte ptr [esi+58h], 0
0x6D0D2C: pop     esi
0x6D0D2D: retn
