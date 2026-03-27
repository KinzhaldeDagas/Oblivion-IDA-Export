0x8AA2D0: push    esi
0x8AA2D1: mov     esi, [esp+4+arg_0]
0x8AA2D5: test    esi, esi
0x8AA2D7: jz      short loc_8AA2EC
0x8AA2D9: mov     eax, 1
0x8AA2DE: push    eax
0x8AA2DF: mov     ecx, esi
0x8AA2E1: call    sub_8A6740
0x8AA2E6: mov     dword ptr [esi], offset off_A97A98
0x8AA2EC: pop     esi
0x8AA2ED: retn
