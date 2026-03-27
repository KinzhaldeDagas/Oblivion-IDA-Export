0x90D450: push    esi
0x90D451: mov     esi, ecx
0x90D453: call    sub_940E30
0x90D458: test    [esp+4+arg_0], 1
0x90D45D: jz      short loc_90D472
0x90D45F: movzx   edx, word ptr [esi+4]
0x90D463: mov     ecx, ds:0BA7D98h
0x90D469: mov     eax, [ecx]
0x90D46B: push    6
0x90D46D: push    edx
0x90D46E: push    esi
0x90D46F: call    dword ptr [eax+14h]
0x90D472: mov     eax, esi
0x90D474: pop     esi
0x90D475: retn    4
