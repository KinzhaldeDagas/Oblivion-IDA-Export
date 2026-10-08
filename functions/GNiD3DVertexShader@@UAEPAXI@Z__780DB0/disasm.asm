0x780DB0: push    esi
0x780DB1: mov     esi, ecx
0x780DB3: call    ??1NiD3DVertexShader@@UAE@XZ; MoonSugarEffect decode: NiD3DVertexShader destructor. Removes shader-program-factory mapping, clears/release-binds the live vertex shader through renderer state, releases the D3D handle, then destructs base program.
0x780DB8: test    byte ptr [esp+4+arg_0], 1
0x780DBD: jz      short loc_780DC8
0x780DBF: push    esi
0x780DC0: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x780DC5: add     esp, 4
0x780DC8: mov     eax, esi
0x780DCA: pop     esi
0x780DCB: retn    4
