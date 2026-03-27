0x897A90: mov     eax, [esp+arg_0]
0x897A94: push    eax
0x897A95: call    sub_4A05E0
0x897A9A: add     esp, 4
0x897A9D: test    eax, eax
0x897A9F: jz      short locret_897AB2
0x897AA1: mov     ecx, [eax+10h]
0x897AA4: test    ecx, ecx
0x897AA6: jz      short locret_897AB2
0x897AA8: mov     edx, [esp+arg_4]
0x897AAC: push    edx
0x897AAD: call    sub_89F520
0x897AB2: retn
