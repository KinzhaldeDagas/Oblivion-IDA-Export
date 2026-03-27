0x402E30: mov     ecx, [esp+Format]
0x402E34: lea     eax, [esp+ArgList]
0x402E38: push    eax; ArgList
0x402E39: push    ecx; Format
0x402E3A: mov     ecx, [esp+8+arg_0]
0x402E3E: call    BSStringT_Format
0x402E43: retn
