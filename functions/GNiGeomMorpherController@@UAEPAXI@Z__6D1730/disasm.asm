0x6D1730: push    esi
0x6D1731: mov     esi, ecx
0x6D1733: call    ??1NiGeomMorpherController@@UAE@XZ; NiGeomMorpherController::~NiGeomMorpherController(void)
0x6D1738: test    byte ptr [esp+4+arg_0], 1
0x6D173D: jz      short loc_6D1748
0x6D173F: push    esi
0x6D1740: call    FormHeapFree
0x6D1745: add     esp, 4
0x6D1748: mov     eax, esi
0x6D174A: pop     esi
0x6D174B: retn    4
