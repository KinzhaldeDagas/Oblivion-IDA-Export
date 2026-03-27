0x4CCE00: push    ecx
0x4CCE01: test    byte ptr [ecx+24h], 1
0x4CCE05: fldz
0x4CCE07: fstp    [esp+4+var_4]
0x4CCE0A: jz      short loc_4CCE17
0x4CCE0C: add     ecx, 28h ; '('
0x4CCE0F: call    sub_420C40
0x4CCE14: fstp    [esp+4+var_4]
0x4CCE17: fld     [esp+4+var_4]
0x4CCE1A: pop     ecx
0x4CCE1B: retn
