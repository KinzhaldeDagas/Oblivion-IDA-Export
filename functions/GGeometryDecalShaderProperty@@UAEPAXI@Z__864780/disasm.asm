0x864780: push    esi
0x864781: mov     esi, ecx
0x864783: mov     dword ptr [esi], offset ??_7GeometryDecalShaderProperty@@6B@; const GeometryDecalShaderProperty::`vftable'
0x864789: call    ??1BSShaderLightingProperty@@UAE@XZ; BSShaderLightingProperty::~BSShaderLightingProperty(void)
0x86478E: test    byte ptr [esp+4+arg_0], 1
0x864793: jz      short loc_86479E
0x864795: push    esi
0x864796: call    FormHeapFree
0x86479B: add     esp, 4
0x86479E: mov     eax, esi
0x8647A0: pop     esi
0x8647A1: retn    4
