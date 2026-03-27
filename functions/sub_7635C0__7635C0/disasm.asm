0x7635C0: push    esi
0x7635C1: push    edi
0x7635C2: mov     edi, ecx
0x7635C4: lea     esi, [edi+180h]
0x7635CA: push    esi; lpCriticalSection
0x7635CB: call    dword ptr ds:0A2806Ch
0x7635D1: call    dword ptr ds:0A2808Ch
0x7635D7: add     dword ptr [esi+7Ch], 1
0x7635DB: mov     [esi+78h], eax
0x7635DE: mov     eax, [esp+8+arg_0]
0x7635E2: cmp     dword ptr [eax+24h], 0
0x7635E6: jz      short loc_7635EF
0x7635E8: pop     edi
0x7635E9: mov     al, 1
0x7635EB: pop     esi
0x7635EC: retn    4
0x7635EF: push    edi
0x7635F0: push    eax
0x7635F1: call    sub_774550
0x7635F6: add     esp, 8
0x7635F9: add     dword ptr [esi+7Ch], 0FFFFFFFFh
0x7635FD: mov     edi, eax
0x7635FF: jnz     short loc_763608
0x763601: mov     dword ptr [esi+78h], 0
0x763608: push    esi; lpCriticalSection
0x763609: call    dword ptr ds:0A28074h
0x76360F: test    edi, edi
0x763611: pop     edi
0x763612: setnz   al
0x763615: pop     esi
0x763616: retn    4
