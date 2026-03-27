0x79C490: sub     esp, 38h
0x79C493: mov     eax, [esp+38h+arg_0]
0x79C497: fld     [esp+38h+arg_30]
0x79C49B: mov     edx, [esp+38h+arg_8]
0x79C49F: push    ebx
0x79C4A0: mov     ebx, ecx
0x79C4A2: mov     ecx, [esp+3Ch+arg_4]
0x79C4A6: push    esi
0x79C4A7: push    edi
0x79C4A8: mov     [esp+44h+var_38], eax
0x79C4AC: mov     eax, [esp+44h+arg_34]
0x79C4B0: mov     [esp+44h+var_34], ecx
0x79C4B4: mov     ecx, 9
0x79C4B9: lea     esi, [esp+44h+arg_C]
0x79C4BD: lea     edi, [esp+44h+var_2C]
0x79C4C1: mov     [esp+44h+var_30], edx
0x79C4C5: rep movsd
0x79C4C7: fstp    [esp+44h+var_8]
0x79C4CB: mov     [esp+44h+var_4], eax
0x79C4CF: mov     eax, [ebx+0Ch]
0x79C4D2: test    eax, eax
0x79C4D4: jz      short loc_79C4EC
0x79C4D6: mov     ecx, [ebx+10h]
0x79C4D9: sub     ecx, eax
0x79C4DB: mov     eax, 2AAAAAABh
0x79C4E0: imul    ecx
0x79C4E2: sar     edx, 3
0x79C4E5: mov     eax, edx
0x79C4E7: shr     eax, 1Fh
0x79C4EA: add     eax, edx
0x79C4EC: lea     esi, [eax-1]
0x79C4EF: mov     eax, [ebx+0Ch]
0x79C4F2: test    eax, eax
0x79C4F4: jz      short loc_79C510
0x79C4F6: mov     ecx, [ebx+10h]
0x79C4F9: sub     ecx, eax
0x79C4FB: mov     eax, 2AAAAAABh
0x79C500: imul    ecx
0x79C502: sar     edx, 3
0x79C505: mov     eax, edx
0x79C507: shr     eax, 1Fh
0x79C50A: add     eax, edx
0x79C50C: cmp     esi, eax
0x79C50E: jb      short loc_79C515
0x79C510: call    __invalid_parameter_noinfo
0x79C515: lea     ecx, [esp+44h+var_38]
0x79C519: push    ecx
0x79C51A: lea     ecx, [esi+esi*2]
0x79C51D: shl     ecx, 4
0x79C520: add     ecx, [ebx+0Ch]
0x79C523: call    sub_79BD20
0x79C528: pop     edi
0x79C529: pop     esi
0x79C52A: pop     ebx
0x79C52B: add     esp, 38h
0x79C52E: retn    38h ; '8'
