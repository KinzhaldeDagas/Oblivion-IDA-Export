0x4416D0: mov     eax, [esp+arg_0]
0x4416D4: test    eax, eax
0x4416D6: jz      short locret_4416EB
0x4416D8: mov     ecx, [ecx+88h]
0x4416DE: test    ecx, ecx
0x4416E0: jz      short locret_4416EB
0x4416E2: mov     [esp+arg_0], eax
0x4416E6: jmp     BSSimpleList_Remove
0x4416EB: retn    4
