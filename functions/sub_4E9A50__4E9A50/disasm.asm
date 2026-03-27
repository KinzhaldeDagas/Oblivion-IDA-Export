0x4E9A50: push    0FFFFFFFFh
0x4E9A52: push    offset SEH_4E9A50
0x4E9A57: mov     eax, large fs:0
0x4E9A5D: push    eax
0x4E9A5E: sub     esp, 10h
0x4E9A61: push    ebx
0x4E9A62: push    ebp
0x4E9A63: push    esi
0x4E9A64: push    edi
0x4E9A65: mov     eax, ds:0B30AACh
0x4E9A6A: xor     eax, esp
0x4E9A6C: push    eax
0x4E9A6D: lea     eax, [esp+30h+var_C]
0x4E9A71: mov     large fs:0, eax
0x4E9A77: mov     edi, ecx
0x4E9A79: mov     [esp+30h+var_14], edi
0x4E9A7D: mov     eax, [esp+30h+arg_0]
0x4E9A81: xor     ebp, ebp
0x4E9A83: push    ebp; int
0x4E9A84: push    offset ??_R0?AVTESRoad@@@8; struct TypeDescriptor *
0x4E9A89: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4E9A8E: push    ebp; int
0x4E9A8F: push    eax; void *
0x4E9A90: call    OblivionDynamicCast
0x4E9A95: mov     esi, eax
0x4E9A97: add     esp, 14h
0x4E9A9A: cmp     esi, ebp
0x4E9A9C: jz      loc_4E9C86
0x4E9AA2: mov     ecx, edi
0x4E9AA4: call    sub_4E8C20
0x4E9AA9: mov     ecx, [esi+20h]
0x4E9AAC: lea     edi, [esi+1Ch]
0x4E9AAF: xor     eax, eax
0x4E9AB1: cmp     ecx, ebp
0x4E9AB3: mov     [esp+30h+var_18], edi
0x4E9AB7: jbe     short loc_4E9ACE
0x4E9AB9: mov     esi, [edi+8]
0x4E9ABC: mov     edx, esi
0x4E9ABE: mov     edi, edi
0x4E9AC0: cmp     [edx], ebp
0x4E9AC2: jnz     short loc_4E9B2E
0x4E9AC4: add     eax, 1
0x4E9AC7: add     edx, 4
0x4E9ACA: cmp     eax, ecx
0x4E9ACC: jb      short loc_4E9AC0
0x4E9ACE: xor     eax, eax
0x4E9AD0: cmp     eax, ebp
0x4E9AD2: mov     [esp+30h+var_1C], eax
0x4E9AD6: jz      loc_4E9B6B
0x4E9ADC: lea     esp, [esp+0]
0x4E9AE0: lea     ecx, [esp+30h+arg_0]
0x4E9AE4: push    ecx
0x4E9AE5: lea     edx, [esp+34h+var_10]
0x4E9AE9: push    edx
0x4E9AEA: lea     eax, [esp+38h+var_1C]
0x4E9AEE: push    eax
0x4E9AEF: mov     ecx, edi
0x4E9AF1: mov     [esp+3Ch+arg_0], ebp
0x4E9AF5: call    sub_452600
0x4E9AFA: mov     esi, [esp+30h+arg_0]
0x4E9AFE: cmp     esi, ebp
0x4E9B00: jz      short loc_4E9B5D
0x4E9B02: cmp     [esi+4], ebp
0x4E9B05: jnz     short loc_4E9B0B
0x4E9B07: cmp     [esi], ebp
0x4E9B09: jz      short loc_4E9B5D
0x4E9B0B: mov     ebx, [esi]
0x4E9B0D: push    28h ; '('; Size
0x4E9B0F: call    FormHeapAlloc
0x4E9B14: add     esp, 4
0x4E9B17: mov     [esp+30h+arg_0], eax
0x4E9B1B: cmp     eax, ebp
0x4E9B1D: mov     [esp+30h+var_4], ebp
0x4E9B21: jz      short loc_4E9B33
0x4E9B23: mov     ecx, eax
0x4E9B25: call    sub_4BEF70
0x4E9B2A: mov     edi, eax
0x4E9B2C: jmp     short loc_4E9B35
0x4E9B2E: mov     eax, [esi+eax*4]
0x4E9B31: jmp     short loc_4E9AD0
0x4E9B33: xor     edi, edi
0x4E9B35: mov     ecx, ebx
0x4E9B37: mov     [esp+30h+var_4], 0FFFFFFFFh
0x4E9B3F: call    sub_4BEF40
0x4E9B44: push    eax
0x4E9B45: mov     ecx, edi
0x4E9B47: call    sub_4BEF50
0x4E9B4C: mov     ecx, [esp+30h+var_14]
0x4E9B50: push    edi
0x4E9B51: call    sub_4E9060
0x4E9B56: mov     esi, [esi+4]
0x4E9B59: cmp     esi, ebp
0x4E9B5B: jnz     short loc_4E9B02
0x4E9B5D: cmp     [esp+30h+var_1C], ebp
0x4E9B61: mov     edi, [esp+30h+var_18]
0x4E9B65: jnz     loc_4E9AE0
0x4E9B6B: mov     edx, [edi+4]
0x4E9B6E: xor     eax, eax
0x4E9B70: cmp     edx, ebp
0x4E9B72: jbe     short loc_4E9B8E
0x4E9B74: mov     esi, [edi+8]
0x4E9B77: mov     ecx, esi
0x4E9B79: lea     esp, [esp+0]
0x4E9B80: cmp     [ecx], ebp
0x4E9B82: jnz     short loc_4E9B9E
0x4E9B84: add     eax, 1
0x4E9B87: add     ecx, 4
0x4E9B8A: cmp     eax, edx
0x4E9B8C: jb      short loc_4E9B80
0x4E9B8E: xor     eax, eax
0x4E9B90: cmp     eax, ebp
0x4E9B92: mov     [esp+30h+var_1C], eax
0x4E9B96: jz      loc_4E9C86
0x4E9B9C: jmp     short loc_4E9BA7
0x4E9B9E: mov     eax, [esi+eax*4]
0x4E9BA1: jmp     short loc_4E9B90
0x4E9BA3: mov     edi, [esp+30h+var_18]
0x4E9BA7: lea     ecx, [esp+30h+arg_0]
0x4E9BAB: push    ecx
0x4E9BAC: lea     edx, [esp+34h+var_10]
0x4E9BB0: push    edx
0x4E9BB1: lea     eax, [esp+38h+var_1C]
0x4E9BB5: push    eax
0x4E9BB6: mov     ecx, edi
0x4E9BB8: mov     [esp+3Ch+arg_0], ebp
0x4E9BBC: call    sub_452600
0x4E9BC1: cmp     [esp+30h+arg_0], ebp
0x4E9BC5: jz      loc_4E9C7C
0x4E9BCB: mov     eax, [esp+30h+arg_0]
0x4E9BCF: cmp     [eax+4], ebp
0x4E9BD2: jnz     short loc_4E9BDC
0x4E9BD4: cmp     [eax], ebp
0x4E9BD6: jz      loc_4E9C7C
0x4E9BDC: mov     esi, [eax]
0x4E9BDE: mov     ecx, esi
0x4E9BE0: call    sub_4BEF40
0x4E9BE5: mov     ecx, [esp+30h+var_14]
0x4E9BE9: push    eax
0x4E9BEA: call    sub_4E8D00
0x4E9BEF: mov     ecx, esi
0x4E9BF1: mov     [esp+30h+var_10], eax
0x4E9BF5: call    sub_4E7DE0
0x4E9BFA: mov     edi, eax
0x4E9BFC: cmp     edi, ebp
0x4E9BFE: jz      short loc_4E9C69
0x4E9C00: cmp     [edi+4], ebp
0x4E9C03: jnz     short loc_4E9C09
0x4E9C05: cmp     [edi], ebp
0x4E9C07: jz      short loc_4E9C69
0x4E9C09: mov     ecx, [edi]
0x4E9C0B: call    sub_4BEF40
0x4E9C10: mov     ecx, [esp+30h+var_14]
0x4E9C14: push    eax
0x4E9C15: call    sub_4E8D00
0x4E9C1A: mov     ebx, eax
0x4E9C1C: cmp     ebx, ebp
0x4E9C1E: jz      short loc_4E9C62
0x4E9C20: mov     ecx, [esp+30h+var_10]
0x4E9C24: call    sub_4E7DE0
0x4E9C29: mov     esi, eax
0x4E9C2B: cmp     [esi+4], ebp
0x4E9C2E: lea     eax, [esi+4]
0x4E9C31: jz      short loc_4E9C3D
0x4E9C33: mov     esi, [eax]
0x4E9C35: cmp     [esi+4], ebp
0x4E9C38: lea     eax, [esi+4]
0x4E9C3B: jnz     short loc_4E9C33
0x4E9C3D: cmp     [esi], ebp
0x4E9C3F: jz      short loc_4E9C60
0x4E9C41: push    8; Size
0x4E9C43: call    FormHeapAlloc
0x4E9C48: add     esp, 4
0x4E9C4B: cmp     eax, ebp
0x4E9C4D: jz      short loc_4E9C59
0x4E9C4F: mov     [eax], ebx
0x4E9C51: mov     [eax+4], ebp
0x4E9C54: mov     [esi+4], eax
0x4E9C57: jmp     short loc_4E9C62
0x4E9C59: xor     eax, eax
0x4E9C5B: mov     [esi+4], eax
0x4E9C5E: jmp     short loc_4E9C62
0x4E9C60: mov     [esi], ebx
0x4E9C62: mov     edi, [edi+4]
0x4E9C65: cmp     edi, ebp
0x4E9C67: jnz     short loc_4E9C00
0x4E9C69: mov     ecx, [esp+30h+arg_0]
0x4E9C6D: mov     eax, [ecx+4]
0x4E9C70: cmp     eax, ebp
0x4E9C72: mov     [esp+30h+arg_0], eax
0x4E9C76: jnz     loc_4E9BCB
0x4E9C7C: cmp     [esp+30h+var_1C], ebp
0x4E9C80: jnz     loc_4E9BA3
0x4E9C86: mov     ecx, [esp+30h+var_C]
0x4E9C8A: mov     large fs:0, ecx
0x4E9C91: pop     ecx
0x4E9C92: pop     edi
0x4E9C93: pop     esi
0x4E9C94: pop     ebp
0x4E9C95: pop     ebx
0x4E9C96: add     esp, 1Ch
0x4E9C99: retn    4
