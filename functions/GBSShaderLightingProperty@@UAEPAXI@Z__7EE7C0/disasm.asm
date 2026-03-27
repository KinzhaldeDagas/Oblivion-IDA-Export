0x7EE7C0: push    esi
0x7EE7C1: mov     esi, ecx
0x7EE7C3: call    ??1BSShaderLightingProperty@@UAE@XZ; BSShaderLightingProperty::~BSShaderLightingProperty(void)
0x7EE7C8: test    byte ptr [esp+4+arg_0], 1
0x7EE7CD: jz      short loc_7EE7D8
0x7EE7CF: push    esi
0x7EE7D0: call    FormHeapFree
0x7EE7D5: add     esp, 4
0x7EE7D8: mov     eax, esi
0x7EE7DA: pop     esi
0x7EE7DB: retn    4
