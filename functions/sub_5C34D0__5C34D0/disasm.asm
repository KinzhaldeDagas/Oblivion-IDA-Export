0x5C34D0: push    0FFFFFFFFh
0x5C34D2: push    offset SEH_5C34D0
0x5C34D7: mov     eax, large fs:0
0x5C34DD: push    eax
0x5C34DE: sub     esp, 10h
0x5C34E1: push    ebx
0x5C34E2: push    ebp; a3
0x5C34E3: push    esi; a3
0x5C34E4: push    edi; a3
0x5C34E5: mov     eax, ds:0B30AACh
0x5C34EA: xor     eax, esp
0x5C34EC: push    eax; a3
0x5C34ED: lea     eax, [esp+30h+var_C]
0x5C34F1: mov     large fs:0, eax
0x5C34F7: mov     edi, ecx
0x5C34F9: mov     ecx, ds:0B333C4h
0x5C34FF: mov     eax, [ecx]
0x5C3501: mov     edx, [eax+170h]
0x5C3507: call    edx
0x5C3509: mov     ecx, [eax+1C8h]
0x5C350F: call    sub_51FE90
0x5C3514: xor     esi, esi
0x5C3516: test    al, al
0x5C3518: jz      loc_5C3700
0x5C351E: mov     eax, ds:0B39330h
0x5C3523: sub     esp, 8
0x5C3526: mov     ecx, esp; this
0x5C3528: mov     [esp+38h+var_10], esp
0x5C352C: push    esi; a3
0x5C352D: push    eax; a2
0x5C352E: mov     [ecx], esi
0x5C3530: mov     [ecx+4], si
0x5C3534: mov     [ecx+6], si
0x5C3538: call    BSStringT_Set
0x5C353D: mov     eax, ds:0B38F88h
0x5C3542: sub     esp, 8
0x5C3545: mov     ecx, esp; this
0x5C3547: mov     [esp+40h+var_14], esp
0x5C354B: push    esi; a3
0x5C354C: push    eax; a2
0x5C354D: mov     [esp+48h+var_4], esi
0x5C3551: mov     [ecx], esi
0x5C3553: mov     [ecx+4], si
0x5C3557: mov     [ecx+6], si
0x5C355B: call    BSStringT_Set
0x5C3560: or      ebx, 0FFFFFFFFh
0x5C3563: mov     ecx, edi
0x5C3565: mov     [esp+40h+var_4], ebx
0x5C3569: call    sub_5C3440
0x5C356E: fld1
0x5C3570: push    ecx
0x5C3571: fstp    [esp+34h+a2]; a3
0x5C3574: push    0FBBh; a2
0x5C3579: mov     ecx, eax; this
0x5C357B: call    Tile_SetFloat
0x5C3580: mov     eax, ds:0B39330h
0x5C3585: push    offset word_A36430; int
0x5C358A: push    0FB4h; unsigned __int8 *
0x5C358F: sub     esp, 8
0x5C3592: mov     ecx, esp; this
0x5C3594: mov     [esp+40h+var_10], esp
0x5C3598: push    esi; a3
0x5C3599: push    eax; a2
0x5C359A: mov     [ecx], esi
0x5C359C: mov     [ecx+4], si
0x5C35A0: mov     [ecx+6], si
0x5C35A4: call    BSStringT_Set
0x5C35A9: mov     eax, ds:0B38F88h
0x5C35AE: sub     esp, 8
0x5C35B1: mov     ecx, esp; this
0x5C35B3: mov     [esp+48h+var_14], esp
0x5C35B7: push    esi; a3
0x5C35B8: push    eax; a2
0x5C35B9: mov     [esp+50h+var_4], 1
0x5C35C1: mov     [ecx], esi
0x5C35C3: mov     [ecx+4], si
0x5C35C7: mov     [ecx+6], si
0x5C35CB: call    BSStringT_Set
0x5C35D0: mov     ecx, edi
0x5C35D2: mov     [esp+48h+var_4], ebx
0x5C35D6: call    sub_5C3440
0x5C35DB: mov     ecx, eax
0x5C35DD: call    Tile_SetString
0x5C35E2: mov     eax, ds:0B38FC0h
0x5C35E7: sub     esp, 8
0x5C35EA: mov     ecx, esp; this
0x5C35EC: mov     [esp+38h+var_10], esp
0x5C35F0: push    esi; a3
0x5C35F1: push    eax; a2
0x5C35F2: mov     [ecx], esi
0x5C35F4: mov     [ecx+4], si
0x5C35F8: mov     [ecx+6], si
0x5C35FC: call    BSStringT_Set
0x5C3601: mov     eax, ds:0B38F88h
0x5C3606: sub     esp, 8
0x5C3609: mov     ecx, esp; this
0x5C360B: mov     [esp+40h+var_14], esp
0x5C360F: mov     [esp+40h+var_4], 2
0x5C3617: mov     [ecx], esi
0x5C3619: mov     [ecx+4], si
0x5C361D: mov     [ecx+6], si
0x5C3621: push    esi; a3
0x5C3622: push    eax; a2
0x5C3623: call    BSStringT_Set
0x5C3628: mov     ecx, edi
0x5C362A: mov     [esp+40h+var_4], ebx
0x5C362E: call    sub_5C3440
0x5C3633: fld1
0x5C3635: push    ecx
0x5C3636: fstp    [esp+34h+a2]; a3
0x5C3639: push    0FBBh; a2
0x5C363E: mov     ecx, eax; this
0x5C3640: call    Tile_SetFloat
0x5C3645: mov     eax, ds:0B38FC8h
0x5C364A: sub     esp, 8
0x5C364D: mov     ecx, esp; this
0x5C364F: mov     [esp+38h+var_10], esp
0x5C3653: push    esi; a3
0x5C3654: push    eax; a2
0x5C3655: mov     [ecx], esi
0x5C3657: mov     [ecx+4], si
0x5C365B: mov     [ecx+6], si
0x5C365F: call    BSStringT_Set
0x5C3664: mov     eax, ds:0B38F88h
0x5C3669: sub     esp, 8
0x5C366C: mov     ecx, esp; this
0x5C366E: mov     [esp+40h+var_14], esp
0x5C3672: push    esi; a3
0x5C3673: push    eax; a2
0x5C3674: mov     [esp+48h+var_4], 3
0x5C367C: mov     [ecx], esi
0x5C367E: mov     [ecx+4], si
0x5C3682: mov     [ecx+6], si
0x5C3686: call    BSStringT_Set
0x5C368B: mov     ecx, edi
0x5C368D: mov     [esp+40h+var_4], ebx
0x5C3691: call    sub_5C3440
0x5C3696: fld1
0x5C3698: push    ecx
0x5C3699: fstp    [esp+34h+a2]; a3
0x5C369C: push    0FBBh; a2
0x5C36A1: mov     ecx, eax; this
0x5C36A3: call    Tile_SetFloat
0x5C36A8: mov     eax, ds:0B38FD0h
0x5C36AD: sub     esp, 8
0x5C36B0: mov     ecx, esp; this
0x5C36B2: mov     [esp+38h+var_10], esp
0x5C36B6: push    esi; a3
0x5C36B7: push    eax; a2
0x5C36B8: mov     [ecx], esi
0x5C36BA: mov     [ecx+4], si
0x5C36BE: mov     [ecx+6], si
0x5C36C2: call    BSStringT_Set
0x5C36C7: mov     eax, ds:0B38F88h
0x5C36CC: sub     esp, 8
0x5C36CF: mov     ecx, esp; this
0x5C36D1: mov     [esp+40h+var_14], esp
0x5C36D5: push    esi; a3
0x5C36D6: push    eax; a2
0x5C36D7: mov     [esp+48h+var_4], 4
0x5C36DF: mov     [ecx], esi
0x5C36E1: mov     [ecx+4], si
0x5C36E5: mov     [ecx+6], si
0x5C36E9: call    BSStringT_Set
0x5C36EE: mov     ecx, edi
0x5C36F0: mov     [esp+40h+var_4], ebx
0x5C36F4: call    sub_5C3440
0x5C36F9: fld1
0x5C36FB: jmp     loc_5C3BAE
0x5C3700: mov     eax, ds:0B38FC0h
0x5C3705: push    0FAEh
0x5C370A: sub     esp, 8
0x5C370D: mov     ecx, esp; this
0x5C370F: mov     [esp+3Ch+var_10], esp
0x5C3713: push    esi; a3
0x5C3714: push    eax; a2
0x5C3715: mov     [ecx], esi
0x5C3717: mov     [ecx+4], si
0x5C371B: mov     [ecx+6], si
0x5C371F: call    BSStringT_Set
0x5C3724: mov     eax, ds:0B38F88h
0x5C3729: sub     esp, 8
0x5C372C: mov     ecx, esp; this
0x5C372E: mov     [esp+44h+var_14], esp
0x5C3732: push    esi; a3
0x5C3733: push    eax; a2
0x5C3734: mov     [esp+4Ch+var_4], 5
0x5C373C: mov     [ecx], esi
0x5C373E: mov     [ecx+4], si
0x5C3742: mov     [ecx+6], si
0x5C3746: call    BSStringT_Set
0x5C374B: or      ebx, 0FFFFFFFFh
0x5C374E: mov     ecx, edi
0x5C3750: mov     [esp+44h+var_4], ebx
0x5C3754: call    sub_5C3440
0x5C3759: mov     ecx, eax
0x5C375B: call    Tile_GetFloat
0x5C3760: fstp    [esp+30h+var_10]
0x5C3764: mov     eax, ds:0B38FC8h
0x5C3769: push    0FAEh
0x5C376E: sub     esp, 8
0x5C3771: mov     ecx, esp; this
0x5C3773: mov     [esp+3Ch+var_14], esp
0x5C3777: push    esi; a3
0x5C3778: push    eax; a2
0x5C3779: mov     [ecx], esi
0x5C377B: mov     [ecx+4], si
0x5C377F: mov     [ecx+6], si
0x5C3783: call    BSStringT_Set
0x5C3788: mov     eax, ds:0B38F88h
0x5C378D: sub     esp, 8
0x5C3790: mov     ecx, esp; this
0x5C3792: mov     [esp+44h+var_18], esp
0x5C3796: push    esi; a3
0x5C3797: push    eax; a2
0x5C3798: mov     [esp+4Ch+var_4], 6
0x5C37A0: mov     [ecx], esi
0x5C37A2: mov     [ecx+4], si
0x5C37A6: mov     [ecx+6], si
0x5C37AA: call    BSStringT_Set
0x5C37AF: mov     ecx, edi
0x5C37B1: mov     [esp+44h+var_4], ebx
0x5C37B5: call    sub_5C3440
0x5C37BA: mov     ecx, eax
0x5C37BC: call    Tile_GetFloat
0x5C37C1: fstp    [esp+30h+var_14]
0x5C37C5: mov     eax, ds:0B38FD0h
0x5C37CA: push    0FAEh; int
0x5C37CF: sub     esp, 8
0x5C37D2: mov     ecx, esp; this
0x5C37D4: mov     [esp+3Ch+var_18], esp
0x5C37D8: push    esi; a3
0x5C37D9: push    eax; a2
0x5C37DA: mov     [ecx], esi
0x5C37DC: mov     [ecx+4], si
0x5C37E0: mov     [ecx+6], si
0x5C37E4: call    BSStringT_Set
0x5C37E9: mov     eax, ds:0B38F88h
0x5C37EE: sub     esp, 8
0x5C37F1: mov     ecx, esp; this
0x5C37F3: mov     [esp+44h+var_1C], esp
0x5C37F7: push    esi; a3
0x5C37F8: mov     [esp+48h+var_4], 7
0x5C3800: mov     [ecx], esi
0x5C3802: mov     [ecx+4], si
0x5C3806: mov     [ecx+6], si
0x5C380A: push    eax; a2
0x5C380B: call    BSStringT_Set
0x5C3810: mov     ecx, edi
0x5C3812: mov     [esp+44h+var_4], ebx
0x5C3816: call    sub_5C3440
0x5C381B: mov     ecx, eax
0x5C381D: call    Tile_GetFloat
0x5C3822: fstp    [esp+30h+var_1C]
0x5C3826: fld     [esp+30h+var_1C]
0x5C382A: xor     ecx, ecx
0x5C382C: fld     qword ptr ds:0A3DDD8h
0x5C3832: sub     esp, 8
0x5C3835: fnstcw  word ptr [esp+38h+var_1C]
0x5C3839: movzx   eax, word ptr [esp+38h+var_1C]
0x5C383E: fmul    st(1), st
0x5C3840: or      eax, 0C00h
0x5C3845: fxch    st(1)
0x5C3847: mov     [esp+38h+var_18], eax
0x5C384B: fldcw   word ptr [esp+38h+var_18]
0x5C384F: fistp   [esp+38h+var_18]
0x5C3853: movzx   eax, byte ptr [esp+38h+var_18]
0x5C3858: mov     ch, al
0x5C385A: fldcw   word ptr [esp+38h+var_1C]
0x5C385E: fld     [esp+38h+var_14]
0x5C3862: fnstcw  word ptr [esp+38h+var_1C]
0x5C3866: fmul    st, st(1)
0x5C3868: movzx   eax, word ptr [esp+38h+var_1C]
0x5C386D: or      eax, 0C00h
0x5C3872: mov     [esp+38h+var_14], eax
0x5C3876: fldcw   word ptr [esp+38h+var_14]
0x5C387A: fistp   [esp+38h+var_14]
0x5C387E: mov     dl, byte ptr [esp+38h+var_14]
0x5C3882: mov     cl, dl
0x5C3884: fldcw   word ptr [esp+38h+var_1C]
0x5C3888: shl     ecx, 8
0x5C388B: fmul    [esp+38h+var_10]
0x5C388F: fnstcw  word ptr [esp+38h+var_1C]
0x5C3893: movzx   eax, word ptr [esp+38h+var_1C]
0x5C3898: or      eax, 0C00h
0x5C389D: mov     [esp+38h+var_10], eax
0x5C38A1: fldcw   word ptr [esp+38h+var_10]
0x5C38A5: fistp   [esp+38h+var_10]
0x5C38A9: movzx   eax, byte ptr [esp+38h+var_10]
0x5C38AE: movzx   edx, al
0x5C38B1: mov     eax, ds:0B39330h
0x5C38B6: fldcw   word ptr [esp+38h+var_1C]
0x5C38BA: or      ecx, edx
0x5C38BC: mov     ebp, ecx
0x5C38BE: mov     ecx, esp; this
0x5C38C0: mov     [esp+38h+var_10], esp
0x5C38C4: push    esi; a3
0x5C38C5: push    eax; a2
0x5C38C6: mov     [ecx], esi
0x5C38C8: mov     [ecx+4], si
0x5C38CC: mov     [ecx+6], si
0x5C38D0: call    BSStringT_Set
0x5C38D5: mov     eax, ds:0B38F88h
0x5C38DA: sub     esp, 8
0x5C38DD: mov     ecx, esp; this
0x5C38DF: mov     [esp+40h+var_14], esp
0x5C38E3: push    esi; a3
0x5C38E4: push    eax; a2
0x5C38E5: mov     [esp+48h+var_4], 8
0x5C38ED: mov     [ecx], esi
0x5C38EF: mov     [ecx+4], si
0x5C38F3: mov     [ecx+6], si
0x5C38F7: call    BSStringT_Set
0x5C38FC: mov     ecx, edi
0x5C38FE: mov     [esp+40h+var_4], ebx
0x5C3902: call    sub_5C3440
0x5C3907: fld     dword ptr ds:0A379B4h
0x5C390D: push    ecx
0x5C390E: fstp    [esp+34h+a2]; a3
0x5C3911: push    0FBBh; a2
0x5C3916: mov     ecx, eax; this
0x5C3918: call    Tile_SetFloat
0x5C391D: mov     eax, ds:0B39330h
0x5C3922: push    0FAEh
0x5C3927: sub     esp, 8
0x5C392A: mov     [esp+3Ch+var_10], esp
0x5C392E: mov     ecx, esp; this
0x5C3930: push    esi; a3
0x5C3931: push    eax; a2
0x5C3932: mov     [ecx], esi
0x5C3934: mov     [ecx+4], si
0x5C3938: mov     [ecx+6], si
0x5C393C: call    BSStringT_Set
0x5C3941: mov     eax, ds:0B38F88h
0x5C3946: sub     esp, 8
0x5C3949: mov     ecx, esp; this
0x5C394B: mov     [esp+44h+var_14], esp
0x5C394F: push    esi; a3
0x5C3950: push    eax; a2
0x5C3951: mov     [esp+4Ch+var_4], 9
0x5C3959: mov     [ecx], esi
0x5C395B: mov     [ecx+4], si
0x5C395F: mov     [ecx+6], si
0x5C3963: call    BSStringT_Set
0x5C3968: mov     ecx, edi
0x5C396A: mov     [esp+44h+var_4], ebx
0x5C396E: call    sub_5C3440
0x5C3973: mov     ecx, eax
0x5C3975: call    Tile_GetFloat
0x5C397A: call    Double_To_SInt32
0x5C397F: cmp     ebp, [edi+eax*4+8F0h]
0x5C3986: jnz     loc_5C3A26
0x5C398C: mov     eax, ds:0B39330h
0x5C3991: push    0FAEh
0x5C3996: sub     esp, 8
0x5C3999: mov     ecx, esp; this
0x5C399B: mov     [esp+3Ch+var_10], esp
0x5C399F: push    esi; a3
0x5C39A0: push    eax; a2
0x5C39A1: mov     [ecx], esi
0x5C39A3: mov     [ecx+4], si
0x5C39A7: mov     [ecx+6], si
0x5C39AB: call    BSStringT_Set
0x5C39B0: mov     eax, ds:0B38F88h
0x5C39B5: sub     esp, 8
0x5C39B8: mov     ecx, esp; this
0x5C39BA: mov     [esp+44h+var_14], esp
0x5C39BE: push    esi; a3
0x5C39BF: push    eax; a2
0x5C39C0: mov     [esp+4Ch+var_4], 0Ah
0x5C39C8: mov     [ecx], esi
0x5C39CA: mov     [ecx+4], si
0x5C39CE: mov     [ecx+6], si
0x5C39D2: call    BSStringT_Set
0x5C39D7: mov     ecx, edi
0x5C39D9: mov     [esp+44h+var_4], ebx
0x5C39DD: call    sub_5C3440
0x5C39E2: mov     ecx, eax
0x5C39E4: call    Tile_GetFloat
0x5C39E9: call    Double_To_SInt32
0x5C39EE: lea     eax, [edi+eax*8+930h]
0x5C39F5: mov     eax, [eax]
0x5C39F7: push    eax
0x5C39F8: mov     eax, ds:0B39330h
0x5C39FD: push    0FB4h
0x5C3A02: sub     esp, 8
0x5C3A05: mov     ecx, esp; this
0x5C3A07: mov     [esp+40h+var_10], esp
0x5C3A0B: push    esi; a3
0x5C3A0C: push    eax; a2
0x5C3A0D: mov     [ecx], esi
0x5C3A0F: mov     [ecx+4], si
0x5C3A13: mov     [ecx+6], si
0x5C3A17: call    BSStringT_Set
0x5C3A1C: mov     [esp+40h+var_4], 0Bh
0x5C3A24: jmp     short loc_5C3A58
0x5C3A26: mov     eax, ds:0B394D8h
0x5C3A2B: push    eax; int
0x5C3A2C: mov     eax, ds:0B39330h
0x5C3A31: push    0FB4h; unsigned __int8 *
0x5C3A36: sub     esp, 8
0x5C3A39: mov     ecx, esp; this
0x5C3A3B: mov     [esp+40h+var_10], esp
0x5C3A3F: push    esi; a3
0x5C3A40: push    eax; a2
0x5C3A41: mov     [ecx], esi
0x5C3A43: mov     [ecx+4], si
0x5C3A47: mov     [ecx+6], si
0x5C3A4B: call    BSStringT_Set
0x5C3A50: mov     [esp+40h+var_4], 0Ch
0x5C3A58: mov     eax, ds:0B38F88h
0x5C3A5D: sub     esp, 8
0x5C3A60: mov     ecx, esp; this
0x5C3A62: mov     [esp+48h+var_14], esp
0x5C3A66: push    esi; a3
0x5C3A67: mov     [ecx], esi
0x5C3A69: mov     [ecx+4], si
0x5C3A6D: push    eax; a2
0x5C3A6E: mov     [ecx+6], si
0x5C3A72: call    BSStringT_Set
0x5C3A77: mov     ecx, edi
0x5C3A79: mov     [esp+48h+var_4], ebx
0x5C3A7D: call    sub_5C3440
0x5C3A82: mov     ecx, eax
0x5C3A84: call    Tile_SetString
0x5C3A89: mov     eax, ds:0B38FC0h
0x5C3A8E: sub     esp, 8
0x5C3A91: mov     ecx, esp; this
0x5C3A93: mov     [esp+38h+var_10], esp
0x5C3A97: push    esi; a3
0x5C3A98: push    eax; a2
0x5C3A99: mov     [ecx], esi
0x5C3A9B: mov     [ecx+4], si
0x5C3A9F: mov     [ecx+6], si
0x5C3AA3: call    BSStringT_Set
0x5C3AA8: mov     eax, ds:0B38F88h
0x5C3AAD: sub     esp, 8
0x5C3AB0: mov     ecx, esp; this
0x5C3AB2: mov     [esp+40h+var_14], esp
0x5C3AB6: push    esi; a3
0x5C3AB7: push    eax; a2
0x5C3AB8: mov     [esp+48h+var_4], 0Dh
0x5C3AC0: mov     [ecx], esi
0x5C3AC2: mov     [ecx+4], si
0x5C3AC6: mov     [ecx+6], si
0x5C3ACA: call    BSStringT_Set
0x5C3ACF: mov     ecx, edi
0x5C3AD1: mov     [esp+40h+var_4], ebx
0x5C3AD5: call    sub_5C3440
0x5C3ADA: fld     dword ptr ds:0A379B4h
0x5C3AE0: push    ecx
0x5C3AE1: fstp    [esp+34h+a2]; a3
0x5C3AE4: push    0FBBh; a2
0x5C3AE9: mov     ecx, eax; this
0x5C3AEB: call    Tile_SetFloat
0x5C3AF0: mov     eax, ds:0B38FC8h
0x5C3AF5: sub     esp, 8
0x5C3AF8: mov     ecx, esp; this
0x5C3AFA: mov     [esp+38h+var_10], esp
0x5C3AFE: push    esi; a3
0x5C3AFF: push    eax; a2
0x5C3B00: mov     [ecx], esi
0x5C3B02: mov     [ecx+4], si
0x5C3B06: mov     [ecx+6], si
0x5C3B0A: call    BSStringT_Set
0x5C3B0F: mov     eax, ds:0B38F88h
0x5C3B14: sub     esp, 8
0x5C3B17: mov     ecx, esp; this
0x5C3B19: mov     [esp+40h+var_14], esp
0x5C3B1D: push    esi; a3
0x5C3B1E: push    eax; a2
0x5C3B1F: mov     [esp+48h+var_4], 0Eh
0x5C3B27: mov     [ecx], esi
0x5C3B29: mov     [ecx+4], si
0x5C3B2D: mov     [ecx+6], si
0x5C3B31: call    BSStringT_Set
0x5C3B36: mov     ecx, edi
0x5C3B38: mov     [esp+40h+var_4], ebx
0x5C3B3C: call    sub_5C3440
0x5C3B41: fld     dword ptr ds:0A379B4h
0x5C3B47: push    ecx
0x5C3B48: fstp    [esp+34h+a2]; a3
0x5C3B4B: push    0FBBh; a2
0x5C3B50: mov     ecx, eax; this
0x5C3B52: call    Tile_SetFloat
0x5C3B57: mov     eax, ds:0B38FD0h
0x5C3B5C: sub     esp, 8
0x5C3B5F: mov     [esp+38h+var_10], esp
0x5C3B63: mov     ecx, esp; this
0x5C3B65: push    esi; a3
0x5C3B66: push    eax; a2
0x5C3B67: mov     [ecx], esi
0x5C3B69: mov     [ecx+4], si
0x5C3B6D: mov     [ecx+6], si
0x5C3B71: call    BSStringT_Set
0x5C3B76: mov     eax, ds:0B38F88h
0x5C3B7B: sub     esp, 8
0x5C3B7E: mov     ecx, esp; this
0x5C3B80: mov     [esp+40h+var_14], esp
0x5C3B84: push    esi; a3
0x5C3B85: push    eax; a2
0x5C3B86: mov     [esp+48h+var_4], 0Fh
0x5C3B8E: mov     [ecx], esi
0x5C3B90: mov     [ecx+4], si
0x5C3B94: mov     [ecx+6], si
0x5C3B98: call    BSStringT_Set
0x5C3B9D: mov     ecx, edi
0x5C3B9F: mov     [esp+40h+var_4], ebx
0x5C3BA3: call    sub_5C3440
0x5C3BA8: fld     dword ptr ds:0A379B4h
0x5C3BAE: push    ecx
0x5C3BAF: fstp    [esp+34h+a2]; a3
0x5C3BB2: push    0FBBh; a2
0x5C3BB7: mov     ecx, eax; this
0x5C3BB9: call    Tile_SetFloat
0x5C3BBE: mov     ecx, [esp+30h+var_C]
0x5C3BC2: mov     large fs:0, ecx
0x5C3BC9: pop     ecx
0x5C3BCA: pop     edi
0x5C3BCB: pop     esi
0x5C3BCC: pop     ebp
0x5C3BCD: pop     ebx
0x5C3BCE: add     esp, 1Ch
0x5C3BD1: retn
