0x800CD0: push    esi
0x800CD1: mov     esi, ecx
0x800CD3: call    ??1RefractionShader@@UAE@XZ; MoonSugarEffect decode: RefractionShader dtor releases programs/pass/extra texture, returns global dword_B474AC to texture manager, then calls BSImageSpaceShader dtor.
0x800CD8: test    byte ptr [esp+4+arg_0], 1
0x800CDD: jz      short loc_800CE8
0x800CDF: push    esi
0x800CE0: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x800CE5: add     esp, 4
0x800CE8: mov     eax, esi
0x800CEA: pop     esi
0x800CEB: retn    4
