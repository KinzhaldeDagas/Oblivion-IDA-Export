0x7B2110: movsx   eax, [esp+arg_0]
0x7B2115: mov     cx, [esp+arg_4]
0x7B211A: sar     cx, 2
0x7B211E: and     eax, 0FFFFFFFCh
0x7B2121: movzx   edx, cx
0x7B2124: shl     eax, 0Eh
0x7B2127: or      eax, edx
0x7B2129: retn
