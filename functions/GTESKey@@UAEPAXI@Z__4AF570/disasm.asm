0x4AF570: push    esi
0x4AF571: mov     esi, ecx
0x4AF573: call    ??1TESKey@@UAE@XZ; TESKey::~TESKey(void)
0x4AF578: test    byte ptr [esp+4+arg_0], 1
0x4AF57D: jz      short loc_4AF588
0x4AF57F: push    esi
0x4AF580: call    FormHeapFree
0x4AF585: add     esp, 4
0x4AF588: mov     eax, esi
0x4AF58A: pop     esi
0x4AF58B: retn    4
