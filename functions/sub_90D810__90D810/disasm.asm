0x90D810: push    esi
0x90D811: mov     esi, ecx
0x90D813: mov     dword ptr [esi], offset off_A9C990
0x90D819: call    sub_940E30
0x90D81E: test    [esp+4+arg_0], 1
0x90D823: jz      short loc_90D838
0x90D825: movzx   edx, word ptr [esi+4]
0x90D829: mov     ecx, ds:0BA7D98h
0x90D82F: mov     eax, [ecx]
0x90D831: push    6
0x90D833: push    edx
0x90D834: push    esi
0x90D835: call    dword ptr [eax+14h]
0x90D838: mov     eax, esi
0x90D83A: pop     esi
0x90D83B: retn    4
