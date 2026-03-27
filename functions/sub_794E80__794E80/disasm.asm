0x794E80: mov     eax, [esp+arg_4]
0x794E84: mov     ecx, [esp+Src]
0x794E88: mov     edx, [esp+Dst]
0x794E8C: sub     eax, ecx
0x794E8E: sar     eax, 1
0x794E90: lea     eax, [eax+eax]
0x794E93: push    esi; MaxCount
0x794E94: lea     esi, [eax+edx]
0x794E97: jz      short loc_794EA5
0x794E99: push    eax; Src
0x794E9A: push    ecx; Src
0x794E9B: push    eax; DstSize
0x794E9C: push    edx; Dst
0x794E9D: call    _memmove_s
0x794EA2: add     esp, 10h
0x794EA5: mov     eax, esi
0x794EA7: pop     esi
0x794EA8: retn    0Ch
