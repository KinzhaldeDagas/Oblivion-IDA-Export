0x91CC00: push    esi
0x91CC01: mov     esi, ecx
0x91CC03: call    sub_91CAB0
0x91CC08: test    [esp+4+arg_0], 1
0x91CC0D: jz      short loc_91CC22
0x91CC0F: movzx   edx, word ptr [esi+4]
0x91CC13: mov     ecx, ds:0BA7D98h
0x91CC19: mov     eax, [ecx]
0x91CC1B: push    32h ; '2'
0x91CC1D: push    edx
0x91CC1E: push    esi
0x91CC1F: call    dword ptr [eax+14h]
0x91CC22: mov     eax, esi
0x91CC24: pop     esi
0x91CC25: retn    4
