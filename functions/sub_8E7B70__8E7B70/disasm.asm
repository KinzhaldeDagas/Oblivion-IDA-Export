0x8E7B70: mov     eax, [esp+arg_8]
0x8E7B74: push    esi
0x8E7B75: mov     esi, ecx
0x8E7B77: mov     ecx, [esp+4+arg_0]
0x8E7B7B: mov     [esi+10h], eax
0x8E7B7E: mov     eax, [esp+4+arg_4]
0x8E7B82: test    eax, eax
0x8E7B84: mov     word ptr [esi+6], 1
0x8E7B8A: mov     dword ptr [esi+8], 0
0x8E7B91: mov     dword ptr [esi+0Ch], 0
0x8E7B98: mov     dword ptr [esi+14h], 0
0x8E7B9F: mov     dword ptr [esi], offset off_A9A77C
0x8E7BA5: mov     [esi+18h], ecx
0x8E7BA8: mov     [esi+1Ch], eax
0x8E7BAB: jnz     short loc_8E7BB3
0x8E7BAD: test    ecx, ecx
0x8E7BAF: jz      short loc_8E7BC8
0x8E7BB1: jmp     short loc_8E7BB7
0x8E7BB3: test    ecx, ecx
0x8E7BB5: jz      short loc_8E7BBC
0x8E7BB7: call    sub_8BC720
0x8E7BBC: mov     ecx, [esi+1Ch]
0x8E7BBF: test    ecx, ecx
0x8E7BC1: jz      short loc_8E7BC8
0x8E7BC3: call    sub_8BC720
0x8E7BC8: mov     eax, esi
0x8E7BCA: pop     esi
0x8E7BCB: retn    0Ch
