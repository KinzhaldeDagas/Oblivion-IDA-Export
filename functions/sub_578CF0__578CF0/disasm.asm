0x578CF0: mov     ecx, ds:0B333C4h
0x578CF6: test    ecx, ecx
0x578CF8: jz      short locret_578D20
0x578CFA: mov     eax, [ecx]
0x578CFC: mov     edx, [eax+154h]
0x578D02: call    edx
0x578D04: test    eax, eax
0x578D06: jz      short locret_578D20
0x578D08: mov     eax, [esp+arg_0]
0x578D0C: push    eax
0x578D0D: push    1; arg1
0x578D0F: push    0; canCreate
0x578D11: call    InterfaceManager_GetSingleton
0x578D16: add     esp, 8
0x578D19: mov     ecx, eax
0x578D1B: call    sub_57D940
0x578D20: retn
