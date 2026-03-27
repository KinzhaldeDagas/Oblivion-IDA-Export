0x90C800: push    esi
0x90C801: mov     esi, ecx
0x90C803: call    sub_90C830
0x90C808: test    [esp+4+arg_0], 1
0x90C80D: jz      short loc_90C822
0x90C80F: movzx   edx, word ptr [esi+4]
0x90C813: mov     ecx, ds:0BA7D98h
0x90C819: mov     eax, [ecx]
0x90C81B: push    24h ; '$'
0x90C81D: push    edx
0x90C81E: push    esi
0x90C81F: call    dword ptr [eax+14h]
0x90C822: mov     eax, esi
0x90C824: pop     esi
0x90C825: retn    4
