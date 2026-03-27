0x98D90F: push    ebp
0x98D910: mov     ebp, esp
0x98D912: push    ecx
0x98D913: push    ecx
0x98D914: push    esi
0x98D915: call    __getptd_noexit
0x98D91A: mov     esi, eax
0x98D91C: test    esi, esi
0x98D91E: jnz     short loc_98D92E
0x98D920: push    [ebp+ExceptionInfo]; ExceptionInfo
0x98D923: call    ds:UnhandledExceptionFilter
0x98D929: jmp     loc_98DA7B
0x98D92E: mov     edx, [esi+5Ch]
0x98D931: mov     eax, dword_B3134C
0x98D936: push    edi
0x98D937: mov     edi, [ebp+arg_0]
0x98D93A: mov     ecx, edx
0x98D93C: push    ebx
0x98D93D: cmp     [ecx], edi
0x98D93F: jz      short loc_98D94F
0x98D941: mov     ebx, eax
0x98D943: imul    ebx, 0Ch
0x98D946: add     ecx, 0Ch
0x98D949: add     ebx, edx
0x98D94B: cmp     ecx, ebx
0x98D94D: jb      short loc_98D93D
0x98D94F: imul    eax, 0Ch
0x98D952: add     eax, edx
0x98D954: cmp     ecx, eax
0x98D956: jnb     short loc_98D960
0x98D958: cmp     [ecx], edi
0x98D95A: jnz     short loc_98D960
0x98D95C: mov     eax, ecx
0x98D95E: jmp     short loc_98D962
0x98D960: xor     eax, eax
0x98D962: test    eax, eax
0x98D964: jz      short loc_98D970
0x98D966: mov     ebx, [eax+8]
0x98D969: test    ebx, ebx
0x98D96B: mov     [ebp+var_4], ebx
0x98D96E: jnz     short loc_98D97E
0x98D970: push    [ebp+ExceptionInfo]; ExceptionInfo
0x98D973: call    ds:UnhandledExceptionFilter
0x98D979: jmp     loc_98DA79
0x98D97E: cmp     ebx, 5
0x98D981: jnz     short loc_98D98F
0x98D983: and     dword ptr [eax+8], 0
0x98D987: xor     eax, eax
0x98D989: inc     eax
0x98D98A: jmp     loc_98DA79
0x98D98F: cmp     ebx, 1
0x98D992: jz      loc_98DA76
0x98D998: mov     ecx, [esi+60h]
0x98D99B: mov     [ebp+var_8], ecx
0x98D99E: mov     ecx, [ebp+ExceptionInfo]
0x98D9A1: mov     [esi+60h], ecx
0x98D9A4: mov     ecx, [eax+4]
0x98D9A7: cmp     ecx, 8
0x98D9AA: jnz     loc_98DA68
0x98D9B0: mov     ecx, dword_B31340
0x98D9B6: mov     edi, dword_B31344
0x98D9BC: mov     edx, ecx
0x98D9BE: add     edi, ecx
0x98D9C0: cmp     edx, edi
0x98D9C2: jge     short loc_98D9E8
0x98D9C4: imul    ecx, 0Ch
0x98D9C7: mov     edi, [esi+5Ch]
0x98D9CA: and     dword ptr [ecx+edi+8], 0
0x98D9CF: mov     edi, dword_B31340
0x98D9D5: mov     ebx, dword_B31344
0x98D9DB: inc     edx
0x98D9DC: add     ebx, edi
0x98D9DE: add     ecx, 0Ch
0x98D9E1: cmp     edx, ebx
0x98D9E3: jl      short loc_98D9C7
0x98D9E5: mov     ebx, [ebp+var_4]
0x98D9E8: mov     eax, [eax]
0x98D9EA: cmp     eax, 0C000008Eh
0x98D9EF: mov     edi, [esi+64h]
0x98D9F2: jnz     short loc_98D9FD
0x98D9F4: mov     dword ptr [esi+64h], 83h ; 'ƒ'
0x98D9FB: jmp     short loc_98DA5B
0x98D9FD: cmp     eax, 0C0000090h
0x98DA02: jnz     short loc_98DA0D
0x98DA04: mov     dword ptr [esi+64h], 81h
0x98DA0B: jmp     short loc_98DA5B
0x98DA0D: cmp     eax, 0C0000091h
0x98DA12: jnz     short loc_98DA1D
0x98DA14: mov     dword ptr [esi+64h], 84h ; '„'
0x98DA1B: jmp     short loc_98DA5B
0x98DA1D: cmp     eax, 0C0000093h
0x98DA22: jnz     short loc_98DA2D
0x98DA24: mov     dword ptr [esi+64h], 85h ; '…'
0x98DA2B: jmp     short loc_98DA5B
0x98DA2D: cmp     eax, 0C000008Dh
0x98DA32: jnz     short loc_98DA3D
0x98DA34: mov     dword ptr [esi+64h], 82h ; '‚'
0x98DA3B: jmp     short loc_98DA5B
0x98DA3D: cmp     eax, 0C000008Fh
0x98DA42: jnz     short loc_98DA4D
0x98DA44: mov     dword ptr [esi+64h], 86h ; '†'
0x98DA4B: jmp     short loc_98DA5B
0x98DA4D: cmp     eax, 0C0000092h
0x98DA52: jnz     short loc_98DA5B
0x98DA54: mov     dword ptr [esi+64h], 8Ah ; 'Š'
0x98DA5B: push    dword ptr [esi+64h]
0x98DA5E: push    8
0x98DA60: call    ebx
0x98DA62: pop     ecx
0x98DA63: mov     [esi+64h], edi
0x98DA66: jmp     short loc_98DA6F
0x98DA68: and     dword ptr [eax+8], 0
0x98DA6C: push    ecx
0x98DA6D: call    ebx
0x98DA6F: mov     eax, [ebp+var_8]
0x98DA72: pop     ecx
0x98DA73: mov     [esi+60h], eax
0x98DA76: or      eax, 0FFFFFFFFh
0x98DA79: pop     ebx
0x98DA7A: pop     edi
0x98DA7B: pop     esi
0x98DA7C: leave
0x98DA7D: retn
