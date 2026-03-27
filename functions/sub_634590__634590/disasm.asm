0x634590: push    esi
0x634591: mov     esi, ecx
0x634593: mov     eax, [esi]
0x634595: mov     edx, [eax+4CCh]
0x63459B: mov     dword ptr [esi+2C8h], 0
0x6345A5: mov     byte ptr [esi+2DCh], 0
0x6345AC: call    edx
0x6345AE: cmp     [esi+2E4h], eax
0x6345B4: jz      short loc_6345CF
0x6345B6: mov     eax, [esi]
0x6345B8: mov     edx, [eax+4CCh]
0x6345BE: mov     ecx, esi
0x6345C0: mov     byte ptr [esi+2E8h], 0
0x6345C7: call    edx
0x6345C9: mov     [esi+2E4h], eax
0x6345CF: pop     esi
0x6345D0: retn
