0x4A0E50: push    0FFFFFFFFh
0x4A0E52: push    offset SEH_7D5F80
0x4A0E57: mov     eax, large fs:0
0x4A0E5D: push    eax
0x4A0E5E: sub     esp, 8
0x4A0E61: push    ebx
0x4A0E62: push    ebp
0x4A0E63: push    esi
0x4A0E64: push    edi
0x4A0E65: mov     eax, ds:0B30AACh
0x4A0E6A: xor     eax, esp
0x4A0E6C: push    eax
0x4A0E6D: lea     eax, [esp+28h+var_C]
0x4A0E71: mov     large fs:0, eax
0x4A0E77: xor     ebx, ebx
0x4A0E79: mov     [esp+28h+var_14], ebx
0x4A0E7D: mov     eax, [ecx+4]
0x4A0E80: test    eax, eax
0x4A0E82: mov     ebp, [esp+28h+arg_4]
0x4A0E86: jz      short loc_4A0EA0
0x4A0E88: mov     edi, [ebp+0]
0x4A0E8B: jmp     short loc_4A0E90
0x4A0E8D: align 10h
0x4A0E90: cmp     edi, [eax+8]
0x4A0E93: lea     edx, [eax+8]
0x4A0E96: mov     esi, eax
0x4A0E98: mov     eax, [eax]
0x4A0E9A: jz      short loc_4A0EC0
0x4A0E9C: test    eax, eax
0x4A0E9E: jnz     short loc_4A0E90
0x4A0EA0: xor     eax, eax
0x4A0EA2: test    eax, eax
0x4A0EA4: mov     [esp+28h+arg_4], eax
0x4A0EA8: jz      short loc_4A0EC4
0x4A0EAA: lea     eax, [esp+28h+arg_4]
0x4A0EAE: push    eax
0x4A0EAF: lea     edx, [esp+2Ch+var_10]
0x4A0EB3: push    edx
0x4A0EB4: call    sub_4A0630
0x4A0EB9: mov     ebx, 1
0x4A0EBE: jmp     short loc_4A0EC6
0x4A0EC0: mov     eax, esi
0x4A0EC2: jmp     short loc_4A0EA2
0x4A0EC4: mov     eax, ebp
0x4A0EC6: mov     eax, [eax]
0x4A0EC8: test    eax, eax
0x4A0ECA: mov     edi, [esp+28h+arg_0]
0x4A0ECE: mov     [edi], eax
0x4A0ED0: jz      short loc_4A0EDC
0x4A0ED2: add     eax, 4
0x4A0ED5: push    eax; lpAddend
0x4A0ED6: call    dword ptr ds:0A28078h
0x4A0EDC: or      ebx, 2
0x4A0EDF: test    bl, 1
0x4A0EE2: mov     [esp+28h+var_4], 0
0x4A0EEA: jz      short loc_4A0F17
0x4A0EEC: mov     esi, [esp+28h+var_10]
0x4A0EF0: and     ebx, 0FFFFFFFEh
0x4A0EF3: test    esi, esi
0x4A0EF5: mov     [esp+28h+var_14], ebx
0x4A0EF9: jz      short loc_4A0F17
0x4A0EFB: lea     eax, [esi+4]
0x4A0EFE: push    eax; lpAddend
0x4A0EFF: call    dword ptr ds:0A2807Ch
0x4A0F05: test    eax, eax
0x4A0F07: jnz     short loc_4A0F17
0x4A0F09: test    esi, esi
0x4A0F0B: jz      short loc_4A0F17
0x4A0F0D: mov     edx, [esi]
0x4A0F0F: mov     eax, [edx]
0x4A0F11: push    1
0x4A0F13: mov     ecx, esi
0x4A0F15: call    eax
0x4A0F17: mov     eax, edi
0x4A0F19: mov     ecx, dword ptr [esp+28h+var_C]
0x4A0F1D: mov     large fs:0, ecx
0x4A0F24: pop     ecx
0x4A0F25: pop     edi
0x4A0F26: pop     esi
0x4A0F27: pop     ebp
0x4A0F28: pop     ebx
0x4A0F29: add     esp, 14h
0x4A0F2C: retn    8
