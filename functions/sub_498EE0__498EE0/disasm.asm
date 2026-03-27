0x498EE0: cmp     [esp+arg_4], 0
0x498EE5: jz      short loc_498EF3
0x498EE7: mov     eax, [esp+dwMilliseconds]
0x498EEB: push    eax; dwMilliseconds
0x498EEC: call    dword ptr ds:0A280DCh
0x498EF2: retn
0x498EF3: mov     ecx, [esp+dwMilliseconds]
0x498EF7: add     ds:0B350E8h, ecx
0x498EFD: retn
