0x6B94E0: push    esi
0x6B94E1: mov     esi, ds:0B3C218h
0x6B94E7: test    esi, esi
0x6B94E9: jz      short loc_6B950E
0x6B94EB: push    1
0x6B94ED: mov     ecx, esi
0x6B94EF: mov     dword ptr [esi+0Ch], 0
0x6B94F6: call    sub_6B9250
0x6B94FB: push    esi
0x6B94FC: call    FormHeapFree
0x6B9501: add     esp, 4
0x6B9504: mov     dword ptr ds:0B3C218h, 0
0x6B950E: pop     esi
0x6B950F: retn
