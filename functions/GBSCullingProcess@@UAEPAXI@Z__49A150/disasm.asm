0x49A150: push    esi
0x49A151: mov     esi, ecx
0x49A153: call    ??1BSCullingProcess@@UAE@XZ; Oblivion BSCullingProcess destructor restores its base culling-process state; no separate visible-array allocation is released here.
0x49A158: test    byte ptr [esp+4+arg_0], 1
0x49A15D: jz      short loc_49A168
0x49A15F: push    esi
0x49A160: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x49A165: add     esp, 4
0x49A168: mov     eax, esi
0x49A16A: pop     esi
0x49A16B: retn    4
