0x8C6210: push    ecx
0x8C6211: test    ecx, ecx
0x8C6213: jz      short loc_8C6227
0x8C6215: mov     eax, [ecx+8]
0x8C6218: test    eax, eax
0x8C621A: jz      short loc_8C6227
0x8C621C: fld     dword ptr [eax+10h]
0x8C621F: fstp    [esp+4+var_4]
0x8C6222: fld     [esp+4+var_4]
0x8C6225: pop     ecx
0x8C6226: retn
0x8C6227: fld1
0x8C6229: fstp    [esp+4+var_4]
0x8C622C: fld     [esp+4+var_4]
0x8C622F: pop     ecx
0x8C6230: retn
