0x73B050: push    esi
0x73B051: mov     esi, ecx
0x73B053: call    ??1NiScreenGeometryData@@UAE@XZ; NiScreenGeometryData::~NiScreenGeometryData(void)
0x73B058: test    byte ptr [esp+4+arg_0], 1
0x73B05D: jz      short loc_73B068
0x73B05F: push    esi
0x73B060: call    FormHeapFree
0x73B065: add     esp, 4
0x73B068: mov     eax, esi
0x73B06A: pop     esi
0x73B06B: retn    4
