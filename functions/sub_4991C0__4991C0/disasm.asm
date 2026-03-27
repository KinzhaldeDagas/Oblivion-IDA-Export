0x4991C0: push    ecx
0x4991C1: test    dword ptr [ecx+0FCh], 400h
0x4991CB: jz      short loc_4991F4
0x4991CD: mov     eax, [ecx+0Ch]
0x4991D0: test    eax, eax
0x4991D2: jz      short loc_4991F4
0x4991D4: movzx   eax, byte ptr [eax+52h]
0x4991D8: mov     [esp+4+var_4], eax
0x4991DB: fild    [esp+4+var_4]
0x4991DE: fdiv    qword ptr ds:0A3F3A0h
0x4991E4: fstp    dword ptr ds:0B35240h
0x4991EA: and     dword ptr [ecx+0FCh], 0FFFFFBFFh
0x4991F4: fld     dword ptr ds:0B35240h
0x4991FA: pop     ecx
0x4991FB: retn
