0x52B4F0: push    ecx
0x52B4F1: fldz
0x52B4F3: fcomp   dword ptr [ecx+0A4h]
0x52B4F9: fnstsw  ax
0x52B4FB: test    ah, 5
0x52B4FE: jp      short loc_52B50E
0x52B500: fld     dword ptr [ecx+0A4h]
0x52B506: fstp    [esp+4+var_4]
0x52B509: fld     [esp+4+var_4]
0x52B50C: pop     ecx
0x52B50D: retn
0x52B50E: fld     dword ptr ds:0A46C30h
0x52B514: fstp    [esp+4+var_4]
0x52B517: fld     [esp+4+var_4]
0x52B51A: pop     ecx
0x52B51B: retn
