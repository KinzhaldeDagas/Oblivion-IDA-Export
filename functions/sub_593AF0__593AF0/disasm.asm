0x593AF0: push    esi
0x593AF1: mov     esi, ecx
0x593AF3: mov     ecx, [esi+0A0h]
0x593AF9: call    sub_57D2F0
0x593AFE: test    al, al
0x593B00: jz      short loc_593B15
0x593B02: mov     ecx, [esi+0A0h]
0x593B08: call    sub_57DDE0
0x593B0D: mov     ecx, esi
0x593B0F: pop     esi
0x593B10: jmp     sub_593710
0x593B15: pop     esi
0x593B16: retn
