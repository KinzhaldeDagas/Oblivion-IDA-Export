0x5E2C5B: cmp     edi, 8
0x5E2C5E: pop     ebp
0x5E2C5F: jnz     short Actor_ModCurAVf___MarkAsModified
0x5E2C61: fldz
0x5E2C63: fld     [esp-4+arg_10]
0x5E2C67: fcom    st(1)
0x5E2C69: fnstsw  ax
0x5E2C6B: fstp    st(1)
0x5E2C6D: test    ah, 5
0x5E2C70: jp      short loc_5E2C89
0x5E2C72: mov     eax, [esi]
0x5E2C74: mov     edx, [eax+3B8h]
0x5E2C7A: push    ecx
0x5E2C7B: mov     ecx, [esp+arg_14]
0x5E2C7F: fstp    dword ptr [esp+0]
0x5E2C82: push    ecx
0x5E2C83: mov     ecx, esi
0x5E2C85: call    edx
0x5E2C87: jmp     short Actor_ModCurAVf___MarkAsModified
0x5E2C89: fstp    st
