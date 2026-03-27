0x8CABB0: test    [esp+arg_0], 1
0x8CABB5: push    esi
0x8CABB6: mov     esi, ecx
0x8CABB8: mov     dword ptr [esi], offset off_A99B50
0x8CABBE: jz      short loc_8CABC9
0x8CABC0: push    esi
0x8CABC1: call    FormHeapFree
0x8CABC6: add     esp, 4
0x8CABC9: mov     eax, esi
0x8CABCB: pop     esi
0x8CABCC: retn    4
