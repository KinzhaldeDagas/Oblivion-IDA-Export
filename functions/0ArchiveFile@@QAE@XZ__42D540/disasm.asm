0x42D540: push    0FFFFFFFFh
0x42D542: push    offset ??0ArchiveFile@@QAE@XZ_SEH
0x42D547: mov     eax, large fs:0
0x42D54D: push    eax
0x42D54E: push    ecx
0x42D54F: push    ebx
0x42D550: push    ebp
0x42D551: push    esi
0x42D552: push    edi
0x42D553: mov     eax, ___security_cookie
0x42D558: xor     eax, esp
0x42D55A: push    eax
0x42D55B: lea     eax, [esp+24h+var_C]
0x42D55F: mov     large fs:0, eax
0x42D565: mov     esi, ecx
0x42D567: mov     [esp+24h+var_10], esi
0x42D56B: call    BSFile_constr_noargs
0x42D570: mov     eax, [esp+24h+arg_0]
0x42D574: xor     ebx, ebx
0x42D576: cmp     eax, ebx
0x42D578: mov     [esp+24h+var_4], ebx
0x42D57C: mov     dword ptr [esi], offset ??_7ArchiveFile@@6B@; const ArchiveFile::`vftable'
0x42D582: jz      short loc_42D59C
0x42D584: lea     edx, [esi+3Ch]
0x42D587: sub     edx, eax
0x42D589: lea     esp, [esp+0]
0x42D590: mov     cl, [eax]
0x42D592: mov     [edx+eax], cl
0x42D595: add     eax, 1
0x42D598: cmp     cl, bl
0x42D59A: jnz     short loc_42D590
0x42D59C: mov     eax, [esp+24h+arg_4]
0x42D5A0: mov     [esi+154h], eax
0x42D5A6: add     eax, 1A8h
0x42D5AB: push    eax; lpAddend
0x42D5AC: mov     [esi+18h], ebx
0x42D5AF: call    ds:InterlockedIncrement
0x42D5B5: mov     eax, [esp+24h+arg_8]
0x42D5B9: mov     edi, [esp+24h+Size]
0x42D5BD: push    ebx
0x42D5BE: mov     ecx, esi
0x42D5C0: mov     [esi+158h], eax
0x42D5C6: mov     [esi+150h], edi
0x42D5CC: call    BSFile_SetByteSwap
0x42D5D1: mov     eax, Size
0x42D5D6: cmp     edi, eax
0x42D5D8: mov     ebp, [esp+24h+arg_10]
0x42D5DC: jbe     short loc_42D5E5
0x42D5DE: cmp     ebp, 0FFFFFFFFh
0x42D5E1: jz      short loc_42D5E5
0x42D5E3: mov     edi, eax
0x42D5E5: cmp     [esi+18h], ebx
0x42D5E8: mov     [esi+0Ch], edi
0x42D5EB: jnz     short loc_42D616
0x42D5ED: cmp     edi, ebx
0x42D5EF: mov     ecx, [esi+154h]
0x42D5F5: mov     edx, [ecx+1Ch]
0x42D5F8: mov     [esi+1Ch], edx
0x42D5FB: mov     [esi+14h], ebx
0x42D5FE: mov     [esi+10h], ebx
0x42D601: mov     [esi+18h], ebx
0x42D604: jbe     short loc_42D612
0x42D606: push    edi; Size
0x42D607: call    FormHeapAlloc
0x42D60C: add     esp, 4
0x42D60F: mov     [esi+18h], eax
0x42D612: mov     byte ptr [esi+24h], 1
0x42D616: cmp     ebp, 0FFFFFFFFh
0x42D619: jnz     short loc_42D62E
0x42D61B: mov     eax, [esi+0Ch]
0x42D61E: mov     ecx, [esi+18h]
0x42D621: push    ebx; int
0x42D622: push    eax; Count
0x42D623: push    ecx; DstBuf
0x42D624: mov     ecx, esi
0x42D626: call    sub_42C3E0
0x42D62B: mov     [esi+10h], eax
0x42D62E: mov     eax, esi
0x42D630: mov     ecx, [esp+24h+var_C]
0x42D634: mov     large fs:0, ecx
0x42D63B: pop     ecx
0x42D63C: pop     edi
0x42D63D: pop     esi
0x42D63E: pop     ebp
0x42D63F: pop     ebx
0x42D640: add     esp, 10h
0x42D643: retn    14h
