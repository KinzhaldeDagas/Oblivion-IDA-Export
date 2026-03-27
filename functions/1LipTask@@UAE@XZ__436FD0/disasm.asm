0x436FD0: push    esi
0x436FD1: mov     esi, ecx
0x436FD3: mov     eax, [esi+20h]
0x436FD6: push    eax
0x436FD7: mov     dword ptr [esi], offset ??_7QueuedFileEntry@@6B@; const QueuedFileEntry::`vftable'
0x436FDD: call    FormHeapFree
0x436FE2: add     esp, 4
0x436FE5: mov     ecx, esi; this
0x436FE7: pop     esi
0x436FE8: jmp     ??1QueuedMagicItem@@UAE@XZ; QueuedMagicItem::~QueuedMagicItem(void)
