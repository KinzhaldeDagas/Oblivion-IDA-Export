0x8E6460: push    esi
0x8E6461: mov     esi, ecx
0x8E6463: call    sub_8E5050
0x8E6468: test    [esp+4+arg_0], 1
0x8E646D: jz      short loc_8E6482
0x8E646F: movzx   edx, word ptr [esi+4]
0x8E6473: mov     ecx, ds:0BA7D98h
0x8E6479: mov     eax, [ecx]
0x8E647B: push    1Eh
0x8E647D: push    edx
0x8E647E: push    esi
0x8E647F: call    dword ptr [eax+14h]
0x8E6482: mov     eax, esi
0x8E6484: pop     esi
0x8E6485: retn    4
