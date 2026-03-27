0x796F20: push    ebp
0x796F21: mov     ebp, esp
0x796F23: push    0FFFFFFFFh
0x796F25: push    offset SEH_796F20
0x796F2A: mov     eax, large fs:0
0x796F30: push    eax
0x796F31: sub     esp, 0Ch
0x796F34: push    ebx
0x796F35: push    esi
0x796F36: push    edi
0x796F37: mov     eax, ds:0B30AACh
0x796F3C: xor     eax, ebp
0x796F3E: push    eax
0x796F3F: lea     eax, [ebp+var_C]
0x796F42: mov     large fs:0, eax
0x796F48: mov     [ebp+var_10], esp
0x796F4B: mov     esi, ecx
0x796F4D: mov     [ebp+var_18], esi
0x796F50: mov     ebx, [ebp+arg_0]
0x796F53: xor     eax, eax
0x796F55: cmp     ebx, eax
0x796F57: mov     [esi+4], eax
0x796F5A: mov     [esi+8], eax
0x796F5D: mov     [esi+0Ch], eax
0x796F60: jz      short loc_796FB1
0x796F62: cmp     ebx, 0FFFFFFFh
0x796F68: jbe     short loc_796F6F
0x796F6A: call    sub_790B90
0x796F6F: push    eax
0x796F70: push    ebx; char *
0x796F71: call    sub_794550
0x796F76: mov     edx, [ebp+arg_0]
0x796F79: mov     edi, eax
0x796F7B: mov     byte ptr [ebp+var_14], 0
0x796F7F: mov     ecx, [ebp+var_14]
0x796F82: push    ecx
0x796F83: mov     ecx, [ebp+arg_0]
0x796F86: push    edx
0x796F87: shl     ebx, 4
0x796F8A: lea     eax, [ebx+edi]
0x796F8D: mov     [esi+0Ch], eax
0x796F90: mov     eax, [ebp+arg_4]
0x796F93: push    esi
0x796F94: push    eax
0x796F95: push    ecx
0x796F96: push    edi
0x796F97: mov     [esi+4], edi
0x796F9A: mov     [esi+8], edi
0x796F9D: mov     [ebp+var_4], 0
0x796FA4: call    sub_79BF40
0x796FA9: add     esp, 20h
0x796FAC: add     ebx, edi
0x796FAE: mov     [esi+8], ebx
0x796FB1: mov     ecx, [ebp+var_C]
0x796FB4: mov     large fs:0, ecx
0x796FBB: pop     ecx
0x796FBC: pop     edi
0x796FBD: pop     esi
0x796FBE: pop     ebx
0x796FBF: mov     esp, ebp
0x796FC1: pop     ebp
0x796FC2: retn    8
0x796FC5: mov     ecx, [ebp+var_18]
0x796FC8: call    sub_7957E0
0x796FCD: push    0
0x796FCF: push    0
0x796FD1: call    ThrowException??
