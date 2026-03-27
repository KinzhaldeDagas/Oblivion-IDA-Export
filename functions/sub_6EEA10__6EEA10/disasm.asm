0x6EEA10: push    ebx
0x6EEA11: push    ebp
0x6EEA12: mov     ebp, [esp+8+arg_4]
0x6EEA16: test    ebp, ebp
0x6EEA18: push    esi
0x6EEA19: mov     esi, ecx
0x6EEA1B: jz      short loc_6EEA23
0x6EEA1D: cmp     ebp, [esp+0Ch+arg_C]
0x6EEA21: jz      short loc_6EEA28
0x6EEA23: call    __invalid_parameter_noinfo
0x6EEA28: mov     ebx, [esp+0Ch+arg_8]
0x6EEA2C: mov     eax, [esp+0Ch+arg_10]
0x6EEA30: cmp     ebx, eax
0x6EEA32: jz      short loc_6EEA59
0x6EEA34: mov     ecx, [esi+8]
0x6EEA37: push    edi
0x6EEA38: push    ebx
0x6EEA39: push    ecx
0x6EEA3A: push    eax
0x6EEA3B: call    sub_6EE160
0x6EEA40: mov     edx, [esp+1Ch+arg_0]
0x6EEA44: push    edx
0x6EEA45: mov     edi, eax
0x6EEA47: mov     eax, [esi+8]
0x6EEA4A: push    esi
0x6EEA4B: push    eax
0x6EEA4C: push    edi
0x6EEA4D: call    sub_5522B0
0x6EEA52: add     esp, 1Ch
0x6EEA55: mov     [esi+8], edi
0x6EEA58: pop     edi
0x6EEA59: mov     eax, [esp+0Ch+arg_0]
0x6EEA5D: pop     esi
0x6EEA5E: mov     [eax], ebp
0x6EEA60: pop     ebp
0x6EEA61: mov     [eax+4], ebx
0x6EEA64: pop     ebx
0x6EEA65: retn    14h
