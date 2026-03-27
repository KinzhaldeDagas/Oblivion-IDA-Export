0x987E41: push    ebp
0x987E42: mov     ebp, esp
0x987E44: push    ecx
0x987E45: push    ecx
0x987E46: mov     eax, [ebp+DstBuf]
0x987E49: mov     [ebp+DstBuf], eax
0x987E4C: mov     eax, [ebp+Size]
0x987E4F: imul    eax, [ebp+Count]
0x987E53: test    eax, eax
0x987E55: push    ebx
0x987E56: mov     [ebp+var_8], eax
0x987E59: mov     ebx, eax
0x987E5B: jz      loc_987F52
0x987E61: push    esi
0x987E62: mov     esi, [ebp+File]
0x987E65: test    word ptr [esi+0Ch], 10Ch
0x987E6B: jz      short loc_987E75
0x987E6D: mov     ecx, [esi+18h]
0x987E70: mov     [ebp+var_4], ecx
0x987E73: jmp     short loc_987E7C
0x987E75: mov     [ebp+var_4], 1000h
0x987E7C: push    edi
0x987E7D: jmp     short loc_987E82
0x987E7F: mov     eax, [ebp+var_8]
0x987E82: mov     ecx, [esi+0Ch]
0x987E85: and     ecx, 108h
0x987E8B: jz      short loc_987EBD
0x987E8D: mov     edi, [esi+4]
0x987E90: test    edi, edi
0x987E92: jz      short loc_987EBD
0x987E94: jl      loc_987F55
0x987E9A: cmp     ebx, edi
0x987E9C: jnb     short loc_987EA0
0x987E9E: mov     edi, ebx
0x987EA0: push    edi; Size
0x987EA1: push    [ebp+DstBuf]; Src
0x987EA4: push    dword ptr [esi]; Dst
0x987EA6: call    _memcpy
0x987EAB: sub     [esi+4], edi
0x987EAE: add     [esi], edi
0x987EB0: add     esp, 0Ch
0x987EB3: sub     ebx, edi
0x987EB5: add     [ebp+DstBuf], edi
0x987EB8: jmp     loc_987F45
0x987EBD: cmp     ebx, [ebp+var_4]
0x987EC0: jb      short loc_987F1C
0x987EC2: test    ecx, ecx
0x987EC4: jz      short loc_987ED1
0x987EC6: push    esi; File
0x987EC7: call    __flush
0x987ECC: test    eax, eax
0x987ECE: pop     ecx
0x987ECF: jnz     short loc_987F10
0x987ED1: cmp     [ebp+var_4], 0
0x987ED5: mov     edi, ebx
0x987ED7: jz      short loc_987EE2
0x987ED9: xor     edx, edx
0x987EDB: mov     eax, ebx
0x987EDD: div     [ebp+var_4]
0x987EE0: sub     edi, edx
0x987EE2: push    edi; unsigned int
0x987EE3: push    [ebp+DstBuf]; void *
0x987EE6: push    esi; File
0x987EE7: call    __fileno
0x987EEC: pop     ecx
0x987EED: push    eax; int
0x987EEE: call    __write
0x987EF3: add     esp, 0Ch
0x987EF6: cmp     eax, 0FFFFFFFFh
0x987EF9: jz      short loc_987F0C
0x987EFB: cmp     eax, edi
0x987EFD: mov     ecx, edi
0x987EFF: ja      short loc_987F03
0x987F01: mov     ecx, eax
0x987F03: add     [ebp+DstBuf], ecx
0x987F06: sub     ebx, ecx
0x987F08: cmp     eax, edi
0x987F0A: jnb     short loc_987F45
0x987F0C: or      dword ptr [esi+0Ch], 20h
0x987F10: mov     eax, [ebp+var_8]
0x987F13: sub     eax, ebx
0x987F15: xor     edx, edx
0x987F17: div     [ebp+Size]
0x987F1A: jmp     short loc_987F50
0x987F1C: mov     eax, [ebp+DstBuf]
0x987F1F: movsx   eax, byte ptr [eax]
0x987F22: push    esi; File
0x987F23: push    eax; Ch
0x987F24: call    __flsbuf
0x987F29: cmp     eax, 0FFFFFFFFh
0x987F2C: pop     ecx
0x987F2D: pop     ecx
0x987F2E: jz      short loc_987F10
0x987F30: inc     [ebp+DstBuf]
0x987F33: mov     eax, [esi+18h]
0x987F36: dec     ebx
0x987F37: test    eax, eax
0x987F39: mov     [ebp+var_4], eax
0x987F3C: jg      short loc_987F45
0x987F3E: mov     [ebp+var_4], 1
0x987F45: test    ebx, ebx
0x987F47: jnz     loc_987E7F
0x987F4D: mov     eax, [ebp+Count]
0x987F50: pop     edi
0x987F51: pop     esi
0x987F52: pop     ebx
0x987F53: leave
0x987F54: retn
0x987F55: or      dword ptr [esi+0Ch], 20h
0x987F59: jmp     short loc_987F13
