0x74CA00: push    ecx
0x74CA01: push    ebp
0x74CA02: mov     ebp, [esp+8+arg_0]
0x74CA06: push    esi
0x74CA07: push    edi
0x74CA08: push    ebp
0x74CA09: mov     esi, ecx
0x74CA0B: call    sub_752D80
0x74CA10: mov     ecx, [ebp+0]
0x74CA13: lea     eax, [esp+10h+arg_0]
0x74CA17: push    eax
0x74CA18: push    esi
0x74CA19: call    NiTMap_GetAt
0x74CA1E: movzx   eax, word ptr [esi+5Ch]
0x74CA22: mov     ecx, [esp+10h+arg_0]
0x74CA26: xor     edi, edi
0x74CA28: test    eax, eax
0x74CA2A: mov     [esp+10h+var_4], ecx
0x74CA2E: jbe     short loc_74CA6E
0x74CA30: cmp     edi, eax
0x74CA32: push    ebx
0x74CA33: jnb     short loc_74CA62
0x74CA35: mov     edx, [esi+54h]
0x74CA38: mov     ebx, [edx+edi*4]
0x74CA3B: test    ebx, ebx
0x74CA3D: jz      short loc_74CA62
0x74CA3F: mov     ecx, [ebp+0]
0x74CA42: lea     eax, [esp+14h+arg_0]
0x74CA46: push    eax
0x74CA47: push    ebx
0x74CA48: call    NiTMap_GetAt
0x74CA4D: test    al, al
0x74CA4F: jz      short loc_74CA58
0x74CA51: mov     ecx, [esp+14h+arg_0]
0x74CA55: push    ecx
0x74CA56: jmp     short loc_74CA59
0x74CA58: push    ebx
0x74CA59: mov     ecx, [esp+18h+var_4]
0x74CA5D: call    sub_74C910
0x74CA62: movzx   eax, word ptr [esi+5Ch]
0x74CA66: add     edi, 1
0x74CA69: cmp     edi, eax
0x74CA6B: jb      short loc_74CA35
0x74CA6D: pop     ebx
0x74CA6E: pop     edi
0x74CA6F: pop     esi
0x74CA70: pop     ebp
0x74CA71: pop     ecx
0x74CA72: retn    4
