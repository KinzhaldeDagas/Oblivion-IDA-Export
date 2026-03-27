0x989DBC: call    __getptd
0x989DC1: mov     ecx, eax
0x989DC3: mov     eax, [ecx+6Ch]
0x989DC6: cmp     eax, off_B31998
0x989DCC: jz      short loc_989DDE
0x989DCE: mov     edx, dword_B318B0
0x989DD4: test    [ecx+70h], edx
0x989DD7: jnz     short loc_989DDE
0x989DD9: call    ___updatetlocinfo
0x989DDE: add     eax, 0Ch
0x989DE1: retn
