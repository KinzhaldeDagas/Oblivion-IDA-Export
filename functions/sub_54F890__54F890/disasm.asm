0x54F890: push    0FFFFFFFFh
0x54F892: push    offset SEH_551450
0x54F897: mov     eax, large fs:0
0x54F89D: push    eax
0x54F89E: sub     esp, 8
0x54F8A1: push    ebx
0x54F8A2: push    ebp
0x54F8A3: push    esi
0x54F8A4: push    edi
0x54F8A5: mov     eax, ds:0B30AACh
0x54F8AA: xor     eax, esp
0x54F8AC: push    eax
0x54F8AD: lea     eax, [esp+28h+var_C]
0x54F8B1: mov     large fs:0, eax
0x54F8B7: mov     esi, ecx
0x54F8B9: xor     edi, edi
0x54F8BB: xor     ebx, ebx
0x54F8BD: mov     [esp+28h+var_14], edi
0x54F8C1: push    offset stru_B39C00; lpCriticalSection
0x54F8C6: mov     [esp+2Ch+var_4], ebx
0x54F8CA: call    dword ptr ds:0A2806Ch
0x54F8D0: call    dword ptr ds:0A2808Ch
0x54F8D6: add     dword ptr ds:0B39C7Ch, 1
0x54F8DD: add     esi, 4
0x54F8E0: mov     ds:0B39C78h, eax
0x54F8E5: mov     ecx, [esi+4]
0x54F8E8: xor     eax, eax
0x54F8EA: cmp     ecx, ebx
0x54F8EC: jbe     short loc_54F902
0x54F8EE: mov     ebp, [esi+8]
0x54F8F1: mov     edx, ebp
0x54F8F3: cmp     dword ptr [edx], 0
0x54F8F6: jnz     short loc_54F940
0x54F8F8: add     eax, 1
0x54F8FB: add     edx, 4
0x54F8FE: cmp     eax, ecx
0x54F900: jb      short loc_54F8F3
0x54F902: xor     eax, eax
0x54F904: test    eax, eax
0x54F906: mov     [esp+28h+var_10], eax
0x54F90A: jz      short loc_54F957
0x54F90C: mov     ebp, [esp+28h+arg_0]
0x54F910: lea     eax, [esp+28h+var_14]
0x54F914: push    eax
0x54F915: lea     ecx, [esp+2Ch+arg_0]
0x54F919: push    ecx
0x54F91A: lea     edx, [esp+30h+var_10]
0x54F91E: push    edx
0x54F91F: mov     ecx, esi
0x54F921: call    sub_7B2600
0x54F926: mov     edi, [esp+28h+var_14]
0x54F92A: mov     eax, ebp
0x54F92C: sub     eax, 0
0x54F92F: jz      short loc_54F946
0x54F931: sub     eax, 1
0x54F934: jnz     short loc_54F950
0x54F936: mov     ecx, [edi+8]
0x54F939: call    sub_556650
0x54F93E: jmp     short loc_54F94E
0x54F940: mov     eax, [ebp+eax*4+0]
0x54F944: jmp     short loc_54F904
0x54F946: mov     ecx, [edi+8]
0x54F949: call    sub_5564E0
0x54F94E: add     ebx, eax
0x54F950: cmp     [esp+28h+var_10], 0
0x54F955: jnz     short loc_54F910
0x54F957: sub     dword ptr ds:0B39C7Ch, 1
0x54F95E: jnz     short loc_54F96A
0x54F960: mov     dword ptr ds:0B39C78h, 0
0x54F96A: push    offset stru_B39C00; lpCriticalSection
0x54F96F: call    dword ptr ds:0A28074h
0x54F975: test    edi, edi
0x54F977: mov     [esp+28h+var_4], 0FFFFFFFFh
0x54F97F: jz      short loc_54F999
0x54F981: lea     eax, [edi+4]
0x54F984: push    eax; lpAddend
0x54F985: call    dword ptr ds:0A2807Ch
0x54F98B: test    eax, eax
0x54F98D: jnz     short loc_54F999
0x54F98F: mov     edx, [edi]
0x54F991: mov     eax, [edx]
0x54F993: push    1
0x54F995: mov     ecx, edi
0x54F997: call    eax
0x54F999: mov     eax, ebx
0x54F99B: mov     ecx, dword ptr [esp+28h+var_C]
0x54F99F: mov     large fs:0, ecx
0x54F9A6: pop     ecx
0x54F9A7: pop     edi
0x54F9A8: pop     esi
0x54F9A9: pop     ebp
0x54F9AA: pop     ebx
0x54F9AB: add     esp, 14h
0x54F9AE: retn    4
