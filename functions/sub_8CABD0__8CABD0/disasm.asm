0x8CABD0: test    [esp+arg_0], 1
0x8CABD5: push    esi
0x8CABD6: mov     esi, ecx
0x8CABD8: mov     dword ptr [esi], offset off_A99B58
0x8CABDE: jz      short loc_8CABE9
0x8CABE0: push    esi
0x8CABE1: call    FormHeapFree
0x8CABE6: add     esp, 4
0x8CABE9: mov     eax, esi
0x8CABEB: pop     esi
0x8CABEC: retn    4
