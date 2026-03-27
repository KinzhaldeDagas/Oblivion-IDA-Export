0x43E600: push    esi
0x43E601: mov     esi, ecx
0x43E603: call    ??1?$LockFreeCaseInsensitiveStringMap@PAVModel@@@@UAE@XZ; LockFreeCaseInsensitiveStringMap<Model *>::~LockFreeCaseInsensitiveStringMap<Model *>(void)
0x43E608: test    [esp+4+arg_0], 1
0x43E60D: jz      short loc_43E618
0x43E60F: push    esi
0x43E610: call    FormHeapFree
0x43E615: add     esp, 4
0x43E618: mov     eax, esi
0x43E61A: pop     esi
0x43E61B: retn    4
