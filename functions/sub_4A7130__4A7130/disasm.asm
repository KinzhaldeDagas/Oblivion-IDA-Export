0x4A7130: push    ecx
0x4A7131: fld     dword ptr ds:0A32048h
0x4A7137: fstp    [esp+4+var_4]
0x4A713A: fld     dword ptr [ecx+10h]
0x4A713D: fcomp   qword ptr ds:0A3A5B0h
0x4A7143: fnstsw  ax
0x4A7145: test    ah, 5
0x4A7148: jp      short loc_4A7150
0x4A714A: fld     dword ptr [ecx+10h]
0x4A714D: pop     ecx
0x4A714E: retn
0x4A714F: align 10h
0x4A7150: mov     edx, [ecx]
0x4A7152: test    edx, edx
0x4A7154: jz      short loc_4A7170
0x4A7156: fld     dword ptr [edx]
0x4A7158: fld     [esp+4+var_4]
0x4A715B: fcompp
0x4A715D: fnstsw  ax
0x4A715F: test    ah, 41h
0x4A7162: jnz     short loc_4A7169
0x4A7164: fld     dword ptr [edx]
0x4A7166: fstp    [esp+4+var_4]
0x4A7169: mov     ecx, [ecx+4]
0x4A716C: test    ecx, ecx
0x4A716E: jnz     short loc_4A7150
0x4A7170: fld     [esp+4+var_4]
0x4A7173: pop     ecx
0x4A7174: retn
