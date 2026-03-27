0x732E40: push    esi
0x732E41: mov     esi, ecx
0x732E43: mov     dword ptr [esi], offset ??_7NiTriBasedGeomData@@6B@; const NiTriBasedGeomData::`vftable'
0x732E49: call    ??1NiGeometryData@@UAE@XZ; NiGeometryData::~NiGeometryData(void)
0x732E4E: test    byte ptr [esp+4+arg_0], 1
0x732E53: jz      short loc_732E5E
0x732E55: push    esi
0x732E56: call    FormHeapFree
0x732E5B: add     esp, 4
0x732E5E: mov     eax, esi
0x732E60: pop     esi
0x732E61: retn    4
