0x469020: mov     edx, ecx
0x469022: mov     ecx, [esp+arg_0]
0x469026: mov     eax, 1
0x46902B: shl     eax, cl
0x46902D: cmp     [esp+arg_4], 0
0x469032: jz      short loc_46903B
0x469034: or      [edx+4], ax
0x469038: retn    8
0x46903B: not     eax
0x46903D: and     [edx+4], ax
0x469041: retn    8
