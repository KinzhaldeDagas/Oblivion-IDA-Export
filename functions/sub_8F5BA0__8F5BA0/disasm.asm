0x8F5BA0: push    esi
0x8F5BA1: mov     esi, ecx
0x8F5BA3: mov     ecx, [esi+8]
0x8F5BA6: mov     eax, [ecx]
0x8F5BA8: call    dword ptr [eax+28h]
0x8F5BAB: mov     ecx, eax
0x8F5BAD: test    ecx, ecx
0x8F5BAF: jl      short loc_8F5BBB
0x8F5BB1: mov     eax, [esi+10h]
0x8F5BB4: sub     eax, [esi+14h]
0x8F5BB7: add     eax, ecx
0x8F5BB9: pop     esi
0x8F5BBA: retn
0x8F5BBB: or      eax, 0FFFFFFFFh
0x8F5BBE: pop     esi
0x8F5BBF: retn
