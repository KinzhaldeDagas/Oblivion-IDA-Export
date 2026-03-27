0x8E4BC0: sub     esp, 430h
0x8E4BC6: mov     edx, ecx
0x8E4BC8: lea     eax, [esp+430h+var_200]
0x8E4BCF: mov     [esp+430h+var_20C], eax
0x8E4BD6: xor     eax, eax
0x8E4BD8: mov     ecx, 80000100h
0x8E4BDD: push    esi
0x8E4BDE: mov     [esp+434h+var_204], ecx
0x8E4BE5: lea     esi, [esp+434h+var_40C]
0x8E4BE9: mov     [esp+434h+var_410], ecx
0x8E4BED: mov     ecx, [edx+50h]
0x8E4BF0: mov     [esp+434h+var_208], eax
0x8E4BF7: mov     [esp+434h+var_414], eax
0x8E4BFB: mov     eax, [edx+4Ch]
0x8E4BFE: mov     [esp+434h+var_418], esi
0x8E4C02: lea     ecx, [eax+ecx*4-4]
0x8E4C06: lea     esi, [eax+4]
0x8E4C09: cmp     esi, ecx
0x8E4C0B: push    edi
0x8E4C0C: mov     [esp+438h+var_42C], edx
0x8E4C10: mov     [esp+438h+var_420], ecx
0x8E4C14: mov     [esp+438h+var_428], esi
0x8E4C18: jnb     loc_8E4FB8
0x8E4C1E: push    ebx
0x8E4C1F: mov     ebx, [esp+43Ch+arg_4]
0x8E4C26: push    ebp
0x8E4C27: jmp     short loc_8E4C30
0x8E4C29: mov     edx, [esp+440h+var_42C]
0x8E4C2D: lea     ecx, [ecx+0]
0x8E4C30: movzx   edi, word ptr [esi+2]
0x8E4C34: mov     ebp, [esp+440h+arg_0]
0x8E4C3B: mov     ecx, edi
0x8E4C3D: and     ecx, 1Fh
0x8E4C40: mov     eax, 1
0x8E4C45: shl     eax, cl
0x8E4C47: mov     ecx, edi
0x8E4C49: sar     ecx, 5
0x8E4C4C: mov     [esp+440h+var_424], edi
0x8E4C50: and     eax, [ebp+ecx*4+0]
0x8E4C54: test    byte ptr [esi], 1
0x8E4C57: mov     [esp+440h+var_41C], eax
0x8E4C5B: jz      short loc_8E4CA3
0x8E4C5D: test    eax, eax
0x8E4C5F: lea     eax, [esp+440h+var_20C]
0x8E4C66: jnz     short loc_8E4C6C
0x8E4C68: lea     eax, [esp+440h+var_418]
0x8E4C6C: mov     esi, [eax+4]
0x8E4C6F: xor     ecx, ecx
0x8E4C71: test    esi, esi
0x8E4C73: jle     short loc_8E4C87
0x8E4C75: mov     edx, [eax]
0x8E4C77: cmp     [edx], di
0x8E4C7A: jz      short loc_8E4C9F
0x8E4C7C: mov     ebp, [eax+4]
0x8E4C7F: inc     ecx
0x8E4C80: add     edx, 2
0x8E4C83: cmp     ecx, ebp
0x8E4C85: jl      short loc_8E4C77
0x8E4C87: or      edx, 0FFFFFFFFh
0x8E4C8A: lea     ecx, [esi-1]
0x8E4C8D: mov     [eax+4], ecx
0x8E4C90: mov     eax, [eax]
0x8E4C92: mov     cx, [eax+ecx*2]
0x8E4C96: mov     [eax+edx*2], cx
0x8E4C9A: jmp     loc_8E4F9F
0x8E4C9F: mov     edx, ecx
0x8E4CA1: jmp     short loc_8E4C8A
0x8E4CA3: mov     esi, [edx+40h]
0x8E4CA6: mov     ecx, [esp+440h+var_208]
0x8E4CAD: mov     ebp, edi
0x8E4CAF: shl     ebp, 4
0x8E4CB2: add     ebp, esi
0x8E4CB4: test    ecx, ecx
0x8E4CB6: mov     [esp+440h+var_430], 0
0x8E4CBE: jle     loc_8E4DEC
0x8E4CC4: jmp     short loc_8E4CD0
0x8E4CC6: align 10h
0x8E4CD0: mov     edx, [esp+440h+var_42C]
0x8E4CD4: mov     eax, [edx+40h]
0x8E4CD7: mov     edx, [esp+440h+var_20C]
0x8E4CDE: mov     esi, [esp+440h+var_430]
0x8E4CE2: movzx   esi, word ptr [edx+esi*2]
0x8E4CE6: mov     edi, [ebp+0]
0x8E4CE9: shl     esi, 4
0x8E4CEC: mov     edx, [esi+eax+4]
0x8E4CF0: add     esi, eax
0x8E4CF2: sub     edx, edi
0x8E4CF4: mov     edi, [ebp+4]
0x8E4CF7: sub     edi, [esi]
0x8E4CF9: mov     ecx, ebp
0x8E4CFB: or      edx, edi
0x8E4CFD: test    edx, 80008000h
0x8E4D03: jnz     loc_8E4DCC
0x8E4D09: test    byte ptr [ebp+0Ch], 1
0x8E4D0D: jnz     short loc_8E4D4F
0x8E4D0F: test    byte ptr [esi+0Ch], 1
0x8E4D13: jnz     short loc_8E4D4B
0x8E4D15: mov     eax, [ebx+8]
0x8E4D18: mov     ecx, [ebx+4]
0x8E4D1B: and     eax, 3FFFFFFFh
0x8E4D20: cmp     ecx, eax
0x8E4D22: jnz     short loc_8E4D2F
0x8E4D24: push    8
0x8E4D26: push    ebx
0x8E4D27: call    sub_8A6EE0
0x8E4D2C: add     esp, 8
0x8E4D2F: mov     eax, [ebx+4]
0x8E4D32: mov     ecx, [ebx]
0x8E4D34: lea     ecx, [ecx+eax*8]
0x8E4D37: inc     eax
0x8E4D38: mov     [ebx+4], eax
0x8E4D3B: mov     edx, [esi+0Ch]
0x8E4D3E: mov     [ecx], edx
0x8E4D40: mov     eax, [ebp+0Ch]
0x8E4D43: mov     [ecx+4], eax
0x8E4D46: jmp     loc_8E4DCC
0x8E4D4B: mov     ecx, esi
0x8E4D4D: mov     esi, ebp
0x8E4D4F: sub     esi, eax
0x8E4D51: mov     eax, [ecx+0Ch]
0x8E4D54: mov     ecx, [esp+440h+var_42C]
0x8E4D58: mov     edx, [ecx+78h]
0x8E4D5B: mov     cl, [esp+440h+arg_8]
0x8E4D62: and     eax, 0FFFFFFFEh
0x8E4D65: sar     esi, 4
0x8E4D68: add     eax, edx
0x8E4D6A: test    cl, cl
0x8E4D6C: jz      short loc_8E4D9A
0x8E4D6E: mov     edx, [eax+0Ch]
0x8E4D71: lea     edi, [eax+4]
0x8E4D74: mov     eax, [edi+4]
0x8E4D77: and     edx, 3FFFFFFFh
0x8E4D7D: cmp     eax, edx
0x8E4D7F: jnz     short loc_8E4D8C
0x8E4D81: push    2
0x8E4D83: push    edi
0x8E4D84: call    sub_8A6EE0
0x8E4D89: add     esp, 8
0x8E4D8C: mov     eax, [edi+4]
0x8E4D8F: mov     ecx, [edi]
0x8E4D91: mov     [ecx+eax*2], si
0x8E4D95: inc     dword ptr [edi+4]
0x8E4D98: jmp     short loc_8E4DCC
0x8E4D9A: mov     edi, [eax+8]
0x8E4D9D: xor     ecx, ecx
0x8E4D9F: test    edi, edi
0x8E4DA1: jle     short loc_8E4DB7
0x8E4DA3: mov     edx, [eax+4]
0x8E4DA6: cmp     [edx], si
0x8E4DA9: jz      loc_8E4E88
0x8E4DAF: inc     ecx
0x8E4DB0: add     edx, 2
0x8E4DB3: cmp     ecx, edi
0x8E4DB5: jl      short loc_8E4DA6
0x8E4DB7: or      edx, 0FFFFFFFFh
0x8E4DBA: mov     ecx, [eax+8]
0x8E4DBD: dec     ecx
0x8E4DBE: mov     [eax+8], ecx
0x8E4DC1: mov     eax, [eax+4]
0x8E4DC4: mov     cx, [eax+ecx*2]
0x8E4DC8: mov     [eax+edx*2], cx
0x8E4DCC: mov     eax, [esp+440h+var_430]
0x8E4DD0: mov     ecx, [esp+440h+var_208]
0x8E4DD7: inc     eax
0x8E4DD8: cmp     eax, ecx
0x8E4DDA: mov     [esp+440h+var_430], eax
0x8E4DDE: jl      loc_8E4CD0
0x8E4DE4: mov     eax, [esp+440h+var_41C]
0x8E4DE8: mov     edi, [esp+440h+var_424]
0x8E4DEC: test    eax, eax
0x8E4DEE: jz      loc_8E4F6F
0x8E4DF4: mov     eax, [esp+440h+var_414]
0x8E4DF8: test    eax, eax
0x8E4DFA: mov     [esp+440h+var_430], 0
0x8E4E02: jle     loc_8E4F2B
0x8E4E08: jmp     short loc_8E4E10
0x8E4E0A: align 10h
0x8E4E10: mov     edx, [esp+440h+var_42C]
0x8E4E14: mov     eax, [edx+40h]
0x8E4E17: mov     edx, [esp+440h+var_418]
0x8E4E1B: mov     esi, [esp+440h+var_430]
0x8E4E1F: movzx   esi, word ptr [edx+esi*2]
0x8E4E23: mov     edi, [ebp+0]
0x8E4E26: shl     esi, 4
0x8E4E29: mov     edx, [esi+eax+4]
0x8E4E2D: add     esi, eax
0x8E4E2F: sub     edx, edi
0x8E4E31: mov     edi, [ebp+4]
0x8E4E34: sub     edi, [esi]
0x8E4E36: mov     ecx, ebp
0x8E4E38: or      edx, edi
0x8E4E3A: test    edx, 80008000h
0x8E4E40: jnz     loc_8E4F12
0x8E4E46: test    byte ptr [ebp+0Ch], 1
0x8E4E4A: jnz     short loc_8E4E93
0x8E4E4C: test    byte ptr [esi+0Ch], 1
0x8E4E50: jnz     short loc_8E4E8F
0x8E4E52: mov     eax, [ebx+8]
0x8E4E55: mov     ecx, [ebx+4]
0x8E4E58: and     eax, 3FFFFFFFh
0x8E4E5D: cmp     ecx, eax
0x8E4E5F: jnz     short loc_8E4E6C
0x8E4E61: push    8
0x8E4E63: push    ebx
0x8E4E64: call    sub_8A6EE0
0x8E4E69: add     esp, 8
0x8E4E6C: mov     eax, [ebx+4]
0x8E4E6F: mov     ecx, [ebx]
0x8E4E71: lea     ecx, [ecx+eax*8]
0x8E4E74: inc     eax
0x8E4E75: mov     [ebx+4], eax
0x8E4E78: mov     edx, [esi+0Ch]
0x8E4E7B: mov     [ecx], edx
0x8E4E7D: mov     eax, [ebp+0Ch]
0x8E4E80: mov     [ecx+4], eax
0x8E4E83: jmp     loc_8E4F12
0x8E4E88: mov     edx, ecx
0x8E4E8A: jmp     loc_8E4DBA
0x8E4E8F: mov     ecx, esi
0x8E4E91: mov     esi, ebp
0x8E4E93: sub     esi, eax
0x8E4E95: mov     eax, [ecx+0Ch]
0x8E4E98: mov     ecx, [esp+440h+var_42C]
0x8E4E9C: mov     edx, [ecx+78h]
0x8E4E9F: mov     cl, [esp+440h+arg_8]
0x8E4EA6: and     eax, 0FFFFFFFEh
0x8E4EA9: sar     esi, 4
0x8E4EAC: add     eax, edx
0x8E4EAE: test    cl, cl
0x8E4EB0: jz      short loc_8E4EDE
0x8E4EB2: mov     edx, [eax+0Ch]
0x8E4EB5: lea     edi, [eax+4]
0x8E4EB8: mov     eax, [edi+4]
0x8E4EBB: and     edx, 3FFFFFFFh
0x8E4EC1: cmp     eax, edx
0x8E4EC3: jnz     short loc_8E4ED0
0x8E4EC5: push    2
0x8E4EC7: push    edi
0x8E4EC8: call    sub_8A6EE0
0x8E4ECD: add     esp, 8
0x8E4ED0: mov     eax, [edi+4]
0x8E4ED3: mov     ecx, [edi]
0x8E4ED5: mov     [ecx+eax*2], si
0x8E4ED9: inc     dword ptr [edi+4]
0x8E4EDC: jmp     short loc_8E4F12
0x8E4EDE: mov     edi, [eax+8]
0x8E4EE1: xor     ecx, ecx
0x8E4EE3: test    edi, edi
0x8E4EE5: jle     short loc_8E4EFD
0x8E4EE7: mov     edx, [eax+4]
0x8E4EEA: lea     ebx, [ebx+0]
0x8E4EF0: cmp     [edx], si
0x8E4EF3: jz      short loc_8E4F00
0x8E4EF5: inc     ecx
0x8E4EF6: add     edx, 2
0x8E4EF9: cmp     ecx, edi
0x8E4EFB: jl      short loc_8E4EF0
0x8E4EFD: or      ecx, 0FFFFFFFFh
0x8E4F00: mov     edx, [eax+8]
0x8E4F03: dec     edx
0x8E4F04: mov     [eax+8], edx
0x8E4F07: mov     eax, [eax+4]
0x8E4F0A: mov     dx, [eax+edx*2]
0x8E4F0E: mov     [eax+ecx*2], dx
0x8E4F12: mov     eax, [esp+440h+var_430]
0x8E4F16: mov     ecx, [esp+440h+var_414]
0x8E4F1A: inc     eax
0x8E4F1B: cmp     eax, ecx
0x8E4F1D: mov     [esp+440h+var_430], eax
0x8E4F21: jl      loc_8E4E10
0x8E4F27: mov     edi, [esp+440h+var_424]
0x8E4F2B: mov     eax, [esp+440h+var_204]
0x8E4F32: mov     ecx, [esp+440h+var_208]
0x8E4F39: and     eax, 3FFFFFFFh
0x8E4F3E: cmp     ecx, eax
0x8E4F40: jnz     short loc_8E4F54
0x8E4F42: lea     eax, [esp+440h+var_20C]
0x8E4F49: push    2
0x8E4F4B: push    eax
0x8E4F4C: call    sub_8A6EE0
0x8E4F51: add     esp, 8
0x8E4F54: mov     edx, [esp+440h+var_208]
0x8E4F5B: mov     ecx, [esp+440h+var_20C]
0x8E4F62: mov     [ecx+edx*2], di
0x8E4F66: inc     [esp+440h+var_208]
0x8E4F6D: jmp     short loc_8E4F9F
0x8E4F6F: mov     eax, [esp+440h+var_410]
0x8E4F73: mov     ecx, [esp+440h+var_414]
0x8E4F77: and     eax, 3FFFFFFFh
0x8E4F7C: cmp     ecx, eax
0x8E4F7E: jnz     short loc_8E4F8F
0x8E4F80: lea     eax, [esp+440h+var_418]
0x8E4F84: push    2
0x8E4F86: push    eax
0x8E4F87: call    sub_8A6EE0
0x8E4F8C: add     esp, 8
0x8E4F8F: mov     edx, [esp+440h+var_414]
0x8E4F93: mov     ecx, [esp+440h+var_418]
0x8E4F97: mov     [ecx+edx*2], di
0x8E4F9B: inc     [esp+440h+var_414]
0x8E4F9F: mov     esi, [esp+440h+var_428]
0x8E4FA3: mov     eax, [esp+440h+var_420]
0x8E4FA7: add     esi, 4
0x8E4FAA: cmp     esi, eax
0x8E4FAC: mov     [esp+440h+var_428], esi
0x8E4FB0: jb      loc_8E4C29
0x8E4FB6: pop     ebp
0x8E4FB7: pop     ebx
0x8E4FB8: mov     eax, [esp+438h+var_410]
0x8E4FBC: test    eax, eax
0x8E4FBE: mov     esi, ds:0BA9DE4h
0x8E4FC4: mov     edi, large fs:2Ch
0x8E4FCB: js      short loc_8E4FEA
0x8E4FCD: mov     ecx, [edi+esi*4]
0x8E4FD0: mov     ecx, [ecx+19Ch]
0x8E4FD6: and     eax, 3FFFFFFFh
0x8E4FDB: push    14h
0x8E4FDD: shl     eax, 1
0x8E4FDF: push    eax
0x8E4FE0: mov     eax, [esp+440h+var_418]
0x8E4FE4: push    eax
0x8E4FE5: call    sub_8A75D0
0x8E4FEA: mov     eax, [esp+438h+var_204]
0x8E4FF1: test    eax, eax
0x8E4FF3: js      short loc_8E5015
0x8E4FF5: mov     edx, [esp+438h+var_20C]
0x8E4FFC: and     eax, 3FFFFFFFh
0x8E5001: push    14h
0x8E5003: shl     eax, 1
0x8E5005: push    eax
0x8E5006: mov     eax, [edi+esi*4]
0x8E5009: mov     ecx, [eax+19Ch]
0x8E500F: push    edx
0x8E5010: call    sub_8A75D0
0x8E5015: pop     edi
0x8E5016: pop     esi
0x8E5017: add     esp, 430h
0x8E501D: retn    0Ch
