0x7405B0: push    esi
0x7405B1: mov     esi, ecx
0x7405B3: call    ??1NiParticleMeshesData@@UAE@XZ; NiParticleMeshesData::~NiParticleMeshesData(void)
0x7405B8: test    byte ptr [esp+4+arg_0], 1
0x7405BD: jz      short loc_7405C8
0x7405BF: push    esi
0x7405C0: call    FormHeapFree
0x7405C5: add     esp, 4
0x7405C8: mov     eax, esi
0x7405CA: pop     esi
0x7405CB: retn    4
