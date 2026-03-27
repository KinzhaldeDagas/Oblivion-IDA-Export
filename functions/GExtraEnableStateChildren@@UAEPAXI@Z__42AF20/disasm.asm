0x42AF20: push    esi
0x42AF21: mov     esi, ecx
0x42AF23: call    ??1ExtraEnableStateChildren@@UAE@XZ; ExtraEnableStateChildren::~ExtraEnableStateChildren(void)
0x42AF28: test    byte ptr [esp+4+arg_0], 1
0x42AF2D: jz      short loc_42AF38
0x42AF2F: push    esi
0x42AF30: call    FormHeapFree
0x42AF35: add     esp, 4
0x42AF38: mov     eax, esi
0x42AF3A: pop     esi
0x42AF3B: retn    4
