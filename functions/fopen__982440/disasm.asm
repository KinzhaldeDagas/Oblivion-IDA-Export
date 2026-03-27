0x982440: push    40h ; '@'; ShFlag
0x982442: push    [esp+4+Mode]; Mode
0x982446: push    [esp+8+Filename]; Filename
0x98244A: call    __fsopen
0x98244F: add     esp, 0Ch
0x982452: retn
