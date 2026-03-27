0x76EB40: sub     esp, 14h
0x76EB43: push    ebx
0x76EB44: push    ebp
0x76EB45: push    esi
0x76EB46: mov     esi, [esp+20h+arg_0]
0x76EB4A: mov     edx, [esi+10h]
0x76EB4D: mov     ebx, [esi+24h]
0x76EB50: xor     ebp, ebp
0x76EB52: test    edx, edx
0x76EB54: push    edi
0x76EB55: mov     [esp+24h+var_10], ebp
0x76EB59: jnz     short loc_76EB97
0x76EB5B: xor     edi, edi
0x76EB5D: cmp     [esi+8], di
0x76EB61: jbe     loc_76EC4D
0x76EB67: mov     eax, [esi+1Ch]
0x76EB6A: lea     ebx, [ebx+0]
0x76EB70: push    eax
0x76EB71: push    0
0x76EB73: push    ebx
0x76EB74: call    __memset
0x76EB79: mov     eax, [esi+1Ch]
0x76EB7C: add     ebx, [esi+20h]
0x76EB7F: add     edi, 1
0x76EB82: add     esp, 0Ch
0x76EB85: add     ebp, eax
0x76EB87: cmp     di, [esi+8]
0x76EB8B: jb      short loc_76EB70
0x76EB8D: pop     edi
0x76EB8E: pop     esi
0x76EB8F: mov     eax, ebp
0x76EB91: pop     ebp
0x76EB92: pop     ebx
0x76EB93: add     esp, 14h
0x76EB96: retn
0x76EB97: mov     ax, [esi+4]
0x76EB9B: mov     cx, [esi]
0x76EB9E: sub     ax, 10h
0x76EBA2: add     cx, 1
0x76EBA6: movzx   eax, ax
0x76EBA9: movzx   ecx, cx
0x76EBAC: mov     edi, eax
0x76EBAE: sub     edi, ecx
0x76EBB0: test    di, di
0x76EBB3: mov     [esp+24h+var_4], ecx
0x76EBB7: jle     short loc_76EBC2
0x76EBB9: movzx   eax, cx
0x76EBBC: mov     [esp+24h+arg_0], eax
0x76EBC0: jmp     short loc_76EBC9
0x76EBC2: movzx   ecx, ax
0x76EBC5: mov     [esp+24h+arg_0], ecx
0x76EBC9: cmp     [esi+8], bp
0x76EBCD: mov     [esp+24h+var_C], ebp
0x76EBD1: jbe     short loc_76EC4D
0x76EBD3: fld     qword ptr ds:0A3DDD0h
0x76EBD9: mov     ecx, [esp+24h+arg_0]
0x76EBDD: test    cx, cx
0x76EBE0: mov     eax, edx
0x76EBE2: mov     edi, ebx
0x76EBE4: mov     [esp+24h+var_14], 0
0x76EBEC: jbe     short loc_76EC17
0x76EBEE: movzx   ecx, cx
0x76EBF1: movzx   ebp, cx
0x76EBF4: mov     [esp+24h+var_14], ebp
0x76EBF8: movsx   ebp, word ptr [eax]
0x76EBFB: mov     [esp+24h+var_8], ebp
0x76EBFF: add     edi, 4
0x76EC02: add     eax, 2
0x76EC05: sub     ecx, 1
0x76EC08: fild    [esp+24h+var_8]
0x76EC0C: fdiv    st, st(1)
0x76EC0E: fstp    dword ptr [edi-4]
0x76EC11: jnz     short loc_76EBF8
0x76EC13: mov     ebp, [esp+24h+var_10]
0x76EC17: mov     eax, [esp+24h+var_4]
0x76EC1B: mov     ecx, [esp+24h+var_14]
0x76EC1F: cmp     cx, ax
0x76EC22: jnb     short loc_76EC2D
0x76EC24: sub     eax, ecx
0x76EC26: movzx   ecx, ax
0x76EC29: xor     eax, eax
0x76EC2B: rep stosd
0x76EC2D: mov     eax, [esp+24h+var_C]
0x76EC31: add     ebp, [esi+1Ch]
0x76EC34: add     edx, [esi+18h]
0x76EC37: add     ebx, [esi+20h]
0x76EC3A: add     eax, 1
0x76EC3D: cmp     ax, [esi+8]
0x76EC41: mov     [esp+24h+var_10], ebp
0x76EC45: mov     [esp+24h+var_C], eax
0x76EC49: jb      short loc_76EBD9
0x76EC4B: fstp    st
0x76EC4D: pop     edi
0x76EC4E: pop     esi
0x76EC4F: mov     eax, ebp
0x76EC51: pop     ebp
0x76EC52: pop     ebx
0x76EC53: add     esp, 14h
0x76EC56: retn
