0x8F0C10: push    esi
0x8F0C11: mov     esi, ecx
0x8F0C13: call    sub_9156C0
0x8F0C18: mov     eax, [esp+4+arg_0]
0x8F0C1C: mov     ecx, [esp+4+arg_4]
0x8F0C20: mov     dword ptr [esi], offset off_A9B198
0x8F0C26: mov     [esi+10h], eax
0x8F0C29: mov     [esi+14h], ecx
0x8F0C2C: cmp     word ptr [eax+4], 0
0x8F0C31: jz      short loc_8F0C37
0x8F0C33: inc     word ptr [eax+6]
0x8F0C37: mov     eax, esi
0x8F0C39: pop     esi
0x8F0C3A: retn    8
