0x552F40: push    0FFFFFFFFh
0x552F42: push    offset SEH_552F40
0x552F47: mov     eax, large fs:0
0x552F4D: push    eax
0x552F4E: push    ecx
0x552F4F: push    ebx
0x552F50: push    esi
0x552F51: push    edi
0x552F52: mov     eax, ds:0B30AACh
0x552F57: xor     eax, esp
0x552F59: push    eax
0x552F5A: lea     eax, [esp+20h+var_C]
0x552F5E: mov     large fs:0, eax
0x552F64: mov     edi, ecx
0x552F66: mov     [esp+20h+var_10], edi
0x552F6A: mov     eax, [edi+7Ch]
0x552F6D: xor     ebx, ebx
0x552F6F: cmp     eax, ebx
0x552F71: mov     [esp+20h+var_4], ebx
0x552F75: jz      short loc_552F80
0x552F77: push    eax
0x552F78: call    FormHeapFree
0x552F7D: add     esp, 4
0x552F80: lea     esi, [edi+68h]
0x552F83: mov     [edi+7Ch], ebx
0x552F86: mov     [edi+80h], ebx
0x552F8C: mov     [edi+84h], ebx
0x552F92: mov     eax, [esi+4]
0x552F95: cmp     eax, ebx
0x552F97: jz      short loc_552FB1
0x552F99: mov     ecx, [esi+8]
0x552F9C: push    ecx
0x552F9D: push    eax
0x552F9E: mov     ecx, esi
0x552FA0: call    sub_552D60
0x552FA5: mov     eax, [esi+4]
0x552FA8: push    eax
0x552FA9: call    FormHeapFree
0x552FAE: add     esp, 4
0x552FB1: push    offset sub_43ACE0; void (__thiscall *)(void *)
0x552FB6: push    4; int
0x552FB8: push    18h; unsigned int
0x552FBA: add     edi, 8
0x552FBD: push    edi; void *
0x552FBE: mov     [esi+4], ebx
0x552FC1: mov     [esi+8], ebx
0x552FC4: mov     [esi+0Ch], ebx
0x552FC7: mov     [esp+30h+var_4], 0FFFFFFFFh
0x552FCF: call    $LN21
0x552FD4: mov     ecx, [esp+20h+var_C]
0x552FD8: mov     large fs:0, ecx
0x552FDF: pop     ecx
0x552FE0: pop     edi
0x552FE1: pop     esi
0x552FE2: pop     ebx
0x552FE3: add     esp, 10h
0x552FE6: retn
