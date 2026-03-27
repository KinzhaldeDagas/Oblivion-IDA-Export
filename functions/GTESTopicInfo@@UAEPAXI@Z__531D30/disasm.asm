0x531D30: push    esi
0x531D31: mov     esi, ecx
0x531D33: call    ??1TESTopicInfo@@UAE@XZ; TESTopicInfo::~TESTopicInfo(void)
0x531D38: test    byte ptr [esp+4+arg_0], 1
0x531D3D: jz      short loc_531D48
0x531D3F: push    esi
0x531D40: call    FormHeapFree
0x531D45: add     esp, 4
0x531D48: mov     eax, esi
0x531D4A: pop     esi
0x531D4B: retn    4
