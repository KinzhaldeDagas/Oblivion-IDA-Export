0x78E5D0: fld     [esp+x]; Oblivion five-component stVec constructor: stores x/y/z/w/v and sets logical size to 5. Exact body corroborated by RT4.1 Vec.cpp.
0x78E5D4: mov     eax, ecx
0x78E5D6: fstp    dword ptr [eax]
0x78E5D8: mov     dword ptr [eax+14h], 5
0x78E5DF: fld     [esp+y]
0x78E5E3: fstp    dword ptr [eax+4]
0x78E5E6: fld     [esp+z]
0x78E5EA: fstp    dword ptr [eax+8]
0x78E5ED: fld     [esp+w]
0x78E5F1: fstp    dword ptr [eax+0Ch]
0x78E5F4: fld     [esp+v]
0x78E5F8: fstp    dword ptr [eax+10h]
0x78E5FB: retn    14h
