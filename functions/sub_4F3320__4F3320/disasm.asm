0x4F3320: sub     esp, 10h
0x4F3323: mov     eax, [esp+10h+arg_0]
0x4F3327: push    esi
0x4F3328: mov     esi, [eax]
0x4F332A: mov     [esp+14h+var_4], ecx
0x4F332E: mov     ecx, [esp+14h+arg_8]
0x4F3332: mov     dword ptr [ecx], 10h
0x4F3338: mov     al, [esi]
0x4F333A: test    al, al
0x4F333C: push    edi
0x4F333D: mov     edi, [esp+18h+Dst]
0x4F3341: mov     [esp+18h+var_E], 1
0x4F3346: jz      loc_4F3600
0x4F334C: mov     ecx, [esp+18h+arg_10]
0x4F3350: mov     dl, [esp+18h+arg_C]
0x4F3354: cmp     al, 21h ; '!'
0x4F3356: jge     short loc_4F3371
0x4F3358: add     esi, 1
0x4F335B: test    dl, dl
0x4F335D: jz      short loc_4F3366
0x4F335F: test    ecx, ecx
0x4F3361: jz      short loc_4F3366
0x4F3363: add     dword ptr [ecx], 1
0x4F3366: mov     al, [esi]
0x4F3368: test    al, al
0x4F336A: jnz     short loc_4F3354
0x4F336C: jmp     loc_4F3600
0x4F3371: push    ebx
0x4F3372: mov     bl, [esi]
0x4F3374: test    bl, bl
0x4F3376: mov     [esp+1Ch+arg_C], bl
0x4F337A: jz      loc_4F35FF
0x4F3380: mov     eax, esi
0x4F3382: sub     eax, offset Script_OperatorList
0x4F3387: sub     eax, 5
0x4F338A: push    ebp
0x4F338B: mov     [esp+20h+var_C], eax
0x4F338F: nop
0x4F3390: cmp     bl, 58h ; 'X'
0x4F3393: movzx   ecx, word ptr [esi+1]
0x4F3397: jnz     short loc_4F33D1
0x4F3399: cmp     cx, 1000h
0x4F339E: jl      loc_4F3434
0x4F33A4: cmp     cx, 1171h
0x4F33A9: jge     loc_4F3434
0x4F33AF: mov     dx, [esi+3]
0x4F33B3: add     dx, 5
0x4F33B7: movzx   eax, dx
0x4F33BA: movsx   ebx, ax
0x4F33BD: push    ebx; Size
0x4F33BE: push    esi; Src
0x4F33BF: push    edi; Dst
0x4F33C0: call    _memcpy
0x4F33C5: add     esp, 0Ch
0x4F33C8: add     edi, ebx
0x4F33CA: add     esi, ebx
0x4F33CC: jmp     loc_4F35FE
0x4F33D1: cmp     bl, 73h ; 's'
0x4F33D4: jz      loc_4F34C1
0x4F33DA: cmp     bl, 6Ch ; 'l'
0x4F33DD: jz      loc_4F34C1
0x4F33E3: cmp     bl, 66h ; 'f'
0x4F33E6: jz      loc_4F34C1
0x4F33EC: cmp     bl, 47h ; 'G'
0x4F33EF: jz      loc_4F34C1
0x4F33F5: cmp     bl, 5Ah ; 'Z'
0x4F33F8: jz      loc_4F34C1
0x4F33FE: cmp     bl, 72h ; 'r'
0x4F3401: jz      loc_4F34C1
0x4F3407: cmp     bl, 6Eh ; 'n'
0x4F340A: jz      loc_4F350D
0x4F3410: cmp     bl, 7Ah ; 'z'
0x4F3413: jz      loc_4F3529
0x4F3419: cmp     bl, 22h ; '"'
0x4F341C: jz      loc_4F3599
0x4F3422: cmp     bl, 20h ; ' '
0x4F3425: jz      loc_4F35FE
0x4F342B: cmp     bl, 9
0x4F342E: jz      loc_4F35FE
0x4F3434: mov     [esp+20h+var_D], 0
0x4F3439: xor     ebp, ebp
0x4F343B: mov     edx, offset byte_B0A12D
0x4F3440: mov     [esp+20h+var_8], eax
0x4F3444: jmp     short loc_4F344A
0x4F3446: mov     bl, [esp+20h+arg_C]
0x4F344A: mov     cl, [edx]
0x4F344C: test    cl, cl
0x4F344E: mov     eax, edx
0x4F3450: mov     byte ptr [esp+20h+arg_10], 1
0x4F3455: jz      short loc_4F3473
0x4F3457: mov     ebx, [esp+20h+var_8]
0x4F345B: cmp     cl, [ebx+eax]
0x4F345E: jnz     short loc_4F34A9
0x4F3460: mov     cl, [eax+1]
0x4F3463: add     eax, 1
0x4F3466: test    cl, cl
0x4F3468: mov     [esp+20h+var_D], 1
0x4F346D: jnz     short loc_4F3457
0x4F346F: mov     bl, [esp+20h+arg_C]
0x4F3473: mov     al, byte ptr [esp+20h+arg_10]
0x4F3477: test    al, al
0x4F3479: mov     ecx, [esp+20h+arg_8]
0x4F347D: mov     [ecx], ebp
0x4F347F: jnz     loc_4F35CB
0x4F3485: cmp     [esp+20h+var_D], al
0x4F3489: jz      short loc_4F3496
0x4F348B: mov     ecx, [esp+20h+var_4]
0x4F348F: push    5
0x4F3491: call    sub_4F3300
0x4F3496: mov     [edi], bl
0x4F3498: add     edi, 1
0x4F349B: add     esi, 1
0x4F349E: add     [esp+20h+var_C], 1
0x4F34A3: mov     eax, [esp+20h+var_C]
0x4F34A7: jmp     short loc_4F34F5
0x4F34A9: sub     [esp+20h+var_8], 8
0x4F34AE: add     ebp, 1
0x4F34B1: xor     al, al
0x4F34B3: add     edx, 8
0x4F34B6: cmp     ebp, 10h
0x4F34B9: jb      short loc_4F3446
0x4F34BB: mov     bl, [esp+20h+arg_C]
0x4F34BF: jmp     short loc_4F3477
0x4F34C1: mov     [edi], bl
0x4F34C3: mov     dl, [esi+1]
0x4F34C6: add     esi, 1
0x4F34C9: add     edi, 1
0x4F34CC: mov     [edi], dl
0x4F34CE: mov     cl, [esi+1]
0x4F34D1: add     esi, 1
0x4F34D4: add     eax, 1
0x4F34D7: add     edi, 1
0x4F34DA: add     eax, 1
0x4F34DD: mov     [edi], cl
0x4F34DF: add     eax, 1
0x4F34E2: add     edi, 1
0x4F34E5: add     esi, 1
0x4F34E8: cmp     bl, 72h ; 'r'
0x4F34EB: mov     [esp+20h+var_C], eax
0x4F34EF: jnz     loc_4F35FE
0x4F34F5: mov     bl, [esi]
0x4F34F7: test    bl, bl
0x4F34F9: mov     [esp+20h+var_E], 0
0x4F34FE: mov     [esp+20h+arg_C], bl
0x4F3502: jnz     loc_4F3390
0x4F3508: jmp     loc_4F35FE
0x4F350D: movzx   eax, byte ptr [esi]
0x4F3510: mov     [edi], al
0x4F3512: movzx   ecx, byte ptr [esi+1]
0x4F3516: add     esi, 1
0x4F3519: add     edi, 1
0x4F351C: mov     [edi], cl
0x4F351E: mov     dl, [esi+1]
0x4F3521: add     edi, 1
0x4F3524: add     esi, 1
0x4F3527: jmp     short loc_4F3577
0x4F3529: movzx   edx, byte ptr [esi]
0x4F352C: mov     [edi], dl
0x4F352E: movzx   eax, byte ptr [esi+1]
0x4F3532: mov     [edi+1], al
0x4F3535: add     esi, 1
0x4F3538: movzx   ecx, byte ptr [esi+1]
0x4F353C: add     edi, 1
0x4F353F: add     esi, 1
0x4F3542: mov     [edi+1], cl
0x4F3545: movzx   edx, byte ptr [esi+1]
0x4F3549: add     edi, 1
0x4F354C: add     esi, 1
0x4F354F: mov     [edi+1], dl
0x4F3552: movzx   eax, byte ptr [esi+1]
0x4F3556: add     edi, 1
0x4F3559: add     esi, 1
0x4F355C: add     edi, 1
0x4F355F: mov     [edi], al
0x4F3561: movzx   ecx, byte ptr [esi+1]
0x4F3565: add     esi, 1
0x4F3568: add     edi, 1
0x4F356B: mov     [edi], cl
0x4F356D: movzx   edx, byte ptr [esi+1]
0x4F3571: add     edi, 1
0x4F3574: add     esi, 1
0x4F3577: mov     [edi], dl
0x4F3579: movzx   eax, byte ptr [esi+1]
0x4F357D: add     esi, 1
0x4F3580: add     edi, 1
0x4F3583: mov     [edi], al
0x4F3585: movzx   ecx, byte ptr [esi+1]
0x4F3589: add     esi, 1
0x4F358C: add     edi, 1
0x4F358F: mov     [edi], cl
0x4F3591: add     edi, 1
0x4F3594: add     esi, 1
0x4F3597: jmp     short loc_4F35FE
0x4F3599: add     esi, 1
0x4F359C: mov     byte ptr [edi], 22h ; '"'
0x4F359F: mov     al, [esi]
0x4F35A1: add     edi, 1
0x4F35A4: test    al, al
0x4F35A6: jz      short loc_4F35BA
0x4F35A8: cmp     al, 22h ; '"'
0x4F35AA: jz      short loc_4F35BF
0x4F35AC: add     esi, 1
0x4F35AF: mov     [edi], al
0x4F35B1: mov     al, [esi]
0x4F35B3: add     edi, 1
0x4F35B6: test    al, al
0x4F35B8: jnz     short loc_4F35A8
0x4F35BA: cmp     byte ptr [esi], 22h ; '"'
0x4F35BD: jnz     short loc_4F35FE
0x4F35BF: mov     dl, [esi]
0x4F35C1: mov     [edi], dl
0x4F35C3: add     edi, 1
0x4F35C6: add     esi, 1
0x4F35C9: jmp     short loc_4F35FE
0x4F35CB: cmp     [esp+20h+var_E], 0
0x4F35D0: jz      short loc_4F35F8
0x4F35D2: mov     al, ds:0B0A12Dh[ebp*8]
0x4F35D9: test    al, al
0x4F35DB: lea     ebp, ds:0B0A12Dh[ebp*8]
0x4F35E2: jz      short loc_4F35FE
0x4F35E4: add     ebp, 1
0x4F35E7: mov     [edi], al
0x4F35E9: mov     al, [ebp+0]
0x4F35EC: add     edi, 1
0x4F35EF: add     esi, 1
0x4F35F2: test    al, al
0x4F35F4: jnz     short loc_4F35E4
0x4F35F6: jmp     short loc_4F35FE
0x4F35F8: mov     dword ptr [ecx], 10h
0x4F35FE: pop     ebp
0x4F35FF: pop     ebx
0x4F3600: mov     eax, [esp+18h+arg_0]
0x4F3604: mov     byte ptr [edi], 0
0x4F3607: mov     [eax], esi
0x4F3609: mov     eax, edi
0x4F360B: sub     eax, [esp+18h+Dst]
0x4F360F: pop     edi
0x4F3610: pop     esi
0x4F3611: add     esp, 10h
0x4F3614: retn    14h
