0x918E10: push    esi
0x918E11: mov     esi, ecx
0x918E13: lea     ecx, [esi+28h]
0x918E16: mov     dword ptr [esi], offset off_A9D270
0x918E1C: mov     dword ptr [esi+8], offset off_A9D258
0x918E23: mov     dword ptr [esi+20h], offset off_A9D250
0x918E2A: call    sub_948D90
0x918E2F: mov     ecx, esi
0x918E31: call    sub_949180
0x918E36: test    [esp+4+arg_0], 1
0x918E3B: jz      short loc_918E50
0x918E3D: movzx   edx, word ptr [esi+4]
0x918E41: mov     ecx, ds:0BA7D98h
0x918E47: mov     eax, [ecx]
0x918E49: push    32h ; '2'
0x918E4B: push    edx
0x918E4C: push    esi
0x918E4D: call    dword ptr [eax+14h]
0x918E50: mov     eax, esi
0x918E52: pop     esi
0x918E53: retn    4
