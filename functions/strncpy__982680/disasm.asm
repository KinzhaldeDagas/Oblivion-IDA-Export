0x982680: mov     ecx, [esp+Count]
0x982684: push    edi
0x982685: test    ecx, ecx
0x982687: jz      _strncpy___finish
0x98268D: push    esi
0x98268E: push    ebx
0x98268F: mov     ebx, ecx
0x982691: mov     esi, [esp+0Ch+Source]
0x982695: test    esi, 3
0x98269B: mov     edi, [esp+0Ch+Dest]
0x98269F: jnz     short _strncpy___src_misaligned
0x9826A1: shr     ecx, 2
0x9826A4: jnz     _strncpy___main_loop_entrance
0x9826AA: jmp     short _strncpy___copy_tail_loop
