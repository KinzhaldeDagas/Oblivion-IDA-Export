0x942F90: mov     eax, [esp+arg_4]
0x942F94: push    0
0x942F96: push    eax
0x942F97: add     ecx, 8
0x942F9A: call    sub_942B40
0x942F9F: test    eax, eax
0x942FA1: jz      short locret_942FB2
0x942FA3: mov     eax, [eax+4]
0x942FA6: test    eax, eax
0x942FA8: jz      short locret_942FB2
0x942FAA: mov     ecx, [esp+arg_0]
0x942FAE: push    ecx
0x942FAF: call    eax
0x942FB1: pop     ecx
0x942FB2: retn    8
