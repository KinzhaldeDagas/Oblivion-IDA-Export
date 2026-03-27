0x6B3560: sub     esp, 1Ch
0x6B3563: push    ebx
0x6B3564: push    ebp
0x6B3565: push    esi
0x6B3566: mov     esi, [esp+28h+arg_0]
0x6B356A: lea     esi, [esi+esi*8]
0x6B356D: add     esi, esi
0x6B356F: push    edi
0x6B3570: mov     edi, ecx
0x6B3572: mov     ecx, [edi]
0x6B3574: mov     eax, [ecx+4]
0x6B3577: mov     edx, [edi+4128h]
0x6B357D: add     esi, esi
0x6B357F: add     esi, esi
0x6B3581: add     edx, [eax+esi+2Ch]
0x6B3585: add     eax, esi
0x6B3587: cmp     dword ptr [eax+3Ch], 0
0x6B358B: mov     [esp+2Ch+arg_0], edx
0x6B358F: jz      short loc_6B35AD
0x6B3591: mov     eax, [ecx+4]
0x6B3594: cmp     dword ptr [eax+esi+40h], 2
0x6B3599: jnz     short loc_6B35AD
0x6B359B: mov     [esp+2Ch+var_10], 24h ; '$'
0x6B35A3: mov     [esp+2Ch+var_C], 240h
0x6B35AB: jmp     short loc_6B35E5
0x6B35AD: mov     eax, [ecx+4]
0x6B35B0: mov     ebp, [eax+esi+60h]
0x6B35B4: lea     ebx, [eax+esi]
0x6B35B7: mov     eax, [edi+4138h]
0x6B35BD: mov     ebx, [ebx+64h]
0x6B35C0: imul    eax, 25h ; '%'
0x6B35C3: mov     [esp+2Ch+var_4], ebp
0x6B35C7: add     ebx, [esp+2Ch+var_4]
0x6B35CB: add     ebp, eax
0x6B35CD: mov     ebp, ds:0B17F5Ch[ebp*4]
0x6B35D4: add     ebx, eax
0x6B35D6: mov     eax, ds:0B17F60h[ebx*4]
0x6B35DD: mov     [esp+2Ch+var_10], ebp
0x6B35E1: mov     [esp+2Ch+var_C], eax
0x6B35E5: mov     ecx, [ecx+4]
0x6B35E8: xor     eax, eax
0x6B35EA: xor     ebx, ebx
0x6B35EC: test    dword ptr [ecx+esi+30h], 7FFFFFFFh
0x6B35F4: mov     [esp+2Ch+var_1C], eax
0x6B35F8: jbe     loc_6B3699
0x6B35FE: lea     ebp, [edi+1Ch]
0x6B3601: jmp     short loc_6B3607
0x6B3603: mov     eax, [esp+2Ch+var_1C]
0x6B3607: cmp     eax, [esp+2Ch+var_10]
0x6B360B: jge     short loc_6B3618
0x6B360D: mov     edx, [edi]
0x6B360F: mov     eax, [edx+4]
0x6B3612: mov     eax, [eax+esi+48h]
0x6B3616: jmp     short loc_6B3632
0x6B3618: cmp     eax, [esp+2Ch+var_C]
0x6B361C: jge     short loc_6B3629
0x6B361E: mov     ecx, [edi]
0x6B3620: mov     edx, [ecx+4]
0x6B3623: mov     eax, [edx+esi+4Ch]
0x6B3627: jmp     short loc_6B3632
0x6B3629: mov     eax, [edi]
0x6B362B: mov     ecx, [eax+4]
0x6B362E: mov     eax, [ecx+esi+50h]
0x6B3632: mov     edx, [edi+4]
0x6B3635: push    edx
0x6B3636: lea     ecx, [esp+30h+var_4]
0x6B363A: push    ecx
0x6B363B: lea     edx, [esp+34h+var_8]
0x6B363F: push    edx
0x6B3640: lea     ecx, [esp+38h+var_14]
0x6B3644: push    ecx
0x6B3645: lea     eax, [eax+eax*4]
0x6B3648: lea     edx, [esp+3Ch+var_18]
0x6B364C: lea     eax, ds:0B17A08h[eax*8]
0x6B3653: push    edx
0x6B3654: push    eax
0x6B3655: call    sub_6B32F0
0x6B365A: mov     eax, [esp+44h+var_18]
0x6B365E: mov     ecx, [esp+44h+var_14]
0x6B3662: mov     [ebp+0], eax
0x6B3665: mov     eax, [esp+44h+var_1C]
0x6B3669: add     ebp, 4
0x6B366C: mov     [ebp+0], ecx
0x6B366F: mov     edx, [edi]
0x6B3671: mov     ecx, [edx+4]
0x6B3674: mov     edx, [ecx+esi+30h]
0x6B3678: add     ebx, 1
0x6B367B: add     eax, 2
0x6B367E: add     edx, edx
0x6B3680: add     esp, 18h
0x6B3683: add     ebx, 1
0x6B3686: add     ebp, 4
0x6B3689: cmp     eax, edx
0x6B368B: mov     [esp+2Ch+var_1C], eax
0x6B368F: jb      loc_6B3603
0x6B3695: mov     edx, [esp+2Ch+arg_0]
0x6B3699: mov     eax, [edi]
0x6B369B: mov     ecx, [eax+4]
0x6B369E: mov     esi, [ecx+esi+70h]
0x6B36A2: lea     eax, [esi+esi*4]
0x6B36A5: lea     ecx, ds:0B17F08h[eax*8]
0x6B36AC: mov     eax, [edi+4]
0x6B36AF: mov     [esp+2Ch+var_C], ecx
0x6B36B3: mov     ecx, [eax+4]
0x6B36B6: cmp     ecx, edx
0x6B36B8: jge     short loc_6B3735
0x6B36BA: lea     esi, [edi+ebx*4+1Ch]
0x6B36BE: mov     edi, edi
0x6B36C0: cmp     ebx, 240h
0x6B36C6: jge     short loc_6B3733
0x6B36C8: push    eax
0x6B36C9: lea     edx, [esp+30h+var_4]
0x6B36CD: push    edx
0x6B36CE: lea     eax, [esp+34h+var_8]
0x6B36D2: push    eax
0x6B36D3: mov     eax, [esp+38h+var_C]
0x6B36D7: lea     ecx, [esp+38h+var_14]
0x6B36DB: push    ecx
0x6B36DC: lea     edx, [esp+3Ch+var_18]
0x6B36E0: push    edx
0x6B36E1: push    eax
0x6B36E2: call    sub_6B32F0
0x6B36E7: mov     eax, [esp+44h+var_8]
0x6B36EB: mov     ecx, [esp+44h+var_4]
0x6B36EF: mov     edx, [esp+44h+var_18]
0x6B36F3: mov     ebp, [esp+44h+var_14]
0x6B36F7: mov     [esi], eax
0x6B36F9: mov     [esi+4], ecx
0x6B36FC: add     esi, 4
0x6B36FF: mov     [esi+4], edx
0x6B3702: add     esi, 4
0x6B3705: add     edx, ebp
0x6B3707: add     ebx, 1
0x6B370A: add     edx, eax
0x6B370C: add     esi, 4
0x6B370F: mov     [esi], ebp
0x6B3711: mov     eax, [edi+4]
0x6B3714: add     edx, ecx
0x6B3716: add     [edi+18h], edx
0x6B3719: mov     ecx, [eax+4]
0x6B371C: mov     edx, [esp+44h+arg_0]
0x6B3720: add     ebx, 1
0x6B3723: add     ebx, 1
0x6B3726: add     esp, 18h
0x6B3729: add     ebx, 1
0x6B372C: add     esi, 4
0x6B372F: cmp     ecx, edx
0x6B3731: jl      short loc_6B36C0
0x6B3733: cmp     ecx, edx
0x6B3735: jle     short loc_6B3749
0x6B3737: sub     ecx, edx
0x6B3739: push    ecx
0x6B373A: mov     ecx, [edi+4]
0x6B373D: call    sub_6AF7B0
0x6B3742: mov     edx, [esp+2Ch+arg_0]
0x6B3746: sub     ebx, 4
0x6B3749: mov     ecx, [edi+4]
0x6B374C: mov     eax, [ecx+4]
0x6B374F: cmp     eax, edx
0x6B3751: jge     short loc_6B375B
0x6B3753: sub     edx, eax
0x6B3755: push    edx
0x6B3756: call    sub_6AF6F0
0x6B375B: mov     ecx, 240h
0x6B3760: cmp     ebx, ecx
0x6B3762: jge     short loc_6B3769
0x6B3764: mov     [edi+10h], ebx
0x6B3767: jmp     short loc_6B376C
0x6B3769: mov     [edi+10h], ecx
0x6B376C: cmp     ebx, ecx
0x6B376E: jge     short loc_6B377A
0x6B3770: sub     ecx, ebx
0x6B3772: lea     edi, [edi+ebx*4+1Ch]
0x6B3776: xor     eax, eax
0x6B3778: rep stosd
0x6B377A: pop     edi
0x6B377B: pop     esi
0x6B377C: pop     ebp
0x6B377D: pop     ebx
0x6B377E: add     esp, 1Ch
0x6B3781: retn    4
