0x783010: mov     edx, [esp+arg_8]
0x783014: mov     eax, [ecx+0FF8h]
0x78301A: mov     ecx, [eax]
0x78301C: push    edx
0x78301D: mov     edx, [esp+4+arg_4]
0x783021: push    edx
0x783022: mov     edx, [esp+8+arg_0]
0x783026: push    edx
0x783027: push    eax
0x783028: mov     eax, [ecx+178h]
0x78302E: call    eax
0x783030: xor     ecx, ecx
0x783032: test    eax, eax
0x783034: setnl   cl
0x783037: mov     al, cl
0x783039: retn    10h
