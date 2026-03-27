0x404FB0: push    ecx
0x404FB1: mov     eax, [ecx+38h]
0x404FB4: test    eax, eax
0x404FB6: jz      short loc_404FC2
0x404FB8: fld     dword ptr [eax]
0x404FBA: fstp    [esp+4+var_4]
0x404FBD: fld     [esp+4+var_4]
0x404FC0: pop     ecx
0x404FC1: retn
0x404FC2: fldz
0x404FC4: fstp    [esp+4+var_4]
0x404FC7: fld     [esp+4+var_4]
0x404FCA: pop     ecx
0x404FCB: retn
