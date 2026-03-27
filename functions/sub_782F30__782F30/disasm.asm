0x782F30: push    ecx
0x782F31: cmp     byte ptr ds:0B4295Bh, 0
0x782F38: push    esi
0x782F39: mov     esi, [esp+8+arg_0]
0x782F3D: push    edi
0x782F3E: mov     edi, [esi+14h]
0x782F41: mov     [esp+0Ch+var_4], ecx
0x782F45: jnz     short loc_782F4C
0x782F47: call    sub_783C70
0x782F4C: and     edi, 0FFh
0x782F52: cmp     dword ptr ds:0B428D8h[edi*4], 8
0x782F5A: jz      short loc_782F85
0x782F5C: cmp     byte ptr ds:0B4295Bh, 0
0x782F63: mov     edi, [esi+14h]
0x782F66: jnz     short loc_782F6D
0x782F68: call    sub_783C70
0x782F6D: and     edi, 0FFh
0x782F73: cmp     dword ptr ds:0B428D8h[edi*4], 9
0x782F7B: jz      short loc_782F85
0x782F7D: pop     edi
0x782F7E: xor     al, al
0x782F80: pop     esi
0x782F81: pop     ecx
0x782F82: retn    14h
0x782F85: push    ebx
0x782F86: mov     ebx, [esi+1Ch]
0x782F89: push    ebp
0x782F8A: mov     ebp, [esp+14h+arg_8]
0x782F8E: xor     esi, esi
0x782F90: test    ebp, ebp
0x782F92: jbe     short loc_782FD6
0x782F94: mov     edi, [esp+14h+arg_C]
0x782F98: jmp     short loc_782FA0
0x782F9A: align 10h
0x782FA0: mov     edx, [esp+14h+arg_10]
0x782FA4: movzx   edx, word ptr [edx+esi*2]
0x782FA8: mov     eax, [esp+14h+var_4]
0x782FAC: imul    edx, edi
0x782FAF: mov     eax, [eax+24h]
0x782FB2: mov     eax, [eax+0FF8h]
0x782FB8: mov     ecx, [eax]
0x782FBA: shl     edx, 4
0x782FBD: add     edx, [esp+14h+arg_4]
0x782FC1: push    edi
0x782FC2: push    edx
0x782FC3: push    ebx
0x782FC4: push    eax
0x782FC5: mov     eax, [ecx+1B4h]
0x782FCB: call    eax
0x782FCD: add     esi, 1
0x782FD0: add     ebx, edi
0x782FD2: cmp     esi, ebp
0x782FD4: jb      short loc_782FA0
0x782FD6: pop     ebp
0x782FD7: pop     ebx
0x782FD8: pop     edi
0x782FD9: mov     al, 1
0x782FDB: pop     esi
0x782FDC: pop     ecx
0x782FDD: retn    14h
