0x946570: push    esi
0x946571: mov     esi, ecx
0x946573: call    sub_946470
0x946578: test    [esp+4+arg_0], 1
0x94657D: jz      short loc_946592
0x94657F: movzx   edx, word ptr [esi+4]
0x946583: mov     ecx, ds:0BA7D98h
0x946589: mov     eax, [ecx]
0x94658B: push    32h ; '2'
0x94658D: push    edx
0x94658E: push    esi
0x94658F: call    dword ptr [eax+14h]
0x946592: mov     eax, esi
0x946594: pop     esi
0x946595: retn    4
