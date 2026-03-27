0x76DF50: push    esi
0x76DF51: mov     esi, ecx
0x76DF53: call    ??1NiDX9ImplicitBufferData@@UAE@XZ; NiDX9ImplicitBufferData::~NiDX9ImplicitBufferData(void)
0x76DF58: test    byte ptr [esp+4+arg_0], 1
0x76DF5D: jz      short loc_76DF68
0x76DF5F: push    esi
0x76DF60: call    FormHeapFree
0x76DF65: add     esp, 4
0x76DF68: mov     eax, esi
0x76DF6A: pop     esi
0x76DF6B: retn    4
