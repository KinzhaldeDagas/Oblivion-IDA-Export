0x8B1730: mov     ecx, [esp+Format]
0x8B1734: mov     edx, [esp+Count]
0x8B1738: lea     eax, [esp+Args]
0x8B173C: push    eax; Format
0x8B173D: mov     eax, [esp+4+Dest]
0x8B1741: push    ecx; Format
0x8B1742: push    edx; Count
0x8B1743: push    eax; Dest
0x8B1744: call    __vsnprintf
0x8B1749: add     esp, 10h
0x8B174C: retn
