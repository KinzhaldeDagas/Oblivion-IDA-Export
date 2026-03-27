0x499180: push    ecx
0x499181: test    dword ptr [ecx+0FCh], 200h
0x49918B: jz      short loc_4991B4
0x49918D: mov     eax, [ecx+0Ch]
0x499190: test    eax, eax
0x499192: jz      short loc_4991B4
0x499194: movzx   eax, byte ptr [eax+51h]
0x499198: mov     [esp+4+var_4], eax
0x49919B: fild    [esp+4+var_4]
0x49919E: fdiv    qword ptr ds:0A3F3A0h
0x4991A4: fstp    dword ptr ds:0B3523Ch
0x4991AA: and     dword ptr [ecx+0FCh], 0FFFFFDFFh
0x4991B4: fld     dword ptr ds:0B3523Ch
0x4991BA: pop     ecx
0x4991BB: retn
