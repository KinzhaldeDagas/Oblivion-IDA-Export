0x7F2150: push    esi
0x7F2151: mov     esi, ecx
0x7F2153: mov     dword ptr [esi], offset ??_7SpeedTreeBranchShaderProperty@@6B@; const SpeedTreeBranchShaderProperty::`vftable'
0x7F2159: call    OB_SpeedTreeShaderPPLightingProperty_dtor_010201A0; SpeedTreeShaderPPLightingProperty dtor: releases the +0xF0 STSPData reference before running the BSShaderPPLightingProperty base destructor.
0x7F215E: test    byte ptr [esp+4+arg_0], 1
0x7F2163: jz      short loc_7F216E
0x7F2165: push    esi
0x7F2166: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x7F216B: add     esp, 4
0x7F216E: mov     eax, esi
0x7F2170: pop     esi
0x7F2171: retn    4
