0x4C1590: push    esi
0x4C1591: mov     esi, ecx
0x4C1593: call    ??1NiAdditionalGeometryData@@UAE@XZ; NiAdditionalGeometryData::~NiAdditionalGeometryData(void)
0x4C1598: test    byte ptr [esp+4+arg_0], 1
0x4C159D: jz      short loc_4C15A8
0x4C159F: push    esi
0x4C15A0: call    FormHeapFree
0x4C15A5: add     esp, 4
0x4C15A8: mov     eax, esi
0x4C15AA: pop     esi
0x4C15AB: retn    4
