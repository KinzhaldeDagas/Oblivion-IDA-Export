0x7DACA0: sub     esp, 11Ch
0x7DACA6: mov     eax, ds:0B30AACh
0x7DACAB: xor     eax, esp
0x7DACAD: mov     [esp+11Ch+var_4], eax
0x7DACB4: push    ebp
0x7DACB5: push    edi
0x7DACB6: mov     ebp, ecx
0x7DACB8: mov     ecx, [esp+124h+arg_0]
0x7DACBF: xor     al, al
0x7DACC1: xor     edi, edi
0x7DACC3: cmp     ecx, edi
0x7DACC5: mov     [esp+124h+var_119], al
0x7DACC9: jz      loc_7DADA0
0x7DACCF: push    ebx
0x7DACD0: push    ecx
0x7DACD1: lea     eax, [esp+12Ch+var_108]
0x7DACD5: push    offset aDataShadersS; "\\Data\\Shaders\\%s"
0x7DACDA: push    eax
0x7DACDB: call    __sprintf
0x7DACE0: push    edi
0x7DACE1: lea     ecx, [esp+138h+var_108]
0x7DACE5: push    edi
0x7DACE6: push    ecx
0x7DACE7: call    FileFinder_LoadBSFile
0x7DACEC: mov     ebx, eax
0x7DACEE: add     esp, 18h
0x7DACF1: cmp     ebx, edi
0x7DACF3: jz      loc_7DAD9B
0x7DACF9: mov     ecx, [ebx+4]
0x7DACFC: push    esi
0x7DACFD: push    1
0x7DACFF: lea     edx, [esp+130h+Size]
0x7DAD03: push    edx
0x7DAD04: push    0Ch
0x7DAD06: lea     eax, [esp+138h+var_118]
0x7DAD0A: push    eax
0x7DAD0B: push    ebx
0x7DAD0C: mov     [esp+140h+Size], 1
0x7DAD14: call    ecx
0x7DAD16: add     esp, 14h
0x7DAD19: cmp     eax, 0Ch
0x7DAD1C: jnz     short loc_7DAD90
0x7DAD1E: cmp     [esp+128h+var_114], 64h ; 'd'
0x7DAD23: jnz     short loc_7DAD90
0x7DAD25: mov     edx, [esp+128h+Size]
0x7DAD29: push    edx; Size
0x7DAD2A: call    FormHeapAlloc
0x7DAD2F: mov     ecx, [esp+12Ch+Size]
0x7DAD33: add     esp, 4
0x7DAD36: push    ecx
0x7DAD37: push    eax
0x7DAD38: mov     ecx, ebx
0x7DAD3A: mov     [ebp+4], eax
0x7DAD3D: call    ReadFile??
0x7DAD42: cmp     eax, [esp+128h+Size]
0x7DAD46: jnz     short loc_7DAD81
0x7DAD48: cmp     [esp+128h+var_110], edi
0x7DAD4C: mov     esi, [ebp+4]
0x7DAD4F: mov     byte ptr [esp+128h+var_118+3], 1
0x7DAD54: jbe     short loc_7DAD90
0x7DAD56: add     ebp, 8
0x7DAD59: lea     esp, [esp+0]
0x7DAD60: push    esi
0x7DAD61: push    esi
0x7DAD62: mov     ecx, ebp
0x7DAD64: call    sub_412D30
0x7DAD69: mov     edx, [esi+100h]
0x7DAD6F: add     edi, 1
0x7DAD72: cmp     edi, [esp+128h+var_110]
0x7DAD76: lea     esi, [esi+edx+104h]
0x7DAD7D: jb      short loc_7DAD60
0x7DAD7F: jmp     short loc_7DAD90
0x7DAD81: mov     eax, [ebp+4]
0x7DAD84: push    eax
0x7DAD85: call    FormHeapFree
0x7DAD8A: add     esp, 4
0x7DAD8D: mov     [ebp+4], edi
0x7DAD90: mov     edx, [ebx]
0x7DAD92: mov     eax, [edx]
0x7DAD94: push    1
0x7DAD96: mov     ecx, ebx
0x7DAD98: call    eax
0x7DAD9A: pop     esi
0x7DAD9B: mov     al, [esp+128h+var_119]
0x7DAD9F: pop     ebx
0x7DADA0: mov     ecx, [esp+124h+var_4]
0x7DADA7: pop     edi
0x7DADA8: pop     ebp
0x7DADA9: xor     ecx, esp
0x7DADAB: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7DADB0: add     esp, 11Ch
0x7DADB6: retn    4
