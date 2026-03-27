0xA11760: fldz
0xA11762: mov     ecx, 22h ; '"'
0xA11767: mov     eax, offset dword_B464A0
0xA1176C: fst     dword ptr [eax-8]
0xA1176F: add     eax, 10h
0xA11772: sub     ecx, 1
0xA11775: fst     dword ptr [eax-14h]
0xA11778: fst     dword ptr [eax-10h]
0xA1177B: fst     dword ptr [eax-0Ch]
0xA1177E: jns     short loc_A1176C
0xA11780: fstp    st
0xA11782: retn
