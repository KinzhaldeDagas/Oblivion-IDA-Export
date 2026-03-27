0x6D2F60: push    ebx
0x6D2F61: push    esi
0x6D2F62: push    edi
0x6D2F63: mov     edi, [esp+0Ch+arg_0]
0x6D2F67: push    edi
0x6D2F68: mov     esi, ecx
0x6D2F6A: call    sub_6EC2B0
0x6D2F6F: mov     eax, [edi+21Ch]
0x6D2F75: push    1
0x6D2F77: lea     ecx, [esp+10h+arg_0]
0x6D2F7B: push    ecx
0x6D2F7C: push    4
0x6D2F7E: lea     edx, [esi+0Ch]
0x6D2F81: push    edx
0x6D2F82: push    eax
0x6D2F83: mov     eax, [eax+4]
0x6D2F86: mov     [esp+20h+arg_0], 4
0x6D2F8E: call    eax
0x6D2F90: add     esp, 14h
0x6D2F93: mov     ecx, edi
0x6D2F95: call    sub_712A90
0x6D2F9A: mov     edi, [esi+10h]
0x6D2F9D: mov     ebx, eax
0x6D2F9F: cmp     edi, ebx
0x6D2FA1: jz      short loc_6D2FD4
0x6D2FA3: test    edi, edi
0x6D2FA5: jz      short loc_6D2FC3
0x6D2FA7: lea     ecx, [edi+4]
0x6D2FAA: push    ecx; lpAddend
0x6D2FAB: call    dword ptr ds:0A2807Ch
0x6D2FB1: test    eax, eax
0x6D2FB3: jnz     short loc_6D2FC3
0x6D2FB5: test    edi, edi
0x6D2FB7: jz      short loc_6D2FC3
0x6D2FB9: mov     edx, [edi]
0x6D2FBB: mov     eax, [edx]
0x6D2FBD: push    1
0x6D2FBF: mov     ecx, edi
0x6D2FC1: call    eax
0x6D2FC3: test    ebx, ebx
0x6D2FC5: mov     [esi+10h], ebx
0x6D2FC8: jz      short loc_6D2FD4
0x6D2FCA: add     ebx, 4
0x6D2FCD: push    ebx; lpAddend
0x6D2FCE: call    dword ptr ds:0A28078h
0x6D2FD4: pop     edi
0x6D2FD5: pop     esi
0x6D2FD6: pop     ebx
0x6D2FD7: retn    4
