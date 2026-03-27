0x75A7B0: push    ebx
0x75A7B1: push    esi
0x75A7B2: push    edi
0x75A7B3: push    1Ch; Size
0x75A7B5: mov     edi, ecx
0x75A7B7: call    FormHeapAlloc
0x75A7BC: mov     esi, eax
0x75A7BE: add     esp, 4
0x75A7C1: test    esi, esi
0x75A7C3: jz      short loc_75A7DB
0x75A7C5: mov     ecx, esi
0x75A7C7: call    sub_752BF0
0x75A7CC: mov     dword ptr [esi], offset ??_7NiPSysColliderManager@@6B@; const NiPSysColliderManager::`vftable'
0x75A7D2: mov     dword ptr [esi+18h], 0
0x75A7D9: jmp     short loc_75A7DD
0x75A7DB: xor     esi, esi
0x75A7DD: mov     ebx, [esp+0Ch+arg_0]
0x75A7E1: push    ebx
0x75A7E2: push    esi
0x75A7E3: mov     ecx, edi
0x75A7E5: call    sub_752C40
0x75A7EA: mov     ecx, [edi+18h]
0x75A7ED: test    ecx, ecx
0x75A7EF: jz      short loc_75A802
0x75A7F1: mov     eax, [ecx]
0x75A7F3: mov     edx, [eax+18h]
0x75A7F6: push    ebx
0x75A7F7: call    edx
0x75A7F9: push    eax; a2
0x75A7FA: lea     ecx, [esi+18h]; this
0x75A7FD: call    NiSmartPointer_Set??
0x75A802: pop     edi
0x75A803: mov     eax, esi
0x75A805: pop     esi
0x75A806: pop     ebx
0x75A807: retn    4
