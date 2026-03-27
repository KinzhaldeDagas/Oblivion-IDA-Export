0x47D0F0: push    esi
0x47D0F1: mov     esi, ecx
0x47D0F3: mov     al, [esi]
0x47D0F5: test    al, al
0x47D0F7: jz      short loc_47D113
0x47D0F9: sub     al, 1
0x47D0FB: mov     [esi], al
0x47D0FD: jnz     short loc_47D113
0x47D0FF: call    dword ptr ds:0A280D0h
0x47D105: mov     ecx, eax
0x47D107: sub     ecx, [esi+10h]
0x47D10A: sub     eax, [esi+14h]
0x47D10D: mov     [esi+10h], ecx
0x47D110: mov     [esi+14h], eax
0x47D113: pop     esi
0x47D114: retn
