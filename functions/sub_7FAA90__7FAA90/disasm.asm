0x7FAA90: push    esi; Shared BSShader lifecycle thunk: invokes the concrete shader's LoadVertexShaders and LoadPixelShaders virtuals in that order. Later Fallout symbols corroborate the method term only; this behavior is established from Oblivion vtables.
0x7FAA91: mov     esi, ecx
0x7FAA93: mov     eax, [esi]
0x7FAA95: mov     edx, [eax+0ACh]
0x7FAA9B: call    edx
0x7FAA9D: mov     eax, [esi]
0x7FAA9F: mov     edx, [eax+0B0h]
0x7FAAA5: mov     ecx, esi
0x7FAAA7: pop     esi
0x7FAAA8: jmp     edx
