0x775A20: sub     esp, 34h
0x775A23: push    ebx
0x775A24: mov     ebx, [esp+38h+arg_4]
0x775A28: push    ebp
0x775A29: mov     ebp, ecx
0x775A2B: push    esi
0x775A2C: mov     [ebp+0], ebx
0x775A2F: xor     ecx, ecx
0x775A31: push    edi
0x775A32: lea     edi, [ebp+450h]
0x775A38: mov     eax, 20h ; ' '
0x775A3D: mov     [edi+8], ax
0x775A41: mov     edx, 4
0x775A46: mul     edx
0x775A48: mov     [edi+0Ah], cx
0x775A4C: mov     [edi+0Ch], cx
0x775A50: seto    cl
0x775A53: mov     dword ptr [edi], offset ??_7?$NiTArray@PAVModeDesc@NiDX9AdapterDesc@@@@6B@; const NiTArray<NiDX9AdapterDesc::ModeDesc *>::`vftable'
0x775A59: mov     word ptr [edi+0Eh], 10h
0x775A5F: neg     ecx
0x775A61: or      ecx, eax
0x775A63: push    ecx; Size
0x775A64: call    FormHeapAlloc
0x775A69: mov     esi, [esp+48h+arg_0]
0x775A6D: add     esp, 4
0x775A70: lea     ecx, [ebp+4]
0x775A73: push    ecx
0x775A74: mov     [edi+4], eax
0x775A77: mov     edx, [ebp+0]
0x775A7A: mov     eax, [esi]
0x775A7C: mov     eax, [eax+14h]
0x775A7F: push    0
0x775A81: push    edx
0x775A82: push    esi
0x775A83: call    eax
0x775A85: mov     ecx, [esp+44h+arg_8]
0x775A89: mov     ecx, [ecx+4]
0x775A8C: test    ecx, ecx
0x775A8E: jz      loc_775C27
0x775A94: jmp     short loc_775A9A
0x775A96: mov     ecx, [esp+44h+var_28]
0x775A9A: mov     ebx, [ecx+8]
0x775A9D: test    ebx, ebx
0x775A9F: mov     edx, [ecx]
0x775AA1: lea     eax, [ecx+8]
0x775AA4: mov     [esp+44h+var_28], edx
0x775AA8: mov     [esp+44h+var_34], ebx
0x775AAC: jz      loc_775C18
0x775AB2: mov     ecx, [ebp+0]
0x775AB5: mov     eax, [esi]
0x775AB7: mov     edx, [eax+18h]
0x775ABA: push    ebx
0x775ABB: push    ecx
0x775ABC: push    esi
0x775ABD: call    edx
0x775ABF: xor     ecx, ecx
0x775AC1: test    eax, eax
0x775AC3: mov     [esp+44h+var_24], eax
0x775AC7: mov     [esp+44h+var_2C], ecx
0x775ACB: jbe     loc_775C18
0x775AD1: jmp     short loc_775AD7
0x775AD3: mov     ebx, [esp+44h+var_34]
0x775AD7: mov     eax, [esi]
0x775AD9: lea     edx, [esp+44h+var_20]
0x775ADD: push    edx
0x775ADE: mov     edx, [eax+1Ch]
0x775AE1: push    ecx
0x775AE2: mov     ecx, [ebp+0]
0x775AE5: push    ebx
0x775AE6: push    ecx
0x775AE7: push    esi
0x775AE8: call    edx
0x775AEA: test    eax, eax
0x775AEC: jl      loc_775C03
0x775AF2: xor     ebx, ebx
0x775AF4: cmp     [ebp+45Ah], bx
0x775AFB: mov     [esp+44h+var_30], ebx
0x775AFF: jbe     loc_775B82
0x775B05: mov     eax, [ebp+454h]
0x775B0B: mov     eax, [eax+ebx*4]
0x775B0E: test    eax, eax
0x775B10: jz      short loc_775B69
0x775B12: mov     ecx, [esp+44h+var_34]
0x775B16: cmp     [eax+0Ch], ecx
0x775B19: jnz     short loc_775B69
0x775B1B: mov     edx, [eax]
0x775B1D: cmp     edx, [esp+44h+var_20]
0x775B21: jnz     short loc_775B69
0x775B23: mov     ecx, [eax+4]
0x775B26: cmp     ecx, [esp+44h+var_1C]
0x775B2A: jnz     short loc_775B69
0x775B2C: mov     edx, [eax+10h]
0x775B2F: lea     esi, [eax+10h]
0x775B32: mov     [esp+44h+var_30], eax
0x775B36: mov     eax, [edx+4]
0x775B39: mov     ecx, esi
0x775B3B: call    eax
0x775B3D: mov     ecx, [esp+44h+var_18]
0x775B41: mov     [eax+8], ecx
0x775B44: mov     dword ptr [eax], 0
0x775B4A: mov     edx, [esi+8]
0x775B4D: mov     [eax+4], edx
0x775B50: mov     ecx, [esi+8]
0x775B53: test    ecx, ecx
0x775B55: jz      short loc_775B5B
0x775B57: mov     [ecx], eax
0x775B59: jmp     short loc_775B5E
0x775B5B: mov     [esi+4], eax
0x775B5E: add     dword ptr [esi+0Ch], 1
0x775B62: mov     [esi+8], eax
0x775B65: mov     esi, [esp+44h+arg_0]
0x775B69: movzx   eax, word ptr [ebp+45Ah]
0x775B70: add     ebx, 1
0x775B73: cmp     ebx, eax
0x775B75: jb      short loc_775B05
0x775B77: cmp     [esp+44h+var_30], 0
0x775B7C: jnz     loc_775C03
0x775B82: push    20h ; ' '; Size
0x775B84: call    FormHeapAlloc
0x775B89: add     esp, 4
0x775B8C: test    eax, eax
0x775B8E: jz      short loc_775BA0
0x775B90: lea     ecx, [esp+44h+var_20]
0x775B94: push    ecx
0x775B95: mov     ecx, eax
0x775B97: call    sub_7759A0
0x775B9C: mov     ebx, eax
0x775B9E: jmp     short loc_775BA2
0x775BA0: xor     ebx, ebx
0x775BA2: movzx   esi, word ptr [edi+0Ah]
0x775BA6: movzx   edx, word ptr [edi+8]
0x775BAA: cmp     esi, edx
0x775BAC: jb      short loc_775BBC
0x775BAE: movzx   eax, word ptr [edi+0Eh]
0x775BB2: add     eax, esi
0x775BB4: push    eax
0x775BB5: mov     ecx, edi
0x775BB7: call    NiTArray_SetSize
0x775BBC: movzx   ecx, word ptr [edi+0Ah]
0x775BC0: cmp     esi, ecx
0x775BC2: jb      short loc_775BD6
0x775BC4: test    ebx, ebx
0x775BC6: lea     edx, [esi+1]
0x775BC9: mov     [edi+0Ah], dx
0x775BCD: jz      short loc_775BF9
0x775BCF: add     word ptr [edi+0Ch], 1
0x775BD4: jmp     short loc_775BF9
0x775BD6: test    ebx, ebx
0x775BD8: jz      short loc_775BEA
0x775BDA: mov     eax, [edi+4]
0x775BDD: cmp     dword ptr [eax+esi*4], 0
0x775BE1: jnz     short loc_775BF9
0x775BE3: add     word ptr [edi+0Ch], 1
0x775BE8: jmp     short loc_775BF9
0x775BEA: mov     ecx, [edi+4]
0x775BED: cmp     dword ptr [ecx+esi*4], 0
0x775BF1: jz      short loc_775BF9
0x775BF3: add     word ptr [edi+0Ch], 0FFFFh
0x775BF9: mov     edx, [edi+4]
0x775BFC: mov     [edx+esi*4], ebx
0x775BFF: mov     esi, [esp+44h+arg_0]
0x775C03: mov     ecx, [esp+44h+var_2C]
0x775C07: add     ecx, 1
0x775C0A: cmp     ecx, [esp+44h+var_24]
0x775C0E: mov     [esp+44h+var_2C], ecx
0x775C12: jb      loc_775AD3
0x775C18: cmp     [esp+44h+var_28], 0
0x775C1D: jnz     loc_775A96
0x775C23: mov     ebx, [esp+44h+arg_4]
0x775C27: mov     edx, [ebp+0]
0x775C2A: mov     eax, [esi]
0x775C2C: mov     eax, [eax+20h]
0x775C2F: lea     ecx, [esp+44h+var_10]
0x775C33: push    ecx
0x775C34: push    edx
0x775C35: push    esi
0x775C36: call    eax
0x775C38: push    148h; Size
0x775C3D: call    FormHeapAlloc
0x775C42: add     esp, 4
0x775C45: test    eax, eax
0x775C47: jz      short loc_775C60
0x775C49: mov     ecx, [esp+44h+arg_8]
0x775C4D: mov     edx, [esp+44h+var_4]
0x775C51: push    ecx
0x775C52: push    edx
0x775C53: push    1
0x775C55: push    ebx
0x775C56: push    esi
0x775C57: mov     ecx, eax
0x775C59: call    sub_775780
0x775C5E: jmp     short loc_775C62
0x775C60: xor     eax, eax
0x775C62: push    148h; Size
0x775C67: mov     [ebp+460h], eax
0x775C6D: call    FormHeapAlloc
0x775C72: add     esp, 4
0x775C75: test    eax, eax
0x775C77: jz      short loc_775CA0
0x775C79: mov     ecx, [esp+44h+arg_8]
0x775C7D: mov     edx, [esp+44h+var_4]
0x775C81: push    ecx
0x775C82: push    edx
0x775C83: push    2
0x775C85: push    ebx
0x775C86: push    esi
0x775C87: mov     ecx, eax
0x775C89: call    sub_775780
0x775C8E: pop     edi
0x775C8F: mov     [ebp+464h], eax
0x775C95: pop     esi
0x775C96: mov     eax, ebp
0x775C98: pop     ebp
0x775C99: pop     ebx
0x775C9A: add     esp, 34h
0x775C9D: retn    0Ch
0x775CA0: pop     edi
0x775CA1: xor     eax, eax
0x775CA3: mov     [ebp+464h], eax
0x775CA9: pop     esi
0x775CAA: mov     eax, ebp
0x775CAC: pop     ebp
0x775CAD: pop     ebx
0x775CAE: add     esp, 34h
0x775CB1: retn    0Ch
