0x91DB00: push    esi
0x91DB01: mov     esi, ecx
0x91DB03: call    sub_91D890
0x91DB08: test    [esp+4+arg_0], 1
0x91DB0D: jz      short loc_91DB22
0x91DB0F: movzx   edx, word ptr [esi+4]
0x91DB13: mov     ecx, ds:0BA7D98h
0x91DB19: mov     eax, [ecx]
0x91DB1B: push    32h ; '2'
0x91DB1D: push    edx
0x91DB1E: push    esi
0x91DB1F: call    dword ptr [eax+14h]
0x91DB22: mov     eax, esi
0x91DB24: pop     esi
0x91DB25: retn    4
