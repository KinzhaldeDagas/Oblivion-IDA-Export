0x499200: push    ecx
0x499201: test    dword ptr [ecx+0FCh], 800h
0x49920B: jz      short loc_499234
0x49920D: mov     eax, [ecx+0Ch]
0x499210: test    eax, eax
0x499212: jz      short loc_499234
0x499214: movzx   eax, byte ptr [eax+53h]
0x499218: mov     [esp+4+var_4], eax
0x49921B: fild    [esp+4+var_4]
0x49921E: fdiv    qword ptr ds:0A3F3A0h
0x499224: fstp    dword ptr ds:0B35244h
0x49922A: and     dword ptr [ecx+0FCh], 0FFFFF7FFh
0x499234: fld     dword ptr ds:0B35244h
0x49923A: pop     ecx
0x49923B: retn
