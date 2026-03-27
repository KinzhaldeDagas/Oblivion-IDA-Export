0x91E730: push    esi
0x91E731: mov     esi, ecx
0x91E733: call    sub_91E4A0
0x91E738: test    [esp+4+arg_0], 1
0x91E73D: jz      short loc_91E752
0x91E73F: movzx   edx, word ptr [esi+4]
0x91E743: mov     ecx, ds:0BA7D98h
0x91E749: mov     eax, [ecx]
0x91E74B: push    0Eh
0x91E74D: push    edx
0x91E74E: push    esi
0x91E74F: call    dword ptr [eax+14h]
0x91E752: mov     eax, esi
0x91E754: pop     esi
0x91E755: retn    4
