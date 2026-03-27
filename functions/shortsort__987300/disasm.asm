0x987300: mov     ecx, [esp+arg_0]
0x987304: push    ebp
0x987305: mov     ebp, [esp+4+arg_4]
0x987309: cmp     ebp, ecx
0x98730B: jbe     short loc_987385
0x98730D: push    ebx
0x98730E: mov     ebx, [esp+8+arg_8]
0x987312: push    esi
0x987313: lea     eax, [ecx+ebx]
0x987316: push    edi
0x987317: mov     [esp+10h+arg_4], eax
0x98731B: jmp     short loc_987320
0x98731D: align 10h
0x987320: mov     esi, [esp+10h+arg_4]
0x987324: cmp     esi, ebp
0x987326: mov     edi, ecx
0x987328: ja      short loc_987349
0x98732A: lea     ebx, [ebx+0]
0x987330: push    edi
0x987331: push    esi
0x987332: call    [esp+18h+arg_C]
0x987336: add     esp, 8
0x987339: test    eax, eax
0x98733B: jle     short loc_98733F
0x98733D: mov     edi, esi
0x98733F: add     esi, ebx
0x987341: cmp     esi, ebp
0x987343: jbe     short loc_987330
0x987345: mov     ecx, [esp+10h+arg_0]
0x987349: cmp     edi, ebp
0x98734B: mov     esi, ebx
0x98734D: mov     eax, ebp
0x98734F: jz      short loc_98737C
0x987351: test    ebx, ebx
0x987353: jz      short loc_98737C
0x987355: mov     ecx, edi
0x987357: sub     ecx, ebp
0x987359: lea     esp, [esp+0]
0x987360: mov     bl, [eax]
0x987362: mov     dl, [ecx+eax]
0x987365: mov     [ecx+eax], bl
0x987368: sub     esi, 1
0x98736B: mov     [eax], dl
0x98736D: add     eax, 1
0x987370: test    esi, esi
0x987372: jnz     short loc_987360
0x987374: mov     ebx, [esp+10h+arg_8]
0x987378: mov     ecx, [esp+10h+arg_0]
0x98737C: sub     ebp, ebx
0x98737E: cmp     ebp, ecx
0x987380: ja      short loc_987320
0x987382: pop     edi
0x987383: pop     esi
0x987384: pop     ebx
0x987385: pop     ebp
0x987386: retn
