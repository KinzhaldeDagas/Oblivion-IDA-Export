0x6345E0: push    esi
0x6345E1: mov     esi, ecx
0x6345E3: mov     eax, [esi]
0x6345E5: mov     edx, [eax+4CCh]
0x6345EB: mov     dword ptr [esi+2CCh], 0
0x6345F5: mov     byte ptr [esi+2DDh], 0
0x6345FC: call    edx
0x6345FE: cmp     [esi+2E4h], eax
0x634604: jz      short loc_63461F
0x634606: mov     eax, [esi]
0x634608: mov     edx, [eax+4CCh]
0x63460E: mov     ecx, esi
0x634610: mov     byte ptr [esi+2E8h], 0
0x634617: call    edx
0x634619: mov     [esi+2E4h], eax
0x63461F: pop     esi
0x634620: retn
