0x6343B0: mov     eax, [esp+arg_0]
0x6343B4: push    esi
0x6343B5: mov     esi, ecx
0x6343B7: mov     edx, [esi]
0x6343B9: mov     [esi+2C8h], eax
0x6343BF: mov     eax, [edx+4CCh]
0x6343C5: mov     byte ptr [esi+2DCh], 1
0x6343CC: call    eax
0x6343CE: cmp     [esi+2E4h], eax
0x6343D4: jz      short loc_6343EF
0x6343D6: mov     edx, [esi]
0x6343D8: mov     eax, [edx+4CCh]
0x6343DE: mov     ecx, esi
0x6343E0: mov     byte ptr [esi+2E8h], 0
0x6343E7: call    eax
0x6343E9: mov     [esi+2E4h], eax
0x6343EF: pop     esi
0x6343F0: retn    4
