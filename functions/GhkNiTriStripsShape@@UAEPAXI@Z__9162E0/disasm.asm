0x9162E0: push    esi
0x9162E1: mov     esi, ecx
0x9162E3: call    ??1hkNiTriStripsShape@@UAE@XZ; hkNiTriStripsShape::~hkNiTriStripsShape(void)
0x9162E8: test    byte ptr [esp+4+arg_0], 1
0x9162ED: jz      short loc_916306
0x9162EF: test    esi, esi
0x9162F1: jz      short loc_916306
0x9162F3: movzx   eax, byte ptr [esi-1]
0x9162F7: mov     ecx, esi
0x9162F9: sub     ecx, eax
0x9162FB: push    ecx; void *
0x9162FC: mov     ecx, offset FormHeap
0x916301: call    MemoryHeap_Free_checked
0x916306: mov     eax, esi
0x916308: pop     esi
0x916309: retn    4
