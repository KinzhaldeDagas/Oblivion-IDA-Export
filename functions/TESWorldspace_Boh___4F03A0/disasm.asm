0x4F03A0: push    esi
0x4F03A1: mov     esi, [esp+4+arg_0]
0x4F03A5: test    esi, esi
0x4F03A7: jz      short loc_4F03C0
0x4F03A9: mov     eax, [esi+8]
0x4F03AC: shr     eax, 0Eh
0x4F03AF: test    al, 1
0x4F03B1: jnz     short loc_4F03C0
0x4F03B3: call    sub_4EF1F0
0x4F03B8: push    esi; Concurrency::details::SchedulerBase *
0x4F03B9: mov     ecx, eax
0x4F03BB: call    sub_4D35D0
0x4F03C0: pop     esi
0x4F03C1: retn    4
