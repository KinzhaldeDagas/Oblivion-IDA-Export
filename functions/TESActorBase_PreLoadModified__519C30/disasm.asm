0x519C30: test    [esp+changeMask], 10000000h
0x519C38: jz      short locret_519C45
0x519C3A: add     ecx, 0D0h ; 'Ð'; self
0x519C40: call    AVCollection_Clear
0x519C45: retn    4
