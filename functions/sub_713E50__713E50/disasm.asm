0x713E50: push    0FFFFFFFFh
0x713E52: push    offset SEH_7C77C0
0x713E57: mov     eax, large fs:0
0x713E5D: push    eax
0x713E5E: push    ebx
0x713E5F: push    esi
0x713E60: push    edi
0x713E61: mov     eax, ds:0B30AACh
0x713E66: xor     eax, esp
0x713E68: push    eax
0x713E69: lea     eax, [esp+1Ch+var_C]
0x713E6D: mov     large fs:0, eax
0x713E73: mov     esi, ecx
0x713E75: mov     ebx, [esp+1Ch+arg_0]
0x713E79: test    ebx, ebx
0x713E7B: mov     [esp+1Ch+arg_0], ebx
0x713E7F: jz      short loc_713E8B
0x713E81: lea     eax, [ebx+4]
0x713E84: push    eax; lpAddend
0x713E85: call    dword ptr ds:0A28078h
0x713E8B: mov     edi, [esi+210h]
0x713E91: add     esi, 204h
0x713E97: cmp     edi, [esi+8]
0x713E9A: mov     [esp+1Ch+var_4], 0
0x713EA2: jb      short loc_713EB1
0x713EA4: mov     ecx, [esi+14h]
0x713EA7: add     ecx, edi
0x713EA9: push    ecx
0x713EAA: mov     ecx, esi
0x713EAC: call    sub_8BCA30
0x713EB1: lea     edx, [esp+1Ch+arg_0]
0x713EB5: push    edx
0x713EB6: push    edi
0x713EB7: mov     ecx, esi
0x713EB9: call    sub_8BCD40
0x713EBE: test    ebx, ebx
0x713EC0: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x713EC8: jz      short loc_713EE2
0x713ECA: lea     eax, [ebx+4]
0x713ECD: push    eax; lpAddend
0x713ECE: call    dword ptr ds:0A2807Ch
0x713ED4: test    eax, eax
0x713ED6: jnz     short loc_713EE2
0x713ED8: mov     edx, [ebx]
0x713EDA: mov     eax, [edx]
0x713EDC: push    1
0x713EDE: mov     ecx, ebx
0x713EE0: call    eax
0x713EE2: mov     ecx, dword ptr [esp+1Ch+var_C]
0x713EE6: mov     large fs:0, ecx
0x713EED: pop     ecx
0x713EEE: pop     edi
0x713EEF: pop     esi
0x713EF0: pop     ebx
0x713EF1: add     esp, 0Ch
0x713EF4: retn    4
