0x99EE63: push    ebp
0x99EE64: mov     ebp, esp
0x99EE66: sub     esp, 14h
0x99EE69: push    ebx
0x99EE6A: xor     ebx, ebx
0x99EE6C: cmp     [ebp+MaxCount], ebx
0x99EE6F: push    esi
0x99EE70: mov     esi, [ebp+Dst]
0x99EE73: jnz     short loc_99EE85
0x99EE75: cmp     esi, ebx
0x99EE77: jnz     short loc_99EE89
0x99EE79: cmp     [ebp+SizeInBytes], ebx
0x99EE7C: jnz     short loc_99EE8E
0x99EE7E: xor     eax, eax
0x99EE80: jmp     loc_99F06C
0x99EE85: cmp     esi, ebx
0x99EE87: jz      short loc_99EE8E
0x99EE89: cmp     [ebp+SizeInBytes], ebx
0x99EE8C: ja      short loc_99EEAC
0x99EE8E: call    __errno
0x99EE93: push    16h
0x99EE95: pop     esi
0x99EE96: push    ebx
0x99EE97: push    ebx
0x99EE98: push    ebx
0x99EE99: push    ebx
0x99EE9A: push    ebx
0x99EE9B: mov     [eax], esi
0x99EE9D: call    __invalid_parameter
0x99EEA2: add     esp, 14h
0x99EEA5: mov     eax, esi
0x99EEA7: jmp     loc_99F06C
0x99EEAC: cmp     [ebp+MaxCount], ebx
0x99EEAF: jnz     short loc_99EEB5
0x99EEB1: mov     [esi], bl
0x99EEB3: jmp     short loc_99EE7E
0x99EEB5: push    edi; MaxCount
0x99EEB6: mov     edi, [ebp+Src]
0x99EEB9: cmp     edi, ebx
0x99EEBB: jnz     short loc_99EEDB
0x99EEBD: mov     [esi], bl
0x99EEBF: call    __errno
0x99EEC4: push    16h
0x99EEC6: pop     esi
0x99EEC7: push    ebx
0x99EEC8: push    ebx
0x99EEC9: push    ebx
0x99EECA: push    ebx
0x99EECB: push    ebx
0x99EECC: mov     [eax], esi
0x99EECE: call    __invalid_parameter
0x99EED3: add     esp, 14h
0x99EED6: jmp     loc_99F003
0x99EEDB: push    [ebp+arg_10]; struct localeinfo_struct *
0x99EEDE: lea     ecx, [ebp+var_14]; this
0x99EEE1: call    ??0_LocaleUpdate@@QAE@PAUlocaleinfo_struct@@@Z
0x99EEE6: mov     eax, [ebp+var_14.mbcinfo]
0x99EEE9: cmp     [eax+8], ebx
0x99EEEC: jnz     short loc_99EF03
0x99EEEE: push    [ebp+MaxCount]; Src
0x99EEF1: push    edi; Src
0x99EEF2: push    [ebp+SizeInBytes]; SizeInBytes
0x99EEF5: push    esi; Dst
0x99EEF6: call    _strncpy_s
0x99EEFB: add     esp, 10h
0x99EEFE: jmp     loc_99F04F
0x99EF03: cmp     [ebp+MaxCount], 0FFFFFFFFh
0x99EF07: mov     edx, [ebp+SizeInBytes]
0x99EF0A: mov     eax, esi
0x99EF0C: jnz     short loc_99EF1D
0x99EF0E: mov     cl, [edi]
0x99EF10: mov     [eax], cl
0x99EF12: inc     eax
0x99EF13: inc     edi
0x99EF14: cmp     cl, bl
0x99EF16: jz      short loc_99EF37
0x99EF18: dec     edx
0x99EF19: jnz     short loc_99EF0E
0x99EF1B: jmp     short loc_99EF37
0x99EF1D: mov     cl, [edi]
0x99EF1F: mov     [eax], cl
0x99EF21: inc     eax
0x99EF22: inc     edi
0x99EF23: cmp     cl, bl
0x99EF25: jz      short loc_99EF2F
0x99EF27: dec     edx
0x99EF28: jz      short loc_99EF2F
0x99EF2A: dec     [ebp+MaxCount]
0x99EF2D: jnz     short loc_99EF1D
0x99EF2F: cmp     [ebp+MaxCount], ebx
0x99EF32: jnz     short loc_99EF37
0x99EF34: mov     [eax], bl
0x99EF36: inc     eax
0x99EF37: cmp     edx, ebx
0x99EF39: jnz     loc_99F007
0x99EF3F: cmp     [edi], bl
0x99EF41: jz      short loc_99EF49
0x99EF43: cmp     [ebp+MaxCount], 1
0x99EF47: jnz     short loc_99EF7E
0x99EF49: lea     edi, [eax-1]
0x99EF4C: cmp     edi, esi
0x99EF4E: mov     [ebp+var_4], edi
0x99EF51: jb      short loc_99EF71
0x99EF53: lea     eax, [ebp+var_14]
0x99EF56: push    eax; struct localeinfo_struct *
0x99EF57: mov     eax, [ebp+var_4]
0x99EF5A: movzx   eax, byte ptr [eax]
0x99EF5D: push    eax; char
0x99EF5E: call    __ismbblead_l
0x99EF63: test    eax, eax
0x99EF65: pop     ecx
0x99EF66: pop     ecx
0x99EF67: jz      short loc_99EF71
0x99EF69: dec     [ebp+var_4]
0x99EF6C: cmp     [ebp+var_4], esi
0x99EF6F: jnb     short loc_99EF53
0x99EF71: mov     eax, edi
0x99EF73: sub     eax, [ebp+var_4]
0x99EF76: test    al, 1
0x99EF78: jnz     loc_99F041
0x99EF7E: cmp     [ebp+MaxCount], 0FFFFFFFFh
0x99EF82: jnz     short loc_99EFDE
0x99EF84: mov     eax, [ebp+SizeInBytes]
0x99EF87: cmp     eax, 1
0x99EF8A: jbe     short loc_99EFC6
0x99EF8C: lea     edi, [esi+eax-2]
0x99EF90: cmp     edi, esi
0x99EF92: mov     [ebp+MaxCount], edi
0x99EF95: jb      short loc_99EFB8
0x99EF97: lea     eax, [ebp+var_14]
0x99EF9A: push    eax; struct localeinfo_struct *
0x99EF9B: mov     eax, [ebp+MaxCount]
0x99EF9E: movzx   eax, byte ptr [eax]
0x99EFA1: push    eax; char
0x99EFA2: call    __ismbblead_l
0x99EFA7: test    eax, eax
0x99EFA9: pop     ecx
0x99EFAA: pop     ecx
0x99EFAB: jz      short loc_99EFB5
0x99EFAD: dec     [ebp+MaxCount]
0x99EFB0: cmp     [ebp+MaxCount], esi
0x99EFB3: jnb     short loc_99EF97
0x99EFB5: mov     eax, [ebp+SizeInBytes]
0x99EFB8: mov     ecx, edi
0x99EFBA: sub     ecx, [ebp+MaxCount]
0x99EFBD: test    cl, 1
0x99EFC0: jz      short loc_99EFC6
0x99EFC2: mov     [edi], bl
0x99EFC4: jmp     short loc_99EFCA
0x99EFC6: mov     [esi+eax-1], bl
0x99EFCA: cmp     [ebp+var_8], bl
0x99EFCD: jz      short loc_99EFD6
0x99EFCF: mov     eax, [ebp+var_C]
0x99EFD2: and     dword ptr [eax+70h], 0FFFFFFFDh
0x99EFD6: push    50h ; 'P'
0x99EFD8: pop     eax
0x99EFD9: jmp     loc_99F06B
0x99EFDE: mov     [esi], bl
0x99EFE0: call    __errno
0x99EFE5: push    22h ; '"'
0x99EFE7: pop     esi
0x99EFE8: push    ebx
0x99EFE9: push    ebx
0x99EFEA: push    ebx
0x99EFEB: push    ebx
0x99EFEC: push    ebx
0x99EFED: mov     [eax], esi
0x99EFEF: call    __invalid_parameter
0x99EFF4: add     esp, 14h
0x99EFF7: cmp     [ebp+var_8], bl
0x99EFFA: jz      short loc_99F003
0x99EFFC: mov     eax, [ebp+var_C]
0x99EFFF: and     dword ptr [eax+70h], 0FFFFFFFDh
0x99F003: mov     eax, esi
0x99F005: jmp     short loc_99F06B
0x99F007: mov     ecx, eax
0x99F009: sub     ecx, esi
0x99F00B: cmp     ecx, 2
0x99F00E: jl      short loc_99F05D
0x99F010: lea     edi, [eax-2]
0x99F013: cmp     edi, esi
0x99F015: mov     [ebp+MaxCount], edi
0x99F018: jb      short loc_99F038
0x99F01A: lea     eax, [ebp+var_14]
0x99F01D: push    eax; struct localeinfo_struct *
0x99F01E: mov     eax, [ebp+MaxCount]
0x99F021: movzx   eax, byte ptr [eax]
0x99F024: push    eax; char
0x99F025: call    __ismbblead_l
0x99F02A: test    eax, eax
0x99F02C: pop     ecx
0x99F02D: pop     ecx
0x99F02E: jz      short loc_99F038
0x99F030: dec     [ebp+MaxCount]
0x99F033: cmp     [ebp+MaxCount], esi
0x99F036: jnb     short loc_99F01A
0x99F038: mov     eax, edi
0x99F03A: sub     eax, [ebp+MaxCount]
0x99F03D: test    al, 1
0x99F03F: jz      short loc_99F05D
0x99F041: mov     [edi], bl
0x99F043: call    __errno
0x99F048: mov     ecx, eax
0x99F04A: push    2Ah ; '*'
0x99F04C: pop     eax
0x99F04D: mov     [ecx], eax
0x99F04F: cmp     [ebp+var_8], bl
0x99F052: jz      short loc_99F06B
0x99F054: mov     ecx, [ebp+var_C]
0x99F057: and     dword ptr [ecx+70h], 0FFFFFFFDh
0x99F05B: jmp     short loc_99F06B
0x99F05D: cmp     [ebp+var_8], bl
0x99F060: jz      short loc_99F069
0x99F062: mov     eax, [ebp+var_C]
0x99F065: and     dword ptr [eax+70h], 0FFFFFFFDh
0x99F069: xor     eax, eax
0x99F06B: pop     edi
0x99F06C: pop     esi
0x99F06D: pop     ebx
0x99F06E: leave
0x99F06F: retn
