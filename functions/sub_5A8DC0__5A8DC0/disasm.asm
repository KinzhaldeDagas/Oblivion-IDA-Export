0x5A8DC0: mov     eax, [esp+arg_0]
0x5A8DC4: cmp     eax, 1
0x5A8DC7: jnz     short loc_5A8DD3
0x5A8DC9: mov     eax, [esp+arg_4]
0x5A8DCD: mov     [ecx+28h], eax
0x5A8DD0: retn    8
0x5A8DD3: cmp     eax, 2
0x5A8DD6: jnz     short locret_5A8DDF
0x5A8DD8: mov     edx, [esp+arg_4]
0x5A8DDC: mov     [ecx+34h], edx
0x5A8DDF: retn    8
