0x98CA4C: mov     ecx, dword_BAABC4
0x98CA52: mov     eax, lpMem
0x98CA57: imul    ecx, 14h
0x98CA5A: add     ecx, eax
0x98CA5C: jmp     short loc_98CA70
0x98CA5E: mov     edx, [esp+arg_0]
0x98CA62: sub     edx, [eax+0Ch]
0x98CA65: cmp     edx, 100000h
0x98CA6B: jb      short locret_98CA76
0x98CA6D: add     eax, 14h
0x98CA70: cmp     eax, ecx
0x98CA72: jb      short loc_98CA5E
0x98CA74: xor     eax, eax
0x98CA76: retn
