0x7A6E70: mov     eax, [esp+result]; Oblivion Normal virtual Variance: returns finite ExtReal { value = 1, code = Finite }.
0x7A6E74: fld1
0x7A6E76: fstp    dword ptr [eax]
0x7A6E78: mov     dword ptr [eax+4], 0
0x7A6E7F: retn    4
