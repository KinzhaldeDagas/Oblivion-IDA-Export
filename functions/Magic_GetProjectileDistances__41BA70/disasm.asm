0x41BA70: fld     ds:flt_A342A4
0x41BA76: mov     ecx, [esp+arg_4]
0x41BA7A: mov     eax, [esp+arg_0]
0x41BA7E: fstp    dword ptr [ecx]
0x41BA80: sub     eax, 1
0x41BA83: fld     ds:flt_A342A0
0x41BA89: mov     edx, [esp+arg_8]
0x41BA8D: fstp    dword ptr [edx]
0x41BA8F: jz      short loc_41BACE
0x41BA91: sub     eax, 1
0x41BA94: jz      short loc_41BABD
0x41BA96: sub     eax, 1
0x41BA99: jz      short loc_41BAAC
0x41BA9B: fld     dword ptr ds:0B3368Ch
0x41BAA1: fstp    dword ptr [ecx]
0x41BAA3: fld     dword ptr ds:0B33694h
0x41BAA9: fstp    dword ptr [edx]
0x41BAAB: retn
0x41BAAC: fld     dword ptr ds:0B336BCh
0x41BAB2: fstp    dword ptr [ecx]
0x41BAB4: fld     dword ptr ds:0B336C4h
0x41BABA: fstp    dword ptr [edx]
0x41BABC: retn
0x41BABD: fld     dword ptr ds:0B336ACh
0x41BAC3: fstp    dword ptr [ecx]
0x41BAC5: fld     dword ptr ds:0B336B4h
0x41BACB: fstp    dword ptr [edx]
0x41BACD: retn
0x41BACE: fld     dword ptr ds:0B3369Ch
0x41BAD4: fstp    dword ptr [ecx]
0x41BAD6: fld     dword ptr ds:0B336A4h
0x41BADC: fstp    dword ptr [edx]
0x41BADE: retn
