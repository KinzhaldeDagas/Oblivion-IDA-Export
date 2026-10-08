0x7F1D90: push    esi
0x7F1D91: mov     esi, ecx
0x7F1D93: call    ??1SpeedTreeLeafShaderProperty@@UAE@XZ; SpeedTreeLeafShaderProperty dtor: releases STLSPData +0xA8 then SpeedTreeShaderLightingProperty base.
0x7F1D98: test    byte ptr [esp+4+arg_0], 1
0x7F1D9D: jz      short loc_7F1DA8
0x7F1D9F: push    esi
0x7F1DA0: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x7F1DA5: add     esp, 4
0x7F1DA8: mov     eax, esi
0x7F1DAA: pop     esi
0x7F1DAB: retn    4
