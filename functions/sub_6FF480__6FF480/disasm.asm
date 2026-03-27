0x6FF480: push    ebx
0x6FF481: push    esi
0x6FF482: push    offset stru_B3F600; lpCriticalSection
0x6FF487: mov     esi, ecx
0x6FF489: call    dword ptr ds:0A2806Ch
0x6FF48F: call    dword ptr ds:0A2808Ch
0x6FF495: mov     bx, word ptr [esp+8+arg_0]
0x6FF49A: mov     ds:0B3F678h, eax
0x6FF49F: mov     eax, 1
0x6FF4A4: add     ds:0B3F67Ch, eax
0x6FF4AA: cmp     bx, [esi+14h]
0x6FF4AE: jb      short loc_6FF4D2
0x6FF4B0: sub     ds:0B3F67Ch, eax
0x6FF4B6: jnz     short loc_6FF4C2
0x6FF4B8: mov     dword ptr ds:0B3F678h, 0
0x6FF4C2: pop     esi
0x6FF4C3: pop     ebx
0x6FF4C4: mov     [esp+arg_0], offset stru_B3F600
0x6FF4CC: jmp     dword ptr ds:0A28074h
0x6FF4D2: mov     eax, [esi+10h]
0x6FF4D5: push    edi
0x6FF4D6: movzx   edi, bx
0x6FF4D9: cmp     dword ptr [eax+edi*4], 0
0x6FF4DD: lea     eax, [eax+edi*4]
0x6FF4E0: jz      short loc_6FF503
0x6FF4E2: push    ebp
0x6FF4E3: mov     ebp, [eax]
0x6FF4E5: lea     ecx, [ebp+4]
0x6FF4E8: push    ecx; lpAddend
0x6FF4E9: call    dword ptr ds:0A2807Ch
0x6FF4EF: test    eax, eax
0x6FF4F1: jnz     short loc_6FF502
0x6FF4F3: test    ebp, ebp
0x6FF4F5: jz      short loc_6FF502
0x6FF4F7: mov     edx, [ebp+0]
0x6FF4FA: mov     eax, [edx]
0x6FF4FC: push    1
0x6FF4FE: mov     ecx, ebp
0x6FF500: call    eax
0x6FF502: pop     ebp
0x6FF503: movzx   edx, word ptr [esi+14h]
0x6FF507: sub     edx, 1
0x6FF50A: cmp     edi, edx
0x6FF50C: movzx   ecx, bx
0x6FF50F: jge     short loc_6FF52F
0x6FF511: mov     eax, edi
0x6FF513: mov     edx, [esi+10h]
0x6FF516: lea     eax, [edx+eax*4]
0x6FF519: mov     edx, [eax+4]
0x6FF51C: mov     [eax], edx
0x6FF51E: movzx   edx, word ptr [esi+14h]
0x6FF522: add     ecx, 1
0x6FF525: movzx   eax, cx
0x6FF528: sub     edx, 1
0x6FF52B: cmp     eax, edx
0x6FF52D: jl      short loc_6FF513
0x6FF52F: add     word ptr [esi+14h], 0FFFFh
0x6FF535: movzx   eax, word ptr [esi+14h]
0x6FF539: mov     ecx, [esi+10h]
0x6FF53C: movzx   eax, ax
0x6FF53F: mov     dword ptr [ecx+eax*4], 0
0x6FF546: sub     dword ptr ds:0B3F67Ch, 1
0x6FF54D: pop     edi
0x6FF54E: jnz     short loc_6FF55A
0x6FF550: mov     dword ptr ds:0B3F678h, 0
0x6FF55A: pop     esi
0x6FF55B: pop     ebx
0x6FF55C: mov     [esp+arg_0], offset stru_B3F600
0x6FF564: jmp     dword ptr ds:0A28074h
