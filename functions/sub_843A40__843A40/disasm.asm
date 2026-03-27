0x843A40: push    0FFFFFFFFh
0x843A42: push    offset SEH_851CA0
0x843A47: mov     eax, large fs:0
0x843A4D: push    eax
0x843A4E: push    ecx
0x843A4F: push    ebx
0x843A50: push    ebp
0x843A51: push    esi
0x843A52: push    edi
0x843A53: mov     eax, ds:0B30AACh
0x843A58: xor     eax, esp
0x843A5A: push    eax
0x843A5B: lea     eax, [esp+24h+var_C]
0x843A5F: mov     large fs:0, eax
0x843A65: mov     edi, ecx
0x843A67: mov     esi, ds:0B45940h
0x843A6D: mov     ecx, [esp+24h+arg_C]
0x843A71: mov     eax, [esi+24h]
0x843A74: mov     ebp, [eax]
0x843A76: push    0
0x843A78: push    ecx
0x843A79: mov     ecx, edi
0x843A7B: call    sub_848FD0
0x843A80: mov     ebx, [ebp+4]
0x843A83: cmp     ebx, eax
0x843A85: mov     [esp+24h+var_10], eax
0x843A89: jz      short loc_843AC0
0x843A8B: test    ebx, ebx
0x843A8D: jz      short loc_843AAF
0x843A8F: lea     edx, [ebx+4]
0x843A92: push    edx; lpAddend
0x843A93: call    dword ptr ds:0A2807Ch
0x843A99: test    eax, eax
0x843A9B: jnz     short loc_843AAB
0x843A9D: test    ebx, ebx
0x843A9F: jz      short loc_843AAB
0x843AA1: mov     eax, [ebx]
0x843AA3: mov     edx, [eax]
0x843AA5: push    1
0x843AA7: mov     ecx, ebx
0x843AA9: call    edx
0x843AAB: mov     eax, [esp+24h+var_10]
0x843AAF: test    eax, eax
0x843AB1: mov     [ebp+4], eax
0x843AB4: jz      short loc_843AC0
0x843AB6: add     eax, 4
0x843AB9: push    eax; lpAddend
0x843ABA: call    dword ptr ds:0A28078h
0x843AC0: mov     eax, [esp+24h+arg_C]
0x843AC4: push    eax
0x843AC5: push    ebp
0x843AC6: mov     ecx, edi
0x843AC8: call    sub_848FA0
0x843ACD: mov     ecx, [esi+24h]
0x843AD0: mov     ecx, [ecx+0Ch]
0x843AD3: push    0
0x843AD5: call    sub_7715E0
0x843ADA: mov     ebx, 1
0x843ADF: add     [esi+60h], ebx
0x843AE2: mov     [esp+24h+arg_C], esi
0x843AE6: mov     eax, [edi+38h]
0x843AE9: lea     edx, [esp+24h+arg_C]
0x843AED: push    edx
0x843AEE: push    eax
0x843AEF: lea     ecx, [edi+40h]
0x843AF2: mov     [esp+2Ch+var_4], 0
0x843AFA: call    sub_76CE40
0x843AFF: or      eax, 0FFFFFFFFh
0x843B02: add     [esi+60h], eax
0x843B05: mov     [esp+24h+var_4], eax
0x843B09: jnz     short loc_843B12
0x843B0B: mov     ecx, esi
0x843B0D: call    sub_7604D0
0x843B12: add     [edi+38h], ebx
0x843B15: mov     ecx, dword ptr [esp+24h+var_C]
0x843B19: mov     large fs:0, ecx
0x843B20: pop     ecx
0x843B21: pop     edi
0x843B22: pop     esi
0x843B23: pop     ebp
0x843B24: pop     ebx
0x843B25: add     esp, 10h
0x843B28: retn    10h
