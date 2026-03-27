0x7C8300: push    esi
0x7C8301: mov     esi, ecx
0x7C8303: mov     dword ptr [esi], offset ??_7BSFogProperty@@6B@; const BSFogProperty::`vftable'
0x7C8309: call    ??1NiDitherProperty@@UAE@XZ; NiDitherProperty::~NiDitherProperty(void)
0x7C830E: test    byte ptr [esp+4+arg_0], 1
0x7C8313: jz      short loc_7C831E
0x7C8315: push    esi
0x7C8316: call    FormHeapFree
0x7C831B: add     esp, 4
0x7C831E: mov     eax, esi
0x7C8320: pop     esi
0x7C8321: retn    4
