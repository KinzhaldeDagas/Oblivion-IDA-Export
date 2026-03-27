0x628C00: fld     [esp+arg_8]
0x628C04: mov     eax, [esp+arg_0]
0x628C08: push    esi
0x628C09: push    edi
0x628C0A: mov     edi, [esp+8+arg_4]
0x628C0E: push    ecx
0x628C0F: fstp    [esp+0Ch+var_C]; float
0x628C12: push    edi; int
0x628C13: push    eax; int
0x628C14: mov     esi, ecx
0x628C16: call    MiddleProcess_ModAVfMax
0x628C1B: cmp     edi, 0Bh
0x628C1E: jz      short loc_628C34
0x628C20: cmp     edi, 30h ; '0'
0x628C23: jnz     short loc_628C40
0x628C25: pop     edi
0x628C26: mov     dword ptr [esi+298h], 0FFFFFFFFh
0x628C30: pop     esi
0x628C31: retn    0Ch
0x628C34: fld     dword ptr ds:0A30634h
0x628C3A: fstp    dword ptr [esi+294h]
0x628C40: pop     edi
0x628C41: pop     esi
0x628C42: retn    0Ch
