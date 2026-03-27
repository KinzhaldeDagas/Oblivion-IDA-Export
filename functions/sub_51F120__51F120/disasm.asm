0x51F120: push    ebx
0x51F121: mov     ebx, [esp+4+arg_0]
0x51F125: push    esi
0x51F126: push    ebx
0x51F127: mov     esi, ecx
0x51F129: call    TESForm_ModifiedFormSize
0x51F12E: movzx   eax, ax
0x51F131: push    ebx
0x51F132: lea     ecx, [esi+24h]
0x51F135: mov     [esp+0Ch+arg_0], eax
0x51F139: call    sub_46E9F0
0x51F13E: add     word ptr [esp+8+arg_0], ax
0x51F143: pop     esi
0x51F144: test    bl, 4
0x51F147: pop     ebx
0x51F148: jz      short loc_51F14F
0x51F14A: add     [esp+arg_0], 1
0x51F14F: mov     ax, word ptr [esp+arg_0]
0x51F154: retn    4
