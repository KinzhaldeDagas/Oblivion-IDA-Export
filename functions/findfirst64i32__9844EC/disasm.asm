0x9844EC: push    ebp
0x9844ED: mov     ebp, esp
0x9844EF: sub     esp, 144h
0x9844F5: mov     eax, ds:0B30AACh
0x9844FA: xor     eax, ebp
0x9844FC: mov     [ebp+var_4], eax
0x9844FF: mov     eax, [ebp+lpFileName]
0x984502: push    esi
0x984503: mov     esi, [ebp+arg_4]
0x984506: push    edi
0x984507: xor     edi, edi
0x984509: cmp     esi, edi
0x98450B: jnz     short loc_98452D
0x98450D: call    __errno
0x984512: push    edi
0x984513: push    edi
0x984514: push    edi
0x984515: push    edi
0x984516: push    edi
0x984517: mov     dword ptr [eax], 16h
0x98451D: call    __invalid_parameter
0x984522: add     esp, 14h
0x984525: or      eax, 0FFFFFFFFh
0x984528: jmp     loc_98460E
0x98452D: cmp     eax, edi
0x98452F: jz      short loc_98450D
0x984531: push    ebx
0x984532: lea     ecx, [ebp+FindFileData]
0x984538: push    ecx; lpFindFileData
0x984539: push    eax; lpFileName
0x98453A: call    dword ptr ds:0A2812Ch
0x984540: mov     ebx, eax
0x984542: cmp     ebx, 0FFFFFFFFh
0x984545: jnz     short loc_98458C
0x984547: call    dword ptr ds:0A281ECh
0x98454D: push    2
0x98454F: pop     esi
0x984550: cmp     eax, esi
0x984552: jb      short loc_984563
0x984554: cmp     eax, 3
0x984557: jbe     short loc_984583
0x984559: cmp     eax, 8
0x98455C: jz      short loc_984576
0x98455E: cmp     eax, 12h
0x984561: jz      short loc_984583
0x984563: call    __errno
0x984568: mov     dword ptr [eax], 16h
0x98456E: or      eax, 0FFFFFFFFh
0x984571: jmp     loc_98460D
0x984576: call    __errno
0x98457B: mov     dword ptr [eax], 0Ch
0x984581: jmp     short loc_98456E
0x984583: call    __errno
0x984588: mov     [eax], esi
0x98458A: jmp     short loc_98456E
0x98458C: mov     eax, [ebp+FindFileData.dwFileAttributes]
0x984592: sub     eax, 80h ; '€'
0x984597: neg     eax
0x984599: sbb     eax, eax
0x98459B: and     eax, [ebp+FindFileData.dwFileAttributes]
0x9845A1: mov     [esi], eax
0x9845A3: lea     eax, [ebp+FindFileData.ftCreationTime]
0x9845A9: push    eax; lpFileTime
0x9845AA: call    ___time64_t_from_ft
0x9845AF: mov     [esi+8], eax
0x9845B2: lea     eax, [ebp+FindFileData.ftLastAccessTime]
0x9845B8: push    eax; lpFileTime
0x9845B9: mov     [esi+0Ch], edx
0x9845BC: call    ___time64_t_from_ft
0x9845C1: mov     [esi+10h], eax
0x9845C4: lea     eax, [ebp+FindFileData.ftLastWriteTime]
0x9845CA: push    eax; lpFileTime
0x9845CB: mov     [esi+14h], edx
0x9845CE: call    ___time64_t_from_ft
0x9845D3: mov     [esi+18h], eax
0x9845D6: mov     eax, [ebp+FindFileData.nFileSizeLow]
0x9845DC: mov     [esi+20h], eax
0x9845DF: lea     eax, [ebp+FindFileData.cFileName]
0x9845E5: push    eax; Src
0x9845E6: mov     [esi+1Ch], edx
0x9845E9: push    104h; SizeInBytes
0x9845EE: add     esi, 24h ; '$'
0x9845F1: push    esi; Dst
0x9845F2: call    _strcpy_s
0x9845F7: add     esp, 18h
0x9845FA: test    eax, eax
0x9845FC: jz      short loc_98460B
0x9845FE: push    edi
0x9845FF: push    edi
0x984600: push    edi
0x984601: push    edi
0x984602: push    edi
0x984603: call    __invoke_watson
0x984608: add     esp, 14h
0x98460B: mov     eax, ebx
0x98460D: pop     ebx
0x98460E: mov     ecx, [ebp+var_4]
0x984611: pop     edi
0x984612: xor     ecx, ebp
0x984614: pop     esi
0x984615: call    @__security_check_cookie@4
0x98461A: leave
0x98461B: retn
