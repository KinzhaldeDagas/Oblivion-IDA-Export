0x6D8E70: push    0FFFFFFFFh
0x6D8E72: push    offset SEH_6E46A0
0x6D8E77: mov     eax, large fs:0
0x6D8E7D: push    eax
0x6D8E7E: sub     esp, 10h
0x6D8E81: push    ebx
0x6D8E82: push    ebp
0x6D8E83: push    esi
0x6D8E84: push    edi
0x6D8E85: mov     eax, ds:0B30AACh
0x6D8E8A: xor     eax, esp
0x6D8E8C: push    eax
0x6D8E8D: lea     eax, [esp+30h+var_C]
0x6D8E91: mov     large fs:0, eax
0x6D8E97: mov     esi, ecx
0x6D8E99: lea     eax, [esp+30h+var_10]
0x6D8E9D: xor     ebx, ebx
0x6D8E9F: push    eax
0x6D8EA0: mov     [esp+34h+var_4], ebx
0x6D8EA4: mov     [esp+34h+var_14], ebx
0x6D8EA8: call    sub_700790
0x6D8EAD: mov     eax, [eax]
0x6D8EAF: cmp     eax, ebx
0x6D8EB1: mov     edi, [esp+30h+arg_0]
0x6D8EB5: mov     [edi], eax
0x6D8EB7: jz      short loc_6D8EC3
0x6D8EB9: add     eax, 4
0x6D8EBC: push    eax; lpAddend
0x6D8EBD: call    dword ptr ds:0A28078h
0x6D8EC3: mov     ebp, [esp+30h+var_10]
0x6D8EC7: cmp     ebp, ebx
0x6D8EC9: mov     [esp+30h+var_4], ebx
0x6D8ECD: mov     [esp+30h+var_14], 1
0x6D8ED5: jz      short loc_6D8EF4
0x6D8ED7: lea     ecx, [ebp+4]
0x6D8EDA: push    ecx; lpAddend
0x6D8EDB: call    dword ptr ds:0A2807Ch
0x6D8EE1: test    eax, eax
0x6D8EE3: jnz     short loc_6D8EF4
0x6D8EE5: cmp     ebp, ebx
0x6D8EE7: jz      short loc_6D8EF4
0x6D8EE9: mov     edx, [ebp+0]
0x6D8EEC: mov     eax, [edx]
0x6D8EEE: push    1
0x6D8EF0: mov     ecx, ebp
0x6D8EF2: call    eax
0x6D8EF4: mov     eax, [esi+8]
0x6D8EF7: cmp     eax, ebx
0x6D8EF9: jbe     short loc_6D8F47
0x6D8EFB: fld     [esp+30h+arg_8]
0x6D8EFF: lea     ecx, [esp+30h+var_1C]
0x6D8F03: push    ecx; int
0x6D8F04: mov     ecx, [esi+10h]
0x6D8F07: lea     edx, [esp+34h+var_18]
0x6D8F0B: push    edx; int
0x6D8F0C: sub     esp, 8
0x6D8F0F: fstp    [esp+40h+var_3C]; float
0x6D8F13: mov     [esp+40h+var_18], ebx
0x6D8F17: fld     [esp+40h+arg_4]
0x6D8F1B: mov     [esp+40h+var_1C], ebx
0x6D8F1F: fstp    [esp+40h+var_40]; float
0x6D8F22: push    eax; int
0x6D8F23: mov     eax, [esi+0Ch]
0x6D8F26: push    eax; int
0x6D8F27: push    ecx; int
0x6D8F28: push    2; int
0x6D8F2A: call    sub_6D3210
0x6D8F2F: mov     edx, [esi+10h]
0x6D8F32: mov     eax, [esp+50h+var_1C]
0x6D8F36: mov     ecx, [edi]
0x6D8F38: add     esp, 20h
0x6D8F3B: push    edx
0x6D8F3C: mov     edx, [esp+34h+var_18]
0x6D8F40: push    eax
0x6D8F41: push    edx
0x6D8F42: call    sub_6D8E10
0x6D8F47: mov     eax, edi
0x6D8F49: mov     ecx, dword ptr [esp+30h+var_C]
0x6D8F4D: mov     large fs:0, ecx
0x6D8F54: pop     ecx
0x6D8F55: pop     edi
0x6D8F56: pop     esi
0x6D8F57: pop     ebp
0x6D8F58: pop     ebx
0x6D8F59: add     esp, 1Ch
0x6D8F5C: retn    0Ch
