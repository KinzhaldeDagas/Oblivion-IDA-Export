0x439350: push    esi
0x439351: mov     esi, ecx
0x439353: mov     eax, [esi+20h]
0x439356: push    eax
0x439357: mov     dword ptr [esi], offset ??_7QueuedFileEntry@@6B@; const QueuedFileEntry::`vftable'
0x43935D: call    FormHeapFree
0x439362: add     esp, 4
0x439365: mov     ecx, esi; this
0x439367: call    ??1QueuedMagicItem@@UAE@XZ; QueuedMagicItem::~QueuedMagicItem(void)
0x43936C: test    [esp+4+arg_0], 1
0x439371: jz      short loc_43937C
0x439373: push    esi
0x439374: call    FormHeapFree
0x439379: add     esp, 4
0x43937C: mov     eax, esi
0x43937E: pop     esi
0x43937F: retn    4
