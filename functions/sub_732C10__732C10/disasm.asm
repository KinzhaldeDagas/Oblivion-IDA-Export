0x732C10: push    esi
0x732C11: mov     esi, ecx
0x732C13: mov     eax, [esi+40h]
0x732C16: push    eax
0x732C17: mov     dword ptr [esi], offset ??_7NiLinesData@@6B@; const NiLinesData::`vftable'
0x732C1D: call    FormHeapFree
0x732C22: add     esp, 4
0x732C25: mov     ecx, esi; this
0x732C27: call    ??1NiGeometryData@@UAE@XZ; NiGeometryData::~NiGeometryData(void)
0x732C2C: test    [esp+4+arg_0], 1
0x732C31: jz      short loc_732C3C
0x732C33: push    esi
0x732C34: call    FormHeapFree
0x732C39: add     esp, 4
0x732C3C: mov     eax, esi
0x732C3E: pop     esi
0x732C3F: retn    4
