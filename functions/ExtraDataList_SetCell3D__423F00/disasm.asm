0x423F00: push    0FFFFFFFFh
0x423F02: push    offset SEH_787830
0x423F07: mov     eax, large fs:0
0x423F0D: push    eax
0x423F0E: push    ebx
0x423F0F: push    esi
0x423F10: push    edi
0x423F11: mov     eax, ___security_cookie
0x423F16: xor     eax, esp
0x423F18: push    eax
0x423F19: lea     eax, [esp+1Ch+var_C]
0x423F1D: mov     large fs:0, eax
0x423F23: mov     edi, ecx
0x423F25: push    3; a2
0x423F27: call    BaseExtraList_GetExtraData
0x423F2C: mov     ebx, [esp+1Ch+arg_0]
0x423F30: test    ebx, ebx
0x423F32: mov     esi, eax
0x423F34: jnz     short loc_423F62
0x423F36: test    esi, esi
0x423F38: jz      loc_423FD1
0x423F3E: cmp     [esi+0Ch], ebx
0x423F41: jnz     short loc_423F99
0x423F43: push    1
0x423F45: push    esi
0x423F46: mov     ecx, edi
0x423F48: call    BaseExtraList_RemoveExtraByPtr
0x423F4D: mov     ecx, [esp+1Ch+var_C]
0x423F51: mov     large fs:0, ecx
0x423F58: pop     ecx
0x423F59: pop     edi
0x423F5A: pop     esi
0x423F5B: pop     ebx
0x423F5C: add     esp, 0Ch
0x423F5F: retn    4
0x423F62: test    esi, esi
0x423F64: jnz     short loc_423F99
0x423F66: push    10h; Size
0x423F68: call    FormHeapAlloc
0x423F6D: add     esp, 4
0x423F70: mov     [esp+1Ch+arg_0], eax
0x423F74: test    eax, eax
0x423F76: mov     [esp+1Ch+var_4], esi
0x423F7A: jz      short loc_423F85
0x423F7C: mov     ecx, eax; this
0x423F7E: call    BSExtraData__ExtraCell3D
0x423F83: jmp     short loc_423F87
0x423F85: xor     eax, eax
0x423F87: push    eax; BSExtraData *
0x423F88: mov     ecx, edi; ExtraDataList *
0x423F8A: mov     [esp+20h+var_4], 0FFFFFFFFh
0x423F92: mov     esi, eax
0x423F94: call    BaseExtraList_AddExtra
0x423F99: mov     edi, [esi+0Ch]
0x423F9C: cmp     edi, ebx
0x423F9E: jz      short loc_423FD1
0x423FA0: test    edi, edi
0x423FA2: jz      short loc_423FC0
0x423FA4: lea     eax, [edi+4]
0x423FA7: push    eax; lpAddend
0x423FA8: call    ds:InterlockedDecrement
0x423FAE: test    eax, eax
0x423FB0: jnz     short loc_423FC0
0x423FB2: test    edi, edi
0x423FB4: jz      short loc_423FC0
0x423FB6: mov     edx, [edi]
0x423FB8: mov     eax, [edx]
0x423FBA: push    1
0x423FBC: mov     ecx, edi
0x423FBE: call    eax
0x423FC0: test    ebx, ebx
0x423FC2: mov     [esi+0Ch], ebx
0x423FC5: jz      short loc_423FD1
0x423FC7: add     ebx, 4
0x423FCA: push    ebx; lpAddend
0x423FCB: call    ds:InterlockedIncrement
0x423FD1: mov     ecx, [esp+1Ch+var_C]
0x423FD5: mov     large fs:0, ecx
0x423FDC: pop     ecx
0x423FDD: pop     edi
0x423FDE: pop     esi
0x423FDF: pop     ebx
0x423FE0: add     esp, 0Ch
0x423FE3: retn    4
