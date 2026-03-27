0xA11D80: fldz
0xA11D82: mov     ecx, 0Fh
0xA11D87: mov     eax, offset unk_B47500
0xA11D8C: fst     dword ptr [eax-8]
0xA11D8F: add     eax, 10h
0xA11D92: sub     ecx, 1
0xA11D95: fst     dword ptr [eax-14h]
0xA11D98: fst     dword ptr [eax-10h]
0xA11D9B: fst     dword ptr [eax-0Ch]
0xA11D9E: jns     short loc_A11D8C
0xA11DA0: fstp    st
0xA11DA2: retn
