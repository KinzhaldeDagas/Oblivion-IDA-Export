0x4CACE0: movzx   eax, byte ptr [ecx+24h]
0x4CACE4: shr     eax, 1
0x4CACE6: test    al, 1
0x4CACE8: jnz     short loc_4CACF1
0x4CACEA: fld     dword ptr ds:0A3B888h
0x4CACF0: retn
0x4CACF1: add     ecx, 28h ; '('
0x4CACF4: jmp     GetCellWaterHeight
