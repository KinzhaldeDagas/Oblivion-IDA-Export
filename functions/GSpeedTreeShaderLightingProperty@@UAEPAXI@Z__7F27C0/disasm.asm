0x7F27C0: push    esi
0x7F27C1: mov     esi, ecx
0x7F27C3: call    ??1SpeedTreeShaderLightingProperty@@UAE@XZ; SpeedTreeShaderLightingProperty::~SpeedTreeShaderLightingProperty(void)
0x7F27C8: test    byte ptr [esp+4+arg_0], 1
0x7F27CD: jz      short loc_7F27D8
0x7F27CF: push    esi
0x7F27D0: call    FormHeapFree
0x7F27D5: add     esp, 4
0x7F27D8: mov     eax, esi
0x7F27DA: pop     esi
0x7F27DB: retn    4
