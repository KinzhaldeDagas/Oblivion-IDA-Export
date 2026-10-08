0x4AC820: push    esi
0x4AC821: mov     esi, ecx
0x4AC823: call    ??1TESEffectShader@@UAE@XZ; Verified (Oblivion): destructor destroys embedded TESTexture members at +0x104 and +0xF8 before the TESForm base destructor.
0x4AC828: test    byte ptr [esp+4+arg_0], 1
0x4AC82D: jz      short loc_4AC838
0x4AC82F: push    esi
0x4AC830: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x4AC835: add     esp, 4
0x4AC838: mov     eax, esi
0x4AC83A: pop     esi
0x4AC83B: retn    4
