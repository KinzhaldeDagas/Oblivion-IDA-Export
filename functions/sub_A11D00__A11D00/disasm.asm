0xA11D00: fldz
0xA11D02: mov     ecx, 30h ; '0'
0xA11D07: mov     eax, offset dword_B46F80
0xA11D0C: fst     dword ptr [eax-8]
0xA11D0F: add     eax, 10h
0xA11D12: sub     ecx, 1
0xA11D15: fst     dword ptr [eax-14h]
0xA11D18: fst     dword ptr [eax-10h]
0xA11D1B: fst     dword ptr [eax-0Ch]
0xA11D1E: jns     short loc_A11D0C
0xA11D20: fstp    st
0xA11D22: retn
