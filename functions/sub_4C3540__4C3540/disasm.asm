0x4C3540: sub     esp, 58h
0x4C3543: push    ebx
0x4C3544: push    esi
0x4C3545: mov     esi, [esp+60h+arg_0]
0x4C3549: movzx   eax, word ptr [esi+3Ch]
0x4C354D: push    edi
0x4C354E: push    0
0x4C3550: mov     edi, ecx
0x4C3552: movzx   ecx, byte ptr [esi+18h]
0x4C3556: push    0
0x4C3558: push    eax
0x4C3559: push    ecx
0x4C355A: lea     edx, [esp+74h+var_C]
0x4C355E: push    edx
0x4C355F: mov     ecx, edi
0x4C3561: call    sub_4C0530
0x4C3566: mov     ecx, [esi+3Ch]
0x4C3569: mov     edx, [esi+18h]
0x4C356C: lea     eax, [esp+64h+var_30]
0x4C3570: push    eax
0x4C3571: push    ecx
0x4C3572: push    edx
0x4C3573: mov     ecx, edi
0x4C3575: call    sub_4C1DD0
0x4C357A: mov     eax, [edi+24h]
0x4C357D: test    eax, eax
0x4C357F: jz      short loc_4C3589
0x4C3581: mov     ebx, [eax+9Ch]
0x4C3587: jmp     short loc_4C359B
0x4C3589: mov     ecx, [edi+20h]; this
0x4C358C: test    ecx, ecx
0x4C358E: jz      short loc_4C3599
0x4C3590: call    TESObjectCELL_GetYCoordinate
0x4C3595: mov     ebx, eax
0x4C3597: jmp     short loc_4C359B
0x4C3599: xor     ebx, ebx
0x4C359B: mov     eax, [edi+24h]
0x4C359E: test    eax, eax
0x4C35A0: jz      short loc_4C35AA
0x4C35A2: mov     eax, [eax+98h]
0x4C35A8: jmp     short loc_4C35BA
0x4C35AA: mov     ecx, [edi+20h]; this
0x4C35AD: test    ecx, ecx
0x4C35AF: jz      short loc_4C35B8
0x4C35B1: call    TESObjectCELL_GetXCoordinate
0x4C35B6: jmp     short loc_4C35BA
0x4C35B8: xor     eax, eax
0x4C35BA: shl     eax, 0Ch
0x4C35BD: mov     [esp+64h+arg_0], eax
0x4C35C1: fild    [esp+64h+arg_0]
0x4C35C5: shl     ebx, 0Ch
0x4C35C8: fld     qword ptr ds:0A30F70h
0x4C35CE: mov     [esp+64h+arg_0], ebx
0x4C35D2: fadd    st(1), st
0x4C35D4: fxch    st(1)
0x4C35D6: fstp    [esp+64h+var_18]
0x4C35DA: fiadd   [esp+64h+arg_0]
0x4C35DE: fstp    [esp+64h+var_14]
0x4C35E2: fld     [esp+64h+var_18]
0x4C35E6: fadd    [esp+64h+var_30]
0x4C35EA: fstp    [esp+64h+var_24]
0x4C35EE: fld     [esp+64h+var_2C]
0x4C35F2: fadd    [esp+64h+var_14]
0x4C35F6: fstp    [esp+64h+var_20]
0x4C35FA: fld     [esp+64h+var_24]
0x4C35FE: fld     [esp+64h+var_C]
0x4C3602: fld     st
0x4C3604: fucomp  st(2)
0x4C3606: fnstsw  ax
0x4C3608: fstp    st(1)
0x4C360A: test    ah, 44h
0x4C360D: jp      short loc_4C3666
0x4C360F: fld     [esp+64h+var_20]
0x4C3613: fld     [esp+64h+var_8]
0x4C3617: fucompp
0x4C3619: fnstsw  ax
0x4C361B: test    ah, 44h
0x4C361E: jp      short loc_4C3666
0x4C3620: fld     [esp+64h+var_4]
0x4C3624: fcomp   qword ptr ds:0A2FC68h
0x4C362A: fnstsw  ax
0x4C362C: test    ah, 44h
0x4C362F: jp      short loc_4C3666
0x4C3631: mov     ebx, [esp+64h+arg_4]
0x4C3635: fstp    st
0x4C3637: mov     eax, [esi+3Ch]
0x4C363A: mov     ecx, [esi+18h]
0x4C363D: push    ebx
0x4C363E: push    eax
0x4C363F: push    ecx
0x4C3640: mov     ecx, edi
0x4C3642: call    sub_4C1E80
0x4C3647: mov     edx, [ebx]
0x4C3649: mov     eax, [esp+64h+arg_8]
0x4C364D: mov     [eax], edx
0x4C364F: mov     ecx, [ebx+4]
0x4C3652: mov     [eax+4], ecx
0x4C3655: mov     edx, [ebx+8]
0x4C3658: pop     edi
0x4C3659: pop     esi
0x4C365A: mov     [eax+8], edx
0x4C365D: mov     al, 1
0x4C365F: pop     ebx
0x4C3660: add     esp, 58h
0x4C3663: retn    0Ch
0x4C3666: fld     qword ptr ds:0A3F428h
0x4C366C: push    ebp
0x4C366D: call    unknown_libname_14
0x4C3672: fstp    [esp+68h+arg_0]
0x4C3676: fld     [esp+68h+arg_0]
0x4C367A: fmul    qword ptr ds:0A46050h
0x4C3680: fstp    [esp+68h+var_58]
0x4C3684: fld     [esp+68h+var_8]
0x4C3688: fld     qword ptr ds:0A3F428h
0x4C368E: call    unknown_libname_14
0x4C3693: fstp    [esp+68h+arg_0]
0x4C3697: mov     eax, ds:0B258F0h
0x4C369C: fld     [esp+68h+arg_0]
0x4C36A0: mov     edx, [esi+40h]
0x4C36A3: fmul    qword ptr ds:0A46050h
0x4C36A9: mov     ebx, ds:0B258E8h
0x4C36AF: mov     ebp, ds:0B258ECh
0x4C36B5: lea     ecx, [esp+68h+var_18]
0x4C36B9: fstp    [esp+68h+arg_0]
0x4C36BD: push    ecx
0x4C36BE: mov     [esp+6Ch+var_4], eax
0x4C36C2: mov     eax, [esi+18h]
0x4C36C5: push    edx
0x4C36C6: push    eax
0x4C36C7: mov     ecx, edi
0x4C36C9: call    sub_4C1E80
0x4C36CE: mov     edx, [esi+44h]
0x4C36D1: mov     eax, [esi+18h]
0x4C36D4: lea     ecx, [esp+68h+var_54]
0x4C36D8: push    ecx
0x4C36D9: push    edx
0x4C36DA: push    eax
0x4C36DB: mov     ecx, edi
0x4C36DD: call    sub_4C1E80
0x4C36E2: mov     edx, [esi+48h]
0x4C36E5: mov     eax, [esi+18h]
0x4C36E8: lea     ecx, [esp+68h+var_48]
0x4C36EC: push    ecx
0x4C36ED: push    edx
0x4C36EE: push    eax
0x4C36EF: mov     ecx, edi
0x4C36F1: call    sub_4C1E80
0x4C36F6: fld     [esp+68h+var_58]
0x4C36FA: fld     [esp+68h+arg_0]
0x4C36FE: mov     al, [esi+4Ch]
0x4C3701: test    al, al
0x4C3703: fld     [esp+68h+var_10]
0x4C3707: fld     [esp+68h+var_14]
0x4C370B: fld     [esp+68h+var_18]
0x4C370F: fld1
0x4C3711: jnz     loc_4C3906
0x4C3717: cmp     byte ptr [esi+4Dh], 0
0x4C371B: jnz     loc_4C3807
0x4C3721: fld     [esp+68h+var_48]
0x4C3725: fmul    st, st(5)
0x4C3727: fstp    [esp+68h+var_18]
0x4C372B: fld     [esp+68h+var_44]
0x4C372F: fmul    st, st(5)
0x4C3731: fstp    [esp+68h+var_14]
0x4C3735: fld     [esp+68h+var_40]
0x4C3739: fmul    st, st(5)
0x4C373B: fstp    [esp+68h+var_10]
0x4C373F: fld     st(1)
0x4C3741: fmul    st, st(6)
0x4C3743: fstp    [esp+68h+var_30]
0x4C3747: fld     st(2)
0x4C3749: fmul    st, st(6)
0x4C374B: fstp    [esp+68h+var_2C]
0x4C374F: fld     st(3)
0x4C3751: fmul    st, st(6)
0x4C3753: fstp    [esp+68h+var_28]
0x4C3757: fld     st(5)
0x4C3759: fsubr   st, st(1)
0x4C375B: fstp    [esp+68h+arg_0]
0x4C375F: fld     [esp+68h+var_54]
0x4C3763: fmul    [esp+68h+arg_0]
0x4C3767: fstp    [esp+68h+var_3C]
0x4C376B: fld     [esp+68h+var_50]
0x4C376F: fmul    [esp+68h+arg_0]
0x4C3773: fstp    [esp+68h+var_38]
0x4C3777: fld     [esp+68h+var_4C]
0x4C377B: fmul    [esp+68h+arg_0]
0x4C377F: fstp    [esp+68h+var_34]
0x4C3783: fld     [esp+68h+var_3C]
0x4C3787: fadd    [esp+68h+var_30]
0x4C378B: fstp    [esp+68h+var_24]
0x4C378F: fld     [esp+68h+var_38]
0x4C3793: fadd    [esp+68h+var_2C]
0x4C3797: fstp    [esp+68h+var_20]
0x4C379B: fld     [esp+68h+var_34]
0x4C379F: fadd    [esp+68h+var_28]
0x4C37A3: fstp    [esp+68h+var_1C]
0x4C37A7: fld     st(4)
0x4C37A9: fsubr   st, st(1)
0x4C37AB: fstp    [esp+68h+arg_0]
0x4C37AF: fld     [esp+68h+var_24]
0x4C37B3: fmul    [esp+68h+arg_0]
0x4C37B7: fstp    [esp+68h+var_30]
0x4C37BB: fld     [esp+68h+var_20]
0x4C37BF: fmul    [esp+68h+arg_0]
0x4C37C3: fstp    [esp+68h+var_2C]
0x4C37C7: fld     [esp+68h+var_1C]
0x4C37CB: fmul    [esp+68h+arg_0]
0x4C37CF: fstp    [esp+68h+var_28]
0x4C37D3: fld     [esp+68h+var_30]
0x4C37D7: fadd    [esp+68h+var_18]
0x4C37DB: fstp    [esp+68h+var_24]
0x4C37DF: mov     ebx, [esp+68h+var_24]
0x4C37E3: fld     [esp+68h+var_2C]
0x4C37E7: fadd    [esp+68h+var_14]
0x4C37EB: fstp    [esp+68h+var_20]
0x4C37EF: mov     ebp, [esp+68h+var_20]
0x4C37F3: fld     [esp+68h+var_28]
0x4C37F7: fadd    [esp+68h+var_10]
0x4C37FB: fstp    [esp+68h+var_1C]
0x4C37FF: mov     ecx, [esp+68h+var_1C]
0x4C3803: mov     [esp+68h+var_4], ecx
0x4C3807: test    al, al
0x4C3809: jnz     loc_4C3906
0x4C380F: cmp     [esi+4Dh], al
0x4C3812: jz      loc_4C38FE
0x4C3818: fld     st(4)
0x4C381A: fsubr   st, st(1)
0x4C381C: fstp    [esp+68h+arg_0]
0x4C3820: fld     [esp+68h+arg_0]
0x4C3824: fmul    [esp+68h+var_54]
0x4C3828: fstp    [esp+68h+var_3C]
0x4C382C: fld     [esp+68h+var_50]
0x4C3830: fmul    [esp+68h+arg_0]
0x4C3834: fstp    [esp+68h+var_38]
0x4C3838: fld     [esp+68h+var_4C]
0x4C383C: fmul    [esp+68h+arg_0]
0x4C3840: fstp    [esp+68h+var_34]
0x4C3844: fld     [esp+68h+var_48]
0x4C3848: fmul    st, st(6)
0x4C384A: fstp    [esp+68h+var_24]
0x4C384E: fld     [esp+68h+var_44]
0x4C3852: fmul    st, st(6)
0x4C3854: fstp    [esp+68h+var_20]
0x4C3858: fld     [esp+68h+var_40]
0x4C385C: fmul    st, st(6)
0x4C385E: fstp    [esp+68h+var_1C]
0x4C3862: fld     st(5)
0x4C3864: fsubr   st, st(1)
0x4C3866: fstp    [esp+68h+arg_0]
0x4C386A: fld     st(1)
0x4C386C: fmul    [esp+68h+arg_0]
0x4C3870: fstp    [esp+68h+var_18]
0x4C3874: fld     st(2)
0x4C3876: fmul    [esp+68h+arg_0]
0x4C387A: fstp    [esp+68h+var_14]
0x4C387E: fld     st(3)
0x4C3880: fmul    [esp+68h+arg_0]
0x4C3884: fstp    [esp+68h+var_10]
0x4C3888: fld     [esp+68h+var_18]
0x4C388C: fadd    [esp+68h+var_24]
0x4C3890: fstp    [esp+68h+var_30]
0x4C3894: fld     [esp+68h+var_14]
0x4C3898: fadd    [esp+68h+var_20]
0x4C389C: fstp    [esp+68h+var_2C]
0x4C38A0: fld     [esp+68h+var_10]
0x4C38A4: fadd    [esp+68h+var_1C]
0x4C38A8: fstp    [esp+68h+var_28]
0x4C38AC: fld     [esp+68h+var_30]
0x4C38B0: fmul    st, st(5)
0x4C38B2: fstp    [esp+68h+var_18]
0x4C38B6: fld     [esp+68h+var_2C]
0x4C38BA: fmul    st, st(5)
0x4C38BC: fstp    [esp+68h+var_14]
0x4C38C0: fld     [esp+68h+var_28]
0x4C38C4: fmul    st, st(5)
0x4C38C6: fstp    [esp+68h+var_10]
0x4C38CA: fld     [esp+68h+var_18]
0x4C38CE: fadd    [esp+68h+var_3C]
0x4C38D2: fstp    [esp+68h+var_24]
0x4C38D6: mov     ebx, [esp+68h+var_24]
0x4C38DA: fld     [esp+68h+var_14]
0x4C38DE: fadd    [esp+68h+var_38]
0x4C38E2: fstp    [esp+68h+var_20]
0x4C38E6: mov     ebp, [esp+68h+var_20]
0x4C38EA: fld     [esp+68h+var_10]
0x4C38EE: fadd    [esp+68h+var_34]
0x4C38F2: fstp    [esp+68h+var_1C]
0x4C38F6: mov     edx, [esp+68h+var_1C]
0x4C38FA: mov     [esp+68h+var_4], edx
0x4C38FE: test    al, al
0x4C3900: jz      loc_4C3AF4
0x4C3906: cmp     byte ptr [esi+4Dh], 0
0x4C390A: jnz     loc_4C39F6
0x4C3910: fld     [esp+68h+var_48]
0x4C3914: fmul    st, st(5)
0x4C3916: fstp    [esp+68h+var_3C]
0x4C391A: fld     [esp+68h+var_44]
0x4C391E: fmul    st, st(5)
0x4C3920: fstp    [esp+68h+var_38]
0x4C3924: fld     [esp+68h+var_40]
0x4C3928: fmul    st, st(5)
0x4C392A: fstp    [esp+68h+var_34]
0x4C392E: fld     [esp+68h+var_54]
0x4C3932: fmul    st, st(6)
0x4C3934: fstp    [esp+68h+var_24]
0x4C3938: fld     [esp+68h+var_50]
0x4C393C: fmul    st, st(6)
0x4C393E: fstp    [esp+68h+var_20]
0x4C3942: fld     [esp+68h+var_4C]
0x4C3946: fmul    st, st(6)
0x4C3948: fstp    [esp+68h+var_1C]
0x4C394C: fld     st(5)
0x4C394E: fsubr   st, st(1)
0x4C3950: fstp    [esp+68h+arg_0]
0x4C3954: fld     [esp+68h+arg_0]
0x4C3958: fmul    st, st(2)
0x4C395A: fstp    [esp+68h+var_18]
0x4C395E: fld     st(2)
0x4C3960: fmul    [esp+68h+arg_0]
0x4C3964: fstp    [esp+68h+var_14]
0x4C3968: fld     st(3)
0x4C396A: fmul    [esp+68h+arg_0]
0x4C396E: fstp    [esp+68h+var_10]
0x4C3972: fld     [esp+68h+var_18]
0x4C3976: fadd    [esp+68h+var_24]
0x4C397A: fstp    [esp+68h+var_30]
0x4C397E: fld     [esp+68h+var_14]
0x4C3982: fadd    [esp+68h+var_20]
0x4C3986: fstp    [esp+68h+var_2C]
0x4C398A: fld     [esp+68h+var_10]
0x4C398E: fadd    [esp+68h+var_1C]
0x4C3992: fstp    [esp+68h+var_28]
0x4C3996: fld     st(4)
0x4C3998: fsubr   st, st(1)
0x4C399A: fstp    [esp+68h+arg_0]
0x4C399E: fld     [esp+68h+var_30]
0x4C39A2: fmul    [esp+68h+arg_0]
0x4C39A6: fstp    [esp+68h+var_18]
0x4C39AA: fld     [esp+68h+var_2C]
0x4C39AE: fmul    [esp+68h+arg_0]
0x4C39B2: fstp    [esp+68h+var_14]
0x4C39B6: fld     [esp+68h+var_28]
0x4C39BA: fmul    [esp+68h+arg_0]
0x4C39BE: fstp    [esp+68h+var_10]
0x4C39C2: fld     [esp+68h+var_18]
0x4C39C6: fadd    [esp+68h+var_3C]
0x4C39CA: fstp    [esp+68h+var_24]
0x4C39CE: mov     ebx, [esp+68h+var_24]
0x4C39D2: fld     [esp+68h+var_14]
0x4C39D6: fadd    [esp+68h+var_38]
0x4C39DA: fstp    [esp+68h+var_20]
0x4C39DE: mov     ebp, [esp+68h+var_20]
0x4C39E2: fld     [esp+68h+var_10]
0x4C39E6: fadd    [esp+68h+var_34]
0x4C39EA: fstp    [esp+68h+var_1C]
0x4C39EE: mov     ecx, [esp+68h+var_1C]
0x4C39F2: mov     [esp+68h+var_4], ecx
0x4C39F6: test    al, al
0x4C39F8: jz      loc_4C3AF4
0x4C39FE: cmp     byte ptr [esi+4Dh], 0
0x4C3A02: jz      loc_4C3AF4
0x4C3A08: fld     st(4)
0x4C3A0A: fsubr   st, st(1)
0x4C3A0C: fstp    [esp+68h+arg_0]
0x4C3A10: fld     [esp+68h+arg_0]
0x4C3A14: fmul    [esp+68h+var_54]
0x4C3A18: fstp    [esp+68h+var_3C]
0x4C3A1C: fld     [esp+68h+var_50]
0x4C3A20: fmul    [esp+68h+arg_0]
0x4C3A24: fstp    [esp+68h+var_38]
0x4C3A28: fld     [esp+68h+var_4C]
0x4C3A2C: fmul    [esp+68h+arg_0]
0x4C3A30: fstp    [esp+68h+var_34]
0x4C3A34: fld     st(5)
0x4C3A36: fmulp   st(2), st
0x4C3A38: fxch    st(1)
0x4C3A3A: fstp    [esp+68h+var_24]
0x4C3A3E: fld     st(4)
0x4C3A40: fmulp   st(2), st
0x4C3A42: fxch    st(1)
0x4C3A44: fstp    [esp+68h+var_20]
0x4C3A48: fld     st(3)
0x4C3A4A: fmulp   st(2), st
0x4C3A4C: fxch    st(1)
0x4C3A4E: fstp    [esp+68h+var_1C]
0x4C3A52: fsubrp  st(2), st
0x4C3A54: fxch    st(1)
0x4C3A56: fstp    [esp+68h+arg_0]
0x4C3A5A: fld     [esp+68h+var_48]
0x4C3A5E: fld     [esp+68h+arg_0]
0x4C3A62: fld     st
0x4C3A64: fmulp   st(2), st
0x4C3A66: fxch    st(1)
0x4C3A68: fstp    [esp+68h+var_18]
0x4C3A6C: fld     [esp+68h+var_44]
0x4C3A70: fmul    st, st(1)
0x4C3A72: fstp    [esp+68h+var_14]
0x4C3A76: fmul    [esp+68h+var_40]
0x4C3A7A: fstp    [esp+68h+var_10]
0x4C3A7E: fld     [esp+68h+var_18]
0x4C3A82: fadd    [esp+68h+var_24]
0x4C3A86: fstp    [esp+68h+var_30]
0x4C3A8A: fld     [esp+68h+var_14]
0x4C3A8E: fadd    [esp+68h+var_20]
0x4C3A92: fstp    [esp+68h+var_2C]
0x4C3A96: fld     [esp+68h+var_10]
0x4C3A9A: fadd    [esp+68h+var_1C]
0x4C3A9E: fstp    [esp+68h+var_28]
0x4C3AA2: fld     [esp+68h+var_30]
0x4C3AA6: fmul    st, st(1)
0x4C3AA8: fstp    [esp+68h+var_18]
0x4C3AAC: fld     [esp+68h+var_2C]
0x4C3AB0: fmul    st, st(1)
0x4C3AB2: fstp    [esp+68h+var_14]
0x4C3AB6: fmul    [esp+68h+var_28]
0x4C3ABA: fstp    [esp+68h+var_10]
0x4C3ABE: fld     [esp+68h+var_18]
0x4C3AC2: fadd    [esp+68h+var_3C]
0x4C3AC6: fstp    [esp+68h+var_24]
0x4C3ACA: mov     ebx, [esp+68h+var_24]
0x4C3ACE: fld     [esp+68h+var_14]
0x4C3AD2: fadd    [esp+68h+var_38]
0x4C3AD6: fstp    [esp+68h+var_20]
0x4C3ADA: mov     ebp, [esp+68h+var_20]
0x4C3ADE: fld     [esp+68h+var_10]
0x4C3AE2: fadd    [esp+68h+var_34]
0x4C3AE6: fstp    [esp+68h+var_1C]
0x4C3AEA: mov     edx, [esp+68h+var_1C]
0x4C3AEE: mov     [esp+68h+var_4], edx
0x4C3AF2: jmp     short loc_4C3B00
0x4C3AF4: fstp    st(5)
0x4C3AF6: fstp    st(3)
0x4C3AF8: fstp    st(3)
0x4C3AFA: fstp    st
0x4C3AFC: fstp    st(1)
0x4C3AFE: fstp    st
0x4C3B00: mov     ecx, [esp+68h+arg_4]
0x4C3B04: mov     eax, [esp+68h+var_4]
0x4C3B08: mov     [ecx], ebx
0x4C3B0A: mov     [ecx+4], ebp
0x4C3B0D: mov     [ecx+8], eax
0x4C3B10: call    sub_43F350
0x4C3B15: fstp    st
0x4C3B17: mov     ebp, [esi+40h]
0x4C3B1A: mov     ebx, [esi+18h]
0x4C3B1D: lea     ecx, [esp+68h+var_48]
0x4C3B21: push    ecx
0x4C3B22: push    ebp
0x4C3B23: push    ebx
0x4C3B24: mov     ecx, edi
0x4C3B26: call    sub_4C1DD0
0x4C3B2B: mov     eax, [esi+44h]
0x4C3B2E: lea     edx, [esp+68h+var_C]
0x4C3B32: push    edx
0x4C3B33: push    eax
0x4C3B34: push    ebx
0x4C3B35: mov     ecx, edi
0x4C3B37: call    sub_4C1DD0
0x4C3B3C: fld     [esp+68h+var_48]
0x4C3B40: fsub    [esp+68h+var_C]
0x4C3B44: lea     ecx, [esp+68h+var_54]
0x4C3B48: push    ecx
0x4C3B49: push    ebp
0x4C3B4A: fstp    [esp+70h+var_48]
0x4C3B4E: push    ebx
0x4C3B4F: fld     [esp+74h+var_44]
0x4C3B53: mov     ecx, edi
0x4C3B55: fsub    [esp+74h+var_8]
0x4C3B59: fstp    [esp+74h+var_44]
0x4C3B5D: fld     [esp+74h+var_40]
0x4C3B61: fsub    [esp+74h+var_4]
0x4C3B65: fstp    [esp+74h+var_40]
0x4C3B69: call    sub_4C1DD0
0x4C3B6E: mov     eax, [esi+48h]
0x4C3B71: lea     edx, [esp+68h+var_C]
0x4C3B75: push    edx
0x4C3B76: push    eax
0x4C3B77: push    ebx
0x4C3B78: mov     ecx, edi
0x4C3B7A: call    sub_4C1DD0
0x4C3B7F: fld     [esp+68h+var_54]
0x4C3B83: fsub    [esp+68h+var_C]
0x4C3B87: mov     al, [esi+4Ch]
0x4C3B8A: test    al, al
0x4C3B8C: pop     ebp
0x4C3B8D: fstp    [esp+64h+var_54]
0x4C3B91: fld     [esp+64h+var_50]
0x4C3B95: fsub    [esp+64h+var_8]
0x4C3B99: fstp    [esp+64h+var_50]
0x4C3B9D: fld     [esp+64h+var_4C]
0x4C3BA1: fsub    [esp+64h+var_4]
0x4C3BA5: fstp    [esp+64h+var_4C]
0x4C3BA9: jz      short loc_4C3BB5
0x4C3BAB: cmp     byte ptr [esi+4Dh], 0
0x4C3BAF: jz      short loc_4C3BBB
0x4C3BB1: test    al, al
0x4C3BB3: jnz     short loc_4C3BC6
0x4C3BB5: cmp     byte ptr [esi+4Dh], 0
0x4C3BB9: jz      short loc_4C3BC6
0x4C3BBB: lea     ecx, [esp+64h+var_54]
0x4C3BBF: push    ecx
0x4C3BC0: lea     ecx, [esp+68h+var_48]
0x4C3BC4: jmp     short loc_4C3BCF
0x4C3BC6: lea     ecx, [esp+64h+var_48]
0x4C3BCA: push    ecx
0x4C3BCB: lea     ecx, [esp+68h+var_54]
0x4C3BCF: lea     edx, [esp+68h+var_C]
0x4C3BD3: push    edx
0x4C3BD4: call    sub_4BF9E0
0x4C3BD9: mov     edx, [eax]
0x4C3BDB: mov     ecx, [esp+64h+arg_8]
0x4C3BDF: mov     [ecx], edx
0x4C3BE1: mov     edx, [eax+4]
0x4C3BE4: mov     [ecx+4], edx
0x4C3BE7: mov     eax, [eax+8]
0x4C3BEA: pop     edi
0x4C3BEB: pop     esi
0x4C3BEC: mov     [ecx+8], eax
0x4C3BEF: mov     al, 1
0x4C3BF1: pop     ebx
0x4C3BF2: add     esp, 58h
0x4C3BF5: retn    0Ch
