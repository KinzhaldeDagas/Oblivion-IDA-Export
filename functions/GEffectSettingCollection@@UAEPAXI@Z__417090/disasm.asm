0x417090: push    esi
0x417091: mov     esi, ecx
0x417093: call    ??1EffectSettingCollection@@UAE@XZ; EffectSettingCollection::~EffectSettingCollection(void)
0x417098: test    byte ptr [esp+4+arg_0], 1
0x41709D: jz      short loc_4170A8
0x41709F: push    esi
0x4170A0: call    FormHeapFree
0x4170A5: add     esp, 4
0x4170A8: mov     eax, esi
0x4170AA: pop     esi
0x4170AB: retn    4
