0x6E35A0: push    0FFFFFFFFh
0x6E35A2: push    offset SEH_6E46A0
0x6E35A7: mov     eax, large fs:0
0x6E35AD: push    eax
0x6E35AE: sub     esp, 10h
0x6E35B1: push    ebx
0x6E35B2: push    ebp
0x6E35B3: push    esi
0x6E35B4: push    edi
0x6E35B5: mov     eax, ds:0B30AACh
0x6E35BA: xor     eax, esp
0x6E35BC: push    eax
0x6E35BD: lea     eax, [esp+30h+var_C]
0x6E35C1: mov     large fs:0, eax
0x6E35C7: mov     esi, ecx
0x6E35C9: lea     eax, [esp+30h+var_10]
0x6E35CD: xor     ebx, ebx
0x6E35CF: push    eax
0x6E35D0: mov     [esp+34h+var_4], ebx
0x6E35D4: mov     [esp+34h+var_14], ebx
0x6E35D8: call    sub_700790
0x6E35DD: mov     eax, [eax]
0x6E35DF: cmp     eax, ebx
0x6E35E1: mov     edi, [esp+30h+arg_0]
0x6E35E5: mov     [edi], eax
0x6E35E7: jz      short loc_6E35F3
0x6E35E9: add     eax, 4
0x6E35EC: push    eax; lpAddend
0x6E35ED: call    dword ptr ds:0A28078h
0x6E35F3: mov     ebp, [esp+30h+var_10]
0x6E35F7: cmp     ebp, ebx
0x6E35F9: mov     [esp+30h+var_4], ebx
0x6E35FD: mov     [esp+30h+var_14], 1
0x6E3605: jz      short loc_6E3624
0x6E3607: lea     ecx, [ebp+4]
0x6E360A: push    ecx; lpAddend
0x6E360B: call    dword ptr ds:0A2807Ch
0x6E3611: test    eax, eax
0x6E3613: jnz     short loc_6E3624
0x6E3615: cmp     ebp, ebx
0x6E3617: jz      short loc_6E3624
0x6E3619: mov     edx, [ebp+0]
0x6E361C: mov     eax, [edx]
0x6E361E: push    1
0x6E3620: mov     ecx, ebp
0x6E3622: call    eax
0x6E3624: mov     eax, [esi+8]
0x6E3627: cmp     eax, ebx
0x6E3629: jbe     short loc_6E3676
0x6E362B: fld     [esp+30h+arg_8]
0x6E362F: lea     ecx, [esp+30h+var_1C]
0x6E3633: push    ecx; int
0x6E3634: mov     ecx, [esi+10h]
0x6E3637: lea     edx, [esp+34h+var_18]
0x6E363B: push    edx; int
0x6E363C: sub     esp, 8
0x6E363F: fstp    [esp+40h+var_3C]; float
0x6E3643: mov     [esp+40h+var_18], ebx
0x6E3647: fld     [esp+40h+arg_4]
0x6E364B: mov     [esp+40h+var_1C], ebx
0x6E364F: fstp    [esp+40h+var_40]; float
0x6E3652: push    eax; int
0x6E3653: mov     eax, [esi+0Ch]
0x6E3656: push    eax; int
0x6E3657: push    ecx; int
0x6E3658: push    ebx; int
0x6E3659: call    sub_6D3210
0x6E365E: mov     edx, [esi+10h]
0x6E3661: mov     eax, [esp+50h+var_1C]
0x6E3665: mov     ecx, [edi]
0x6E3667: add     esp, 20h
0x6E366A: push    edx
0x6E366B: mov     edx, [esp+34h+var_18]
0x6E366F: push    eax
0x6E3670: push    edx
0x6E3671: call    sub_6E3540
0x6E3676: mov     eax, edi
0x6E3678: mov     ecx, dword ptr [esp+30h+var_C]
0x6E367C: mov     large fs:0, ecx
0x6E3683: pop     ecx
0x6E3684: pop     edi
0x6E3685: pop     esi
0x6E3686: pop     ebp
0x6E3687: pop     ebx
0x6E3688: add     esp, 1Ch
0x6E368B: retn    0Ch
