0x947C20: push    esi
0x947C21: mov     esi, ecx
0x947C23: call    sub_947B60
0x947C28: test    [esp+4+arg_0], 1
0x947C2D: jz      short loc_947C42
0x947C2F: movzx   edx, word ptr [esi+4]
0x947C33: mov     ecx, ds:0BA7D98h
0x947C39: mov     eax, [ecx]
0x947C3B: push    32h ; '2'
0x947C3D: push    edx
0x947C3E: push    esi
0x947C3F: call    dword ptr [eax+14h]
0x947C42: mov     eax, esi
0x947C44: pop     esi
0x947C45: retn    4
