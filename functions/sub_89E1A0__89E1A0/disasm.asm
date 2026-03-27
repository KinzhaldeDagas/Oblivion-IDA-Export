0x89E1A0: push    ecx
0x89E1A1: push    ebx
0x89E1A2: push    esi
0x89E1A3: push    edi
0x89E1A4: mov     edi, ecx
0x89E1A6: mov     eax, [edi]
0x89E1A8: mov     edx, [eax+74h]
0x89E1AB: lea     ecx, [esp+10h+var_1]
0x89E1AF: push    ecx
0x89E1B0: mov     ecx, edi
0x89E1B2: call    edx
0x89E1B4: mov     esi, eax
0x89E1B6: mov     eax, [esi+4]
0x89E1B9: test    eax, eax
0x89E1BB: jz      short loc_89E1C2
0x89E1BD: mov     eax, [eax+0Ch]
0x89E1C0: jmp     short loc_89E1C4
0x89E1C2: xor     eax, eax
0x89E1C4: test    eax, eax
0x89E1C6: mov     ebx, [esp+10h+arg_4]
0x89E1CA: mov     dword ptr [esi+4], 0
0x89E1D1: jz      short loc_89E1F6
0x89E1D3: lea     ecx, [esp+10h+arg_4]
0x89E1D7: push    ecx
0x89E1D8: mov     ecx, [ebx]
0x89E1DA: push    eax
0x89E1DB: call    NiTMap_GetAt
0x89E1E0: test    al, al
0x89E1E2: jz      short loc_89E1F6
0x89E1E4: mov     eax, [esp+10h+arg_4]
0x89E1E8: test    eax, eax
0x89E1EA: jz      short loc_89E1F1
0x89E1EC: mov     eax, [eax+8]
0x89E1EF: jmp     short loc_89E1F3
0x89E1F1: xor     eax, eax
0x89E1F3: mov     [esi+4], eax
0x89E1F6: mov     edx, [esp+10h+arg_0]
0x89E1FA: push    ebx
0x89E1FB: push    edx
0x89E1FC: mov     ecx, edi
0x89E1FE: call    sub_89D610
0x89E203: pop     edi
0x89E204: pop     esi
0x89E205: pop     ebx
0x89E206: pop     ecx
0x89E207: retn    8
