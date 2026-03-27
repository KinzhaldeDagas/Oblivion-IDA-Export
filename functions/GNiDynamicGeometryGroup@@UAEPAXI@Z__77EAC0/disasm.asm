0x77EAC0: push    esi
0x77EAC1: mov     esi, ecx
0x77EAC3: call    ??1NiDynamicGeometryGroup@@UAE@XZ; NiDynamicGeometryGroup::~NiDynamicGeometryGroup(void)
0x77EAC8: test    byte ptr [esp+4+arg_0], 1
0x77EACD: jz      short loc_77EAD8
0x77EACF: push    esi
0x77EAD0: call    FormHeapFree
0x77EAD5: add     esp, 4
0x77EAD8: mov     eax, esi
0x77EADA: pop     esi
0x77EADB: retn    4
