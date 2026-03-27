0x7E30F0: push    esi
0x7E30F1: mov     esi, ds:0B46014h
0x7E30F7: test    esi, esi
0x7E30F9: jz      short loc_7E3121
0x7E30FB: lea     eax, [esi+4]
0x7E30FE: push    eax; lpAddend
0x7E30FF: call    dword ptr ds:0A2807Ch
0x7E3105: test    eax, eax
0x7E3107: jnz     short loc_7E3117
0x7E3109: test    esi, esi
0x7E310B: jz      short loc_7E3117
0x7E310D: mov     edx, [esi]
0x7E310F: mov     eax, [edx]
0x7E3111: push    1
0x7E3113: mov     ecx, esi
0x7E3115: call    eax
0x7E3117: mov     dword ptr ds:0B46014h, 0
0x7E3121: pop     esi
0x7E3122: retn
