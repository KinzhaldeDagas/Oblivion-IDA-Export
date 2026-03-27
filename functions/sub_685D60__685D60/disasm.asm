0x685D60: sub     esp, 8
0x685D63: cmp     byte ptr ds:0B3C088h, 0
0x685D6A: jz      short loc_685D72
0x685D6C: xor     al, al
0x685D6E: add     esp, 8
0x685D71: retn
0x685D72: mov     eax, [esp+8+arg_C]
0x685D76: push    ebx
0x685D77: push    ebp
0x685D78: mov     byte ptr [eax], 0
0x685D7B: fild    dword ptr ds:0B33EA0h
0x685D81: mov     ecx, ds:0B33EA0h
0x685D87: test    ecx, ecx
0x685D89: push    esi
0x685D8A: push    edi
0x685D8B: mov     [esp+18h+var_5], 0
0x685D90: jge     short loc_685D98
0x685D92: fadd    dword ptr ds:0A2FC78h
0x685D98: mov     ebx, [esp+18h+arg_8]
0x685D9C: fstp    [esp+18h+var_4]
0x685DA0: mov     ebp, offset dword_B3C094
0x685DA5: xor     esi, esi
0x685DA7: jmp     short loc_685DB0
0x685DA9: align 10h
0x685DB0: cmp     [esp+18h+var_5], 0
0x685DB5: jnz     loc_685E3B
0x685DBB: mov     edi, [ebp+0]
0x685DBE: test    edi, edi
0x685DC0: jz      short loc_685E2E
0x685DC2: fld     [esp+18h+var_4]
0x685DC6: fsub    dword ptr [edi+18h]
0x685DC9: fcomp   qword ptr ds:0A74C98h
0x685DCF: fnstsw  ax
0x685DD1: test    ah, 5
0x685DD4: jp      short loc_685E47
0x685DD6: mov     edx, [esp+18h+arg_0]
0x685DDA: cmp     [edi], edx
0x685DDC: jnz     short loc_685E2E
0x685DDE: fld     dword ptr ds:0A417B4h
0x685DE4: mov     eax, [esp+18h+arg_4]
0x685DE8: push    ecx
0x685DE9: fstp    [esp+1Ch+var_1C]; float
0x685DEC: lea     esi, [edi+4]
0x685DEF: push    eax; int
0x685DF0: mov     ecx, esi
0x685DF2: call    sub_6899C0
0x685DF7: push    eax; int
0x685DF8: call    sub_47D890
0x685DFD: add     esp, 0Ch
0x685E00: test    al, al
0x685E02: jz      short loc_685E2E
0x685E04: mov     cl, [edi+1Ch]
0x685E07: mov     edx, [esp+18h+arg_C]
0x685E0B: mov     [edx], cl
0x685E0D: mov     eax, [esi]
0x685E0F: mov     [ebx], eax
0x685E11: mov     ecx, [esi+4]
0x685E14: mov     [ebx+4], ecx
0x685E17: mov     edx, [esi+8]
0x685E1A: mov     [ebx+8], edx
0x685E1D: mov     eax, [esi+0Ch]
0x685E20: mov     [ebx+0Ch], eax
0x685E23: mov     ecx, [esi+10h]
0x685E26: mov     [esp+18h+var_5], 1
0x685E2B: mov     [ebx+10h], ecx
0x685E2E: mov     esi, ebp
0x685E30: mov     ebp, [ebp+4]
0x685E33: test    ebp, ebp
0x685E35: jnz     loc_685DB0
0x685E3B: mov     al, [esp+18h+var_5]
0x685E3F: pop     edi
0x685E40: pop     esi
0x685E41: pop     ebp
0x685E42: pop     ebx
0x685E43: add     esp, 8
0x685E46: retn
0x685E47: test    esi, esi
0x685E49: jz      short loc_685E69
0x685E4B: push    edi
0x685E4C: mov     ecx, esi
0x685E4E: call    BSSimpleList_Remove
0x685E53: lea     ecx, [edi+4]; void *
0x685E56: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x685E5B: push    edi
0x685E5C: call    FormHeapFree
0x685E61: mov     ebp, [esi+4]
0x685E64: add     esp, 4
0x685E67: jmp     short loc_685E33
0x685E69: mov     eax, [ebp+4]
0x685E6C: test    eax, eax
0x685E6E: jz      short loc_685E86
0x685E70: mov     edx, [eax+4]
0x685E73: mov     [ebp+4], edx
0x685E76: mov     ecx, [eax]
0x685E78: push    eax
0x685E79: mov     [ebp+0], ecx
0x685E7C: call    FormHeapFree
0x685E81: add     esp, 4
0x685E84: jmp     short loc_685E8D
0x685E86: mov     dword ptr [ebp+0], 0
0x685E8D: lea     ecx, [edi+4]; void *
0x685E90: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x685E95: push    edi
0x685E96: call    FormHeapFree
0x685E9B: add     esp, 4
0x685E9E: jmp     short loc_685E33
