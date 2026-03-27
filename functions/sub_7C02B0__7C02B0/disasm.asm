0x7C02B0: push    ebx
0x7C02B1: push    esi
0x7C02B2: mov     esi, ecx
0x7C02B4: push    edi
0x7C02B5: lea     edi, [esi+0D4h]
0x7C02BB: mov     ebx, 0Dh
0x7C02C0: mov     ecx, [edi]
0x7C02C2: mov     eax, [esi]
0x7C02C4: mov     edx, [eax+94h]
0x7C02CA: push    ecx
0x7C02CB: mov     ecx, esi
0x7C02CD: call    edx
0x7C02CF: add     edi, 4
0x7C02D2: sub     ebx, 1
0x7C02D5: jnz     short loc_7C02C0
0x7C02D7: pop     edi
0x7C02D8: pop     esi
0x7C02D9: pop     ebx
0x7C02DA: retn
