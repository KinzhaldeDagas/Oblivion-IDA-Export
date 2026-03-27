0x7A3940: push    0FFFFFFFFh
0x7A3942: push    offset SEH_7A3940
0x7A3947: mov     eax, large fs:0
0x7A394D: push    eax
0x7A394E: sub     esp, 38h
0x7A3951: push    ebx
0x7A3952: push    ebp
0x7A3953: push    esi
0x7A3954: push    edi
0x7A3955: mov     eax, ds:0B30AACh
0x7A395A: xor     eax, esp
0x7A395C: push    eax
0x7A395D: lea     eax, [esp+58h+var_C]
0x7A3961: mov     large fs:0, eax
0x7A3967: mov     esi, ecx
0x7A3969: fld     dword ptr ds:0A30634h
0x7A396F: xor     edi, edi
0x7A3971: fstp    [esp+58h+var_44]
0x7A3975: xor     ebx, ebx
0x7A3977: jmp     short loc_7A3980
0x7A3979: align 10h
0x7A3980: mov     eax, [esi+98h]
0x7A3986: test    eax, eax
0x7A3988: jz      loc_7A3A32
0x7A398E: mov     ecx, [esi+9Ch]
0x7A3994: sub     ecx, eax
0x7A3996: mov     eax, 30C30C31h
0x7A399B: imul    ecx
0x7A399D: sar     edx, 4
0x7A39A0: mov     eax, edx
0x7A39A2: shr     eax, 1Fh
0x7A39A5: add     eax, edx
0x7A39A7: cmp     edi, eax
0x7A39A9: jnb     loc_7A3A32
0x7A39AF: mov     eax, [esi+98h]
0x7A39B5: test    eax, eax
0x7A39B7: jz      short loc_7A39D6
0x7A39B9: mov     ecx, [esi+9Ch]
0x7A39BF: sub     ecx, eax
0x7A39C1: mov     eax, 30C30C31h
0x7A39C6: imul    ecx
0x7A39C8: sar     edx, 4
0x7A39CB: mov     eax, edx
0x7A39CD: shr     eax, 1Fh
0x7A39D0: add     eax, edx
0x7A39D2: cmp     edi, eax
0x7A39D4: jb      short loc_7A39DB
0x7A39D6: call    __invalid_parameter_noinfo
0x7A39DB: mov     ecx, [esi+98h]
0x7A39E1: fld     dword ptr [ecx+ebx+48h]
0x7A39E5: add     ecx, ebx
0x7A39E7: fld     dword ptr [ecx+4Ch]
0x7A39EA: fcompp
0x7A39EC: fnstsw  ax
0x7A39EE: test    ah, 5
0x7A39F1: jp      short loc_7A39F8
0x7A39F3: fld     dword ptr [ecx+48h]
0x7A39F6: jmp     short loc_7A39FB
0x7A39F8: fld     dword ptr [ecx+4Ch]
0x7A39FB: fstp    [esp+58h+var_40]
0x7A39FF: fld     dword ptr [esi+0A4h]
0x7A3A05: fmul    [esp+58h+var_40]
0x7A3A09: fld     [esp+58h+var_44]
0x7A3A0D: fcomp   st(1)
0x7A3A0F: fnstsw  ax
0x7A3A11: test    ah, 5
0x7A3A14: jp      short loc_7A3A25
0x7A3A16: add     edi, 1
0x7A3A19: fstp    [esp+58h+var_44]
0x7A3A1D: add     ebx, 54h ; 'T'
0x7A3A20: jmp     loc_7A3980
0x7A3A25: add     edi, 1
0x7A3A28: fstp    st
0x7A3A2A: add     ebx, 54h ; 'T'
0x7A3A2D: jmp     loc_7A3980
0x7A3A32: fld     dword ptr ds:0A30634h
0x7A3A38: fcomp   [esp+58h+var_44]
0x7A3A3C: fnstsw  ax
0x7A3A3E: test    ah, 44h
0x7A3A41: jp      short loc_7A3A4D
0x7A3A43: fld     dword ptr ds:0A31C80h
0x7A3A49: fstp    [esp+58h+var_44]
0x7A3A4D: mov     ecx, [esi+0D4h]
0x7A3A53: test    ecx, ecx
0x7A3A55: jz      loc_7A3B5C
0x7A3A5B: lea     eax, [esi+74h]
0x7A3A5E: push    eax
0x7A3A5F: call    sub_79B2F0
0x7A3A64: mov     ebp, 1
0x7A3A69: cmp     [esi+0C0h], ebp
0x7A3A6F: mov     [esp+58h+var_40], ebp
0x7A3A73: jle     loc_7A3B5C
0x7A3A79: fld     [esp+58h+var_44]
0x7A3A7D: lea     ebx, [esi+84h]
0x7A3A83: fmul    qword ptr ds:0A3F3E8h
0x7A3A89: mov     edi, 10h
0x7A3A8E: fstp    [esp+58h+var_44]
0x7A3A92: fild    [esp+58h+var_40]
0x7A3A96: sub     esp, 0Ch
0x7A3A99: lea     ecx, [esp+64h+var_2C]
0x7A3A9D: fmul    [esp+64h+arg_0]
0x7A3AA1: fadd    qword ptr ds:0A2F928h
0x7A3AA7: fstp    [esp+64h+var_40]
0x7A3AAB: fld     [esp+64h+var_40]
0x7A3AAF: fstp    [esp+64h+var_5C]; float
0x7A3AB3: fld     dword ptr [esi+0E4h]
0x7A3AB9: fstp    [esp+64h+var_60]; float
0x7A3ABD: fld     [esp+64h+var_44]
0x7A3AC1: fstp    [esp+64h+var_64]; float
0x7A3AC4: push    ebx; int
0x7A3AC5: call    sub_7A8F00
0x7A3ACA: mov     ecx, [esi+0D4h]
0x7A3AD0: sub     esp, 10h
0x7A3AD3: lea     edx, [ecx+edi-10h]
0x7A3AD7: mov     ecx, esp
0x7A3AD9: mov     [esp+68h+var_40], esp
0x7A3ADD: push    edx
0x7A3ADE: mov     [esp+6Ch+var_4], 0
0x7A3AE6: call    sub_7A3580
0x7A3AEB: lea     eax, [esp+68h+var_3C]
0x7A3AEF: push    eax
0x7A3AF0: lea     ecx, [esp+6Ch+var_2C]
0x7A3AF4: call    sub_7A9740
0x7A3AF9: mov     ecx, [esi+0D4h]
0x7A3AFF: push    eax
0x7A3B00: add     ecx, edi
0x7A3B02: mov     byte ptr [esp+5Ch+var_4], 1
0x7A3B07: call    sub_79B2F0
0x7A3B0C: mov     eax, [esp+58h+var_38]
0x7A3B10: xor     ecx, ecx
0x7A3B12: cmp     eax, ecx
0x7A3B14: jz      short loc_7A3B21
0x7A3B16: push    eax
0x7A3B17: call    FormHeapFree
0x7A3B1C: add     esp, 4
0x7A3B1F: xor     ecx, ecx
0x7A3B21: mov     eax, [esp+58h+var_28]
0x7A3B25: cmp     eax, ecx
0x7A3B27: mov     [esp+58h+var_38], ecx
0x7A3B2B: mov     [esp+58h+var_34], ecx
0x7A3B2F: mov     [esp+58h+var_30], ecx
0x7A3B33: mov     [esp+58h+var_4], 0FFFFFFFFh
0x7A3B3B: jz      short loc_7A3B46
0x7A3B3D: push    eax
0x7A3B3E: call    FormHeapFree
0x7A3B43: add     esp, 4
0x7A3B46: add     ebp, 1
0x7A3B49: add     edi, 10h
0x7A3B4C: cmp     ebp, [esi+0C0h]
0x7A3B52: mov     [esp+58h+var_40], ebp
0x7A3B56: jl      loc_7A3A92
0x7A3B5C: mov     ecx, [esp+58h+var_C]
0x7A3B60: mov     large fs:0, ecx
0x7A3B67: pop     ecx
0x7A3B68: pop     edi
0x7A3B69: pop     esi
0x7A3B6A: pop     ebp
0x7A3B6B: pop     ebx
0x7A3B6C: add     esp, 44h
0x7A3B6F: retn    4
