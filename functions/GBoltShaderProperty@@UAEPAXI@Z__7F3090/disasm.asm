0x7F3090: push    esi
0x7F3091: mov     esi, ecx
0x7F3093: call    ??1BoltShaderProperty@@UAE@XZ; BoltShaderProperty::~BoltShaderProperty(void)
0x7F3098: test    byte ptr [esp+4+arg_0], 1
0x7F309D: jz      short loc_7F30A8
0x7F309F: push    esi
0x7F30A0: call    FormHeapFree
0x7F30A5: add     esp, 4
0x7F30A8: mov     eax, esi
0x7F30AA: pop     esi
0x7F30AB: retn    4
