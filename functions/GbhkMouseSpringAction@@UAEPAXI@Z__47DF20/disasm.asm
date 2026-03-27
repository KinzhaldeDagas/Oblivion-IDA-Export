0x47DF20: push    esi
0x47DF21: mov     esi, ecx
0x47DF23: call    ??1bhkMouseSpringAction@@UAE@XZ; bhkMouseSpringAction::~bhkMouseSpringAction(void)
0x47DF28: test    byte ptr [esp+4+arg_0], 1
0x47DF2D: jz      short loc_47DF38
0x47DF2F: push    esi
0x47DF30: call    FormHeapFree
0x47DF35: add     esp, 4
0x47DF38: mov     eax, esi
0x47DF3A: pop     esi
0x47DF3B: retn    4
