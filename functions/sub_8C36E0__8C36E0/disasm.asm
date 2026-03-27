0x8C36E0: push    ecx
0x8C36E1: push    ebx
0x8C36E2: push    esi
0x8C36E3: mov     esi, ecx
0x8C36E5: mov     eax, [esi]
0x8C36E7: mov     edx, [eax+74h]
0x8C36EA: push    edi
0x8C36EB: lea     ecx, [esp+10h+var_4]
0x8C36EF: push    ecx
0x8C36F0: mov     ecx, esi
0x8C36F2: call    edx
0x8C36F4: mov     ebx, [esp+10h+arg_0]
0x8C36F8: push    ebx
0x8C36F9: mov     ecx, esi
0x8C36FB: mov     edi, eax
0x8C36FD: call    sub_8B03A0
0x8C3702: test    edi, edi
0x8C3704: jz      short loc_8C3721
0x8C3706: mov     eax, [edi+8]
0x8C3709: push    eax
0x8C370A: push    ebx
0x8C370B: call    sub_8E8270
0x8C3710: mov     edx, [esi]
0x8C3712: mov     eax, dword ptr [esp+18h+var_4]
0x8C3716: mov     edx, [edx+64h]
0x8C3719: add     esp, 8
0x8C371C: push    eax
0x8C371D: mov     ecx, esi
0x8C371F: call    edx
0x8C3721: pop     edi
0x8C3722: pop     esi
0x8C3723: pop     ebx
0x8C3724: pop     ecx
0x8C3725: retn    4
