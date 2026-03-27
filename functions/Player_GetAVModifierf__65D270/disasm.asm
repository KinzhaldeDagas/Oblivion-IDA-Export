0x65D270: push    ecx
0x65D271: fldz
0x65D273: mov     eax, [esp+4+arg_0]
0x65D277: sub     eax, 0
0x65D27A: fstp    [esp+4+var_4]
0x65D27D: jz      short loc_65D2F4
0x65D27F: sub     eax, 1
0x65D282: jz      short loc_65D2DF
0x65D284: sub     eax, 1
0x65D287: jnz     short loc_65D302
0x65D289: mov     edx, [esp+4+arg_4]
0x65D28D: mov     eax, edx
0x65D28F: sub     eax, 8
0x65D292: jz      short loc_65D2CF
0x65D294: sub     eax, 1
0x65D297: jz      short loc_65D2BF
0x65D299: sub     eax, 1
0x65D29C: jz      short loc_65D2AF
0x65D29E: fld     dword ptr [ecx+edx*4+450h]
0x65D2A5: fstp    [esp+4+var_4]
0x65D2A8: fld     [esp+4+var_4]
0x65D2AB: pop     ecx
0x65D2AC: retn    8
0x65D2AF: fld     dword ptr [ecx+44Ch]
0x65D2B5: fstp    [esp+4+var_4]
0x65D2B8: fld     [esp+4+var_4]
0x65D2BB: pop     ecx
0x65D2BC: retn    8
0x65D2BF: fld     dword ptr [ecx+448h]
0x65D2C5: fstp    [esp+4+var_4]
0x65D2C8: fld     [esp+4+var_4]
0x65D2CB: pop     ecx
0x65D2CC: retn    8
0x65D2CF: fld     dword ptr [ecx+444h]
0x65D2D5: fstp    [esp+4+var_4]
0x65D2D8: fld     [esp+4+var_4]
0x65D2DB: pop     ecx
0x65D2DC: retn    8
0x65D2DF: mov     eax, [esp+4+arg_4]
0x65D2E3: fld     dword ptr [ecx+eax*4+324h]
0x65D2EA: fstp    [esp+4+var_4]
0x65D2ED: fld     [esp+4+var_4]
0x65D2F0: pop     ecx
0x65D2F1: retn    8
0x65D2F4: mov     edx, [esp+4+arg_4]
0x65D2F8: fld     dword ptr [ecx+edx*4+204h]
0x65D2FF: fstp    [esp+4+var_4]
0x65D302: fld     [esp+4+var_4]
0x65D305: pop     ecx
0x65D306: retn    8
