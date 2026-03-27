0x77B2C0: push    ebx
0x77B2C1: push    ebp
0x77B2C2: mov     ebp, [esp+8+arg_0]
0x77B2C6: test    ebp, ebp
0x77B2C8: mov     ebx, ecx
0x77B2CA: jz      short loc_77B301
0x77B2CC: push    esi
0x77B2CD: push    edi
0x77B2CE: xor     esi, esi
0x77B2D0: lea     edi, [ebx+0FA0h]
0x77B2D6: cmp     [edi], ebp
0x77B2D8: jnz     short loc_77B2F4
0x77B2DA: mov     dword ptr [edi], 0
0x77B2E0: mov     eax, [ebx+0FF8h]
0x77B2E6: mov     ecx, [eax]
0x77B2E8: mov     edx, [ecx+104h]
0x77B2EE: push    0
0x77B2F0: push    esi
0x77B2F1: push    eax
0x77B2F2: call    edx
0x77B2F4: add     esi, 1
0x77B2F7: add     edi, 4
0x77B2FA: cmp     esi, 10h
0x77B2FD: jb      short loc_77B2D6
0x77B2FF: pop     edi
0x77B300: pop     esi
0x77B301: pop     ebp
0x77B302: pop     ebx
0x77B303: retn    4
