0x981C2F: mov     eax, [esp+arg_0]
0x981C33: push    esi
0x981C34: xor     esi, esi
0x981C36: cmp     eax, esi
0x981C38: jnz     short loc_981C57
0x981C3A: call    __errno
0x981C3F: push    esi
0x981C40: push    esi
0x981C41: push    esi
0x981C42: push    esi
0x981C43: push    esi
0x981C44: mov     dword ptr [eax], 16h
0x981C4A: call    __invalid_parameter
0x981C4F: add     esp, 14h
0x981C52: push    16h
0x981C54: pop     eax
0x981C55: pop     esi
0x981C56: retn
0x981C57: cmp     ds:0BA9D94h, esi
0x981C5D: jz      short loc_981C3A
0x981C5F: mov     ecx, ds:0BA9DA0h
0x981C65: mov     [eax], ecx
0x981C67: xor     eax, eax
0x981C69: pop     esi
0x981C6A: retn
