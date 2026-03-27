0x8BD330: push    esi
0x8BD331: mov     esi, ecx
0x8BD333: call    ??1bhkCachingShapePhantom@@UAE@XZ; bhkCachingShapePhantom::~bhkCachingShapePhantom(void)
0x8BD338: test    byte ptr [esp+4+arg_0], 1
0x8BD33D: jz      short loc_8BD348
0x8BD33F: push    esi
0x8BD340: call    FormHeapFree
0x8BD345: add     esp, 4
0x8BD348: mov     eax, esi
0x8BD34A: pop     esi
0x8BD34B: retn    4
