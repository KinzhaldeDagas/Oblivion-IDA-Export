0x8D3690: sub     esp, 30h
0x8D3693: push    edi
0x8D3694: mov     edi, ecx
0x8D3696: mov     eax, [edi+18h]
0x8D3699: test    eax, eax
0x8D369B: jz      loc_8D383E
0x8D36A1: push    ebx
0x8D36A2: push    ebp
0x8D36A3: push    esi
0x8D36A4: lea     ecx, [esp+40h+var_24]
0x8D36A8: call    sub_8B0E10
0x8D36AD: mov     ebx, [esp+40h+arg_4]
0x8D36B1: push    ebx
0x8D36B2: lea     ecx, [esp+44h+var_24]
0x8D36B6: call    sub_8B15C0
0x8D36BB: xor     esi, esi
0x8D36BD: test    ebx, ebx
0x8D36BF: jle     short loc_8D36DA
0x8D36C1: mov     ebp, [esp+40h+arg_0]
0x8D36C5: mov     eax, [ebp+esi*4+0]
0x8D36C9: push    0
0x8D36CB: push    eax
0x8D36CC: lea     ecx, [esp+48h+var_24]
0x8D36D0: call    sub_8B0E80
0x8D36D5: inc     esi
0x8D36D6: cmp     esi, ebx
0x8D36D8: jl      short loc_8D36C5
0x8D36DA: mov     eax, [edi+18h]
0x8D36DD: xor     ebx, ebx
0x8D36DF: cmp     eax, ebx
0x8D36E1: mov     [esp+40h+var_30], ebx
0x8D36E5: jle     loc_8D3832
0x8D36EB: mov     [esp+40h+var_2C], ebx
0x8D36EF: nop
0x8D36F0: mov     esi, [edi+14h]
0x8D36F3: mov     ecx, [esi+ebx+4]
0x8D36F7: add     esi, ebx
0x8D36F9: push    ecx
0x8D36FA: lea     ecx, [esp+44h+var_24]
0x8D36FE: call    sub_8B0F00
0x8D3703: mov     edx, [esi+8]
0x8D3706: push    edx
0x8D3707: lea     ecx, [esp+44h+var_24]
0x8D370B: mov     ebp, eax
0x8D370D: call    sub_8B0F00
0x8D3712: mov     [esp+40h+var_28], eax
0x8D3716: push    ebp
0x8D3717: lea     eax, [esp+44h+arg_4]
0x8D371B: push    eax
0x8D371C: lea     ecx, [esp+48h+var_24]
0x8D3720: call    sub_8B0D80
0x8D3725: cmp     byte ptr [eax], 0
0x8D3728: jnz     short loc_8D3746
0x8D372A: mov     ecx, [esp+40h+var_28]
0x8D372E: push    ecx
0x8D372F: lea     edx, [esp+44h+arg_0]
0x8D3733: push    edx
0x8D3734: lea     ecx, [esp+48h+var_24]
0x8D3738: call    sub_8B0D80
0x8D373D: cmp     byte ptr [eax], 0
0x8D3740: jz      loc_8D3817
0x8D3746: mov     ecx, [esi+8]
0x8D3749: mov     eax, [esi+4]
0x8D374C: mov     edx, [esi+18h]
0x8D374F: mov     [esp+40h+var_C], ecx
0x8D3753: lea     ecx, [esp+40h+var_18]
0x8D3757: mov     [esp+40h+var_18], 0FFFFh
0x8D375E: mov     [esp+40h+var_14], 0
0x8D3766: mov     [esp+40h+var_10], eax
0x8D376A: mov     [esp+40h+var_4], edx
0x8D376E: mov     edx, [eax+8]
0x8D3771: push    ecx
0x8D3772: push    edx
0x8D3773: call    sub_8DC920
0x8D3778: mov     eax, [esi+4]
0x8D377B: mov     ecx, [eax+98h]
0x8D3781: add     esp, 8
0x8D3784: test    ecx, ecx
0x8D3786: jz      short loc_8D3796
0x8D3788: lea     ecx, [esp+40h+var_18]
0x8D378C: push    ecx
0x8D378D: push    eax
0x8D378E: call    sub_8DC0A0
0x8D3793: add     esp, 8
0x8D3796: mov     esi, [esi+8]
0x8D3799: mov     eax, [esi+98h]
0x8D379F: test    eax, eax
0x8D37A1: jz      short loc_8D37B1
0x8D37A3: lea     edx, [esp+40h+var_18]
0x8D37A7: push    edx
0x8D37A8: push    esi
0x8D37A9: call    sub_8DC0A0
0x8D37AE: add     esp, 8
0x8D37B1: mov     esi, [edi+18h]
0x8D37B4: mov     eax, [edi+14h]
0x8D37B7: dec     esi
0x8D37B8: mov     ecx, esi
0x8D37BA: shl     ecx, 6
0x8D37BD: add     ecx, eax
0x8D37BF: mov     [edi+18h], esi
0x8D37C2: mov     edx, [ecx]
0x8D37C4: add     eax, ebx
0x8D37C6: mov     esi, ecx
0x8D37C8: mov     [eax], edx
0x8D37CA: lea     edx, [eax+4]
0x8D37CD: sub     esi, eax
0x8D37CF: mov     ebp, 2
0x8D37D4: mov     ebx, [esi+edx]
0x8D37D7: mov     [edx], ebx
0x8D37D9: add     edx, 4
0x8D37DC: dec     ebp
0x8D37DD: jnz     short loc_8D37D4
0x8D37DF: mov     edx, [ecx+0Ch]
0x8D37E2: mov     ebx, [esp+40h+var_2C]
0x8D37E6: mov     [eax+0Ch], edx
0x8D37E9: mov     edx, [ecx+10h]
0x8D37EC: mov     [eax+10h], edx
0x8D37EF: mov     edx, [ecx+14h]
0x8D37F2: mov     [eax+14h], edx
0x8D37F5: mov     edx, [ecx+18h]
0x8D37F8: mov     [eax+18h], edx
0x8D37FB: movaps  xmm0, xmmword ptr [ecx+20h]
0x8D37FF: movaps  xmmword ptr [eax+20h], xmm0
0x8D3803: movaps  xmm0, xmmword ptr [ecx+30h]
0x8D3807: mov     ecx, [esp+40h+var_30]
0x8D380B: dec     ecx
0x8D380C: movaps  xmmword ptr [eax+30h], xmm0
0x8D3810: mov     [esp+40h+var_30], ecx
0x8D3814: sub     ebx, 40h ; '@'
0x8D3817: mov     eax, [esp+40h+var_30]
0x8D381B: mov     ecx, [edi+18h]
0x8D381E: inc     eax
0x8D381F: add     ebx, 40h ; '@'
0x8D3822: cmp     eax, ecx
0x8D3824: mov     [esp+40h+var_30], eax
0x8D3828: mov     [esp+40h+var_2C], ebx
0x8D382C: jl      loc_8D36F0
0x8D3832: lea     ecx, [esp+40h+var_24]
0x8D3836: call    sub_8B0E60
0x8D383B: pop     esi
0x8D383C: pop     ebp
0x8D383D: pop     ebx
0x8D383E: pop     edi
0x8D383F: add     esp, 30h
0x8D3842: retn    8
