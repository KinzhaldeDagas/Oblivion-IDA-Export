0x410D10: push    ebx
0x410D11: push    esi
0x410D12: mov     esi, [esp+8+arg_0]
0x410D16: mov     eax, esi
0x410D18: lea     edx, [eax+1]
0x410D1B: jmp     short loc_410D20
0x410D1D: align 10h
0x410D20: mov     cl, [eax]
0x410D22: add     eax, 1
0x410D25: test    cl, cl
0x410D27: jnz     short loc_410D20
0x410D29: sub     eax, edx
0x410D2B: push    1
0x410D2D: add     eax, 1
0x410D30: push    eax
0x410D31: mov     ecx, offset FormHeap
0x410D36: call    j_MemoryHeap_Alloc
0x410D3B: mov     ebx, eax
0x410D3D: mov     edx, ebx
0x410D3F: mov     eax, esi
0x410D41: sub     edx, esi
0x410D43: mov     cl, [eax]
0x410D45: mov     [edx+eax], cl
0x410D48: add     eax, 1
0x410D4B: test    cl, cl
0x410D4D: jnz     short loc_410D43
0x410D4F: push    offset byte_A319FC; unsigned __int8 *
0x410D54: push    ebx; unsigned __int8 *
0x410D55: call    __mbstok
0x410D5A: mov     esi, eax
0x410D5C: add     esp, 8
0x410D5F: test    esi, esi
0x410D61: jz      loc_410E08
0x410D67: push    edi
0x410D68: jmp     short loc_410D70
0x410D6A: align 10h
0x410D70: cmp     byte_B33426, 0
0x410D77: jnz     short loc_410DEE
0x410D79: push    1
0x410D7B: call    sub_410390
0x410D80: add     esp, 4
0x410D83: test    al, al
0x410D85: jz      short loc_410DEE
0x410D87: mov     eax, esi
0x410D89: lea     edx, [eax+1]
0x410D8C: lea     esp, [esp+0]
0x410D90: mov     cl, [eax]
0x410D92: add     eax, 1
0x410D95: test    cl, cl
0x410D97: jnz     short loc_410D90
0x410D99: sub     eax, edx
0x410D9B: lea     edi, [eax+esi-3]
0x410D9F: push    offset aBik; unsigned __int8 *
0x410DA4: push    edi; unsigned __int8 *
0x410DA5: call    __mbsicmp
0x410DAA: add     esp, 8
0x410DAD: test    eax, eax
0x410DAF: jnz     short loc_410DD3
0x410DB1: movzx   ecx, byte_B030B4
0x410DB8: push    eax; char
0x410DB9: movzx   eax, byte_B33427
0x410DC0: push    eax; float
0x410DC1: push    ecx; int
0x410DC2: push    0; int
0x410DC4: push    1; int
0x410DC6: push    1; int
0x410DC8: push    esi; ArgList
0x410DC9: call    sub_410BA0
0x410DCE: add     esp, 1Ch
0x410DD1: jmp     short loc_410DEE
0x410DD3: push    offset aDds_0; unsigned __int8 *
0x410DD8: push    edi; unsigned __int8 *
0x410DD9: call    __mbsicmp
0x410DDE: add     esp, 8
0x410DE1: test    eax, eax
0x410DE3: jnz     short loc_410DEE
0x410DE5: push    esi
0x410DE6: call    sub_410840
0x410DEB: add     esp, 4
0x410DEE: push    offset byte_A319FC; unsigned __int8 *
0x410DF3: push    0; unsigned __int8 *
0x410DF5: call    __mbstok
0x410DFA: mov     esi, eax
0x410DFC: add     esp, 8
0x410DFF: test    esi, esi
0x410E01: jnz     loc_410D70
0x410E07: pop     edi
0x410E08: push    ebx; void *
0x410E09: mov     ecx, offset FormHeap
0x410E0E: call    MemoryHeap_Free_checked
0x410E13: pop     esi
0x410E14: mov     byte_B33426, 0
0x410E1B: pop     ebx
0x410E1C: retn
