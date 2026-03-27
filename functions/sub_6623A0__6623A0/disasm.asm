0x6623A0: push    esi
0x6623A1: mov     esi, [ecx+1F8h]
0x6623A7: cmp     dword ptr [esi+4], 0
0x6623AB: jz      short loc_6623C7
0x6623AD: push    edi
0x6623AE: mov     edi, edi
0x6623B0: mov     eax, [esi+4]
0x6623B3: mov     edi, [eax+4]
0x6623B6: push    eax
0x6623B7: call    FormHeapFree
0x6623BC: add     esp, 4
0x6623BF: test    edi, edi
0x6623C1: mov     [esi+4], edi
0x6623C4: jnz     short loc_6623B0
0x6623C6: pop     edi
0x6623C7: mov     dword ptr [esi], 0
0x6623CD: pop     esi
0x6623CE: retn
