0x8E7C20: push    esi
0x8E7C21: mov     esi, ecx
0x8E7C23: mov     eax, [esi+1Ch]
0x8E7C26: test    eax, eax
0x8E7C28: jz      short loc_8E7C47
0x8E7C2A: mov     ecx, [esi+8]
0x8E7C2D: test    ecx, ecx
0x8E7C2F: jz      short loc_8E7C38
0x8E7C31: push    eax
0x8E7C32: push    esi
0x8E7C33: call    sub_89BE60
0x8E7C38: mov     ecx, [esi+1Ch]
0x8E7C3B: call    sub_8BC730
0x8E7C40: mov     dword ptr [esi+1Ch], 0
0x8E7C47: mov     ecx, [esp+4+arg_0]
0x8E7C4B: mov     [esi+1Ch], ecx
0x8E7C4E: call    sub_8BC720
0x8E7C53: mov     ecx, [esi+8]
0x8E7C56: test    ecx, ecx
0x8E7C58: jz      short loc_8E7C64
0x8E7C5A: mov     eax, [esi+1Ch]
0x8E7C5D: push    eax
0x8E7C5E: push    esi
0x8E7C5F: call    sub_899990
0x8E7C64: pop     esi
0x8E7C65: retn    4
