0x713F00: push    0FFFFFFFFh
0x713F02: push    offset SEH_7C77C0
0x713F07: mov     eax, large fs:0
0x713F0D: push    eax
0x713F0E: push    ebx
0x713F0F: push    esi
0x713F10: push    edi
0x713F11: mov     eax, ds:0B30AACh
0x713F16: xor     eax, esp
0x713F18: push    eax
0x713F19: lea     eax, [esp+1Ch+var_C]
0x713F1D: mov     large fs:0, eax
0x713F23: mov     edi, ecx
0x713F25: mov     esi, [esp+1Ch+a2]
0x713F29: lea     eax, [esp+1Ch+a2]
0x713F2D: push    eax
0x713F2E: lea     ebx, [edi+244h]
0x713F34: push    esi
0x713F35: mov     ecx, ebx
0x713F37: call    NiTMap_GetAt
0x713F3C: test    al, al
0x713F3E: jz      short loc_713F57
0x713F40: xor     al, al
0x713F42: mov     ecx, [esp+1Ch+var_C]
0x713F46: mov     large fs:0, ecx
0x713F4D: pop     ecx
0x713F4E: pop     edi
0x713F4F: pop     esi
0x713F50: pop     ebx
0x713F51: add     esp, 0Ch
0x713F54: retn    4
0x713F57: mov     eax, [edi+1F8h]
0x713F5D: push    eax; a3
0x713F5E: push    esi; a2
0x713F5F: mov     ecx, ebx; this
0x713F61: call    NiTMap_SetAt
0x713F66: test    esi, esi
0x713F68: mov     [esp+1Ch+a2], esi
0x713F6C: jz      short loc_713F78
0x713F6E: lea     ecx, [esi+4]
0x713F71: push    ecx; lpAddend
0x713F72: call    dword ptr ds:0A28078h
0x713F78: mov     ebx, [edi+1F8h]
0x713F7E: add     edi, 1ECh
0x713F84: cmp     ebx, [edi+8]
0x713F87: mov     [esp+1Ch+var_4], 0
0x713F8F: jb      short loc_713F9E
0x713F91: mov     edx, [edi+14h]
0x713F94: add     edx, ebx
0x713F96: push    edx
0x713F97: mov     ecx, edi
0x713F99: call    sub_8BCA30
0x713F9E: lea     eax, [esp+1Ch+a2]
0x713FA2: push    eax
0x713FA3: push    ebx
0x713FA4: mov     ecx, edi
0x713FA6: call    sub_8BCD40
0x713FAB: test    esi, esi
0x713FAD: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x713FB5: jz      short loc_713FCF
0x713FB7: lea     ecx, [esi+4]
0x713FBA: push    ecx; lpAddend
0x713FBB: call    dword ptr ds:0A2807Ch
0x713FC1: test    eax, eax
0x713FC3: jnz     short loc_713FCF
0x713FC5: mov     edx, [esi]
0x713FC7: mov     eax, [edx]
0x713FC9: push    1
0x713FCB: mov     ecx, esi
0x713FCD: call    eax
0x713FCF: mov     al, 1
0x713FD1: mov     ecx, [esp+1Ch+var_C]
0x713FD5: mov     large fs:0, ecx
0x713FDC: pop     ecx
0x713FDD: pop     edi
0x713FDE: pop     esi
0x713FDF: pop     ebx
0x713FE0: add     esp, 0Ch
0x713FE3: retn    4
