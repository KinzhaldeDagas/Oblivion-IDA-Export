0x890F70: push    0FFFFFFFFh
0x890F72: push    offset SEH_890F70
0x890F77: mov     eax, large fs:0
0x890F7D: push    eax
0x890F7E: push    ecx
0x890F7F: push    esi
0x890F80: mov     eax, ds:0B30AACh
0x890F85: xor     eax, esp
0x890F87: push    eax
0x890F88: lea     eax, [esp+18h+var_C]
0x890F8C: mov     large fs:0, eax
0x890F92: mov     esi, ecx
0x890F94: mov     [esp+18h+var_10], esi
0x890F98: mov     ecx, [esi+90h]
0x890F9E: test    ecx, ecx
0x890FA0: mov     [esp+18h+var_4], 0
0x890FA8: jz      short loc_890FD1
0x890FAA: cmp     word ptr [ecx+4], 0
0x890FAF: jz      short loc_890FC7
0x890FB1: add     word ptr [ecx+6], 0FFFFh
0x890FB6: movzx   eax, word ptr [ecx+6]
0x890FBA: test    ax, ax
0x890FBD: jnz     short loc_890FC7
0x890FBF: mov     eax, [ecx]
0x890FC1: mov     edx, [eax]
0x890FC3: push    1
0x890FC5: call    edx
0x890FC7: mov     dword ptr [esi+90h], 0
0x890FD1: mov     esi, [esi+8Ch]
0x890FD7: test    esi, esi
0x890FD9: mov     [esp+18h+var_4], 0FFFFFFFFh
0x890FE1: jz      short loc_890FFF
0x890FE3: lea     eax, [esi+4]
0x890FE6: push    eax; lpAddend
0x890FE7: call    dword ptr ds:0A2807Ch
0x890FED: test    eax, eax
0x890FEF: jnz     short loc_890FFF
0x890FF1: test    esi, esi
0x890FF3: jz      short loc_890FFF
0x890FF5: mov     edx, [esi]
0x890FF7: mov     eax, [edx]
0x890FF9: push    1
0x890FFB: mov     ecx, esi
0x890FFD: call    eax
0x890FFF: mov     ecx, dword ptr [esp+18h+var_C]
0x891003: mov     large fs:0, ecx
0x89100A: pop     ecx
0x89100B: pop     esi
0x89100C: add     esp, 10h
0x89100F: retn
