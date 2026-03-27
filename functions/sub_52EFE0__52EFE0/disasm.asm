0x52EFE0: mov     edx, [esp+arg_0]
0x52EFE4: test    edx, edx
0x52EFE6: jz      short locret_52F008
0x52EFE8: push    esi
0x52EFE9: mov     esi, [edx+0Ch]
0x52EFEC: xor     eax, eax
0x52EFEE: test    esi, esi
0x52EFF0: jbe     short loc_52F007
0x52EFF2: mov     ecx, [edx+4]
0x52EFF5: mov     ecx, [ecx+eax*4]
0x52EFF8: test    ecx, ecx
0x52EFFA: jz      short loc_52F000
0x52EFFC: mov     [ecx+20h], ax
0x52F000: add     eax, 1
0x52F003: cmp     eax, esi
0x52F005: jb      short loc_52EFF2
0x52F007: pop     esi
0x52F008: retn
