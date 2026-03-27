0x6F3720: push    ebp
0x6F3721: mov     ebp, esp
0x6F3723: push    0FFFFFFFFh
0x6F3725: push    offset SEH_6F3720
0x6F372A: mov     eax, large fs:0
0x6F3730: push    eax
0x6F3731: sub     esp, 0Ch
0x6F3734: push    ebx
0x6F3735: push    esi
0x6F3736: push    edi
0x6F3737: mov     eax, ds:0B30AACh
0x6F373C: xor     eax, ebp
0x6F373E: push    eax
0x6F373F: lea     eax, [ebp+var_C]
0x6F3742: mov     large fs:0, eax
0x6F3748: mov     [ebp+var_10], esp
0x6F374B: mov     esi, [ebp+arg_0]
0x6F374E: mov     edi, [ebp+arg_4]
0x6F3751: xor     ebx, ebx
0x6F3753: mov     [ebp+var_14], esi
0x6F3756: mov     [ebp+var_4], ebx
0x6F3759: lea     esp, [esp+0]
0x6F3760: cmp     edi, ebx
0x6F3762: jbe     short loc_6F37B0
0x6F3764: mov     [ebp+arg_4], esi
0x6F3767: mov     [ebp+var_18], esi
0x6F376A: cmp     esi, ebx
0x6F376C: mov     byte ptr [ebp+var_4], 1
0x6F3770: jz      short loc_6F377D
0x6F3772: mov     eax, [ebp+arg_8]
0x6F3775: push    eax
0x6F3776: mov     ecx, esi
0x6F3778: call    sub_6F2DB0
0x6F377D: sub     edi, 1
0x6F3780: add     esi, 30h ; '0'
0x6F3783: mov     byte ptr [ebp+var_4], bl
0x6F3786: mov     [ebp+arg_0], esi
0x6F3789: jmp     short loc_6F3760
0x6F378B: mov     esi, [ebp+var_14]
0x6F378E: mov     edi, [ebp+arg_0]
0x6F3791: cmp     esi, edi
0x6F3793: jz      short loc_6F37A7
0x6F3795: mov     ebx, [ebp+arg_C]
0x6F3798: push    esi
0x6F3799: mov     ecx, ebx
0x6F379B: call    sub_556F70
0x6F37A0: add     esi, 30h ; '0'
0x6F37A3: cmp     esi, edi
0x6F37A5: jnz     short loc_6F3798
0x6F37A7: xor     ebx, ebx
0x6F37A9: push    ebx
0x6F37AA: push    ebx
0x6F37AB: call    ThrowException??
0x6F37B0: mov     ecx, [ebp+var_C]
0x6F37B3: mov     large fs:0, ecx
0x6F37BA: pop     ecx
0x6F37BB: pop     edi
0x6F37BC: pop     esi
0x6F37BD: pop     ebx
0x6F37BE: mov     esp, ebp
0x6F37C0: pop     ebp
0x6F37C1: retn
