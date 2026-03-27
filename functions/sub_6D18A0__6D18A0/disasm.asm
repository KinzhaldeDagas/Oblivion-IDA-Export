0x6D18A0: push    ecx
0x6D18A1: mov     eax, [ecx+50h]
0x6D18A4: fild    dword ptr [ecx+50h]
0x6D18A7: test    eax, eax
0x6D18A9: jge     short loc_6D18B1
0x6D18AB: fadd    dword ptr ds:0A2FC78h
0x6D18B1: mov     ecx, [esp+4+arg_0]
0x6D18B5: fstp    dword ptr [ecx]
0x6D18B7: pop     ecx
0x6D18B8: retn    4
