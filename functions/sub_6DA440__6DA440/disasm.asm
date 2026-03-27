0x6DA440: push    esi
0x6DA441: push    edi
0x6DA442: mov     edi, ecx
0x6DA444: mov     esi, [edi+18h]
0x6DA447: test    esi, esi
0x6DA449: jz      short loc_6DA46E
0x6DA44B: lea     eax, [esi+4]
0x6DA44E: push    eax; lpAddend
0x6DA44F: call    dword ptr ds:0A2807Ch
0x6DA455: test    eax, eax
0x6DA457: jnz     short loc_6DA467
0x6DA459: test    esi, esi
0x6DA45B: jz      short loc_6DA467
0x6DA45D: mov     edx, [esi]
0x6DA45F: mov     eax, [edx]
0x6DA461: push    1
0x6DA463: mov     ecx, esi
0x6DA465: call    eax
0x6DA467: mov     dword ptr [edi+18h], 0
0x6DA46E: mov     ecx, [esp+8+arg_0]
0x6DA472: mov     edx, [esp+8+arg_4]
0x6DA476: mov     eax, [esp+8+arg_8]
0x6DA47A: mov     [edi+0Ch], ecx
0x6DA47D: mov     [edi+10h], edx
0x6DA480: mov     [edi+14h], eax
0x6DA483: pop     edi
0x6DA484: pop     esi
0x6DA485: retn    0Ch
