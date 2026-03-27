0x748C50: push    esi
0x748C51: mov     esi, [esp+4+Size]
0x748C55: test    esi, esi
0x748C57: ja      short loc_748C5D
0x748C59: xor     eax, eax
0x748C5B: pop     esi
0x748C5C: retn
0x748C5D: mov     ecx, [esp+4+arg_0]
0x748C61: push    ebx
0x748C62: push    edi
0x748C63: mov     edi, [esp+0Ch+Dst]
0x748C67: push    esi; Size
0x748C68: push    edi; Dst
0x748C69: call    sub_7488E0
0x748C6E: mov     ecx, [esp+0Ch+arg_C]
0x748C72: mov     ebx, eax
0x748C74: mov     eax, [esp+0Ch+arg_10]
0x748C78: push    eax
0x748C79: push    ecx
0x748C7A: push    esi
0x748C7B: push    edi
0x748C7C: call    NiBinaryStream_DoByteSwap
0x748C81: add     esp, 10h
0x748C84: pop     edi
0x748C85: mov     eax, ebx
0x748C87: pop     ebx
0x748C88: pop     esi
0x748C89: retn
