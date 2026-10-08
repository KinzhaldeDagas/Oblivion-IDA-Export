0x6E2160: push    esi
0x6E2161: mov     esi, ecx
0x6E2163: call    ??1NiTransformData@@UAE@XZ; Oblivion NiTransformData destructor. Destroys rotation, translation, and scale arrays through their numeric-type destructor tables; rotation type 4 first destroys its three nested scalar-axis tracks. Then runs the NiRefObject base destructor.
0x6E2168: test    byte ptr [esp+4+arg_0], 1
0x6E216D: jz      short loc_6E2178
0x6E216F: push    esi
0x6E2170: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x6E2175: add     esp, 4
0x6E2178: mov     eax, esi
0x6E217A: pop     esi
0x6E217B: retn    4
