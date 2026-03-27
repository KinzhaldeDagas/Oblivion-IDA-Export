0x98590E: ja      short start_2___not_in_range
0x985910: mov     eax, [esp+arg_8]
0x985914: mov     ecx, eax
0x985916: and     eax, 0FFFFFh
0x98591B: or      eax, [esp+arg_4]
0x98591F: jnz     short start_2___not_in_range
0x985921: and     ecx, 80000000h
0x985927: fstp    st
0x985929: fld     tbyte ptr ds:0B319BAh
0x98592F: jz      short start_2___exit_1
0x985931: fchs
0x985933: jmp     short start_2___exit_1
