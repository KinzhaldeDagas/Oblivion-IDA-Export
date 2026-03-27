0x8F7F20: mov     ecx, ds:0BA7D98h
0x8F7F26: mov     eax, [ecx]
0x8F7F28: push    esi
0x8F7F29: push    1Ch
0x8F7F2B: push    20h ; ' '
0x8F7F2D: call    dword ptr [eax+10h]
0x8F7F30: mov     ecx, [esp+4+arg_C]
0x8F7F34: mov     edx, [esp+4+arg_8]
0x8F7F38: push    ecx
0x8F7F39: mov     ecx, [esp+8+arg_4]
0x8F7F3D: mov     esi, eax
0x8F7F3F: mov     eax, [esp+8+arg_0]
0x8F7F43: push    edx
0x8F7F44: push    eax
0x8F7F45: push    ecx
0x8F7F46: mov     ecx, esi
0x8F7F48: mov     word ptr [esi+4], 20h ; ' '
0x8F7F4E: call    sub_8F78F0
0x8F7F53: mov     dword ptr [esi], offset off_A9B600
0x8F7F59: mov     eax, esi
0x8F7F5B: pop     esi
0x8F7F5C: retn
