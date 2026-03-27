0x783BF0: mov     eax, ds:0B428C0h
0x783BF5: mov     ecx, [eax]
0x783BF7: lea     edx, [esp+arg_0]
0x783BFB: push    edx
0x783BFC: mov     edx, [esp+4+arg_0]
0x783C00: push    edx
0x783C01: push    eax
0x783C02: mov     eax, [ecx+16Ch]
0x783C08: call    eax
0x783C0A: test    eax, eax
0x783C0C: jge     short loc_783C25
0x783C0E: push    eax; ArgList
0x783C0F: push    offset aFailedToCrea_2; "Failed to create vertex shader\nError 0"...
0x783C14: push    0; int
0x783C16: push    1; int
0x783C18: call    sub_738460
0x783C1D: add     esp, 10h
0x783C20: xor     eax, eax
0x783C22: retn    18h
0x783C25: mov     eax, [esp+arg_0]
0x783C29: retn    18h
