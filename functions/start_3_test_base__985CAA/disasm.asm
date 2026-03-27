0x985CAA: mov     eax, [esp+arg_8]
0x985CAE: mov     edx, eax
0x985CB0: and     eax, 7FF00000h
0x985CB5: and     edx, 0FFFFFh
0x985CBB: cmp     eax, 7FF00000h
0x985CC0: jnz     short start_3___end_of_tests
0x985CC2: or      edx, [esp+arg_4]
0x985CC6: jnz     short start_3___base_is_NAN
