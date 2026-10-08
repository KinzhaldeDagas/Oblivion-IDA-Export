0x810B70: push    esi
0x810B71: mov     esi, ecx
0x810B73: call    ??1SpeedTreeBranchShader@@UAE@XZ; SpeedTreeBranchShader dtor: releases branch shader refs and global branch pass table dword_B47790..B47800 before ShadowLightShader base cleanup.
0x810B78: test    byte ptr [esp+4+arg_0], 1
0x810B7D: jz      short loc_810B88
0x810B7F: push    esi
0x810B80: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x810B85: add     esp, 4
0x810B88: mov     eax, esi
0x810B8A: pop     esi
0x810B8B: retn    4
