0x794E50: mov     eax, [esp+arg_4]
0x794E54: mov     edx, [esp+Src]
0x794E58: sub     eax, edx
0x794E5A: sar     eax, 1
0x794E5C: push    esi; MaxCount
0x794E5D: mov     esi, [esp+4+arg_8]
0x794E61: lea     ecx, [eax+eax]
0x794E64: sub     esi, ecx
0x794E66: test    eax, eax
0x794E68: jle     short loc_794E76
0x794E6A: push    ecx; Src
0x794E6B: push    edx; Src
0x794E6C: push    ecx; DstSize
0x794E6D: push    esi; Dst
0x794E6E: call    _memmove_s
0x794E73: add     esp, 10h
0x794E76: mov     eax, esi
0x794E78: pop     esi
0x794E79: retn
