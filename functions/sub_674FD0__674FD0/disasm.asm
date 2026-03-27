0x674FD0: push    ecx
0x674FD1: mov     eax, [esp+4+arg_0]
0x674FD5: test    eax, eax
0x674FD7: mov     edx, ecx
0x674FD9: mov     [esp+4+var_4], edx
0x674FDC: jz      loc_675089
0x674FE2: mov     ecx, ds:0B33A98h
0x674FE8: test    ecx, ecx
0x674FEA: jz      loc_675089
0x674FF0: cmp     byte ptr [ecx+0CD4h], 0
0x674FF7: jnz     loc_675089
0x674FFD: push    ebx
0x674FFE: push    ebp
0x674FFF: mov     ebp, [eax+8]
0x675002: push    esi
0x675003: push    edi; int
0x675004: xor     ebx, ebx
0x675006: jmp     short loc_67500C
0x675008: mov     edx, [esp+14h+var_4]
0x67500C: test    ebx, ebx
0x67500E: jnz     short loc_675013
0x675010: push    ebx
0x675011: jmp     short loc_675019
0x675013: cmp     ebx, 1
0x675016: jnz     short loc_67507D
0x675018: push    ebx; a2
0x675019: mov     ecx, edx; this
0x67501B: call    sub_673A50
0x675020: mov     ecx, eax; this
0x675022: call    sub_7616D0
0x675027: mov     esi, eax
0x675029: test    esi, esi
0x67502B: jz      short loc_67507D
0x67502D: lea     ecx, [ecx+0]
0x675030: cmp     dword ptr [esi+4], 0
0x675034: jnz     short loc_67503B
0x675036: cmp     dword ptr [esi], 0
0x675039: jz      short loc_67507D
0x67503B: mov     ecx, [esi]
0x67503D: mov     eax, [ecx]
0x67503F: mov     edx, [eax+190h]
0x675045: call    edx
0x675047: test    al, al
0x675049: jz      short loc_675076
0x67504B: mov     edi, [esi]
0x67504D: test    edi, edi
0x67504F: jz      short loc_675076
0x675051: mov     ecx, [edi+58h]
0x675054: mov     eax, [ecx]
0x675056: mov     edx, [eax+184h]
0x67505C: call    edx
0x67505E: cmp     ebp, eax
0x675060: jnz     short loc_675076
0x675062: mov     ecx, edi; int
0x675064: call    sub_5EAE70
0x675069: mov     ecx, [edi+58h]
0x67506C: mov     eax, [ecx]
0x67506E: mov     edx, [eax+49Ch]
0x675074: call    edx
0x675076: mov     esi, [esi+4]
0x675079: test    esi, esi
0x67507B: jnz     short loc_675030
0x67507D: add     ebx, 1
0x675080: cmp     ebx, 2
0x675083: jl      short loc_675008
0x675085: pop     edi
0x675086: pop     esi
0x675087: pop     ebp
0x675088: pop     ebx
0x675089: pop     ecx
0x67508A: retn    4
