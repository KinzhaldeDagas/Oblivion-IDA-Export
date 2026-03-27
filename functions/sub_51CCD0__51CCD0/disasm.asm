0x51CCD0: cmp     byte ptr [esp+arg_0], 0
0x51CCD5: jz      short loc_51CCE0
0x51CCD7: or      dword ptr [ecx+4], 1000h
0x51CCDE: jmp     short loc_51CCE7
0x51CCE0: and     dword ptr [ecx+4], 0FFFFEFFFh
0x51CCE7: mov     eax, [ecx]
0x51CCE9: mov     edx, [eax+50h]
0x51CCEC: mov     [esp+arg_0], 10h
0x51CCF4: jmp     edx
