0x6EBDF0: push    ebx
0x6EBDF1: mov     bl, [esp+4+arg_0]
0x6EBDF5: test    bl, 2
0x6EBDF8: push    esi
0x6EBDF9: mov     esi, ecx
0x6EBDFB: jz      short loc_6EBE28
0x6EBDFD: mov     eax, [esi-4]
0x6EBE00: push    edi
0x6EBE01: push    offset sub_6EBB40; void (__thiscall *)(void *)
0x6EBE06: lea     edi, [esi-4]
0x6EBE09: push    eax; int
0x6EBE0A: push    14h; unsigned int
0x6EBE0C: push    esi; void *
0x6EBE0D: call    $LN21
0x6EBE12: test    bl, 1
0x6EBE15: jz      short loc_6EBE20
0x6EBE17: push    edi
0x6EBE18: call    FormHeapFree
0x6EBE1D: add     esp, 4
0x6EBE20: mov     eax, edi
0x6EBE22: pop     edi
0x6EBE23: pop     esi
0x6EBE24: pop     ebx
0x6EBE25: retn    4
0x6EBE28: call    sub_6EBB40
0x6EBE2D: test    bl, 1
0x6EBE30: jz      short loc_6EBE3B
0x6EBE32: push    esi
0x6EBE33: call    FormHeapFree
0x6EBE38: add     esp, 4
0x6EBE3B: mov     eax, esi
0x6EBE3D: pop     esi
0x6EBE3E: pop     ebx
0x6EBE3F: retn    4
