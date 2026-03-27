0x794E00: mov     eax, [esp+arg_4]
0x794E04: mov     edx, [esp+Src]
0x794E08: sub     eax, edx
0x794E0A: push    esi
0x794E0B: sar     eax, 1
0x794E0D: test    eax, eax
0x794E0F: push    edi; MaxCount
0x794E10: mov     edi, [esp+8+Dst]
0x794E14: lea     ecx, [eax+eax]
0x794E17: lea     esi, [ecx+edi]
0x794E1A: jle     short loc_794E28
0x794E1C: push    ecx; Src
0x794E1D: push    edx; Src
0x794E1E: push    ecx; DstSize
0x794E1F: push    edi; Dst
0x794E20: call    _memmove_s
0x794E25: add     esp, 10h
0x794E28: pop     edi
0x794E29: mov     eax, esi
0x794E2B: pop     esi
0x794E2C: retn
