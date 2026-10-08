0x7F1390: push    esi
0x7F1391: mov     esi, ecx
0x7F1393: call    ??1SpeedTreeLeafShader@@UAE@XZ; SpeedTreeLeafShader dtor: releases four STLEAF vertex shaders, two STLEAF pixel shaders, pass +0x394, then BSShader base.
0x7F1398: test    byte ptr [esp+4+arg_0], 1
0x7F139D: jz      short loc_7F13A8
0x7F139F: push    esi
0x7F13A0: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x7F13A5: add     esp, 4
0x7F13A8: mov     eax, esi
0x7F13AA: pop     esi
0x7F13AB: retn    4
