0x901A40: mov     ecx, ds:0BA7D98h
0x901A46: mov     eax, [ecx]
0x901A48: push    esi
0x901A49: push    1Ch
0x901A4B: push    18h
0x901A4D: call    dword ptr [eax+10h]
0x901A50: mov     ecx, [esp+4+arg_C]
0x901A54: mov     edx, [esp+4+arg_8]
0x901A58: push    ecx
0x901A59: mov     ecx, [esp+8+arg_4]
0x901A5D: mov     esi, eax
0x901A5F: mov     eax, [esp+8+arg_0]
0x901A63: push    edx
0x901A64: push    eax
0x901A65: push    ecx
0x901A66: mov     ecx, esi
0x901A68: mov     word ptr [esi+4], 18h
0x901A6E: call    sub_901690
0x901A73: mov     dword ptr [esi], offset off_A9BB44
0x901A79: mov     eax, esi
0x901A7B: pop     esi
0x901A7C: retn
