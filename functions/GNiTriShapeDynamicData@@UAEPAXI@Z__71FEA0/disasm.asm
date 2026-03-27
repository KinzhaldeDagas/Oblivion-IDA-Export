0x71FEA0: push    esi
0x71FEA1: mov     esi, ecx
0x71FEA3: call    ??1NiTriShapeDynamicData@@UAE@XZ; NiTriShapeDynamicData::~NiTriShapeDynamicData(void)
0x71FEA8: test    byte ptr [esp+4+arg_0], 1
0x71FEAD: jz      short loc_71FEB8
0x71FEAF: push    esi
0x71FEB0: call    FormHeapFree
0x71FEB5: add     esp, 4
0x71FEB8: mov     eax, esi
0x71FEBA: pop     esi
0x71FEBB: retn    4
