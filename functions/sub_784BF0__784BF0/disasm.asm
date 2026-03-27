0x784BF0: sub     esp, 8
0x784BF3: push    ebx
0x784BF4: push    esi
0x784BF5: mov     esi, ecx
0x784BF7: mov     ebx, [esi+8]
0x784BFA: cmp     [esi+4], ebx
0x784BFD: push    edi
0x784BFE: jbe     short loc_784C05
0x784C00: call    __invalid_parameter_noinfo
0x784C05: mov     edi, [esi+4]
0x784C08: cmp     edi, [esi+8]
0x784C0B: jbe     short loc_784C12
0x784C0D: call    __invalid_parameter_noinfo
0x784C12: push    ebx
0x784C13: push    esi
0x784C14: push    edi
0x784C15: push    esi
0x784C16: lea     eax, [esp+24h+var_8]
0x784C1A: push    eax
0x784C1B: mov     ecx, esi
0x784C1D: call    sub_784AC0
0x784C22: pop     edi
0x784C23: pop     esi
0x784C24: pop     ebx
0x784C25: add     esp, 8
0x784C28: retn
