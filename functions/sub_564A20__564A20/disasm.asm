0x564A20: push    esi
0x564A21: mov     esi, ecx
0x564A23: mov     ecx, [esi+0E8h]
0x564A29: test    ecx, ecx
0x564A2B: push    edi
0x564A2C: jz      short loc_564A73
0x564A2E: mov     edi, [esp+8+a2]
0x564A32: test    edi, edi
0x564A34: jz      short loc_564A73
0x564A36: push    6
0x564A38: call    NiNode_GetNiPropertyByID
0x564A3D: test    eax, eax
0x564A3F: jz      short loc_564A60
0x564A41: cmp     eax, edi
0x564A43: jz      short loc_564A73
0x564A45: mov     ecx, [esi+0E8h]
0x564A4B: push    6
0x564A4D: lea     eax, [esp+0Ch+a2]
0x564A51: push    eax
0x564A52: call    sub_708560
0x564A57: lea     ecx, [esp+8+a2]; this
0x564A5B: call    sub_7016A0
0x564A60: mov     ecx, [esi+0E8h]; this
0x564A66: push    edi; a2
0x564A67: call    sub_405680
0x564A6C: pop     edi
0x564A6D: mov     al, 1
0x564A6F: pop     esi
0x564A70: retn    4
0x564A73: pop     edi
0x564A74: xor     al, al
0x564A76: pop     esi
0x564A77: retn    4
