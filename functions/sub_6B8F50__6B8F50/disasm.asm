0x6B8F50: push    0FFFFFFFFh
0x6B8F52: push    offset SEH_6B8F50
0x6B8F57: mov     eax, large fs:0
0x6B8F5D: push    eax
0x6B8F5E: push    ecx
0x6B8F5F: push    ebp
0x6B8F60: push    esi
0x6B8F61: push    edi
0x6B8F62: mov     eax, ds:0B30AACh
0x6B8F67: xor     eax, esp
0x6B8F69: push    eax
0x6B8F6A: lea     eax, [esp+20h+var_C]
0x6B8F6E: mov     large fs:0, eax
0x6B8F74: mov     ebp, ecx
0x6B8F76: mov     [esp+20h+var_10], ebp
0x6B8F7A: cmp     byte ptr [ebp+20h], 0
0x6B8F7E: mov     [esp+20h+var_4], 0
0x6B8F86: jnz     short loc_6B8FD5
0x6B8F88: lea     esi, [ebp+0Ch]
0x6B8F8B: test    esi, esi
0x6B8F8D: jz      short loc_6B8FD5
0x6B8F8F: nop
0x6B8F90: mov     ecx, esi
0x6B8F92: call    BSSimpleList_IsEmpty
0x6B8F97: test    al, al
0x6B8F99: jnz     short loc_6B8FD5
0x6B8F9B: mov     edi, [esi]
0x6B8F9D: test    edi, edi
0x6B8F9F: jz      short loc_6B8FB1
0x6B8FA1: mov     ecx, edi
0x6B8FA3: call    sub_6B8050
0x6B8FA8: push    edi
0x6B8FA9: call    FormHeapFree
0x6B8FAE: add     esp, 4
0x6B8FB1: mov     eax, [esi+4]
0x6B8FB4: test    eax, eax
0x6B8FB6: jz      short loc_6B8FCD
0x6B8FB8: mov     ecx, [eax+4]
0x6B8FBB: mov     [esi+4], ecx
0x6B8FBE: mov     edx, [eax]
0x6B8FC0: push    eax
0x6B8FC1: mov     [esi], edx
0x6B8FC3: call    FormHeapFree
0x6B8FC8: add     esp, 4
0x6B8FCB: jmp     short loc_6B8F90
0x6B8FCD: mov     dword ptr [esi], 0
0x6B8FD3: jmp     short loc_6B8F90
0x6B8FD5: mov     eax, [ebp+0]
0x6B8FD8: push    eax
0x6B8FD9: call    FormHeapFree
0x6B8FDE: add     esp, 4
0x6B8FE1: mov     dword ptr [ebp+0], 0
0x6B8FE8: mov     word ptr [ebp+6], 0
0x6B8FEE: mov     word ptr [ebp+4], 0
0x6B8FF4: mov     ecx, [esp+20h+var_C]
0x6B8FF8: mov     large fs:0, ecx
0x6B8FFF: pop     ecx
0x6B9000: pop     edi
0x6B9001: pop     esi
0x6B9002: pop     ebp
0x6B9003: add     esp, 10h
0x6B9006: retn
