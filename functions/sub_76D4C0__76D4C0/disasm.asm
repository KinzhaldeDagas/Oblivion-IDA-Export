0x76D4C0: cmp     dword ptr ds:0B42610h, 0
0x76D4C7: jz      short loc_76D4EB
0x76D4C9: mov     eax, [esp+arg_0]
0x76D4CD: mov     ecx, [eax]
0x76D4CF: mov     edx, [ecx+9Ch]
0x76D4D5: push    0
0x76D4D7: push    eax
0x76D4D8: call    edx
0x76D4DA: test    eax, eax
0x76D4DC: jge     short loc_76D4E1
0x76D4DE: xor     al, al
0x76D4E0: retn
0x76D4E1: mov     dword ptr ds:0B42610h, 0
0x76D4EB: mov     al, 1
0x76D4ED: retn
