0x8EA0B0: push    esi
0x8EA0B1: mov     esi, ecx
0x8EA0B3: call    sub_8B3540
0x8EA0B8: test    [esp+4+arg_0], 1
0x8EA0BD: jz      short loc_8EA0D2
0x8EA0BF: movzx   edx, word ptr [esi+4]
0x8EA0C3: mov     ecx, ds:0BA7D98h
0x8EA0C9: mov     eax, [ecx]
0x8EA0CB: push    2Bh ; '+'
0x8EA0CD: push    edx
0x8EA0CE: push    esi
0x8EA0CF: call    dword ptr [eax+14h]
0x8EA0D2: mov     eax, esi
0x8EA0D4: pop     esi
0x8EA0D5: retn    4
