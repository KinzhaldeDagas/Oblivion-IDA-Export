0x8CDC30: push    esi
0x8CDC31: mov     esi, ecx
0x8CDC33: call    sub_8CDAA0
0x8CDC38: test    [esp+4+arg_0], 1
0x8CDC3D: jz      short loc_8CDC52
0x8CDC3F: movzx   edx, word ptr [esi+4]
0x8CDC43: mov     ecx, ds:0BA7D98h
0x8CDC49: mov     eax, [ecx]
0x8CDC4B: push    2Eh ; '.'
0x8CDC4D: push    edx
0x8CDC4E: push    esi
0x8CDC4F: call    dword ptr [eax+14h]
0x8CDC52: mov     eax, esi
0x8CDC54: pop     esi
0x8CDC55: retn    4
