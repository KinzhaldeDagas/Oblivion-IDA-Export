0x794EE0: push    ebp
0x794EE1: mov     ebp, [esp+4+arg_4]
0x794EE5: test    ebp, ebp
0x794EE7: push    esi
0x794EE8: push    edi
0x794EE9: mov     edi, ecx
0x794EEB: jz      short loc_794EF3
0x794EED: cmp     ebp, [esp+0Ch+arg_C]
0x794EF1: jz      short loc_794EF8
0x794EF3: call    __invalid_parameter_noinfo
0x794EF8: mov     esi, [esp+0Ch+Dst]
0x794EFC: mov     edx, [esp+0Ch+Src]
0x794F00: cmp     esi, edx
0x794F02: jz      short loc_794F26
0x794F04: mov     eax, [edi+8]
0x794F07: sub     eax, edx
0x794F09: sar     eax, 1
0x794F0B: test    eax, eax
0x794F0D: lea     ecx, [eax+eax]
0x794F10: push    ebx; MaxCount
0x794F11: lea     ebx, [ecx+esi]
0x794F14: jle     short loc_794F22
0x794F16: push    ecx; Src
0x794F17: push    edx; Src
0x794F18: push    ecx; DstSize
0x794F19: push    esi; Dst
0x794F1A: call    _memmove_s
0x794F1F: add     esp, 10h
0x794F22: mov     [edi+8], ebx
0x794F25: pop     ebx
0x794F26: mov     eax, [esp+0Ch+arg_0]
0x794F2A: pop     edi
0x794F2B: mov     [eax+4], esi
0x794F2E: pop     esi
0x794F2F: mov     [eax], ebp
0x794F31: pop     ebp
0x794F32: retn    14h
