0x9807F8: mov     eax, [esp+arg_0]
0x9807FC: mov     ecx, [eax]
0x9807FE: test    ecx, ecx
0x980800: jz      short locret_980813
0x980802: call    sub_6F6DC0
0x980807: test    eax, eax
0x980809: jz      short locret_980813
0x98080B: mov     edx, [eax]
0x98080D: push    1
0x98080F: mov     ecx, eax
0x980811: call    dword ptr [edx]
0x980813: retn
