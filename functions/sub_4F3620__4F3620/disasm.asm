0x4F3620: push    ebp
0x4F3621: mov     ebp, esp
0x4F3623: and     esp, 0FFFFFFF8h
0x4F3626: sub     esp, 2CCh
0x4F362C: mov     eax, ds:0B30AACh
0x4F3631: xor     eax, esp
0x4F3633: mov     [esp+2CCh+var_4], eax
0x4F363A: mov     eax, [ebp+arg_8]
0x4F363D: mov     edx, [ebp+arg_C]
0x4F3640: push    ebx
0x4F3641: mov     ebx, [ebp+arg_4]
0x4F3644: push    esi
0x4F3645: mov     esi, [ebp+Size]
0x4F3648: mov     [esp+2D4h+var_27C], eax
0x4F364C: mov     eax, [ebp+arg_10]
0x4F364F: push    edi
0x4F3650: mov     edi, ecx
0x4F3652: mov     ecx, [ebp+Src]
0x4F3655: mov     [esp+2D8h+var_280], eax
0x4F3659: xor     eax, eax
0x4F365B: test    esi, esi
0x4F365D: mov     [esp+2D8h+var_294], edi
0x4F3661: mov     [esp+2D8h+var_274], ebx
0x4F3665: mov     [esp+2D8h+var_278], edx
0x4F3669: mov     [esp+2D8h+var_28C], ecx
0x4F366D: mov     [esp+2D8h+var_290], 10h
0x4F3675: mov     [esp+2D8h+var_2C8], eax
0x4F3679: mov     [esp+2D8h+var_2C4], eax
0x4F367D: mov     dword ptr [esp+2D8h+var_2C0], eax
0x4F3681: mov     dword ptr [esp+2D8h+var_2C0+4], eax
0x4F3685: jz      loc_4F402C
0x4F368B: cmp     [edi], eax
0x4F368D: jnz     loc_4F402C
0x4F3693: push    esi; Size
0x4F3694: push    ecx; Src
0x4F3695: lea     ecx, [esp+2E0h+Dst]
0x4F369C: push    ecx; Dst
0x4F369D: mov     dword ptr [edi+708h], 0FFFFFFFFh
0x4F36A7: call    _memcpy
0x4F36AC: mov     ecx, dword ptr [ebp+arg_18]
0x4F36AF: add     esp, 0Ch
0x4F36B2: lea     eax, [esp+2D8h+var_28C]
0x4F36B6: push    eax; int
0x4F36B7: push    ecx; char
0x4F36B8: lea     edx, [esp+2E0h+Dst]
0x4F36BF: mov     [esp+2E0h+var_284], edx
0x4F36C3: lea     edx, [esp+2E0h+var_290]
0x4F36C7: push    edx; int
0x4F36C8: lea     eax, [esp+2E4h+Str]
0x4F36CF: push    eax; Dst
0x4F36D0: lea     ecx, [esp+2E8h+var_284]
0x4F36D4: push    ecx; int
0x4F36D5: mov     ecx, edi
0x4F36D7: mov     [esp+esi+2ECh+Dst], 0
0x4F36DF: call    sub_4F3320
0x4F36E4: test    eax, eax
0x4F36E6: mov     [esp+2D8h+var_288], eax
0x4F36EA: jnz     short loc_4F3764
0x4F36EC: or      esi, 0FFFFFFFFh
0x4F36EF: cmp     [edi+708h], esi
0x4F36F5: jz      loc_4F4023
0x4F36FB: lea     eax, [esp+2D8h+var_260]
0x4F36FF: push    eax
0x4F3700: lea     ecx, [edi+508h]
0x4F3706: call    sub_4F32A0
0x4F370B: cmp     [edi+708h], esi
0x4F3711: mov     ecx, [eax]
0x4F3713: mov     [esp+2D8h+var_2C8], ecx
0x4F3717: mov     edx, [eax+4]
0x4F371A: mov     [esp+2D8h+var_2C4], edx
0x4F371E: mov     ecx, [eax+8]
0x4F3721: mov     dword ptr [esp+2D8h+var_2C0], ecx
0x4F3725: mov     edx, [eax+0Ch]
0x4F3728: mov     dword ptr [esp+2D8h+var_2C0+4], edx
0x4F372C: jnz     loc_4F4023
0x4F3732: cmp     byte ptr [esp+2D8h+var_2C8], 0
0x4F3737: jnz     loc_4F4008
0x4F373D: fild    dword ptr [esp+2D8h+var_2C0]
0x4F3741: pop     edi
0x4F3742: pop     esi
0x4F3743: pop     ebx
0x4F3744: mov     ecx, [esp+2CCh+var_4]
0x4F374B: xor     ecx, esp
0x4F374D: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4F3752: mov     esp, ebp
0x4F3754: pop     ebp
0x4F3755: retn    1Ch
0x4F3758: jmp     short loc_4F3760
0x4F375A: align 10h
0x4F3760: mov     ebx, [esp+2D8h+var_274]
0x4F3764: mov     eax, [esp+2D8h+var_290]
0x4F3768: mov     esi, [esp+2D8h+var_27C]
0x4F376C: add     eax, 0FFFFFFFEh
0x4F376F: cmp     eax, 0Dh
0x4F3772: ja      loc_4F3EAF
0x4F3778: cmp     dword ptr [edi+708h], 0FFFFFFFFh
0x4F377F: jz      loc_4F4004
0x4F3785: mov     edx, [edi+708h]
0x4F378B: lea     ecx, [edi+508h]
0x4F3791: mov     eax, edx
0x4F3793: shl     eax, 4
0x4F3796: mov     esi, [eax+ecx+4]
0x4F379A: mov     ebx, [eax+ecx]
0x4F379D: add     eax, ecx
0x4F379F: mov     [esp+2D8h+var_2A4], esi
0x4F37A3: mov     esi, [eax+8]
0x4F37A6: mov     eax, [eax+0Ch]
0x4F37A9: add     edx, 0FFFFFFFFh
0x4F37AC: cmp     [esp+2D8h+var_290], 0Fh
0x4F37B1: mov     dword ptr [esp+2D8h+var_2A0], esi
0x4F37B5: mov     dword ptr [esp+2D8h+var_2A0+4], eax
0x4F37B9: mov     [ecx+200h], edx
0x4F37BF: jnz     short loc_4F380D
0x4F37C1: test    bl, bl
0x4F37C3: jnz     short loc_4F37CD
0x4F37C5: neg     esi
0x4F37C7: mov     dword ptr [esp+2D8h+var_2C0], esi
0x4F37CB: jmp     short loc_4F37D7
0x4F37CD: fld     [esp+2D8h+var_2A0]
0x4F37D1: fchs
0x4F37D3: fstp    [esp+2D8h+var_2C0]
0x4F37D7: add     dword ptr [ecx+200h], 1
0x4F37DE: mov     eax, [ecx+200h]
0x4F37E4: mov     esi, [esp+2D8h+var_2C4]
0x4F37E8: mov     edi, dword ptr [esp+2D8h+var_2C0]
0x4F37EC: mov     byte ptr [esp+2D8h+var_2C8], bl
0x4F37F0: mov     edx, [esp+2D8h+var_2C8]
0x4F37F4: mov     ebx, dword ptr [esp+2D8h+var_2C0+4]
0x4F37F8: shl     eax, 4
0x4F37FB: add     eax, ecx
0x4F37FD: mov     [eax], edx
0x4F37FF: mov     [eax+4], esi
0x4F3802: mov     [eax+8], edi
0x4F3805: mov     [eax+0Ch], ebx
0x4F3808: jmp     loc_4F3FB0
0x4F380D: cmp     dword ptr [edi+708h], 0FFFFFFFFh
0x4F3814: jz      loc_4F4004
0x4F381A: lea     ecx, [esp+2D8h+var_260]
0x4F381E: push    ecx
0x4F381F: mov     ecx, [esp+2DCh+var_294]
0x4F3823: add     ecx, 508h
0x4F3829: call    sub_4F32A0
0x4F382E: mov     edx, [eax+4]
0x4F3831: mov     edi, [eax+8]
0x4F3834: mov     ecx, [eax]
0x4F3836: mov     eax, [eax+0Ch]
0x4F3839: mov     dword ptr [esp+2D8h+var_2B0+4], eax
0x4F383D: mov     eax, [esp+2D8h+var_290]
0x4F3841: add     eax, 0FFFFFFFEh
0x4F3844: cmp     eax, 0Ch
0x4F3847: mov     [esp+2D8h+var_2B4], edx
0x4F384B: mov     dword ptr [esp+2D8h+var_2B0], edi
0x4F384F: ja      loc_4F3E51
0x4F3855: mov     edx, [esp+2D8h+var_290]
0x4F3859: lea     eax, [edx-2]
0x4F385C: jmp     ds:jpt_4F385C[eax*4]; switch 13 cases
0x4F3863: test    cl, cl; jumptable 004F385C case 0
0x4F3865: mov     byte ptr [esp+2D8h+var_2C8], 0
0x4F386A: jnz     short loc_4F3899
0x4F386C: test    bl, bl
0x4F386E: jnz     short loc_4F388D
0x4F3870: test    edi, edi
0x4F3872: jz      loc_4F3E6B
0x4F3878: test    esi, esi
0x4F387A: jz      loc_4F3E6B
0x4F3880: mov     dword ptr [esp+2D8h+var_2C0], 1
0x4F3888: jmp     loc_4F3E73
0x4F388D: test    edi, edi
0x4F388F: jz      loc_4F3E6B
0x4F3895: fldz
0x4F3897: jmp     short loc_4F38CE
0x4F3899: test    bl, bl
0x4F389B: fldz
0x4F389D: jnz     short loc_4F38C3
0x4F389F: fcomp   [esp+2D8h+var_2B0]
0x4F38A3: fnstsw  ax
0x4F38A5: test    ah, 44h
0x4F38A8: jnp     loc_4F3E6B
0x4F38AE: test    esi, esi
0x4F38B0: jz      loc_4F3E6B
0x4F38B6: mov     dword ptr [esp+2D8h+var_2C0], 1
0x4F38BE: jmp     loc_4F3E73
0x4F38C3: fcom    [esp+2D8h+var_2B0]
0x4F38C7: fnstsw  ax
0x4F38C9: test    ah, 44h
0x4F38CC: jnp     short loc_4F38EA
0x4F38CE: fcomp   [esp+2D8h+var_2A0]
0x4F38D2: fnstsw  ax
0x4F38D4: test    ah, 44h
0x4F38D7: jnp     loc_4F3E6B
0x4F38DD: mov     dword ptr [esp+2D8h+var_2C0], 1
0x4F38E5: jmp     loc_4F3E73
0x4F38EA: fstp    st
0x4F38EC: jmp     loc_4F3E6B
0x4F38F1: test    cl, cl; jumptable 004F385C case 1
0x4F38F3: mov     byte ptr [esp+2D8h+var_2C8], 0
0x4F38F8: jnz     short loc_4F391F
0x4F38FA: test    bl, bl
0x4F38FC: jnz     short loc_4F3917
0x4F38FE: test    edi, edi
0x4F3900: jnz     short loc_4F38DD
0x4F3902: test    esi, esi
0x4F3904: jz      loc_4F3E6B
0x4F390A: mov     dword ptr [esp+2D8h+var_2C0], 1
0x4F3912: jmp     loc_4F3E73
0x4F3917: test    edi, edi
0x4F3919: jnz     short loc_4F38DD
0x4F391B: fldz
0x4F391D: jmp     short loc_4F38CE
0x4F391F: test    bl, bl
0x4F3921: fldz
0x4F3923: jnz     short loc_4F3945
0x4F3925: fcomp   [esp+2D8h+var_2B0]
0x4F3929: fnstsw  ax
0x4F392B: test    ah, 44h
0x4F392E: jp      short loc_4F38DD
0x4F3930: test    esi, esi
0x4F3932: jz      loc_4F3E6B
0x4F3938: mov     dword ptr [esp+2D8h+var_2C0], 1
0x4F3940: jmp     loc_4F3E73
0x4F3945: fcom    [esp+2D8h+var_2B0]
0x4F3949: fnstsw  ax
0x4F394B: test    ah, 44h
0x4F394E: jp      short loc_4F3960
0x4F3950: fcomp   [esp+2D8h+var_2A0]
0x4F3954: fnstsw  ax
0x4F3956: test    ah, 44h
0x4F3959: jp      short loc_4F3962
0x4F395B: jmp     loc_4F3E6B
0x4F3960: fstp    st
0x4F3962: mov     dword ptr [esp+2D8h+var_2C0], 1
0x4F396A: jmp     loc_4F3E73
0x4F396F: test    cl, cl; jumptable 004F385C case 5
0x4F3971: mov     byte ptr [esp+2D8h+var_2C8], 0
0x4F3976: jnz     short loc_4F39AC
0x4F3978: test    bl, bl
0x4F397A: jnz     short loc_4F398C
0x4F397C: xor     ecx, ecx
0x4F397E: cmp     edi, esi
0x4F3980: setnle  cl
0x4F3983: mov     dword ptr [esp+2D8h+var_2C0], ecx
0x4F3987: jmp     loc_4F3E73
0x4F398C: fild    dword ptr [esp+2D8h+var_2B0]
0x4F3990: fcomp   [esp+2D8h+var_2A0]
0x4F3994: fnstsw  ax
0x4F3996: test    ah, 41h
0x4F3999: jnz     loc_4F3E6B
0x4F399F: mov     dword ptr [esp+2D8h+var_2C0], 1
0x4F39A7: jmp     loc_4F3E73
0x4F39AC: test    bl, bl
0x4F39AE: jnz     short loc_4F39D0
0x4F39B0: fild    dword ptr [esp+2D8h+var_2A0]
0x4F39B4: fcomp   [esp+2D8h+var_2B0]
0x4F39B8: fnstsw  ax
0x4F39BA: test    ah, 5
0x4F39BD: jp      loc_4F3E6B
0x4F39C3: mov     dword ptr [esp+2D8h+var_2C0], 1
0x4F39CB: jmp     loc_4F3E73
0x4F39D0: fld     [esp+2D8h+var_2A0]
0x4F39D4: fcomp   [esp+2D8h+var_2B0]
0x4F39D8: fnstsw  ax
0x4F39DA: test    ah, 5
0x4F39DD: jp      loc_4F3E6B
0x4F39E3: mov     dword ptr [esp+2D8h+var_2C0], 1
0x4F39EB: jmp     loc_4F3E73
0x4F39F0: test    cl, cl; jumptable 004F385C case 4
0x4F39F2: mov     byte ptr [esp+2D8h+var_2C8], 0
0x4F39F7: jnz     short loc_4F3A2D
0x4F39F9: test    bl, bl
0x4F39FB: jnz     short loc_4F3A0D
0x4F39FD: xor     edx, edx
0x4F39FF: cmp     edi, esi
0x4F3A01: setnl   dl
0x4F3A04: mov     dword ptr [esp+2D8h+var_2C0], edx
0x4F3A08: jmp     loc_4F3E73
0x4F3A0D: fild    dword ptr [esp+2D8h+var_2B0]
0x4F3A11: fcomp   [esp+2D8h+var_2A0]
0x4F3A15: fnstsw  ax
0x4F3A17: test    ah, 1
0x4F3A1A: jnz     loc_4F3E6B
0x4F3A20: mov     dword ptr [esp+2D8h+var_2C0], 1
0x4F3A28: jmp     loc_4F3E73
0x4F3A2D: test    bl, bl
0x4F3A2F: jnz     short loc_4F3A51
0x4F3A31: fild    dword ptr [esp+2D8h+var_2A0]
0x4F3A35: fcomp   [esp+2D8h+var_2B0]
0x4F3A39: fnstsw  ax
0x4F3A3B: test    ah, 41h
0x4F3A3E: jp      loc_4F3E6B
0x4F3A44: mov     dword ptr [esp+2D8h+var_2C0], 1
0x4F3A4C: jmp     loc_4F3E73
0x4F3A51: fld     [esp+2D8h+var_2A0]
0x4F3A55: fcomp   [esp+2D8h+var_2B0]
0x4F3A59: fnstsw  ax
0x4F3A5B: test    ah, 41h
0x4F3A5E: jp      loc_4F3E6B
0x4F3A64: mov     dword ptr [esp+2D8h+var_2C0], 1
0x4F3A6C: jmp     loc_4F3E73
0x4F3A71: test    cl, cl; jumptable 004F385C case 3
0x4F3A73: mov     byte ptr [esp+2D8h+var_2C8], 0
0x4F3A78: jnz     short loc_4F3AAE
0x4F3A7A: test    bl, bl
0x4F3A7C: jnz     short loc_4F3A8E
0x4F3A7E: xor     eax, eax
0x4F3A80: cmp     edi, esi
0x4F3A82: setl    al
0x4F3A85: mov     dword ptr [esp+2D8h+var_2C0], eax
0x4F3A89: jmp     loc_4F3E73
0x4F3A8E: fild    dword ptr [esp+2D8h+var_2B0]
0x4F3A92: fcomp   [esp+2D8h+var_2A0]
0x4F3A96: fnstsw  ax
0x4F3A98: test    ah, 5
0x4F3A9B: jp      loc_4F3E6B
0x4F3AA1: mov     dword ptr [esp+2D8h+var_2C0], 1
0x4F3AA9: jmp     loc_4F3E73
0x4F3AAE: test    bl, bl
0x4F3AB0: jnz     short loc_4F3AD2
0x4F3AB2: fild    dword ptr [esp+2D8h+var_2A0]
0x4F3AB6: fcomp   [esp+2D8h+var_2B0]
0x4F3ABA: fnstsw  ax
0x4F3ABC: test    ah, 41h
0x4F3ABF: jnz     loc_4F3E6B
0x4F3AC5: mov     dword ptr [esp+2D8h+var_2C0], 1
0x4F3ACD: jmp     loc_4F3E73
0x4F3AD2: fld     [esp+2D8h+var_2A0]
0x4F3AD6: fcomp   [esp+2D8h+var_2B0]
0x4F3ADA: fnstsw  ax
0x4F3ADC: test    ah, 41h
0x4F3ADF: jnz     loc_4F3E6B
0x4F3AE5: mov     dword ptr [esp+2D8h+var_2C0], 1
0x4F3AED: jmp     loc_4F3E73
0x4F3AF2: test    cl, cl; jumptable 004F385C case 2
0x4F3AF4: mov     byte ptr [esp+2D8h+var_2C8], 0
0x4F3AF9: jnz     short loc_4F3B2F
0x4F3AFB: test    bl, bl
0x4F3AFD: jnz     short loc_4F3B0F
0x4F3AFF: xor     ecx, ecx
0x4F3B01: cmp     edi, esi
0x4F3B03: setle   cl
0x4F3B06: mov     dword ptr [esp+2D8h+var_2C0], ecx
0x4F3B0A: jmp     loc_4F3E73
0x4F3B0F: fild    dword ptr [esp+2D8h+var_2B0]
0x4F3B13: fcomp   [esp+2D8h+var_2A0]
0x4F3B17: fnstsw  ax
0x4F3B19: test    ah, 41h
0x4F3B1C: jp      loc_4F3E6B
0x4F3B22: mov     dword ptr [esp+2D8h+var_2C0], 1
0x4F3B2A: jmp     loc_4F3E73
0x4F3B2F: test    bl, bl
0x4F3B31: jnz     short loc_4F3B53
0x4F3B33: fild    dword ptr [esp+2D8h+var_2A0]
0x4F3B37: fcomp   [esp+2D8h+var_2B0]
0x4F3B3B: fnstsw  ax
0x4F3B3D: test    ah, 1
0x4F3B40: jnz     loc_4F3E6B
0x4F3B46: mov     dword ptr [esp+2D8h+var_2C0], 1
0x4F3B4E: jmp     loc_4F3E73
0x4F3B53: fld     [esp+2D8h+var_2A0]
0x4F3B57: fcomp   [esp+2D8h+var_2B0]
0x4F3B5B: fnstsw  ax
0x4F3B5D: test    ah, 1
0x4F3B60: jnz     loc_4F3E6B
0x4F3B66: mov     dword ptr [esp+2D8h+var_2C0], 1
0x4F3B6E: jmp     loc_4F3E73
0x4F3B73: test    cl, cl; jumptable 004F385C case 6
0x4F3B75: mov     byte ptr [esp+2D8h+var_2C8], 0
0x4F3B7A: jnz     short loc_4F3BB0
0x4F3B7C: test    bl, bl
0x4F3B7E: jnz     short loc_4F3B90
0x4F3B80: xor     edx, edx
0x4F3B82: cmp     edi, esi
0x4F3B84: setz    dl
0x4F3B87: mov     dword ptr [esp+2D8h+var_2C0], edx
0x4F3B8B: jmp     loc_4F3E73
0x4F3B90: fild    dword ptr [esp+2D8h+var_2B0]
0x4F3B94: fcomp   [esp+2D8h+var_2A0]
0x4F3B98: fnstsw  ax
0x4F3B9A: test    ah, 44h
0x4F3B9D: jp      loc_4F3E6B
0x4F3BA3: mov     dword ptr [esp+2D8h+var_2C0], 1
0x4F3BAB: jmp     loc_4F3E73
0x4F3BB0: test    bl, bl
0x4F3BB2: jnz     short loc_4F3BD4
0x4F3BB4: fild    dword ptr [esp+2D8h+var_2A0]
0x4F3BB8: fcomp   [esp+2D8h+var_2B0]
0x4F3BBC: fnstsw  ax
0x4F3BBE: test    ah, 44h
0x4F3BC1: jp      loc_4F3E6B
0x4F3BC7: mov     dword ptr [esp+2D8h+var_2C0], 1
0x4F3BCF: jmp     loc_4F3E73
0x4F3BD4: fld     [esp+2D8h+var_2A0]
0x4F3BD8: fcomp   [esp+2D8h+var_2B0]
0x4F3BDC: fnstsw  ax
0x4F3BDE: test    ah, 44h
0x4F3BE1: jp      loc_4F3E6B
0x4F3BE7: mov     dword ptr [esp+2D8h+var_2C0], 1
0x4F3BEF: jmp     loc_4F3E73
0x4F3BF4: test    cl, cl; jumptable 004F385C case 7
0x4F3BF6: mov     byte ptr [esp+2D8h+var_2C8], 0
0x4F3BFB: jnz     short loc_4F3C1A
0x4F3BFD: test    bl, bl
0x4F3BFF: jnz     short loc_4F3C11
0x4F3C01: xor     eax, eax
0x4F3C03: cmp     edi, esi
0x4F3C05: setnz   al
0x4F3C08: mov     dword ptr [esp+2D8h+var_2C0], eax
0x4F3C0C: jmp     loc_4F3E73
0x4F3C11: fild    dword ptr [esp+2D8h+var_2B0]
0x4F3C15: jmp     loc_4F38CE
0x4F3C1A: test    bl, bl
0x4F3C1C: jnz     short loc_4F3C2B
0x4F3C1E: fild    dword ptr [esp+2D8h+var_2A0]
0x4F3C22: fcomp   [esp+2D8h+var_2B0]
0x4F3C26: jmp     loc_4F38D2
0x4F3C2B: fld     [esp+2D8h+var_2A0]
0x4F3C2F: fcomp   [esp+2D8h+var_2B0]
0x4F3C33: jmp     loc_4F38D2
0x4F3C38: test    cl, cl; jumptable 004F385C case 8
0x4F3C3A: jnz     short loc_4F3C65
0x4F3C3C: test    bl, bl
0x4F3C3E: jnz     short loc_4F3C4F
0x4F3C40: sub     edi, esi
0x4F3C42: mov     byte ptr [esp+2D8h+var_2C8], bl
0x4F3C46: mov     dword ptr [esp+2D8h+var_2C0], edi
0x4F3C4A: jmp     loc_4F3E73
0x4F3C4F: fild    dword ptr [esp+2D8h+var_2B0]
0x4F3C53: mov     byte ptr [esp+2D8h+var_2C8], 1
0x4F3C58: fsub    [esp+2D8h+var_2A0]
0x4F3C5C: fstp    [esp+2D8h+var_2C0]
0x4F3C60: jmp     loc_4F3E73
0x4F3C65: test    bl, bl
0x4F3C67: mov     byte ptr [esp+2D8h+var_2C8], 1
0x4F3C6C: jnz     short loc_4F3C7F
0x4F3C6E: fild    dword ptr [esp+2D8h+var_2A0]
0x4F3C72: fsubr   [esp+2D8h+var_2B0]
0x4F3C76: fstp    [esp+2D8h+var_2C0]
0x4F3C7A: jmp     loc_4F3E73
0x4F3C7F: fld     [esp+2D8h+var_2B0]
0x4F3C83: fsub    [esp+2D8h+var_2A0]
0x4F3C87: fstp    [esp+2D8h+var_2C0]
0x4F3C8B: jmp     loc_4F3E73
0x4F3C90: test    cl, cl; jumptable 004F385C case 9
0x4F3C92: jnz     short loc_4F3CBD
0x4F3C94: test    bl, bl
0x4F3C96: jnz     short loc_4F3CA7
0x4F3C98: add     esi, edi
0x4F3C9A: mov     byte ptr [esp+2D8h+var_2C8], bl
0x4F3C9E: mov     dword ptr [esp+2D8h+var_2C0], esi
0x4F3CA2: jmp     loc_4F3E73
0x4F3CA7: fild    dword ptr [esp+2D8h+var_2B0]
0x4F3CAB: mov     byte ptr [esp+2D8h+var_2C8], 1
0x4F3CB0: fadd    [esp+2D8h+var_2A0]
0x4F3CB4: fstp    [esp+2D8h+var_2C0]
0x4F3CB8: jmp     loc_4F3E73
0x4F3CBD: test    bl, bl
0x4F3CBF: mov     byte ptr [esp+2D8h+var_2C8], 1
0x4F3CC4: jnz     short loc_4F3CD7
0x4F3CC6: fild    dword ptr [esp+2D8h+var_2A0]
0x4F3CCA: fadd    [esp+2D8h+var_2B0]
0x4F3CCE: fstp    [esp+2D8h+var_2C0]
0x4F3CD2: jmp     loc_4F3E73
0x4F3CD7: fld     [esp+2D8h+var_2A0]
0x4F3CDB: fadd    [esp+2D8h+var_2B0]
0x4F3CDF: fstp    [esp+2D8h+var_2C0]
0x4F3CE3: jmp     loc_4F3E73
0x4F3CE8: test    cl, cl; jumptable 004F385C case 10
0x4F3CEA: jnz     short loc_4F3D16
0x4F3CEC: test    bl, bl
0x4F3CEE: jnz     short loc_4F3D00
0x4F3CF0: imul    esi, edi
0x4F3CF3: mov     byte ptr [esp+2D8h+var_2C8], bl
0x4F3CF7: mov     dword ptr [esp+2D8h+var_2C0], esi
0x4F3CFB: jmp     loc_4F3E73
0x4F3D00: fild    dword ptr [esp+2D8h+var_2B0]
0x4F3D04: mov     byte ptr [esp+2D8h+var_2C8], 1
0x4F3D09: fmul    [esp+2D8h+var_2A0]
0x4F3D0D: fstp    [esp+2D8h+var_2C0]
0x4F3D11: jmp     loc_4F3E73
0x4F3D16: test    bl, bl
0x4F3D18: mov     byte ptr [esp+2D8h+var_2C8], 1
0x4F3D1D: jnz     short loc_4F3D30
0x4F3D1F: fild    dword ptr [esp+2D8h+var_2A0]
0x4F3D23: fmul    [esp+2D8h+var_2B0]
0x4F3D27: fstp    [esp+2D8h+var_2C0]
0x4F3D2B: jmp     loc_4F3E73
0x4F3D30: fld     [esp+2D8h+var_2A0]
0x4F3D34: fmul    [esp+2D8h+var_2B0]
0x4F3D38: fstp    [esp+2D8h+var_2C0]
0x4F3D3C: jmp     loc_4F3E73
0x4F3D41: cmp     [ebp+arg_18], 0; jumptable 004F385C cases 11,12
0x4F3D45: jnz     loc_4F3E73
0x4F3D4B: test    cl, cl
0x4F3D4D: jnz     short loc_4F3DC6
0x4F3D4F: test    bl, bl
0x4F3D51: jnz     short loc_4F3D7D
0x4F3D53: test    esi, esi
0x4F3D55: jz      loc_4F3FFC
0x4F3D5B: mov     eax, edi
0x4F3D5D: cmp     edx, 0Dh
0x4F3D60: mov     byte ptr [esp+2D8h+var_2C8], bl
0x4F3D64: cdq
0x4F3D65: jnz     short loc_4F3D72
0x4F3D67: idiv    esi
0x4F3D69: mov     dword ptr [esp+2D8h+var_2C0], eax
0x4F3D6D: jmp     loc_4F3E73
0x4F3D72: idiv    esi
0x4F3D74: mov     dword ptr [esp+2D8h+var_2C0], edx
0x4F3D78: jmp     loc_4F3E73
0x4F3D7D: fldz
0x4F3D7F: fld     [esp+2D8h+var_2A0]
0x4F3D83: fucom   st(1)
0x4F3D85: fnstsw  ax
0x4F3D87: fstp    st(1)
0x4F3D89: test    ah, 44h
0x4F3D8C: jnp     loc_4F3FFA
0x4F3D92: cmp     edx, 0Dh
0x4F3D95: mov     byte ptr [esp+2D8h+var_2C8], 1
0x4F3D9A: jnz     short loc_4F3DA9
0x4F3D9C: fidivr  dword ptr [esp+2D8h+var_2B0]
0x4F3DA0: fstp    [esp+2D8h+var_2C0]
0x4F3DA4: jmp     loc_4F3E73
0x4F3DA9: call    Double_To_SInt32
0x4F3DAE: mov     ecx, eax
0x4F3DB0: mov     eax, edi
0x4F3DB2: cdq
0x4F3DB3: idiv    ecx
0x4F3DB5: mov     [esp+2D8h+var_298], edx
0x4F3DB9: fild    [esp+2D8h+var_298]
0x4F3DBD: fstp    [esp+2D8h+var_2C0]
0x4F3DC1: jmp     loc_4F3E73
0x4F3DC6: test    bl, bl
0x4F3DC8: jnz     short loc_4F3E07
0x4F3DCA: test    esi, esi
0x4F3DCC: jz      loc_4F3FFC
0x4F3DD2: cmp     edx, 0Dh
0x4F3DD5: mov     byte ptr [esp+2D8h+var_2C8], 1
0x4F3DDA: jnz     short loc_4F3DED
0x4F3DDC: fild    dword ptr [esp+2D8h+var_2A0]
0x4F3DE0: fdivr   [esp+2D8h+var_2B0]
0x4F3DE4: fstp    [esp+2D8h+var_2C0]
0x4F3DE8: jmp     loc_4F3E73
0x4F3DED: fld     [esp+2D8h+var_2B0]
0x4F3DF1: call    Double_To_SInt32
0x4F3DF6: cdq
0x4F3DF7: idiv    esi
0x4F3DF9: mov     [esp+2D8h+var_298], edx
0x4F3DFD: fild    [esp+2D8h+var_298]
0x4F3E01: fstp    [esp+2D8h+var_2C0]
0x4F3E05: jmp     short loc_4F3E73
0x4F3E07: fldz
0x4F3E09: fld     [esp+2D8h+var_2A0]
0x4F3E0D: fucom   st(1)
0x4F3E0F: fnstsw  ax
0x4F3E11: fstp    st(1)
0x4F3E13: test    ah, 44h
0x4F3E16: jnp     loc_4F3FFA
0x4F3E1C: cmp     edx, 0Dh
0x4F3E1F: mov     byte ptr [esp+2D8h+var_2C8], 1
0x4F3E24: jnz     short loc_4F3E30
0x4F3E26: fdivr   [esp+2D8h+var_2B0]
0x4F3E2A: fstp    [esp+2D8h+var_2C0]
0x4F3E2E: jmp     short loc_4F3E73
0x4F3E30: call    Double_To_SInt32
0x4F3E35: fld     [esp+2D8h+var_2B0]
0x4F3E39: mov     esi, eax
0x4F3E3B: call    Double_To_SInt32
0x4F3E40: cdq
0x4F3E41: idiv    esi
0x4F3E43: mov     [esp+2D8h+var_298], edx
0x4F3E47: fild    [esp+2D8h+var_298]
0x4F3E4B: fstp    [esp+2D8h+var_2C0]
0x4F3E4F: jmp     short loc_4F3E73
0x4F3E51: lea     edx, [esp+2D8h+Str]
0x4F3E58: push    edx; ArgList
0x4F3E59: push    offset aUnhandledOpera; "Unhandled operator '%s' in Expression::"...
0x4F3E5E: call    PrintError
0x4F3E63: add     esp, 8
0x4F3E66: mov     byte ptr [esp+2D8h+var_2C8], 0
0x4F3E6B: mov     dword ptr [esp+2D8h+var_2C0], 0
0x4F3E73: mov     ecx, [esp+2D8h+var_294]
0x4F3E77: add     dword ptr [ecx+708h], 1
0x4F3E7E: mov     eax, [ecx+708h]
0x4F3E84: mov     edx, [esp+2D8h+var_2C8]
0x4F3E88: mov     esi, [esp+2D8h+var_2C4]
0x4F3E8C: mov     edi, dword ptr [esp+2D8h+var_2C0]
0x4F3E90: mov     ebx, dword ptr [esp+2D8h+var_2C0+4]
0x4F3E94: add     ecx, 508h
0x4F3E9A: shl     eax, 4
0x4F3E9D: add     eax, ecx
0x4F3E9F: mov     [eax], edx
0x4F3EA1: mov     [eax+4], esi
0x4F3EA4: mov     [eax+8], edi
0x4F3EA7: mov     [eax+0Ch], ebx
0x4F3EAA: jmp     loc_4F3FB0
0x4F3EAF: lea     eax, [esp+2D8h+Str]
0x4F3EB6: push    eax
0x4F3EB7: call    sub_47D550
0x4F3EBC: add     esp, 4
0x4F3EBF: test    eax, eax
0x4F3EC1: jz      short loc_4F3EE1
0x4F3EC3: lea     ecx, [esp+2D8h+Str]
0x4F3ECA: push    ecx; Str
0x4F3ECB: mov     byte ptr [esp+2DCh+var_2C8], 0
0x4F3ED0: call    _atol
0x4F3ED5: add     esp, 4
0x4F3ED8: mov     dword ptr [esp+2D8h+var_2C0], eax
0x4F3EDC: jmp     loc_4F3F75
0x4F3EE1: lea     edx, [esp+2D8h+Str]
0x4F3EE8: push    edx
0x4F3EE9: call    sub_47D5B0
0x4F3EEE: add     esp, 4
0x4F3EF1: test    eax, eax
0x4F3EF3: mov     byte ptr [esp+2D8h+var_2C8], 1
0x4F3EF8: jz      short loc_4F3F10
0x4F3EFA: lea     eax, [esp+2D8h+Str]
0x4F3F01: push    eax; String
0x4F3F02: call    _atof
0x4F3F07: fstp    [esp+2DCh+var_2C0]
0x4F3F0B: add     esp, 4
0x4F3F0E: jmp     short loc_4F3F75
0x4F3F10: mov     eax, dword ptr [ebp+arg_18]
0x4F3F13: test    al, al
0x4F3F15: mov     [esp+2D8h+var_298], 0
0x4F3F1D: jz      short loc_4F3F45
0x4F3F1F: mov     ecx, [esp+2D8h+var_280]
0x4F3F23: mov     edx, [esp+2D8h+var_278]
0x4F3F27: push    eax
0x4F3F28: push    ecx
0x4F3F29: mov     ecx, [esp+2E0h+var_28C]
0x4F3F2D: push    edx
0x4F3F2E: push    esi
0x4F3F2F: push    ebx
0x4F3F30: lea     eax, [esp+2ECh+var_298]
0x4F3F34: push    eax
0x4F3F35: push    ecx
0x4F3F36: lea     edx, [esp+2F4h+var_2C0]
0x4F3F3A: push    edx
0x4F3F3B: call    ExecuteScriptInstruction?
0x4F3F40: add     esp, 20h
0x4F3F43: jmp     short loc_4F3F75
0x4F3F45: mov     eax, [esp+2D8h+var_280]
0x4F3F49: mov     ecx, [esp+2D8h+var_278]
0x4F3F4D: push    0
0x4F3F4F: push    eax
0x4F3F50: push    ecx
0x4F3F51: push    esi
0x4F3F52: push    ebx
0x4F3F53: lea     edx, [esp+2ECh+var_298]
0x4F3F57: push    edx
0x4F3F58: lea     eax, [esp+2F0h+Str]
0x4F3F5F: push    eax
0x4F3F60: lea     ecx, [esp+2F4h+var_2C0]
0x4F3F64: push    ecx
0x4F3F65: call    ExecuteScriptInstruction?
0x4F3F6A: add     esp, 20h
0x4F3F6D: test    al, al
0x4F3F6F: jz      loc_4F4023
0x4F3F75: mov     eax, dword ptr [esp+2D8h+var_2C0+4]
0x4F3F79: add     dword ptr [edi+708h], 1
0x4F3F80: mov     ecx, [edi+708h]
0x4F3F86: mov     edx, [esp+2D8h+var_2C8]
0x4F3F8A: mov     esi, [esp+2D8h+var_2C4]
0x4F3F8E: mov     ebx, dword ptr [esp+2D8h+var_2C0]
0x4F3F92: mov     [esp+2D8h+var_264], eax
0x4F3F96: lea     eax, [edi+508h]
0x4F3F9C: shl     ecx, 4
0x4F3F9F: add     ecx, eax
0x4F3FA1: mov     [ecx], edx
0x4F3FA3: mov     edx, [esp+2D8h+var_264]
0x4F3FA7: mov     [ecx+4], esi
0x4F3FAA: mov     [ecx+8], ebx
0x4F3FAD: mov     [ecx+0Ch], edx
0x4F3FB0: cmp     [esp+2D8h+var_288], 0
0x4F3FB5: mov     edi, [esp+2D8h+var_294]
0x4F3FB9: jz      loc_4F36EC
0x4F3FBF: mov     eax, [esp+2D8h+var_288]
0x4F3FC3: mov     edx, dword ptr [ebp+arg_18]
0x4F3FC6: add     [esp+2D8h+var_28C], eax
0x4F3FCA: lea     ecx, [esp+2D8h+var_28C]
0x4F3FCE: push    ecx; int
0x4F3FCF: push    edx; char
0x4F3FD0: lea     eax, [esp+2E0h+var_290]
0x4F3FD4: push    eax; int
0x4F3FD5: lea     ecx, [esp+2E4h+Str]
0x4F3FDC: push    ecx; Dst
0x4F3FDD: lea     edx, [esp+2E8h+var_284]
0x4F3FE1: push    edx; int
0x4F3FE2: mov     ecx, edi
0x4F3FE4: call    sub_4F3320
0x4F3FE9: test    eax, eax
0x4F3FEB: mov     [esp+2D8h+var_288], eax
0x4F3FEF: jnz     loc_4F3760
0x4F3FF5: jmp     loc_4F36EC
0x4F3FFA: fstp    st
0x4F3FFC: mov     ecx, [esp+2D8h+var_294]
0x4F4000: push    4
0x4F4002: jmp     short loc_4F4027
0x4F4004: push    3
0x4F4006: jmp     short loc_4F4025
0x4F4008: fld     [esp+2D8h+var_2C0]
0x4F400C: pop     edi
0x4F400D: pop     esi
0x4F400E: pop     ebx
0x4F400F: mov     ecx, [esp+2CCh+var_4]
0x4F4016: xor     ecx, esp
0x4F4018: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4F401D: mov     esp, ebp
0x4F401F: pop     ebp
0x4F4020: retn    1Ch
0x4F4023: push    5
0x4F4025: mov     ecx, edi
0x4F4027: call    sub_4F3300
0x4F402C: mov     ecx, [esp+2D8h+var_4]
0x4F4033: fldz
0x4F4035: pop     edi
0x4F4036: pop     esi
0x4F4037: pop     ebx
0x4F4038: xor     ecx, esp
0x4F403A: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4F403F: mov     esp, ebp
0x4F4041: pop     ebp
0x4F4042: retn    1Ch
