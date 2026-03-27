0x742110: mov     eax, [ecx+0B4h]
0x742116: mov     cx, [eax+2Eh]
0x74211A: and     cx, 0FFFh
0x74211F: or      cx, 8000h
0x742124: mov     [eax+2Eh], cx
0x742128: retn    4
