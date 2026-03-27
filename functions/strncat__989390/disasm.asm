0x989390: mov     ecx, [esp+Count]
0x989394: push    edi
0x989395: test    ecx, ecx
0x989397: jz      _strncat___finish_0
0x98939D: mov     edi, [esp+4+Dest]
0x9893A1: push    esi
0x9893A2: test    edi, 3
0x9893A8: push    ebx
0x9893A9: jz      short _strncat___find_end_of_front_string_loop
