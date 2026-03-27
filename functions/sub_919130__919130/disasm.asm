0x919130: push    esi
0x919131: mov     esi, ecx
0x919133: mov     dword ptr [esi], offset off_A9D2A0
0x919139: mov     dword ptr [esi+8], offset off_A9D288
0x919140: mov     dword ptr [esi+20h], offset off_A9D280
0x919147: call    sub_918F80
0x91914C: mov     ecx, esi
0x91914E: call    sub_949180
0x919153: test    [esp+4+arg_0], 1
0x919158: jz      short loc_91916D
0x91915A: movzx   edx, word ptr [esi+4]
0x91915E: mov     ecx, ds:0BA7D98h
0x919164: mov     eax, [ecx]
0x919166: push    32h ; '2'
0x919168: push    edx
0x919169: push    esi
0x91916A: call    dword ptr [eax+14h]
0x91916D: mov     eax, esi
0x91916F: pop     esi
0x919170: retn    4
