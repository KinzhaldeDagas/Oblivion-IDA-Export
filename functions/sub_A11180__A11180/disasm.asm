0xA11180: fldz
0xA11182: mov     ecx, 0Fh
0xA11187: mov     eax, offset unk_B43230
0xA1118C: fst     dword ptr [eax-8]
0xA1118F: add     eax, 10h
0xA11192: sub     ecx, 1
0xA11195: fst     dword ptr [eax-14h]
0xA11198: fst     dword ptr [eax-10h]
0xA1119B: fst     dword ptr [eax-0Ch]
0xA1119E: jns     short loc_A1118C
0xA111A0: fstp    st
0xA111A2: retn
