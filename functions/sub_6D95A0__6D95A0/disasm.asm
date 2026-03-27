0x6D95A0: cmp     dword ptr [ecx+1Ch], 0
0x6D95A4: jz      short loc_6D95AB
0x6D95A6: xor     al, al
0x6D95A8: retn    4
0x6D95AB: push    offset dword_B3EBA0
0x6D95B0: add     ecx, 0Ch
0x6D95B3: call    sub_73B770
0x6D95B8: test    al, al
0x6D95BA: setz    al
0x6D95BD: retn    4
