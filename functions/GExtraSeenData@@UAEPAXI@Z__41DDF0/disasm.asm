0x41DDF0: push    esi
0x41DDF1: mov     esi, ecx
0x41DDF3: call    ??1ExtraSeenData@@UAE@XZ; ExtraSeenData::~ExtraSeenData(void)
0x41DDF8: test    byte ptr [esp+4+arg_0], 1
0x41DDFD: jz      short loc_41DE08
0x41DDFF: push    esi
0x41DE00: call    FormHeapFree
0x41DE05: add     esp, 4
0x41DE08: mov     eax, esi
0x41DE0A: pop     esi
0x41DE0B: retn    4
