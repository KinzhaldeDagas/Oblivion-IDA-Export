0x91E950: push    esi
0x91E951: mov     esi, ecx
0x91E953: call    sub_91E860
0x91E958: test    [esp+4+arg_0], 1
0x91E95D: jz      short loc_91E972
0x91E95F: movzx   edx, word ptr [esi+4]
0x91E963: mov     ecx, ds:0BA7D98h
0x91E969: mov     eax, [ecx]
0x91E96B: push    0Eh
0x91E96D: push    edx
0x91E96E: push    esi
0x91E96F: call    dword ptr [eax+14h]
0x91E972: mov     eax, esi
0x91E974: pop     esi
0x91E975: retn    4
