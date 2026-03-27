0x4393B0: push    esi
0x4393B1: mov     esi, ecx
0x4393B3: mov     eax, [esi+28h]
0x4393B6: test    eax, eax
0x4393B8: jz      short loc_4393C4
0x4393BA: add     eax, 4
0x4393BD: push    eax; lpAddend
0x4393BE: call    ds:InterlockedDecrement
0x4393C4: mov     eax, [esi+20h]
0x4393C7: push    eax
0x4393C8: mov     dword ptr [esi], offset ??_7QueuedFileEntry@@6B@; const QueuedFileEntry::`vftable'
0x4393CE: call    FormHeapFree
0x4393D3: add     esp, 4
0x4393D6: mov     ecx, esi; this
0x4393D8: call    ??1QueuedMagicItem@@UAE@XZ; QueuedMagicItem::~QueuedMagicItem(void)
0x4393DD: test    [esp+4+arg_0], 1
0x4393E2: jz      short loc_4393ED
0x4393E4: push    esi
0x4393E5: call    FormHeapFree
0x4393EA: add     esp, 4
0x4393ED: mov     eax, esi
0x4393EF: pop     esi
0x4393F0: retn    4
