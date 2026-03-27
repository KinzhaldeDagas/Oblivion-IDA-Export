0x903C50: mov     ecx, ds:0BA7D98h
0x903C56: mov     eax, [ecx]
0x903C58: push    esi
0x903C59: push    1Ch
0x903C5B: push    28h ; '('
0x903C5D: call    dword ptr [eax+10h]
0x903C60: mov     ecx, [esp+4+arg_C]
0x903C64: mov     edx, [esp+4+arg_8]
0x903C68: push    ecx
0x903C69: mov     ecx, [esp+8+arg_4]
0x903C6D: mov     esi, eax
0x903C6F: mov     eax, [esp+8+arg_0]
0x903C73: push    edx
0x903C74: push    eax
0x903C75: push    ecx
0x903C76: mov     ecx, esi
0x903C78: mov     word ptr [esi+4], 28h ; '('
0x903C7E: call    sub_9037A0
0x903C83: mov     dword ptr [esi], offset off_A9BCDC
0x903C89: mov     eax, esi
0x903C8B: pop     esi
0x903C8C: retn
