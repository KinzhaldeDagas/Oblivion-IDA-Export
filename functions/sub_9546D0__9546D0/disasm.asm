0x9546D0: push    esi
0x9546D1: mov     esi, [esp+4+arg_0]
0x9546D5: cmp     dword ptr [esi], 0
0x9546D8: push    edi
0x9546D9: mov     edi, ecx
0x9546DB: jz      short loc_954704
0x9546DD: push    ebx
0x9546DE: mov     ebx, [esp+0Ch+arg_4]
0x9546E2: sub     ebx, esi
0x9546E4: mov     eax, [ebx+esi]
0x9546E7: test    eax, eax
0x9546E9: jz      short loc_954703
0x9546EB: mov     edx, [edi]
0x9546ED: push    eax
0x9546EE: mov     eax, [esi]
0x9546F0: mov     ecx, [eax+8]
0x9546F3: push    ecx
0x9546F4: mov     ecx, edi
0x9546F6: call    dword ptr [edx+8]
0x9546F9: mov     eax, [esi+4]
0x9546FC: add     esi, 4
0x9546FF: test    eax, eax
0x954701: jnz     short loc_9546E4
0x954703: pop     ebx
0x954704: pop     edi
0x954705: pop     esi
0x954706: retn    8
