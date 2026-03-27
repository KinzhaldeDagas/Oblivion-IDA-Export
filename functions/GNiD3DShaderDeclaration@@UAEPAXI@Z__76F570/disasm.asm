0x76F570: push    esi
0x76F571: mov     esi, ecx
0x76F573: call    ??1NiD3DShaderDeclaration@@UAE@XZ; NiD3DShaderDeclaration::~NiD3DShaderDeclaration(void)
0x76F578: test    byte ptr [esp+4+arg_0], 1
0x76F57D: jz      short loc_76F588
0x76F57F: push    esi
0x76F580: call    FormHeapFree
0x76F585: add     esp, 4
0x76F588: mov     eax, esi
0x76F58A: pop     esi
0x76F58B: retn    4
