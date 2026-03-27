0x989E6E: push    [esp+NewSize]; NewSize
0x989E72: push    [esp+4+Memory]; Memory
0x989E76: call    _realloc
0x989E7B: mov     edi, eax
0x989E7D: test    edi, edi
0x989E7F: pop     ecx
0x989E80: pop     ecx
0x989E81: jnz     short loc_989EB0
0x989E83: cmp     [esp+NewSize], eax
0x989E87: jz      short loc_989EB0
0x989E89: cmp     dword_BA9E0C, eax
0x989E8F: jbe     short loc_989EB0
0x989E91: push    esi; dwMilliseconds
0x989E92: call    ds:Sleep
0x989E98: lea     eax, [esi+3E8h]
0x989E9E: cmp     eax, dword_BA9E0C
0x989EA4: jbe     short loc_989EA9
0x989EA6: or      eax, 0FFFFFFFFh
0x989EA9: cmp     eax, 0FFFFFFFFh
0x989EAC: mov     esi, eax
0x989EAE: jnz     short unknown_libname_76___unknown_libname_77
0x989EB0: mov     eax, edi
0x989EB2: pop     edi
0x989EB3: pop     esi
0x989EB4: retn
