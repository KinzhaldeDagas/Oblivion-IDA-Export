0x43EB10: push    esi
0x43EB11: mov     esi, ecx
0x43EB13: call    ??1?$LockFreeCaseInsensitiveStringMap@PAVKFModel@@@@UAE@XZ; LockFreeCaseInsensitiveStringMap<KFModel *>::~LockFreeCaseInsensitiveStringMap<KFModel *>(void)
0x43EB18: test    [esp+4+arg_0], 1
0x43EB1D: jz      short loc_43EB28
0x43EB1F: push    esi
0x43EB20: call    FormHeapFree
0x43EB25: add     esp, 4
0x43EB28: mov     eax, esi
0x43EB2A: pop     esi
0x43EB2B: retn    4
