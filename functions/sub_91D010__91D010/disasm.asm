0x91D010: push    esi
0x91D011: mov     esi, ecx
0x91D013: call    sub_91CE50
0x91D018: test    [esp+4+arg_0], 1
0x91D01D: jz      short loc_91D032
0x91D01F: movzx   edx, word ptr [esi+4]
0x91D023: mov     ecx, ds:0BA7D98h
0x91D029: mov     eax, [ecx]
0x91D02B: push    32h ; '2'
0x91D02D: push    edx
0x91D02E: push    esi
0x91D02F: call    dword ptr [eax+14h]
0x91D032: mov     eax, esi
0x91D034: pop     esi
0x91D035: retn    4
