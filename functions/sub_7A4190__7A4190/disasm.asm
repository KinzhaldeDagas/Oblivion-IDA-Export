0x7A4190: push    0FFFFFFFFh
0x7A4192: push    offset SEH_7A4190
0x7A4197: mov     eax, large fs:0
0x7A419D: push    eax
0x7A419E: sub     esp, 54h
0x7A41A1: push    ebx
0x7A41A2: push    ebp
0x7A41A3: push    esi
0x7A41A4: push    edi
0x7A41A5: mov     eax, ds:0B30AACh
0x7A41AA: xor     eax, esp
0x7A41AC: push    eax
0x7A41AD: lea     eax, [esp+74h+var_C]
0x7A41B1: mov     large fs:0, eax
0x7A41B7: mov     edi, [ecx+68h]
0x7A41BA: cmp     [ecx+64h], edi
0x7A41BD: lea     esi, [ecx+60h]
0x7A41C0: jbe     short loc_7A41C7
0x7A41C2: call    __invalid_parameter_noinfo
0x7A41C7: mov     ebx, [esi+4]
0x7A41CA: cmp     ebx, [esi+8]
0x7A41CD: jbe     short loc_7A41D4
0x7A41CF: call    __invalid_parameter_noinfo
0x7A41D4: push    edi; Src
0x7A41D5: push    esi; int
0x7A41D6: push    ebx; Dst
0x7A41D7: push    esi; int
0x7A41D8: lea     eax, [esp+84h+var_60]
0x7A41DC: push    eax; int
0x7A41DD: mov     ecx, esi
0x7A41DF: call    sub_439050
0x7A41E4: mov     ebp, [esp+74h+arg_0]
0x7A41E8: mov     ecx, ebp
0x7A41EA: call    sub_78EB40
0x7A41EF: xor     ebx, ebx
0x7A41F1: cmp     eax, ebx
0x7A41F3: jle     short loc_7A4263
0x7A41F5: mov     [esp+74h+arg_0], eax
0x7A41F9: lea     esp, [esp+0]
0x7A4200: push    ebp
0x7A4201: call    sub_7A7900
0x7A4206: mov     ecx, [esi+4]
0x7A4209: add     esp, 4
0x7A420C: cmp     ecx, ebx
0x7A420E: mov     [esp+74h+var_60], eax
0x7A4212: jnz     short loc_7A4218
0x7A4214: xor     edi, edi
0x7A4216: jmp     short loc_7A4220
0x7A4218: mov     edi, [esi+8]
0x7A421B: sub     edi, ecx
0x7A421D: sar     edi, 2
0x7A4220: cmp     ecx, ebx
0x7A4222: jz      short loc_7A423D
0x7A4224: mov     edx, [esi+0Ch]
0x7A4227: sub     edx, ecx
0x7A4229: sar     edx, 2
0x7A422C: cmp     edi, edx
0x7A422E: jnb     short loc_7A423D
0x7A4230: mov     ecx, [esi+8]
0x7A4233: mov     [ecx], eax
0x7A4235: add     ecx, 4
0x7A4238: mov     [esi+8], ecx
0x7A423B: jmp     short loc_7A425C
0x7A423D: mov     edi, [esi+8]
0x7A4240: cmp     ecx, edi
0x7A4242: jbe     short loc_7A4249
0x7A4244: call    __invalid_parameter_noinfo
0x7A4249: lea     ecx, [esp+74h+var_60]
0x7A424D: push    ecx; int
0x7A424E: push    edi; Src
0x7A424F: push    esi; int
0x7A4250: lea     edx, [esp+80h+var_58]
0x7A4254: push    edx; int
0x7A4255: mov     ecx, esi
0x7A4257: call    sub_7A3620
0x7A425C: sub     [esp+74h+arg_0], 1
0x7A4261: jnz     short loc_7A4200
0x7A4263: mov     ecx, ebp
0x7A4265: call    sub_78EB40
0x7A426A: cmp     eax, 3F7h
0x7A426F: jz      short loc_7A42B3
0x7A4271: push    15h; MaxCount
0x7A4273: push    offset aMalformedBranc; "malformed branch data"
0x7A4278: lea     ecx, [esp+7Ch+var_50]
0x7A427C: mov     [esp+7Ch+var_38], 0Fh
0x7A4284: mov     [esp+7Ch+var_3C], ebx
0x7A4288: mov     [esp+7Ch+var_4C], bl
0x7A428C: call    sub_414500
0x7A4291: push    ebx
0x7A4292: lea     eax, [esp+78h+var_50]
0x7A4296: push    eax
0x7A4297: lea     ecx, [esp+7Ch+var_34]
0x7A429B: mov     [esp+7Ch+var_4], ebx
0x7A429F: call    sub_789190
0x7A42A4: push    offset __TI3?AVIdvFileError@@; throw info for 'class IdvFileError'
0x7A42A9: lea     ecx, [esp+78h+var_34]
0x7A42AD: push    ecx
0x7A42AE: call    ThrowException??
0x7A42B3: mov     ecx, [esp+74h+var_C]
0x7A42B7: mov     large fs:0, ecx
0x7A42BE: pop     ecx
0x7A42BF: pop     edi
0x7A42C0: pop     esi
0x7A42C1: pop     ebp
0x7A42C2: pop     ebx
0x7A42C3: add     esp, 60h
0x7A42C6: retn    4
