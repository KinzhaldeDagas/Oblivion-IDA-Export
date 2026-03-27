0x85BCB0: push    esi
0x85BCB1: mov     esi, ecx
0x85BCB3: mov     dword ptr [esi], offset ??_7WaterShaderProperty@@6B@; const WaterShaderProperty::`vftable'
0x85BCB9: call    ??1BSShaderProperty@@UAE@XZ; BSShaderProperty::~BSShaderProperty(void)
0x85BCBE: test    byte ptr [esp+4+arg_0], 1
0x85BCC3: jz      short loc_85BCCE
0x85BCC5: push    esi
0x85BCC6: call    FormHeapFree
0x85BCCB: add     esp, 4
0x85BCCE: mov     eax, esi
0x85BCD0: pop     esi
0x85BCD1: retn    4
