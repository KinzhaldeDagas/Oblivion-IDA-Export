0x890210: push    esi
0x890211: mov     esi, ecx
0x890213: call    ??1bhkShapeCollection@@UAE@XZ; bhkShapeCollection::~bhkShapeCollection(void)
0x890218: test    byte ptr [esp+4+arg_0], 1
0x89021D: jz      short loc_890228
0x89021F: push    esi
0x890220: call    FormHeapFree
0x890225: add     esp, 4
0x890228: mov     eax, esi
0x89022A: pop     esi
0x89022B: retn    4
