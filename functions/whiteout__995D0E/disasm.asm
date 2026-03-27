0x995D0E: push    ebx
0x995D0F: mov     edx, [esp+4+arg_0]
0x995D13: inc     dword ptr [esi]
0x995D15: call    __inc
0x995D1A: mov     ebx, eax
0x995D1C: cmp     ebx, 0FFFFFFFFh
0x995D1F: jz      short loc_995D2F
0x995D21: movzx   eax, bl
0x995D24: push    eax; C
0x995D25: call    _isspace
0x995D2A: test    eax, eax
0x995D2C: pop     ecx
0x995D2D: jnz     short loc_995D0F
0x995D2F: mov     eax, ebx
0x995D31: pop     ebx
0x995D32: retn
