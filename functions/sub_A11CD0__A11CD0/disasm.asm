0xA11CD0: fldz
0xA11CD2: mov     ecx, 20h ; ' '
0xA11CD7: mov     eax, offset dword_B46CD0
0xA11CDC: fst     dword ptr [eax-8]
0xA11CDF: add     eax, 10h
0xA11CE2: sub     ecx, 1
0xA11CE5: fst     dword ptr [eax-14h]
0xA11CE8: fst     dword ptr [eax-10h]
0xA11CEB: fst     dword ptr [eax-0Ch]
0xA11CEE: jns     short loc_A11CDC
0xA11CF0: fstp    st
0xA11CF2: retn
