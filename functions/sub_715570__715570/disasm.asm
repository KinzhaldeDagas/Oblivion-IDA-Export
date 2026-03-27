0x715570: and     word ptr [ecx+8], 0FFF7h
0x715576: fld     dword ptr ds:0A7DEB4h
0x71557C: movzx   eax, word ptr [ecx+8]
0x715580: fchs
0x715582: test    al, 1
0x715584: fstp    dword ptr [ecx+20h]
0x715587: jz      short locret_715594
0x715589: fld     dword ptr ds:0A7DEB4h
0x71558F: fchs
0x715591: fstp    dword ptr [ecx+1Ch]
0x715594: retn
