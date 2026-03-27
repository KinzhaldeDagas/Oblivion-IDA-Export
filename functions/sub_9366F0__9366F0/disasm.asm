0x9366F0: mov     eax, [esp+arg_0]
0x9366F4: fld     dword ptr [eax]
0x9366F6: fadd    dword ptr ds:0AA1D50h
0x9366FC: fsqrt
0x9366FE: fdivr   dword ptr ds:0A2F948h
0x936704: fstp    dword ptr [eax]
0x936706: fld     dword ptr [eax+4]
0x936709: fadd    dword ptr ds:0AA1D50h
0x93670F: fsqrt
0x936711: fdivr   dword ptr ds:0A2F948h
0x936717: fstp    dword ptr [eax+4]
0x93671A: fld     dword ptr [eax+8]
0x93671D: fadd    dword ptr ds:0AA1D50h
0x936723: fsqrt
0x936725: fdivr   dword ptr ds:0A2F948h
0x93672B: fstp    dword ptr [eax+8]
0x93672E: mov     dword ptr [eax+0Ch], 0
0x936735: retn
