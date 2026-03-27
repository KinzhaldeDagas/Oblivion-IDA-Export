0x981BC0: push    esi
0x981BC1: mov     esi, eax
0x981BC3: jmp     short loc_981BD0
0x981BC5: mov     eax, [esi]
0x981BC7: test    eax, eax
0x981BC9: jz      short loc_981BCD
0x981BCB: call    eax
0x981BCD: add     esi, 4
0x981BD0: cmp     esi, [esp+4+arg_0]
0x981BD4: jb      short loc_981BC5
0x981BD6: pop     esi
0x981BD7: retn
