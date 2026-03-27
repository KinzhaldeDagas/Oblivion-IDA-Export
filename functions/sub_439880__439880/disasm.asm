0x439880: push    esi
0x439881: mov     esi, ecx
0x439883: mov     dword ptr [esi], offset ??_7QueuedTreeModel@@6B@; const QueuedTreeModel::`vftable'
0x439889: mov     eax, [esi+28h]
0x43988C: test    eax, eax
0x43988E: jz      short loc_43989A
0x439890: add     eax, 4
0x439893: push    eax; lpAddend
0x439894: call    ds:InterlockedDecrement
0x43989A: mov     eax, [esi+20h]
0x43989D: push    eax
0x43989E: mov     dword ptr [esi], offset ??_7QueuedFileEntry@@6B@; const QueuedFileEntry::`vftable'
0x4398A4: call    FormHeapFree
0x4398A9: add     esp, 4
0x4398AC: mov     ecx, esi; this
0x4398AE: call    ??1QueuedMagicItem@@UAE@XZ; QueuedMagicItem::~QueuedMagicItem(void)
0x4398B3: test    [esp+4+arg_0], 1
0x4398B8: jz      short loc_4398C3
0x4398BA: push    esi
0x4398BB: call    FormHeapFree
0x4398C0: add     esp, 4
0x4398C3: mov     eax, esi
0x4398C5: pop     esi
0x4398C6: retn    4
