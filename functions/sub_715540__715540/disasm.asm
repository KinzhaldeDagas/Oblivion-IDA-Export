0x715540: or      word ptr [ecx+8], 8; Activates controller flag bit 3, invalidates last application time +0x20, and for APP_INIT timing (bit 0) seeds start time +0x1C from the supplied application time.
0x715545: fld     dword ptr ds:0A7DEB4h
0x71554B: movzx   eax, word ptr [ecx+8]
0x71554F: fchs
0x715551: test    al, 1
0x715553: fstp    dword ptr [ecx+20h]
0x715556: jz      short locret_71555F
0x715558: fld     [esp+applicationTime]
0x71555C: fstp    dword ptr [ecx+1Ch]
0x71555F: retn    4
