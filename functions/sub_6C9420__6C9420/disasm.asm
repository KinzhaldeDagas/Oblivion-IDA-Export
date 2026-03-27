0x6C9420: push    ecx
0x6C9421: push    ebx
0x6C9422: mov     ebx, [esp+8+arg_0]
0x6C9426: push    esi
0x6C9427: push    edi
0x6C9428: xor     edi, edi
0x6C942A: cmp     [ebx+0Ch], edi
0x6C942D: mov     [esp+10h+var_4], ecx
0x6C9431: jbe     short loc_6C9478
0x6C9433: push    ebp
0x6C9434: mov     ebp, ds:0A2807Ch
0x6C943A: lea     ebx, [ebx+0]
0x6C9440: push    edi
0x6C9441: lea     eax, [esp+18h+arg_0]
0x6C9445: push    eax
0x6C9446: mov     ecx, ebx
0x6C9448: call    sub_6C6610
0x6C944D: mov     eax, [esp+14h+arg_0]
0x6C9451: test    eax, eax
0x6C9453: jz      short loc_6C946F
0x6C9455: mov     esi, eax
0x6C9457: add     eax, 4
0x6C945A: push    eax; lpAddend
0x6C945B: call    ebp ; InterlockedDecrement
0x6C945D: test    eax, eax
0x6C945F: jnz     short loc_6C946F
0x6C9461: test    esi, esi
0x6C9463: jz      short loc_6C946F
0x6C9465: mov     edx, [esi]
0x6C9467: mov     eax, [edx]
0x6C9469: push    1
0x6C946B: mov     ecx, esi
0x6C946D: call    eax
0x6C946F: add     edi, 1
0x6C9472: cmp     edi, [ebx+0Ch]
0x6C9475: jb      short loc_6C9440
0x6C9477: pop     ebp
0x6C9478: mov     eax, [ebx+14h]
0x6C947B: test    eax, eax
0x6C947D: jz      short loc_6C949C
0x6C947F: mov     ecx, [eax-4]
0x6C9482: lea     esi, [eax-4]
0x6C9485: push    offset sub_6C64C0; void (__thiscall *)(void *)
0x6C948A: push    ecx; int
0x6C948B: push    10h; unsigned int
0x6C948D: push    eax; void *
0x6C948E: call    $LN21
0x6C9493: push    esi
0x6C9494: call    FormHeapFree
0x6C9499: add     esp, 4
0x6C949C: mov     eax, [ebx+18h]
0x6C949F: test    eax, eax
0x6C94A1: jz      short loc_6C94C0
0x6C94A3: mov     edx, [eax-4]
0x6C94A6: lea     esi, [eax-4]
0x6C94A9: push    offset sub_7016A0; void (__thiscall *)(void *)
0x6C94AE: push    edx; int
0x6C94AF: push    10h; unsigned int
0x6C94B1: push    eax; void *
0x6C94B2: call    $LN21
0x6C94B7: push    esi
0x6C94B8: call    FormHeapFree
0x6C94BD: add     esp, 4
0x6C94C0: mov     eax, [esp+10h+arg_4]
0x6C94C4: mov     ecx, [esp+10h+var_4]
0x6C94C8: push    eax
0x6C94C9: push    ebx
0x6C94CA: call    sub_6C70A0
0x6C94CF: pop     edi
0x6C94D0: pop     esi
0x6C94D1: pop     ebx
0x6C94D2: pop     ecx
0x6C94D3: retn    8
