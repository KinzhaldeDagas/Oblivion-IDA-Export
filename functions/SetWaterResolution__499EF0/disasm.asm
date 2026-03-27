0x499EF0: push    ecx
0x499EF1: mov     al, ds:0B07058h
0x499EF6: test    al, al
0x499EF8: push    ebp
0x499EF9: push    esi
0x499EFA: push    edi
0x499EFB: mov     edi, ecx
0x499EFD: mov     ds:0B45FD0h, al
0x499F02: jz      short loc_499F1A
0x499F04: mov     dword ptr ds:0B45FC8h, 100h
0x499F0E: mov     dword ptr ds:0B45FCCh, 8
0x499F18: jmp     short loc_499F2E
0x499F1A: mov     dword ptr ds:0B45FC8h, 80h ; '€'
0x499F24: mov     dword ptr ds:0B45FCCh, 7
0x499F2E: fild    dword ptr ds:0B45FC8h
0x499F34: mov     ecx, ds:0B45FE0h
0x499F3A: test    ecx, ecx
0x499F3C: fld1
0x499F3E: fdivrp  st(1), st
0x499F40: fstp    [esp+10h+var_4]
0x499F44: fld     [esp+10h+var_4]
0x499F48: fst     dword ptr ds:0B45FE4h
0x499F4E: fst     dword ptr ds:0B45FE8h
0x499F54: fst     dword ptr ds:0B45FECh
0x499F5A: fstp    dword ptr ds:0B45FF0h
0x499F60: jz      short loc_499F72
0x499F62: call    sub_7E0CB0
0x499F67: mov     ecx, ds:0B45FE0h; this
0x499F6D: call    sub_7E1710
0x499F72: mov     eax, [edi+8]
0x499F75: test    eax, eax
0x499F77: jz      short loc_499F85
0x499F79: mov     ecx, ds:0B42F50h; this
0x499F7F: push    eax; a2
0x499F80: call    sub_7C1EE0
0x499F85: mov     eax, [edi+10h]
0x499F88: test    eax, eax
0x499F8A: jz      short loc_499F98
0x499F8C: mov     ecx, ds:0B42F50h; this
0x499F92: push    eax; a2
0x499F93: call    sub_7C1EE0
0x499F98: mov     esi, [edi+8]
0x499F9B: test    esi, esi
0x499F9D: mov     ebp, ds:0A2807Ch
0x499FA3: jz      short loc_499FC4
0x499FA5: lea     eax, [esi+4]
0x499FA8: push    eax; lpAddend
0x499FA9: call    ebp ; InterlockedDecrement
0x499FAB: test    eax, eax
0x499FAD: jnz     short loc_499FBD
0x499FAF: test    esi, esi
0x499FB1: jz      short loc_499FBD
0x499FB3: mov     edx, [esi]
0x499FB5: mov     eax, [edx]
0x499FB7: push    1
0x499FB9: mov     ecx, esi
0x499FBB: call    eax
0x499FBD: mov     dword ptr [edi+8], 0
0x499FC4: mov     esi, [edi+10h]
0x499FC7: test    esi, esi
0x499FC9: jz      short loc_499FEA
0x499FCB: lea     ecx, [esi+4]
0x499FCE: push    ecx; lpAddend
0x499FCF: call    ebp ; InterlockedDecrement
0x499FD1: test    eax, eax
0x499FD3: jnz     short loc_499FE3
0x499FD5: test    esi, esi
0x499FD7: jz      short loc_499FE3
0x499FD9: mov     edx, [esi]
0x499FDB: mov     eax, [edx]
0x499FDD: push    1
0x499FDF: mov     ecx, esi
0x499FE1: call    eax
0x499FE3: mov     dword ptr [edi+10h], 0
0x499FEA: pop     edi
0x499FEB: pop     esi
0x499FEC: pop     ebp
0x499FED: pop     ecx
0x499FEE: retn
