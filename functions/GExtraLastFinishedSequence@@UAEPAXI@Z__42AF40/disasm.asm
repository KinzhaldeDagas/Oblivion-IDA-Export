0x42AF40: push    esi
0x42AF41: mov     esi, ecx
0x42AF43: call    ??1ExtraLastFinishedSequence@@UAE@XZ; ExtraLastFinishedSequence::~ExtraLastFinishedSequence(void)
0x42AF48: test    byte ptr [esp+4+arg_0], 1
0x42AF4D: jz      short loc_42AF58
0x42AF4F: push    esi
0x42AF50: call    FormHeapFree
0x42AF55: add     esp, 4
0x42AF58: mov     eax, esi
0x42AF5A: pop     esi
0x42AF5B: retn    4
