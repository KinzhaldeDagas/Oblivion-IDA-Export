0x99FE8E: push    0; Locale
0x99FE90: push    [esp+4+SrcSizeInBytes]; SrcSizeInBytes
0x99FE94: push    [esp+8+SrcCh]; SrcCh
0x99FE98: push    [esp+0Ch+DstCh]; DstCh
0x99FE9C: call    __mbtowc_l
0x99FEA1: add     esp, 10h
0x99FEA4: retn
