0x64AF50: push    esi
0x64AF51: push    edi
0x64AF52: mov     edi, [esp+8+arg_0]
0x64AF56: test    edi, edi
0x64AF58: mov     esi, ecx
0x64AF5A: mov     [esi+2Ch], edi
0x64AF5D: jz      short loc_64AF68
0x64AF5F: push    1
0x64AF61: mov     ecx, edi
0x64AF63: call    Actor__SetCompressedFlag
0x64AF68: cmp     dword ptr [esi+2Ch], 0
0x64AF6C: jnz     short loc_64AF84
0x64AF6E: cmp     byte ptr [esi+0D0h], 0
0x64AF75: jnz     short loc_64AF84
0x64AF77: mov     eax, [esi]
0x64AF79: mov     edx, [eax+194h]
0x64AF7F: push    edi
0x64AF80: mov     ecx, esi
0x64AF82: call    edx
0x64AF84: pop     edi
0x64AF85: pop     esi
0x64AF86: retn    4
