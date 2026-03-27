0x73FE20: push    esi
0x73FE21: mov     esi, ecx
0x73FE23: mov     dword ptr [esi], offset ??_7NiRendererSpecificProperty@@6B@; const NiRendererSpecificProperty::`vftable'
0x73FE29: call    ??1NiDitherProperty@@UAE@XZ; NiDitherProperty::~NiDitherProperty(void)
0x73FE2E: test    byte ptr [esp+4+arg_0], 1
0x73FE33: jz      short loc_73FE3E
0x73FE35: push    esi
0x73FE36: call    FormHeapFree
0x73FE3B: add     esp, 4
0x73FE3E: mov     eax, esi
0x73FE40: pop     esi
0x73FE41: retn    4
