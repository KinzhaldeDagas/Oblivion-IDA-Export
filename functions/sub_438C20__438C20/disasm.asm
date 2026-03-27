0x438C20: push    0FFFFFFFFh
0x438C22: push    offset SEH_4BE090
0x438C27: mov     eax, large fs:0
0x438C2D: push    eax
0x438C2E: push    ecx
0x438C2F: push    ebx
0x438C30: push    ebp
0x438C31: push    esi
0x438C32: push    edi
0x438C33: mov     eax, ___security_cookie
0x438C38: xor     eax, esp
0x438C3A: push    eax
0x438C3B: lea     eax, [esp+24h+var_C]
0x438C3F: mov     large fs:0, eax
0x438C45: mov     esi, ecx
0x438C47: mov     edi, [esp+24h+arg_0]
0x438C4B: xor     ebx, ebx
0x438C4D: cmp     [esi+8], ebx
0x438C50: mov     [esp+24h+var_4], ebx
0x438C54: jbe     short loc_438C85
0x438C56: mov     ebp, ds:InterlockedIncrement
0x438C5C: test    edi, edi
0x438C5E: push    ecx
0x438C5F: mov     eax, esp
0x438C61: mov     [esp+28h+var_10], esp
0x438C65: mov     [eax], edi
0x438C67: jz      short loc_438C6F
0x438C69: lea     eax, [edi+8]
0x438C6C: push    eax; lpAddend
0x438C6D: call    ebp ; InterlockedIncrement
0x438C6F: mov     edx, [esi]
0x438C71: mov     eax, [edx+14h]
0x438C74: push    ebx
0x438C75: mov     ecx, esi
0x438C77: call    eax
0x438C79: test    al, al
0x438C7B: jnz     short loc_438CC1
0x438C7D: add     ebx, 1
0x438C80: cmp     ebx, [esi+8]
0x438C83: jb      short loc_438C5C
0x438C85: test    edi, edi
0x438C87: mov     [esp+24h+var_4], 0FFFFFFFFh
0x438C8F: jz      short loc_438CA9
0x438C91: lea     ecx, [edi+8]
0x438C94: push    ecx; lpAddend
0x438C95: call    ds:InterlockedDecrement
0x438C9B: test    eax, eax
0x438C9D: jnz     short loc_438CA9
0x438C9F: mov     edx, [edi]
0x438CA1: mov     eax, [edx]
0x438CA3: push    1
0x438CA5: mov     ecx, edi
0x438CA7: call    eax
0x438CA9: xor     al, al
0x438CAB: mov     ecx, [esp+24h+var_C]
0x438CAF: mov     large fs:0, ecx
0x438CB6: pop     ecx
0x438CB7: pop     edi
0x438CB8: pop     esi
0x438CB9: pop     ebp
0x438CBA: pop     ebx
0x438CBB: add     esp, 10h
0x438CBE: retn    4
0x438CC1: test    edi, edi
0x438CC3: mov     [esp+24h+var_4], 0FFFFFFFFh
0x438CCB: jz      short loc_438CE5
0x438CCD: lea     ecx, [edi+8]
0x438CD0: push    ecx; lpAddend
0x438CD1: call    ds:InterlockedDecrement
0x438CD7: test    eax, eax
0x438CD9: jnz     short loc_438CE5
0x438CDB: mov     edx, [edi]
0x438CDD: mov     eax, [edx]
0x438CDF: push    1
0x438CE1: mov     ecx, edi
0x438CE3: call    eax
0x438CE5: mov     al, 1
0x438CE7: jmp     short loc_438CAB
