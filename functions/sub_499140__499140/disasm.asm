0x499140: push    ecx
0x499141: test    dword ptr [ecx+0FCh], 100h
0x49914B: jz      short loc_499174
0x49914D: mov     eax, [ecx+0Ch]
0x499150: test    eax, eax
0x499152: jz      short loc_499174
0x499154: movzx   eax, byte ptr [eax+50h]
0x499158: mov     [esp+4+var_4], eax
0x49915B: fild    [esp+4+var_4]
0x49915E: fdiv    qword ptr ds:0A3F3A0h
0x499164: fstp    dword ptr ds:0B35238h
0x49916A: and     dword ptr [ecx+0FCh], 0FFFFFEFFh
0x499174: fld     dword ptr ds:0B35238h
0x49917A: pop     ecx
0x49917B: retn
