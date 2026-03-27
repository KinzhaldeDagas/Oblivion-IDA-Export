0x981E9C: push    ecx
0x981E9D: push    ebx
0x981E9E: push    ebp
0x981E9F: push    esi
0x981EA0: push    edi
0x981EA1: push    dword ptr ds:0BABC10h
0x981EA7: call    __decode_pointer
0x981EAC: push    dword ptr ds:0BABC0Ch
0x981EB2: mov     esi, eax
0x981EB4: mov     [esp+1Ch+var_4], esi
0x981EB8: call    __decode_pointer
0x981EBD: mov     edi, eax
0x981EBF: cmp     edi, esi
0x981EC1: pop     ecx
0x981EC2: pop     ecx
0x981EC3: jb      short loc_981F41
0x981EC5: mov     ebx, edi
0x981EC7: sub     ebx, esi
0x981EC9: lea     ebp, [ebx+4]
0x981ECC: cmp     ebp, 4
0x981ECF: jb      short loc_981F41
0x981ED1: push    esi; Memory
0x981ED2: call    __msize
0x981ED7: mov     esi, eax
0x981ED9: cmp     esi, ebp
0x981EDB: pop     ecx
0x981EDC: jnb     short loc_981F28
0x981EDE: mov     eax, 800h
0x981EE3: cmp     esi, eax
0x981EE5: jnb     short loc_981EE9
0x981EE7: mov     eax, esi
0x981EE9: add     eax, esi
0x981EEB: cmp     eax, esi
0x981EED: jb      short loc_981EFF
0x981EEF: push    eax
0x981EF0: push    [esp+18h+var_4]
0x981EF4: call    unknown_libname_76
0x981EF9: test    eax, eax
0x981EFB: pop     ecx
0x981EFC: pop     ecx
0x981EFD: jnz     short loc_981F16
0x981EFF: lea     eax, [esi+10h]
0x981F02: cmp     eax, esi
0x981F04: jb      short loc_981F41
0x981F06: push    eax
0x981F07: push    [esp+18h+var_4]
0x981F0B: call    unknown_libname_76
0x981F10: test    eax, eax
0x981F12: pop     ecx
0x981F13: pop     ecx
0x981F14: jz      short loc_981F41
0x981F16: sar     ebx, 2
0x981F19: push    eax
0x981F1A: lea     edi, [eax+ebx*4]
0x981F1D: call    __encode_pointer
0x981F22: pop     ecx
0x981F23: mov     ds:0BABC10h, eax
0x981F28: mov     esi, [esp+14h+arg_0]
0x981F2C: mov     [edi], esi
0x981F2E: add     edi, 4
0x981F31: push    edi
0x981F32: call    __encode_pointer
0x981F37: mov     ds:0BABC0Ch, eax
0x981F3C: pop     ecx
0x981F3D: mov     eax, esi
0x981F3F: jmp     short loc_981F43
0x981F41: xor     eax, eax
0x981F43: pop     edi
0x981F44: pop     esi
0x981F45: pop     ebp
0x981F46: pop     ebx
0x981F47: pop     ecx
0x981F48: retn
