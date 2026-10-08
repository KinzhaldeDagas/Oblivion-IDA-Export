0x7C8240: push    esi
0x7C8241: mov     esi, ecx
0x7C8243: call    ??1ShadowSceneNode@@UAE@XZ; ShadowSceneNode destructor. Clears registration and tears down owned light lists, persistent lights, target, cube camera, and helper state.
0x7C8248: test    byte ptr [esp+4+arg_0], 1
0x7C824D: jz      short loc_7C8258
0x7C824F: push    esi
0x7C8250: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x7C8255: add     esp, 4
0x7C8258: mov     eax, esi
0x7C825A: pop     esi
0x7C825B: retn    4
