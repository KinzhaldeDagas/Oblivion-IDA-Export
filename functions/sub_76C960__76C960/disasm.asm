0x76C960: push    esi
0x76C961: mov     esi, ecx
0x76C963: mov     eax, [esi+64h]
0x76C966: push    eax
0x76C967: mov     dword ptr [esi], offset ??_7NiD3DDefaultShader@@6B@; const NiD3DDefaultShader::`vftable'
0x76C96D: call    FormHeapFree
0x76C972: add     esp, 4
0x76C975: mov     ecx, esi; this
0x76C977: call    ??1NiD3DShader@@UAE@XZ; NiD3DShader::~NiD3DShader(void)
0x76C97C: test    [esp+4+arg_0], 1
0x76C981: jz      short loc_76C98C
0x76C983: push    esi
0x76C984: call    FormHeapFree
0x76C989: add     esp, 4
0x76C98C: mov     eax, esi
0x76C98E: pop     esi
0x76C98F: retn    4
