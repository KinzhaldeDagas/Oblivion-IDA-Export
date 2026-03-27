0x4C15C0: push    esi
0x4C15C1: mov     esi, ecx
0x4C15C3: mov     dword ptr [esi], offset ??_7BSPackedAdditionalGeometryData@@6B@; const BSPackedAdditionalGeometryData::`vftable'
0x4C15C9: call    ??1NiAdditionalGeometryData@@UAE@XZ; NiAdditionalGeometryData::~NiAdditionalGeometryData(void)
0x4C15CE: test    byte ptr [esp+4+arg_0], 1
0x4C15D3: jz      short loc_4C15DE
0x4C15D5: push    esi
0x4C15D6: call    FormHeapFree
0x4C15DB: add     esp, 4
0x4C15DE: mov     eax, esi
0x4C15E0: pop     esi
0x4C15E1: retn    4
