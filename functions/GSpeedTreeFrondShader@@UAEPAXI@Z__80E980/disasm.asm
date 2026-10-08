0x80E980: push    esi
0x80E981: mov     esi, ecx
0x80E983: call    ??1SpeedTreeFrondShader@@UAE@XZ; SpeedTreeFrondShader dtor: releases four frond vertex shaders, two frond pixel shaders, pass +0x94, then BSShader base.
0x80E988: test    byte ptr [esp+4+arg_0], 1
0x80E98D: jz      short loc_80E998
0x80E98F: push    esi
0x80E990: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x80E995: add     esp, 4
0x80E998: mov     eax, esi
0x80E99A: pop     esi
0x80E99B: retn    4
