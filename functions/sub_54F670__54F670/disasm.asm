0x54F670: mov     ecx, [esp+arg_0]
0x54F674: test    ecx, ecx
0x54F676: jz      short locret_54F690
0x54F678: mov     eax, [esp+arg_4]
0x54F67C: test    eax, eax
0x54F67E: jz      short locret_54F690
0x54F680: add     eax, eax
0x54F682: add     eax, eax
0x54F684: push    eax
0x54F685: push    0
0x54F687: push    ecx
0x54F688: call    __memset
0x54F68D: add     esp, 0Ch
0x54F690: retn
