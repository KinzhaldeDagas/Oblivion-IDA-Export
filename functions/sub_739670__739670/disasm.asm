0x739670: push    0FFFFFFFFh
0x739672: push    offset SEH_88E880
0x739677: mov     eax, large fs:0
0x73967D: push    eax
0x73967E: push    ecx
0x73967F: push    ebx
0x739680: push    ebp
0x739681: push    esi
0x739682: push    edi
0x739683: mov     eax, ds:0B30AACh
0x739688: xor     eax, esp
0x73968A: push    eax
0x73968B: lea     eax, [esp+24h+var_C]
0x73968F: mov     large fs:0, eax
0x739695: mov     edi, ecx
0x739697: xor     eax, eax
0x739699: xor     ebx, ebx
0x73969B: cmp     [edi+0Ah], ax
0x73969F: jbe     short loc_7396EF
0x7396A1: mov     [esp+24h+var_10], eax
0x7396A5: mov     edx, [edi+4]
0x7396A8: movzx   ecx, bx
0x7396AB: mov     esi, [edx+ecx*4]
0x7396AE: cmp     esi, eax
0x7396B0: lea     ebp, [edx+ecx*4]
0x7396B3: mov     [esp+24h+var_4], eax
0x7396B7: jz      short loc_7396DE
0x7396B9: lea     eax, [esi+4]
0x7396BC: push    eax; lpAddend
0x7396BD: call    dword ptr ds:0A2807Ch
0x7396C3: test    eax, eax
0x7396C5: jnz     short loc_7396D5
0x7396C7: test    esi, esi
0x7396C9: jz      short loc_7396D5
0x7396CB: mov     edx, [esi]
0x7396CD: mov     eax, [edx]
0x7396CF: push    1
0x7396D1: mov     ecx, esi
0x7396D3: call    eax
0x7396D5: mov     dword ptr [ebp+0], 0
0x7396DC: xor     eax, eax
0x7396DE: add     ebx, 1
0x7396E1: cmp     bx, [edi+0Ah]
0x7396E5: mov     [esp+24h+var_4], 0FFFFFFFFh
0x7396ED: jb      short loc_7396A5
0x7396EF: mov     [edi+0Ch], ax
0x7396F3: mov     [edi+0Ah], ax
0x7396F7: mov     ecx, dword ptr [esp+24h+var_C]
0x7396FB: mov     large fs:0, ecx
0x739702: pop     ecx
0x739703: pop     edi
0x739704: pop     esi
0x739705: pop     ebp
0x739706: pop     ebx
0x739707: add     esp, 10h
0x73970A: retn
