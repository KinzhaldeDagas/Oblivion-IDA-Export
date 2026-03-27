0x924F20: push    esi
0x924F21: mov     esi, [esp+4+arg_0]
0x924F25: test    esi, esi
0x924F27: jz      short loc_924F3C
0x924F29: mov     eax, 1
0x924F2E: push    eax
0x924F2F: mov     ecx, esi
0x924F31: call    sub_9113D0
0x924F36: mov     dword ptr [esi], offset off_A9DFE8
0x924F3C: pop     esi
0x924F3D: retn
