0x89E0D0: push    ecx
0x89E0D1: push    ebx
0x89E0D2: push    esi
0x89E0D3: mov     esi, ecx
0x89E0D5: mov     eax, [esi]
0x89E0D7: mov     edx, [eax+74h]
0x89E0DA: push    edi
0x89E0DB: lea     ecx, [esp+10h+var_1]
0x89E0DF: push    ecx
0x89E0E0: mov     ecx, esi
0x89E0E2: call    edx
0x89E0E4: mov     ebx, [esp+10h+arg_0]
0x89E0E8: mov     ecx, ebx
0x89E0EA: mov     edi, eax
0x89E0EC: call    sub_7124A0
0x89E0F1: test    edi, edi
0x89E0F3: jz      short loc_89E0FF
0x89E0F5: test    eax, eax
0x89E0F7: jz      short loc_89E0FF
0x89E0F9: mov     eax, [eax+8]
0x89E0FC: mov     [edi+4], eax
0x89E0FF: push    ebx
0x89E100: mov     ecx, esi
0x89E102: call    sub_89D6C0
0x89E107: pop     edi
0x89E108: pop     esi
0x89E109: pop     ebx
0x89E10A: pop     ecx
0x89E10B: retn    4
