0x783C30: mov     eax, ds:0B428C0h
0x783C35: mov     ecx, [eax]
0x783C37: lea     edx, [esp+arg_0]
0x783C3B: push    edx
0x783C3C: mov     edx, [esp+4+arg_0]
0x783C40: push    edx
0x783C41: push    eax
0x783C42: mov     eax, [ecx+1A8h]
0x783C48: call    eax
0x783C4A: test    eax, eax
0x783C4C: jge     short loc_783C65
0x783C4E: push    eax; ArgList
0x783C4F: push    offset aFailedToCrea_3; "Failed to create pixel shader\nError 0x"...
0x783C54: push    0; int
0x783C56: push    1; int
0x783C58: call    sub_738460
0x783C5D: add     esp, 10h
0x783C60: xor     eax, eax
0x783C62: retn    4
0x783C65: mov     eax, [esp+arg_0]
0x783C69: retn    4
