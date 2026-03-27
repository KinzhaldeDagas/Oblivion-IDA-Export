0x56CB50: push    esi
0x56CB51: mov     esi, ecx
0x56CB53: call    ??1BSTempEffectDecal@@UAE@XZ; BSTempEffectDecal::~BSTempEffectDecal(void)
0x56CB58: test    byte ptr [esp+4+arg_0], 1
0x56CB5D: jz      short loc_56CB68
0x56CB5F: push    esi
0x56CB60: call    FormHeapFree
0x56CB65: add     esp, 4
0x56CB68: mov     eax, esi
0x56CB6A: pop     esi
0x56CB6B: retn    4
