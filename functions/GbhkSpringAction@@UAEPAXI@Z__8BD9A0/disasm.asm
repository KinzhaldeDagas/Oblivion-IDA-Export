0x8BD9A0: push    esi
0x8BD9A1: mov     esi, ecx
0x8BD9A3: call    ??1bhkSpringAction@@UAE@XZ; bhkSpringAction::~bhkSpringAction(void)
0x8BD9A8: test    byte ptr [esp+4+arg_0], 1
0x8BD9AD: jz      short loc_8BD9B8
0x8BD9AF: push    esi
0x8BD9B0: call    FormHeapFree
0x8BD9B5: add     esp, 4
0x8BD9B8: mov     eax, esi
0x8BD9BA: pop     esi
0x8BD9BB: retn    4
