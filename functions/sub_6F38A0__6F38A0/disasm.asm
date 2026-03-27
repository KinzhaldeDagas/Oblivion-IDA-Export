0x6F38A0: push    ebp
0x6F38A1: mov     ebp, esp
0x6F38A3: push    0FFFFFFFFh
0x6F38A5: push    offset SEH_6F38A0
0x6F38AA: mov     eax, large fs:0
0x6F38B0: push    eax
0x6F38B1: sub     esp, 38h
0x6F38B4: mov     eax, ds:0B30AACh
0x6F38B9: xor     eax, ebp
0x6F38BB: mov     [ebp+var_14], eax
0x6F38BE: push    ebx
0x6F38BF: push    esi
0x6F38C0: push    edi
0x6F38C1: push    eax
0x6F38C2: lea     eax, [ebp+var_C]
0x6F38C5: mov     large fs:0, eax
0x6F38CB: mov     [ebp+var_10], esp
0x6F38CE: mov     eax, [ebp+arg_C]
0x6F38D1: mov     esi, ecx
0x6F38D3: mov     ecx, [eax]
0x6F38D5: xor     ebx, ebx
0x6F38D7: push    0FFFFFFFFh
0x6F38D9: push    ebx
0x6F38DA: add     eax, 4
0x6F38DD: mov     [ebp+var_34], ecx
0x6F38E0: push    eax
0x6F38E1: lea     ecx, [ebp+var_30]
0x6F38E4: mov     [ebp+var_40], esi
0x6F38E7: mov     [ebp+var_18], 0Fh
0x6F38EE: mov     [ebp+var_1C], ebx
0x6F38F1: mov     byte ptr [ebp+var_2C], bl
0x6F38F4: call    sub_414420
0x6F38F9: mov     eax, [esi+4]
0x6F38FC: cmp     eax, ebx
0x6F38FE: mov     [ebp+var_4], ebx
0x6F3901: jz      short loc_6F390B
0x6F3903: mov     ebx, [esi+0Ch]
0x6F3906: sub     ebx, eax
0x6F3908: sar     ebx, 5
0x6F390B: mov     edi, [ebp+arg_8]
0x6F390E: test    edi, edi
0x6F3910: jz      loc_6F3B20
0x6F3916: test    eax, eax
0x6F3918: jnz     short loc_6F391E
0x6F391A: xor     ecx, ecx
0x6F391C: jmp     short loc_6F3926
0x6F391E: mov     ecx, [esi+8]
0x6F3921: sub     ecx, eax
0x6F3923: sar     ecx, 5
0x6F3926: mov     edx, 7FFFFFFh
0x6F392B: sub     edx, ecx
0x6F392D: cmp     edx, edi
0x6F392F: jnb     short loc_6F3936
0x6F3931: call    sub_790B90
0x6F3936: test    eax, eax
0x6F3938: jnz     short loc_6F393E
0x6F393A: xor     ecx, ecx
0x6F393C: jmp     short loc_6F3946
0x6F393E: mov     ecx, [esi+8]
0x6F3941: sub     ecx, eax
0x6F3943: sar     ecx, 5
0x6F3946: add     ecx, edi
0x6F3948: cmp     ebx, ecx
0x6F394A: jnb     loc_6F3A5F
0x6F3950: mov     ecx, ebx
0x6F3952: shr     ecx, 1
0x6F3954: mov     edx, 7FFFFFFh
0x6F3959: sub     edx, ecx
0x6F395B: cmp     edx, ebx
0x6F395D: jnb     short loc_6F3963
0x6F395F: xor     ebx, ebx
0x6F3961: jmp     short loc_6F3965
0x6F3963: add     ebx, ecx
0x6F3965: test    eax, eax
0x6F3967: jnz     short loc_6F396D
0x6F3969: xor     ecx, ecx
0x6F396B: jmp     short loc_6F3975
0x6F396D: mov     ecx, [esi+8]
0x6F3970: sub     ecx, eax
0x6F3972: sar     ecx, 5
0x6F3975: add     ecx, edi
0x6F3977: cmp     ebx, ecx
0x6F3979: jnb     short loc_6F398D
0x6F397B: test    eax, eax
0x6F397D: jnz     short loc_6F3983
0x6F397F: xor     ebx, ebx
0x6F3981: jmp     short loc_6F398B
0x6F3983: mov     ebx, [esi+8]
0x6F3986: sub     ebx, eax
0x6F3988: sar     ebx, 5
0x6F398B: add     ebx, edi
0x6F398D: push    0
0x6F398F: push    ebx; char *
0x6F3990: call    sub_5563E0
0x6F3995: mov     ecx, [esi+4]
0x6F3998: mov     byte ptr [ebp+var_38], 0
0x6F399C: mov     edx, [ebp+var_38]
0x6F399F: push    edx
0x6F39A0: mov     edx, [ebp+var_38]
0x6F39A3: push    edx
0x6F39A4: push    esi
0x6F39A5: push    eax
0x6F39A6: mov     [ebp+var_44], eax
0x6F39A9: mov     [ebp+var_3C], eax
0x6F39AC: mov     eax, [ebp+arg_4]
0x6F39AF: push    eax
0x6F39B0: push    ecx
0x6F39B1: mov     byte ptr [ebp+var_4], 1
0x6F39B5: call    sub_6F1800
0x6F39BA: add     esp, 20h
0x6F39BD: lea     ecx, [ebp+var_34]
0x6F39C0: push    ecx
0x6F39C1: push    edi
0x6F39C2: push    eax
0x6F39C3: mov     ecx, esi
0x6F39C5: mov     [ebp+var_3C], eax
0x6F39C8: call    sub_6F3040
0x6F39CD: mov     ecx, [esi+8]
0x6F39D0: mov     byte ptr [ebp+var_38], 0
0x6F39D4: mov     edx, [ebp+var_38]
0x6F39D7: push    edx
0x6F39D8: mov     edx, [ebp+var_38]
0x6F39DB: push    edx
0x6F39DC: push    esi
0x6F39DD: push    eax
0x6F39DE: mov     [ebp+var_3C], eax
0x6F39E1: mov     eax, [ebp+arg_4]
0x6F39E4: push    ecx
0x6F39E5: push    eax
0x6F39E6: call    sub_6F1800
0x6F39EB: mov     ecx, [esi+4]
0x6F39EE: add     esp, 18h
0x6F39F1: test    ecx, ecx
0x6F39F3: jnz     short loc_6F39F9
0x6F39F5: xor     eax, eax
0x6F39F7: jmp     short loc_6F3A01
0x6F39F9: mov     eax, [esi+8]
0x6F39FC: sub     eax, ecx
0x6F39FE: sar     eax, 5
0x6F3A01: add     edi, eax
0x6F3A03: test    ecx, ecx
0x6F3A05: jz      short loc_6F3A22
0x6F3A07: mov     edx, [ebp+var_38]
0x6F3A0A: mov     eax, [esi+8]
0x6F3A0D: push    edx
0x6F3A0E: push    esi
0x6F3A0F: push    eax
0x6F3A10: push    ecx
0x6F3A11: call    sub_557030
0x6F3A16: mov     ecx, [esi+4]
0x6F3A19: push    ecx
0x6F3A1A: call    FormHeapFree
0x6F3A1F: add     esp, 14h
0x6F3A22: mov     eax, [ebp+var_44]
0x6F3A25: shl     ebx, 5
0x6F3A28: add     ebx, eax
0x6F3A2A: shl     edi, 5
0x6F3A2D: add     edi, eax
0x6F3A2F: mov     [esi+0Ch], ebx
0x6F3A32: mov     [esi+8], edi
0x6F3A35: mov     [esi+4], eax
0x6F3A38: jmp     loc_6F3B20
0x6F3A3D: mov     edx, [ebp+var_3C]
0x6F3A40: mov     esi, [ebp+var_44]
0x6F3A43: mov     ecx, [ebp+var_40]
0x6F3A46: push    edx
0x6F3A47: push    esi
0x6F3A48: call    sub_5576E0
0x6F3A4D: push    esi
0x6F3A4E: call    FormHeapFree
0x6F3A53: add     esp, 4
0x6F3A56: push    0
0x6F3A58: push    0
0x6F3A5A: call    ThrowException??
0x6F3A5F: mov     eax, [esi+8]
0x6F3A62: mov     ebx, [ebp+arg_4]
0x6F3A65: mov     ecx, eax
0x6F3A67: sub     ecx, ebx
0x6F3A69: sar     ecx, 5
0x6F3A6C: cmp     ecx, edi
0x6F3A6E: mov     [ebp+var_38], eax
0x6F3A71: jnb     short loc_6F3AE9
0x6F3A73: mov     ecx, edi
0x6F3A75: shl     ecx, 5
0x6F3A78: mov     [ebp+var_3C], ecx
0x6F3A7B: add     ecx, ebx
0x6F3A7D: push    ecx
0x6F3A7E: push    eax
0x6F3A7F: push    ebx
0x6F3A80: mov     ecx, esi
0x6F3A82: call    sub_6F3590
0x6F3A87: mov     eax, [esi+8]
0x6F3A8A: mov     ecx, eax
0x6F3A8C: sub     ecx, ebx
0x6F3A8E: sar     ecx, 5
0x6F3A91: lea     edx, [ebp+var_34]
0x6F3A94: push    edx
0x6F3A95: sub     edi, ecx
0x6F3A97: push    edi
0x6F3A98: push    eax
0x6F3A99: mov     ecx, esi
0x6F3A9B: mov     byte ptr [ebp+var_4], 3
0x6F3A9F: call    sub_6F3040
0x6F3AA4: mov     eax, [ebp+var_3C]
0x6F3AA7: add     [esi+8], eax
0x6F3AAA: mov     esi, [esi+8]
0x6F3AAD: lea     edx, [ebp+var_34]
0x6F3AB0: push    edx
0x6F3AB1: sub     esi, eax
0x6F3AB3: push    esi
0x6F3AB4: push    ebx
0x6F3AB5: mov     [ebp+var_4], 0
0x6F3ABC: call    sub_6F2460
0x6F3AC1: add     esp, 0Ch
0x6F3AC4: jmp     short loc_6F3B20
0x6F3AC6: mov     ecx, [ebp+var_40]
0x6F3AC9: mov     eax, [ebp+arg_8]
0x6F3ACC: mov     edx, [ecx+8]
0x6F3ACF: shl     eax, 5
0x6F3AD2: add     edx, eax
0x6F3AD4: push    edx
0x6F3AD5: mov     edx, [ebp+arg_4]
0x6F3AD8: add     eax, edx
0x6F3ADA: push    eax
0x6F3ADB: call    sub_5576E0
0x6F3AE0: push    0
0x6F3AE2: push    0
0x6F3AE4: call    ThrowException??
0x6F3AE9: shl     edi, 5
0x6F3AEC: mov     ecx, edi
0x6F3AEE: push    eax
0x6F3AEF: mov     edi, eax
0x6F3AF1: sub     edi, ecx
0x6F3AF3: push    eax
0x6F3AF4: mov     [ebp+var_3C], ecx
0x6F3AF7: push    edi
0x6F3AF8: mov     ecx, esi
0x6F3AFA: call    sub_6F3590
0x6F3AFF: mov     [esi+8], eax
0x6F3B02: mov     eax, [ebp+var_38]
0x6F3B05: push    eax
0x6F3B06: push    edi
0x6F3B07: push    ebx
0x6F3B08: call    sub_6F35C0
0x6F3B0D: mov     edx, [ebp+var_3C]
0x6F3B10: lea     ecx, [ebp+var_34]
0x6F3B13: push    ecx
0x6F3B14: add     edx, ebx
0x6F3B16: push    edx
0x6F3B17: push    ebx
0x6F3B18: call    sub_6F2460
0x6F3B1D: add     esp, 18h
0x6F3B20: cmp     [ebp+var_18], 10h
0x6F3B24: jb      short loc_6F3B32
0x6F3B26: mov     eax, [ebp+var_2C]
0x6F3B29: push    eax
0x6F3B2A: call    FormHeapFree
0x6F3B2F: add     esp, 4
0x6F3B32: mov     ecx, [ebp+var_C]
0x6F3B35: mov     large fs:0, ecx
0x6F3B3C: pop     ecx
0x6F3B3D: pop     edi
0x6F3B3E: pop     esi
0x6F3B3F: pop     ebx
0x6F3B40: mov     ecx, [ebp+var_14]
0x6F3B43: xor     ecx, ebp
0x6F3B45: call    @__security_check_cookie@4; __security_check_cookie(x)
0x6F3B4A: mov     esp, ebp
0x6F3B4C: pop     ebp
0x6F3B4D: retn    10h
