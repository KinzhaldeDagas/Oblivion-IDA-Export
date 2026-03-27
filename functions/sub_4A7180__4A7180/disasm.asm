0x4A7180: push    ecx
0x4A7181: fld     dword ptr ds:0A3B888h
0x4A7187: fstp    [esp+4+var_4]
0x4A718A: fld     dword ptr [ecx+18h]
0x4A718D: fcomp   qword ptr ds:0A40398h
0x4A7193: fnstsw  ax
0x4A7195: test    ah, 41h
0x4A7198: jnz     short loc_4A71A0
0x4A719A: fld     dword ptr [ecx+18h]
0x4A719D: pop     ecx
0x4A719E: retn
0x4A719F: align 10h
0x4A71A0: mov     edx, [ecx]
0x4A71A2: test    edx, edx
0x4A71A4: jz      short loc_4A71C0
0x4A71A6: fld     dword ptr [edx]
0x4A71A8: fld     [esp+4+var_4]
0x4A71AB: fcompp
0x4A71AD: fnstsw  ax
0x4A71AF: test    ah, 5
0x4A71B2: jp      short loc_4A71B9
0x4A71B4: fld     dword ptr [edx]
0x4A71B6: fstp    [esp+4+var_4]
0x4A71B9: mov     ecx, [ecx+4]
0x4A71BC: test    ecx, ecx
0x4A71BE: jnz     short loc_4A71A0
0x4A71C0: fld     [esp+4+var_4]
0x4A71C3: pop     ecx
0x4A71C4: retn
