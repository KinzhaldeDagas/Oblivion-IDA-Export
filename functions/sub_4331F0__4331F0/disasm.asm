0x4331F0: push    0FFFFFFFFh
0x4331F2: push    offset SEH_6E16A0
0x4331F7: mov     eax, large fs:0
0x4331FD: push    eax
0x4331FE: sub     esp, 10h
0x433201: push    ebx
0x433202: push    ebp
0x433203: push    esi
0x433204: push    edi
0x433205: mov     eax, ___security_cookie
0x43320A: xor     eax, esp
0x43320C: push    eax
0x43320D: lea     eax, [esp+30h+var_C]
0x433211: mov     large fs:0, eax
0x433217: mov     esi, ecx
0x433219: mov     ebx, [esp+30h+arg_8]
0x43321D: mov     eax, [esp+30h+arg_4]
0x433221: mov     ecx, [esp+30h+arg_0]
0x433225: push    ebx; int
0x433226: push    eax; int
0x433227: push    ecx; Comperand
0x433228: mov     ecx, esi
0x43322A: mov     [esp+3Ch+var_19], 1
0x43322F: xor     edi, edi
0x433231: call    sub_432A60
0x433236: test    al, al
0x433238: jnz     loc_433317
0x43323E: test    edi, edi
0x433240: jnz     short loc_433289
0x433242: push    10h; Size
0x433244: call    FormHeapAlloc
0x433249: mov     edi, eax
0x43324B: add     esp, 4
0x43324E: mov     [esp+30h+var_10], edi
0x433252: test    edi, edi
0x433254: mov     [esp+30h+var_4], 0
0x43325C: jz      short loc_43327D
0x43325E: mov     edx, [esp+30h+arg_C]
0x433262: mov     ecx, [esi]
0x433264: mov     eax, [ecx]
0x433266: mov     eax, [eax+24h]
0x433269: push    edx
0x43326A: mov     edx, [esp+34h+arg_4]
0x43326E: push    ebx
0x43326F: push    edx
0x433270: call    eax
0x433272: push    edx
0x433273: push    eax
0x433274: mov     ecx, edi
0x433276: call    sub_432690
0x43327B: jmp     short loc_43327F
0x43327D: xor     eax, eax
0x43327F: mov     [esp+30h+var_4], 0FFFFFFFFh
0x433287: mov     edi, eax
0x433289: mov     eax, [esi+14h]
0x43328C: and     eax, 0FFFFFFFEh
0x43328F: mov     [esp+30h+Comperand], eax
0x433293: mov     ecx, [esp+30h+Comperand]
0x433297: and     ecx, 0FFFFFFFEh
0x43329A: mov     [esp+30h+Comperand], ecx
0x43329E: mov     [esp+30h+Exchange], edi
0x4332A2: mov     edx, [esp+30h+Exchange]
0x4332A6: mov     ebp, [esp+30h+Comperand]
0x4332AA: mov     eax, [esp+30h+Comperand]
0x4332AE: and     edx, 0FFFFFFFEh
0x4332B1: mov     [edi+0Ch], eax
0x4332B4: mov     [esp+30h+Exchange], edx
0x4332B8: mov     eax, [esp+30h+Exchange]
0x4332BC: mov     ecx, [esi+10h]
0x4332BF: push    ebp; Comperand
0x4332C0: push    eax; Exchange
0x4332C1: push    ecx; Destination
0x4332C2: call    ds:InterlockedCompareExchange
0x4332C8: cmp     eax, ebp
0x4332CA: jz      short loc_43333A
0x4332CC: mov     ecx, [esp+30h+arg_4]
0x4332D0: mov     edx, [esp+30h+arg_0]
0x4332D4: push    ebx; int
0x4332D5: push    ecx; int
0x4332D6: push    edx; Comperand
0x4332D7: mov     ecx, esi
0x4332D9: call    sub_432A60
0x4332DE: test    al, al
0x4332E0: jz      loc_43323E
0x4332E6: test    edi, edi
0x4332E8: jz      short loc_433317
0x4332EA: mov     ebp, [edi+8]
0x4332ED: test    ebp, ebp
0x4332EF: jz      short loc_43330E
0x4332F1: lea     eax, [ebp+8]
0x4332F4: push    eax; lpAddend
0x4332F5: call    ds:InterlockedDecrement
0x4332FB: test    eax, eax
0x4332FD: jnz     short loc_43330E
0x4332FF: test    ebp, ebp
0x433301: jz      short loc_43330E
0x433303: mov     edx, [ebp+0]
0x433306: mov     eax, [edx]
0x433308: push    1
0x43330A: mov     ecx, ebp
0x43330C: call    eax
0x43330E: push    edi
0x43330F: call    FormHeapFree
0x433314: add     esp, 4
0x433317: cmp     [esp+30h+arg_10], 0
0x43331C: jz      short loc_433333
0x43331E: mov     ecx, [esp+30h+arg_C]
0x433322: push    ecx
0x433323: mov     ecx, [esi+14h]
0x433326: and     ecx, 0FFFFFFFEh
0x433329: add     ecx, 8
0x43332C: call    sub_4348B0
0x433331: jmp     short loc_433343
0x433333: mov     [esp+30h+var_19], 0
0x433338: jmp     short loc_433343
0x43333A: mov     ecx, [esi]
0x43333C: mov     edx, [ecx]
0x43333E: mov     eax, [edx+30h]
0x433341: call    eax
0x433343: mov     ecx, [esi+4]
0x433346: mov     dword ptr [ecx], 0
0x43334C: mov     edx, [esi+8]
0x43334F: mov     dword ptr [edx], 0
0x433355: mov     eax, [esi+0Ch]
0x433358: mov     dword ptr [eax], 0
0x43335E: mov     al, [esp+30h+var_19]
0x433362: mov     ecx, [esp+30h+var_C]
0x433366: mov     large fs:0, ecx
0x43336D: pop     ecx
0x43336E: pop     edi
0x43336F: pop     esi
0x433370: pop     ebp
0x433371: pop     ebx
0x433372: add     esp, 1Ch
0x433375: retn    14h
