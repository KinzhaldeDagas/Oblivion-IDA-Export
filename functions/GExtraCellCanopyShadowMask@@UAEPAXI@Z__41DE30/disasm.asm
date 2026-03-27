0x41DE30: push    esi
0x41DE31: mov     esi, ecx
0x41DE33: call    ??1ExtraCellCanopyShadowMask@@UAE@XZ; ExtraCellCanopyShadowMask::~ExtraCellCanopyShadowMask(void)
0x41DE38: test    byte ptr [esp+4+arg_0], 1
0x41DE3D: jz      short loc_41DE48
0x41DE3F: push    esi
0x41DE40: call    FormHeapFree
0x41DE45: add     esp, 4
0x41DE48: mov     eax, esi
0x41DE4A: pop     esi
0x41DE4B: retn    4
