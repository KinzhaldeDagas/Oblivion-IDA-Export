0x73A960: push    esi
0x73A961: mov     esi, ecx
0x73A963: call    ??1NiScreenSpaceCamera@@UAE@XZ; Pass227: NiScreenSpaceCamera destructor cleanup path for screen-texture array.
0x73A968: test    byte ptr [esp+4+arg_0], 1
0x73A96D: jz      short loc_73A978
0x73A96F: push    esi
0x73A970: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x73A975: add     esp, 4
0x73A978: mov     eax, esi
0x73A97A: pop     esi
0x73A97B: retn    4
