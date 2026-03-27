0x76D8A0: push    esi
0x76D8A1: mov     esi, ecx
0x76D8A3: call    ??1NiDX9TextureBufferData@@UAE@XZ; NiDX9TextureBufferData::~NiDX9TextureBufferData(void)
0x76D8A8: test    byte ptr [esp+4+arg_0], 1
0x76D8AD: jz      short loc_76D8B8
0x76D8AF: push    esi
0x76D8B0: call    FormHeapFree
0x76D8B5: add     esp, 4
0x76D8B8: mov     eax, esi
0x76D8BA: pop     esi
0x76D8BB: retn    4
