0x8F7110: push    esi
0x8F7111: mov     esi, ecx
0x8F7113: call    sub_8F6E30
0x8F7118: test    [esp+4+arg_0], 1
0x8F711D: jz      short loc_8F7132
0x8F711F: movzx   edx, word ptr [esi+4]
0x8F7123: mov     ecx, ds:0BA7D98h
0x8F7129: mov     eax, [ecx]
0x8F712B: push    1Ch
0x8F712D: push    edx
0x8F712E: push    esi
0x8F712F: call    dword ptr [eax+14h]
0x8F7132: mov     eax, esi
0x8F7134: pop     esi
0x8F7135: retn    4
