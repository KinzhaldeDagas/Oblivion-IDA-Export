0x6ED420: push    ebx
0x6ED421: push    ebp
0x6ED422: push    esi
0x6ED423: push    edi
0x6ED424: mov     edi, [esp+10h+arg_0]
0x6ED428: push    edi
0x6ED429: mov     esi, ecx
0x6ED42B: call    sub_6EBA80
0x6ED430: mov     eax, [edi+21Ch]
0x6ED436: push    1
0x6ED438: lea     ecx, [esp+14h+arg_0]
0x6ED43C: push    ecx
0x6ED43D: mov     ebx, 4
0x6ED442: push    ebx
0x6ED443: lea     edx, [esi+0Ch]
0x6ED446: push    edx
0x6ED447: push    eax
0x6ED448: mov     eax, [eax+4]
0x6ED44B: mov     [esp+24h+arg_0], ebx
0x6ED44F: call    eax
0x6ED451: mov     eax, [edi+21Ch]
0x6ED457: push    1
0x6ED459: lea     ecx, [esp+28h+arg_0]
0x6ED45D: push    ecx
0x6ED45E: push    ebx
0x6ED45F: lea     edx, [esi+10h]
0x6ED462: push    edx
0x6ED463: push    eax
0x6ED464: mov     eax, [eax+4]
0x6ED467: mov     [esp+38h+arg_0], ebx
0x6ED46B: call    eax
0x6ED46D: add     esp, 28h
0x6ED470: mov     ecx, edi
0x6ED472: call    sub_712A90
0x6ED477: mov     ebx, [esi+14h]
0x6ED47A: mov     ebp, eax
0x6ED47C: cmp     ebx, ebp
0x6ED47E: jz      short loc_6ED4B1
0x6ED480: test    ebx, ebx
0x6ED482: jz      short loc_6ED4A0
0x6ED484: lea     ecx, [ebx+4]
0x6ED487: push    ecx; lpAddend
0x6ED488: call    dword ptr ds:0A2807Ch
0x6ED48E: test    eax, eax
0x6ED490: jnz     short loc_6ED4A0
0x6ED492: test    ebx, ebx
0x6ED494: jz      short loc_6ED4A0
0x6ED496: mov     edx, [ebx]
0x6ED498: mov     eax, [edx]
0x6ED49A: push    1
0x6ED49C: mov     ecx, ebx
0x6ED49E: call    eax
0x6ED4A0: test    ebp, ebp
0x6ED4A2: mov     [esi+14h], ebp
0x6ED4A5: jz      short loc_6ED4B1
0x6ED4A7: add     ebp, 4
0x6ED4AA: push    ebp; lpAddend
0x6ED4AB: call    dword ptr ds:0A28078h
0x6ED4B1: mov     ecx, edi
0x6ED4B3: call    sub_712A90
0x6ED4B8: mov     edi, [esi+18h]
0x6ED4BB: mov     ebx, eax
0x6ED4BD: cmp     edi, ebx
0x6ED4BF: jz      short loc_6ED4F2
0x6ED4C1: test    edi, edi
0x6ED4C3: jz      short loc_6ED4E1
0x6ED4C5: lea     ecx, [edi+4]
0x6ED4C8: push    ecx; lpAddend
0x6ED4C9: call    dword ptr ds:0A2807Ch
0x6ED4CF: test    eax, eax
0x6ED4D1: jnz     short loc_6ED4E1
0x6ED4D3: test    edi, edi
0x6ED4D5: jz      short loc_6ED4E1
0x6ED4D7: mov     edx, [edi]
0x6ED4D9: mov     eax, [edx]
0x6ED4DB: push    1
0x6ED4DD: mov     ecx, edi
0x6ED4DF: call    eax
0x6ED4E1: test    ebx, ebx
0x6ED4E3: mov     [esi+18h], ebx
0x6ED4E6: jz      short loc_6ED4F2
0x6ED4E8: add     ebx, 4
0x6ED4EB: push    ebx; lpAddend
0x6ED4EC: call    dword ptr ds:0A28078h
0x6ED4F2: pop     edi
0x6ED4F3: pop     esi
0x6ED4F4: pop     ebp
0x6ED4F5: pop     ebx
0x6ED4F6: retn    4
