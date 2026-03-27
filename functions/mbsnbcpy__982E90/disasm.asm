0x982E90: push    0; struct localeinfo_struct *
0x982E92: push    [esp+4+Count]; Count
0x982E96: push    [esp+8+Source]; Source
0x982E9A: push    [esp+0Ch+Dest]; Dest
0x982E9E: call    __mbsnbcpy_l
0x982EA3: add     esp, 10h
0x982EA6: retn
