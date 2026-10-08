0x6D68D0: push    esi
0x6D68D1: mov     esi, ecx
0x6D68D3: call    ??1NiTransformInterpolator@@UAE@XZ; Oblivion NiTransformInterpolator destructor. Releases the refcounted NiTransformData pointer at +0x2C, deleting it at zero references, then runs the interpolator base destructor.
0x6D68D8: test    byte ptr [esp+4+arg_0], 1
0x6D68DD: jz      short loc_6D68E8
0x6D68DF: push    esi
0x6D68E0: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x6D68E5: add     esp, 4
0x6D68E8: mov     eax, esi
0x6D68EA: pop     esi
0x6D68EB: retn    4
