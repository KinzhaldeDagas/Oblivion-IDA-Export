0x44FA70: sub     esp, 8
0x44FA73: lea     eax, [esp+8+LocalFileTime]
0x44FA76: push    eax; lpLocalFileTime
0x44FA77: add     ecx, 2A4h
0x44FA7D: push    ecx; lpFileTime
0x44FA7E: call    dword ptr ds:0A28168h
0x44FA84: mov     ecx, [esp+8+lpSystemTime]
0x44FA88: push    ecx; lpSystemTime
0x44FA89: lea     edx, [esp+0Ch+LocalFileTime]
0x44FA8D: push    edx; lpFileTime
0x44FA8E: call    dword ptr ds:0A28138h
0x44FA94: add     esp, 8
0x44FA97: retn    4
