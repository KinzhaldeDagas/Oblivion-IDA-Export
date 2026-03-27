0x6FDC30: push    0FFFFFFFFh
0x6FDC32: push    offset SEH_6FDC30
0x6FDC37: mov     eax, large fs:0
0x6FDC3D: push    eax
0x6FDC3E: sub     esp, 18h
0x6FDC41: push    ebx
0x6FDC42: push    ebp
0x6FDC43: push    esi
0x6FDC44: push    edi
0x6FDC45: mov     eax, ds:0B30AACh
0x6FDC4A: xor     eax, esp
0x6FDC4C: push    eax
0x6FDC4D: lea     eax, [esp+38h+var_C]
0x6FDC51: mov     large fs:0, eax
0x6FDC57: mov     edi, ecx
0x6FDC59: mov     [esp+38h+var_10], edi
0x6FDC5D: mov     ebx, [esp+38h+arg_0]
0x6FDC61: push    ebx
0x6FDC62: call    sub_715F40
0x6FDC67: mov     eax, [ebx+21Ch]
0x6FDC6D: push    1
0x6FDC6F: lea     ecx, [esp+3Ch+var_18]
0x6FDC73: push    ecx
0x6FDC74: mov     ebp, 4
0x6FDC79: push    ebp
0x6FDC7A: lea     edx, [edi+3Ch]
0x6FDC7D: push    edx
0x6FDC7E: push    eax
0x6FDC7F: mov     eax, [eax+4]
0x6FDC82: mov     [esp+4Ch+var_18], ebp
0x6FDC86: call    eax
0x6FDC88: mov     eax, [ebx+21Ch]
0x6FDC8E: push    1
0x6FDC90: lea     ecx, [esp+50h+var_18]
0x6FDC94: push    ecx
0x6FDC95: push    ebp
0x6FDC96: lea     edx, [edi+40h]
0x6FDC99: push    edx
0x6FDC9A: push    eax
0x6FDC9B: mov     eax, [eax+4]
0x6FDC9E: mov     [esp+60h+var_18], ebp
0x6FDCA2: call    eax
0x6FDCA4: mov     eax, [ebx+21Ch]
0x6FDCAA: push    1
0x6FDCAC: lea     ecx, [esp+64h+var_18]
0x6FDCB0: push    ecx
0x6FDCB1: push    ebp
0x6FDCB2: lea     edx, [esp+6Ch+var_1C]
0x6FDCB6: push    edx
0x6FDCB7: xor     esi, esi
0x6FDCB9: mov     [esp+70h+var_1C], esi
0x6FDCBD: push    eax
0x6FDCBE: mov     eax, [eax+4]
0x6FDCC1: mov     [esp+74h+var_18], ebp
0x6FDCC5: call    eax
0x6FDCC7: add     esp, 3Ch
0x6FDCCA: xor     ebp, ebp
0x6FDCCC: cmp     [esp+38h+var_1C], esi
0x6FDCD0: jbe     loc_6FDDE0
0x6FDCD6: add     edi, 44h ; 'D'
0x6FDCD9: jmp     short loc_6FDCE6
0x6FDCDB: jmp     short loc_6FDCE0
0x6FDCDD: align 10h
0x6FDCE0: mov     ebx, [esp+38h+arg_0]
0x6FDCE4: xor     esi, esi
0x6FDCE6: push    0Ch; Size
0x6FDCE8: call    FormHeapAlloc
0x6FDCED: add     esp, 4
0x6FDCF0: cmp     eax, esi
0x6FDCF2: jz      short loc_6FDCFE
0x6FDCF4: mov     [eax], esi
0x6FDCF6: mov     [eax+4], esi
0x6FDCF9: mov     [eax+8], esi
0x6FDCFC: mov     esi, eax
0x6FDCFE: movzx   ecx, word ptr [edi+8]
0x6FDD02: cmp     ebp, ecx
0x6FDD04: mov     [esp+38h+var_4], 0FFFFFFFFh
0x6FDD0C: jb      short loc_6FDD1C
0x6FDD0E: movzx   edx, word ptr [edi+0Eh]
0x6FDD12: add     edx, ebp
0x6FDD14: push    edx
0x6FDD15: mov     ecx, edi
0x6FDD17: call    NiTArray_SetSize
0x6FDD1C: movzx   eax, word ptr [edi+0Ah]
0x6FDD20: cmp     ebp, eax
0x6FDD22: jb      short loc_6FDD36
0x6FDD24: test    esi, esi
0x6FDD26: lea     ecx, [ebp+1]
0x6FDD29: mov     [edi+0Ah], cx
0x6FDD2D: jz      short loc_6FDD59
0x6FDD2F: add     word ptr [edi+0Ch], 1
0x6FDD34: jmp     short loc_6FDD59
0x6FDD36: test    esi, esi
0x6FDD38: jz      short loc_6FDD4A
0x6FDD3A: mov     edx, [edi+4]
0x6FDD3D: cmp     dword ptr [edx+ebp*4], 0
0x6FDD41: jnz     short loc_6FDD59
0x6FDD43: add     word ptr [edi+0Ch], 1
0x6FDD48: jmp     short loc_6FDD59
0x6FDD4A: mov     eax, [edi+4]
0x6FDD4D: cmp     dword ptr [eax+ebp*4], 0
0x6FDD51: jz      short loc_6FDD59
0x6FDD53: add     word ptr [edi+0Ch], 0FFFFh
0x6FDD59: mov     ecx, [edi+4]
0x6FDD5C: push    1
0x6FDD5E: mov     [ecx+ebp*4], esi
0x6FDD61: mov     eax, [ebx+21Ch]
0x6FDD67: lea     edx, [esp+3Ch+var_14]
0x6FDD6B: push    edx
0x6FDD6C: push    4
0x6FDD6E: lea     ecx, [esp+44h+var_20]
0x6FDD72: push    ecx
0x6FDD73: mov     [esp+48h+var_20], 0
0x6FDD7B: mov     edx, [eax+4]
0x6FDD7E: push    eax
0x6FDD7F: mov     [esp+4Ch+var_14], 4
0x6FDD87: call    edx
0x6FDD89: xor     ebx, ebx
0x6FDD8B: add     esp, 14h
0x6FDD8E: cmp     [esp+38h+var_20], ebx
0x6FDD92: jbe     short loc_6FDDD3
0x6FDD94: mov     eax, [esi+4]
0x6FDD97: cmp     [esi+8], eax
0x6FDD9A: jnz     short loc_6FDDB1
0x6FDD9C: test    eax, eax
0x6FDD9E: jbe     short loc_6FDDA4
0x6FDDA0: add     eax, eax
0x6FDDA2: jmp     short loc_6FDDA9
0x6FDDA4: mov     eax, 1
0x6FDDA9: push    eax
0x6FDDAA: mov     ecx, esi
0x6FDDAC: call    sub_6E8CA0
0x6FDDB1: mov     eax, [esi+8]
0x6FDDB4: mov     ecx, [esi]
0x6FDDB6: mov     edx, [esp+38h+var_10]
0x6FDDBA: mov     [ecx+eax*4], edx
0x6FDDBD: mov     ecx, [esp+38h+arg_0]
0x6FDDC1: add     dword ptr [esi+8], 1
0x6FDDC5: call    sub_712A20
0x6FDDCA: add     ebx, 1
0x6FDDCD: cmp     ebx, [esp+38h+var_20]
0x6FDDD1: jb      short loc_6FDD94
0x6FDDD3: add     ebp, 1
0x6FDDD6: cmp     ebp, [esp+38h+var_1C]
0x6FDDDA: jb      loc_6FDCE0
0x6FDDE0: mov     ecx, [esp+38h+var_C]
0x6FDDE4: mov     large fs:0, ecx
0x6FDDEB: pop     ecx
0x6FDDEC: pop     edi
0x6FDDED: pop     esi
0x6FDDEE: pop     ebp
0x6FDDEF: pop     ebx
0x6FDDF0: add     esp, 24h
0x6FDDF3: retn    4
