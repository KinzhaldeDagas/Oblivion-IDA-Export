0x5756A0: push    esi
0x5756A1: mov     esi, ecx
0x5756A3: cmp     dword ptr [esi+24h], 0
0x5756A7: jz      short loc_5756C7
0x5756A9: push    edi
0x5756AA: lea     ebx, [ebx+0]
0x5756B0: mov     eax, [esi+24h]
0x5756B3: mov     edi, [eax+4]
0x5756B6: push    eax
0x5756B7: call    FormHeapFree
0x5756BC: add     esp, 4
0x5756BF: test    edi, edi
0x5756C1: mov     [esi+24h], edi
0x5756C4: jnz     short loc_5756B0
0x5756C6: pop     edi
0x5756C7: mov     dword ptr [esi+20h], 0
0x5756CE: mov     eax, [esi]
0x5756D0: push    eax
0x5756D1: call    FormHeapFree
0x5756D6: add     esp, 4
0x5756D9: mov     dword ptr [esi], 0
0x5756DF: mov     word ptr [esi+6], 0
0x5756E5: mov     word ptr [esi+4], 0
0x5756EB: pop     esi
0x5756EC: retn
