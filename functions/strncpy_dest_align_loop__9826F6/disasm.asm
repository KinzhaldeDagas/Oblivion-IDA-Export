0x9826F6: mov     [edi], al
0x9826F8: add     edi, 1
0x9826FB: sub     ecx, 1
0x9826FE: jz      _strncpy___fill_tail_end
0x982704: test    edi, 3
0x98270A: jnz     short _strncpy___dest_align_loop
