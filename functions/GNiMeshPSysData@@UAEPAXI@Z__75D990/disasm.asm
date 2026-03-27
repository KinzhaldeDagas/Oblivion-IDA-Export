0x75D990: push    esi
0x75D991: mov     esi, ecx
0x75D993: call    ??1NiMeshPSysData@@UAE@XZ; NiMeshPSysData::~NiMeshPSysData(void)
0x75D998: test    byte ptr [esp+4+arg_0], 1
0x75D99D: jz      short loc_75D9A8
0x75D99F: push    esi
0x75D9A0: call    FormHeapFree
0x75D9A5: add     esp, 4
0x75D9A8: mov     eax, esi
0x75D9AA: pop     esi
0x75D9AB: retn    4
