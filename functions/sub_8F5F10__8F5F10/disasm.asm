0x8F5F10: push    esi
0x8F5F11: mov     esi, ecx
0x8F5F13: mov     ecx, [esp+4+arg_0]
0x8F5F17: mov     eax, 1
0x8F5F1C: mov     [esi+6], ax
0x8F5F20: mov     [esi+8], ecx
0x8F5F23: mov     dword ptr [esi], offset off_A9B3BC
0x8F5F29: mov     [esi+18h], al
0x8F5F2C: mov     eax, [esi+8]
0x8F5F2F: test    eax, eax
0x8F5F31: push    edi
0x8F5F32: jz      short loc_8F5F3F
0x8F5F34: cmp     word ptr [eax+4], 0
0x8F5F39: jz      short loc_8F5F3F
0x8F5F3B: inc     word ptr [eax+6]
0x8F5F3F: mov     edi, [esp+8+arg_4]
0x8F5F43: mov     ecx, ds:0BA7D98h
0x8F5F49: mov     edx, [ecx]
0x8F5F4B: push    17h
0x8F5F4D: push    edi
0x8F5F4E: push    40h ; '@'
0x8F5F50: call    dword ptr [edx+8]
0x8F5F53: mov     [esi+14h], edi
0x8F5F56: mov     [esi+0Ch], eax
0x8F5F59: pop     edi
0x8F5F5A: mov     dword ptr [esi+10h], 0
0x8F5F61: mov     eax, esi
0x8F5F63: pop     esi
0x8F5F64: retn    8
