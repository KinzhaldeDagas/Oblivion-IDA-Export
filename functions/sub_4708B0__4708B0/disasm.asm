0x4708B0: push    ebx
0x4708B1: push    ebp
0x4708B2: mov     ebp, [esp+8+arg_0]
0x4708B6: push    esi
0x4708B7: mov     esi, ecx
0x4708B9: mov     eax, [esi]
0x4708BB: mov     edx, [eax+4]
0x4708BE: push    edi
0x4708BF: push    ebp
0x4708C0: call    edx
0x4708C2: mov     ebx, eax
0x4708C4: mov     eax, [esi+8]
0x4708C7: mov     edi, [eax+ebx*4]
0x4708CA: test    edi, edi
0x4708CC: jz      short loc_47092D
0x4708CE: movzx   eax, word ptr [edi+4]
0x4708D2: mov     edx, [esi]
0x4708D4: mov     edx, [edx+8]
0x4708D7: push    eax
0x4708D8: push    ebp
0x4708D9: mov     ecx, esi
0x4708DB: call    edx
0x4708DD: test    al, al
0x4708DF: jz      short loc_47090A
0x4708E1: mov     eax, [esi+8]
0x4708E4: mov     ecx, [edi]
0x4708E6: mov     [eax+ebx*4], ecx
0x4708E9: mov     edx, [esi]
0x4708EB: mov     eax, [edx+10h]
0x4708EE: push    edi
0x4708EF: mov     ecx, esi
0x4708F1: call    eax
0x4708F3: mov     edx, [esi]
0x4708F5: mov     eax, [edx+18h]
0x4708F8: push    edi
0x4708F9: mov     ecx, esi
0x4708FB: call    eax
0x4708FD: add     dword ptr [esi+0Ch], 0FFFFFFFFh
0x470901: pop     edi
0x470902: pop     esi
0x470903: pop     ebp
0x470904: mov     al, 1
0x470906: pop     ebx
0x470907: retn    4
0x47090A: mov     ebx, edi
0x47090C: mov     edi, [edi]
0x47090E: test    edi, edi
0x470910: jz      short loc_47092D
0x470912: movzx   eax, word ptr [edi+4]
0x470916: mov     edx, [esi]
0x470918: mov     edx, [edx+8]
0x47091B: push    eax
0x47091C: push    ebp
0x47091D: mov     ecx, esi
0x47091F: call    edx
0x470921: test    al, al
0x470923: jnz     short loc_470936
0x470925: mov     ebx, edi
0x470927: mov     edi, [edi]
0x470929: test    edi, edi
0x47092B: jnz     short loc_470912
0x47092D: pop     edi
0x47092E: pop     esi
0x47092F: pop     ebp
0x470930: xor     al, al
0x470932: pop     ebx
0x470933: retn    4
0x470936: mov     eax, [edi]
0x470938: mov     [ebx], eax
0x47093A: mov     edx, [esi]
0x47093C: mov     eax, [edx+10h]
0x47093F: push    edi
0x470940: mov     ecx, esi
0x470942: call    eax
0x470944: mov     edx, [esi]
0x470946: mov     eax, [edx+18h]
0x470949: push    edi
0x47094A: mov     ecx, esi
0x47094C: call    eax
0x47094E: add     dword ptr [esi+0Ch], 0FFFFFFFFh
0x470952: pop     edi
0x470953: pop     esi
0x470954: pop     ebp
0x470955: mov     al, 1
0x470957: pop     ebx
0x470958: retn    4
