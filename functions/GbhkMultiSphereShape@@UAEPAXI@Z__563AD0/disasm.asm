0x563AD0: push    esi
0x563AD1: mov     esi, ecx
0x563AD3: call    ??1bhkMultiSphereShape@@UAE@XZ; bhkMultiSphereShape::~bhkMultiSphereShape(void)
0x563AD8: test    byte ptr [esp+4+arg_0], 1
0x563ADD: jz      short loc_563AE8
0x563ADF: push    esi
0x563AE0: call    FormHeapFree
0x563AE5: add     esp, 4
0x563AE8: mov     eax, esi
0x563AEA: pop     esi
0x563AEB: retn    4
