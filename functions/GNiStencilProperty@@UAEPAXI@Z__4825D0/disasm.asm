0x4825D0: push    esi
0x4825D1: mov     esi, ecx
0x4825D3: mov     dword ptr [esi], offset ??_7NiStencilProperty@@6B@; const NiStencilProperty::`vftable'
0x4825D9: call    ??1NiDitherProperty@@UAE@XZ; NiDitherProperty::~NiDitherProperty(void)
0x4825DE: test    byte ptr [esp+4+arg_0], 1
0x4825E3: jz      short loc_4825EE
0x4825E5: push    esi
0x4825E6: call    FormHeapFree
0x4825EB: add     esp, 4
0x4825EE: mov     eax, esi
0x4825F0: pop     esi
0x4825F1: retn    4
