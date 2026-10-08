0x7F27A0: push    esi
0x7F27A1: mov     esi, ecx
0x7F27A3: call    OB_SpeedTreeShaderPPLightingProperty_dtor_010201A0; SpeedTreeShaderPPLightingProperty dtor: releases the +0xF0 STSPData reference before running the BSShaderPPLightingProperty base destructor.
0x7F27A8: test    byte ptr [esp+4+arg_0], 1
0x7F27AD: jz      short loc_7F27B8
0x7F27AF: push    esi
0x7F27B0: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x7F27B5: add     esp, 4
0x7F27B8: mov     eax, esi
0x7F27BA: pop     esi
0x7F27BB: retn    4
