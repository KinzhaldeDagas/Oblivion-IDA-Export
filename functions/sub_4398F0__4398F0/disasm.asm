0x4398F0: push    esi
0x4398F1: mov     esi, ecx
0x4398F3: mov     eax, [esi+28h]
0x4398F6: test    eax, eax
0x4398F8: jz      short loc_439904
0x4398FA: add     eax, 0Ch
0x4398FD: push    eax; lpAddend
0x4398FE: call    ds:InterlockedDecrement
0x439904: mov     eax, [esi+20h]
0x439907: push    eax
0x439908: mov     dword ptr [esi], offset ??_7QueuedFileEntry@@6B@; const QueuedFileEntry::`vftable'
0x43990E: call    FormHeapFree
0x439913: add     esp, 4
0x439916: mov     ecx, esi; this
0x439918: call    ??1QueuedMagicItem@@UAE@XZ; QueuedMagicItem::~QueuedMagicItem(void)
0x43991D: test    [esp+4+arg_0], 1
0x439922: jz      short loc_43992D
0x439924: push    esi
0x439925: call    FormHeapFree
0x43992A: add     esp, 4
0x43992D: mov     eax, esi
0x43992F: pop     esi
0x439930: retn    4
