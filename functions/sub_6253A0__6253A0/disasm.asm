0x6253A0: push    esi
0x6253A1: mov     esi, ecx
0x6253A3: call    sub_625140
0x6253A8: test    [esp+4+arg_0], 1
0x6253AD: jz      short loc_6253B8
0x6253AF: push    esi
0x6253B0: call    FormHeapFree
0x6253B5: add     esp, 4
0x6253B8: mov     eax, esi
0x6253BA: pop     esi
0x6253BB: retn    4
