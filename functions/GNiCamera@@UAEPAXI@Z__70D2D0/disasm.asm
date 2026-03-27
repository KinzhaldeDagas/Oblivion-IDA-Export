0x70D2D0: push    esi
0x70D2D1: mov     esi, ecx
0x70D2D3: mov     dword ptr [esi], offset ??_7NiCamera@@6B@; const NiCamera::`vftable'
0x70D2D9: call    ??1NiAVObject@@UAE@XZ; NiAVObject::~NiAVObject(void)
0x70D2DE: test    byte ptr [esp+4+arg_0], 1
0x70D2E3: jz      short loc_70D2EE
0x70D2E5: push    esi
0x70D2E6: call    FormHeapFree
0x70D2EB: add     esp, 4
0x70D2EE: mov     eax, esi
0x70D2F0: pop     esi
0x70D2F1: retn    4
