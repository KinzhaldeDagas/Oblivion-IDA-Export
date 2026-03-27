0x6346D0: push    esi
0x6346D1: mov     esi, ecx
0x6346D3: mov     eax, [esi]
0x6346D5: mov     edx, [eax+4CCh]
0x6346DB: mov     dword ptr [esi+2D8h], 0
0x6346E5: mov     byte ptr [esi+2E0h], 0
0x6346EC: call    edx
0x6346EE: cmp     [esi+2E4h], eax
0x6346F4: jz      short loc_63470F
0x6346F6: mov     eax, [esi]
0x6346F8: mov     edx, [eax+4CCh]
0x6346FE: mov     ecx, esi
0x634700: mov     byte ptr [esi+2E8h], 0
0x634707: call    edx
0x634709: mov     [esi+2E4h], eax
0x63470F: pop     esi
0x634710: retn
