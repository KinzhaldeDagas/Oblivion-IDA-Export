0x7724D0: push    esi
0x7724D1: mov     esi, ecx
0x7724D3: mov     ecx, [esi]
0x7724D5: test    ecx, ecx
0x7724D7: jz      short loc_7724E0
0x7724D9: push    3
0x7724DB: call    sub_7722B0
0x7724E0: mov     esi, [esi+8]
0x7724E3: test    esi, esi
0x7724E5: jz      short loc_7724F7
0x7724E7: mov     ecx, esi
0x7724E9: call    sub_7724D0
0x7724EE: push    esi
0x7724EF: call    FormHeapFree
0x7724F4: add     esp, 4
0x7724F7: pop     esi
0x7724F8: retn
