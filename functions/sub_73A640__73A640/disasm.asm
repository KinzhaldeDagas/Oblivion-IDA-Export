0x73A640: mov     ecx, ds:0B40134h
0x73A646: test    ecx, ecx
0x73A648: push    esi
0x73A649: mov     esi, ecx
0x73A64B: jz      short loc_73A65B
0x73A64D: call    sub_6EBCB0
0x73A652: push    esi
0x73A653: call    FormHeapFree
0x73A658: add     esp, 4
0x73A65B: pop     esi
0x73A65C: retn
