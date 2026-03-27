0x9363C0: mov     byte ptr [ecx+22h], 0
0x9363C4: movzx   eax, byte ptr [ecx+21h]
0x9363C8: mov     edx, [ecx+eax*4-4]
0x9363CC: mov     eax, [esp+arg_0]
0x9363D0: mov     [ecx+eax*4], edx
0x9363D3: dec     byte ptr [ecx+21h]
0x9363D6: retn    4
