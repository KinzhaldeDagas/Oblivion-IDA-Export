0x65E800: push    ebx
0x65E801: push    esi
0x65E802: mov     ebx, ecx
0x65E804: lea     esi, [ebx+73Ch]
0x65E80A: push    edi
0x65E80B: mov     edi, esi
0x65E80D: test    edi, edi
0x65E80F: jz      short loc_65E823
0x65E811: mov     eax, [edi]
0x65E813: push    eax
0x65E814: call    FormHeapFree
0x65E819: mov     edi, [edi+4]
0x65E81C: add     esp, 4
0x65E81F: test    edi, edi
0x65E821: jnz     short loc_65E811
0x65E823: cmp     dword ptr [esi+4], 0
0x65E827: jz      short loc_65E846
0x65E829: lea     esp, [esp+0]
0x65E830: mov     eax, [esi+4]
0x65E833: mov     edi, [eax+4]
0x65E836: push    eax
0x65E837: call    FormHeapFree
0x65E83C: add     esp, 4
0x65E83F: test    edi, edi
0x65E841: mov     [esi+4], edi
0x65E844: jnz     short loc_65E830
0x65E846: pop     edi
0x65E847: mov     dword ptr [esi], 0
0x65E84D: pop     esi
0x65E84E: mov     dword ptr [ebx+744h], 0
0x65E858: pop     ebx
0x65E859: retn
