0x903C20: push    esi
0x903C21: mov     esi, ecx
0x903C23: call    sub_903910
0x903C28: test    [esp+4+arg_0], 1
0x903C2D: jz      short loc_903C42
0x903C2F: movzx   edx, word ptr [esi+4]
0x903C33: mov     ecx, ds:0BA7D98h
0x903C39: mov     eax, [ecx]
0x903C3B: push    1Ch
0x903C3D: push    edx
0x903C3E: push    esi
0x903C3F: call    dword ptr [eax+14h]
0x903C42: mov     eax, esi
0x903C44: pop     esi
0x903C45: retn    4
