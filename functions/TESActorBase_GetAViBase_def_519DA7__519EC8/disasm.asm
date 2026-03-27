0x519EC8: push    edx; jumptable 00519DA7 default case
0x519EC9: add     ecx, 0D0h ; 'Ð'
0x519ECF: call    AVCollection_GetAV
0x519ED4: call    Double_To_SInt32
0x519ED9: pop     esi; jumptable 00519DA7 cases 12-32,37-39
0x519EDA: retn    4
