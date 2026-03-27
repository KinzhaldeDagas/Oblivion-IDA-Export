0x43B280: push    0FFFFFFFFh
0x43B282: push    offset SEH_43B420
0x43B287: mov     eax, large fs:0
0x43B28D: push    eax
0x43B28E: sub     esp, 8
0x43B291: push    ebx
0x43B292: push    ebp
0x43B293: push    esi
0x43B294: push    edi
0x43B295: mov     eax, ___security_cookie
0x43B29A: xor     eax, esp
0x43B29C: push    eax
0x43B29D: lea     eax, [esp+28h+var_C]
0x43B2A1: mov     large fs:0, eax
0x43B2A7: mov     esi, ecx
0x43B2A9: xor     ebx, ebx
0x43B2AB: mov     [esp+28h+var_10], ebx
0x43B2AF: mov     eax, [esi]
0x43B2B1: mov     edi, [esp+28h+arg_4]
0x43B2B5: mov     edx, [edi]
0x43B2B7: lea     ecx, [esp+28h+var_14]
0x43B2BB: mov     [esp+28h+var_14], ebx
0x43B2BF: mov     ebp, [eax]
0x43B2C1: mov     eax, [edx+14h]
0x43B2C4: push    ecx
0x43B2C5: mov     ecx, edi
0x43B2C7: call    eax
0x43B2C9: mov     ecx, [esi]
0x43B2CB: mov     edx, [ebp+4]
0x43B2CE: push    eax
0x43B2CF: call    edx
0x43B2D1: test    al, al
0x43B2D3: jz      loc_43B366
0x43B2D9: cmp     byte ptr [esp+28h+arg_1C], bl
0x43B2DD: jz      short loc_43B2ED
0x43B2DF: mov     eax, [esp+28h+var_14]
0x43B2E3: add     eax, 4
0x43B2E6: push    eax; lpAddend
0x43B2E7: call    ds:InterlockedIncrement
0x43B2ED: mov     edi, [esp+28h+arg_C]
0x43B2F1: cmp     edi, ebx
0x43B2F3: jz      short loc_43B35B
0x43B2F5: push    38h ; '8'; Size
0x43B2F7: call    FormHeapAlloc
0x43B2FC: add     esp, 4
0x43B2FF: cmp     eax, ebx
0x43B301: jz      short loc_43B318
0x43B303: mov     ecx, [esp+28h+arg_8]
0x43B307: mov     edx, [esp+28h+var_14]
0x43B30B: push    ecx
0x43B30C: push    edx
0x43B30D: mov     ecx, eax
0x43B30F: call    sub_437430
0x43B314: mov     esi, eax
0x43B316: jmp     short loc_43B31A
0x43B318: xor     esi, esi
0x43B31A: cmp     esi, ebx
0x43B31C: mov     [esp+28h+arg_1C], esi
0x43B320: jz      short loc_43B32C
0x43B322: lea     eax, [esi+8]
0x43B325: push    eax; lpAddend
0x43B326: call    ds:InterlockedIncrement
0x43B32C: mov     ebp, 1
0x43B331: push    edi
0x43B332: mov     ecx, esi
0x43B334: mov     [esp+2Ch+var_4], ebp
0x43B338: call    sub_43AC40
0x43B33D: mov     edx, [esi]
0x43B33F: mov     eax, [edx+28h]
0x43B342: mov     ecx, esi
0x43B344: call    eax
0x43B346: mov     ebx, [esp+28h+arg_0]
0x43B34A: lea     edi, [esi+8]
0x43B34D: push    edi; lpAddend
0x43B34E: mov     [ebx], esi
0x43B350: call    ds:InterlockedIncrement
0x43B356: jmp     loc_43B3E9
0x43B35B: mov     eax, [esp+28h+arg_0]
0x43B35F: mov     [eax], ebx
0x43B361: jmp     loc_43B408
0x43B366: push    38h ; '8'; Size
0x43B368: call    FormHeapAlloc
0x43B36D: add     esp, 4
0x43B370: mov     [esp+28h+arg_4], eax
0x43B374: cmp     eax, ebx
0x43B376: mov     [esp+28h+var_4], 2
0x43B37E: jz      short loc_43B3A5
0x43B380: mov     ecx, [esp+28h+arg_1C]
0x43B384: mov     edx, [esp+28h+arg_18]
0x43B388: push    ecx
0x43B389: mov     ecx, [esp+2Ch+arg_14]
0x43B38D: push    edx
0x43B38E: mov     edx, [esp+30h+arg_10]
0x43B392: push    ecx
0x43B393: mov     ecx, [esp+34h+arg_8]
0x43B397: push    edx
0x43B398: push    ecx
0x43B399: push    edi
0x43B39A: mov     ecx, eax
0x43B39C: call    sub_437350
0x43B3A1: mov     esi, eax
0x43B3A3: jmp     short loc_43B3A7
0x43B3A5: xor     esi, esi
0x43B3A7: cmp     esi, ebx
0x43B3A9: mov     ebp, ds:InterlockedIncrement
0x43B3AF: mov     [esp+28h+arg_1C], esi
0x43B3B3: jz      short loc_43B3BB
0x43B3B5: lea     edx, [esi+8]
0x43B3B8: push    edx; lpAddend
0x43B3B9: call    ebp ; InterlockedIncrement
0x43B3BB: mov     eax, [esp+28h+arg_C]
0x43B3BF: push    eax
0x43B3C0: mov     ecx, esi
0x43B3C2: mov     [esp+2Ch+var_4], 3
0x43B3CA: call    sub_43AC40
0x43B3CF: mov     edx, [esi]
0x43B3D1: mov     eax, [edx+20h]
0x43B3D4: mov     ecx, esi
0x43B3D6: call    eax
0x43B3D8: mov     ebx, [esp+28h+arg_0]
0x43B3DC: lea     edi, [esi+8]
0x43B3DF: push    edi; lpAddend
0x43B3E0: mov     [ebx], esi
0x43B3E2: call    ebp ; InterlockedIncrement
0x43B3E4: mov     ebp, 1
0x43B3E9: push    edi; lpAddend
0x43B3EA: mov     byte ptr [esp+2Ch+var_4], 0
0x43B3EF: mov     [esp+2Ch+var_10], ebp
0x43B3F3: call    ds:InterlockedDecrement
0x43B3F9: test    eax, eax
0x43B3FB: jnz     short loc_43B406
0x43B3FD: mov     edx, [esi]
0x43B3FF: mov     eax, [edx]
0x43B401: push    ebp
0x43B402: mov     ecx, esi
0x43B404: call    eax
0x43B406: mov     eax, ebx
0x43B408: mov     ecx, [esp+28h+var_C]
0x43B40C: mov     large fs:0, ecx
0x43B413: pop     ecx
0x43B414: pop     edi
0x43B415: pop     esi
0x43B416: pop     ebp
0x43B417: pop     ebx
0x43B418: add     esp, 14h
0x43B41B: retn    20h ; ' '
