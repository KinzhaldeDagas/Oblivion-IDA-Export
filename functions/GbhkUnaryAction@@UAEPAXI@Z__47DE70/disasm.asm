0x47DE70: push    esi
0x47DE71: mov     esi, ecx
0x47DE73: call    ??1bhkUnaryAction@@UAE@XZ; bhkUnaryAction::~bhkUnaryAction(void)
0x47DE78: test    byte ptr [esp+4+arg_0], 1
0x47DE7D: jz      short loc_47DE88
0x47DE7F: push    esi
0x47DE80: call    FormHeapFree
0x47DE85: add     esp, 4
0x47DE88: mov     eax, esi
0x47DE8A: pop     esi
0x47DE8B: retn    4
