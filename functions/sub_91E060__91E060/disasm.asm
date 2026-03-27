0x91E060: push    esi
0x91E061: mov     esi, ecx
0x91E063: call    sub_91DFA0
0x91E068: test    [esp+4+arg_0], 1
0x91E06D: jz      short loc_91E082
0x91E06F: movzx   edx, word ptr [esi+4]
0x91E073: mov     ecx, ds:0BA7D98h
0x91E079: mov     eax, [ecx]
0x91E07B: push    32h ; '2'
0x91E07D: push    edx
0x91E07E: push    esi
0x91E07F: call    dword ptr [eax+14h]
0x91E082: mov     eax, esi
0x91E084: pop     esi
0x91E085: retn    4
