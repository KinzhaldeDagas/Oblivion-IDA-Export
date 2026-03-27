0x98461C: push    ebp
0x98461D: mov     ebp, esp
0x98461F: sub     esp, 144h
0x984625: mov     eax, ds:0B30AACh
0x98462A: xor     eax, ebp
0x98462C: mov     [ebp+var_4], eax
0x98462F: mov     eax, [ebp+hFindFile]
0x984632: cmp     eax, 0FFFFFFFFh
0x984635: push    esi
0x984636: mov     esi, [ebp+arg_4]
0x984639: push    edi
0x98463A: jnz     short loc_98465E
0x98463C: call    __errno
0x984641: xor     edi, edi
0x984643: push    edi
0x984644: push    edi
0x984645: push    edi
0x984646: push    edi
0x984647: push    edi
0x984648: mov     dword ptr [eax], 16h
0x98464E: call    __invalid_parameter
0x984653: add     esp, 14h
0x984656: or      eax, 0FFFFFFFFh
0x984659: jmp     loc_98473D
0x98465E: xor     edi, edi
0x984660: cmp     esi, edi
0x984662: jnz     short loc_98466B
0x984664: call    __errno
0x984669: jmp     short loc_984643
0x98466B: lea     ecx, [ebp+FindFileData]
0x984671: push    ecx; lpFindFileData
0x984672: push    eax; hFindFile
0x984673: call    dword ptr ds:0A28124h
0x984679: test    eax, eax
0x98467B: jnz     short loc_9846BC
0x98467D: call    dword ptr ds:0A281ECh
0x984683: push    2
0x984685: pop     esi
0x984686: cmp     eax, esi
0x984688: jb      short loc_984699
0x98468A: cmp     eax, 3
0x98468D: jbe     short loc_9846B3
0x98468F: cmp     eax, 8
0x984692: jz      short loc_9846A6
0x984694: cmp     eax, 12h
0x984697: jz      short loc_9846B3
0x984699: call    __errno
0x98469E: mov     dword ptr [eax], 16h
0x9846A4: jmp     short loc_984656
0x9846A6: call    __errno
0x9846AB: mov     dword ptr [eax], 0Ch
0x9846B1: jmp     short loc_984656
0x9846B3: call    __errno
0x9846B8: mov     [eax], esi
0x9846BA: jmp     short loc_984656
0x9846BC: mov     eax, [ebp+FindFileData.dwFileAttributes]
0x9846C2: sub     eax, 80h ; '€'
0x9846C7: neg     eax
0x9846C9: sbb     eax, eax
0x9846CB: and     eax, [ebp+FindFileData.dwFileAttributes]
0x9846D1: mov     [esi], eax
0x9846D3: lea     eax, [ebp+FindFileData.ftCreationTime]
0x9846D9: push    eax; lpFileTime
0x9846DA: call    ___time64_t_from_ft
0x9846DF: mov     [esi+8], eax
0x9846E2: lea     eax, [ebp+FindFileData.ftLastAccessTime]
0x9846E8: push    eax; lpFileTime
0x9846E9: mov     [esi+0Ch], edx
0x9846EC: call    ___time64_t_from_ft
0x9846F1: mov     [esi+10h], eax
0x9846F4: lea     eax, [ebp+FindFileData.ftLastWriteTime]
0x9846FA: push    eax; lpFileTime
0x9846FB: mov     [esi+14h], edx
0x9846FE: call    ___time64_t_from_ft
0x984703: mov     [esi+18h], eax
0x984706: mov     eax, [ebp+FindFileData.nFileSizeLow]
0x98470C: mov     [esi+20h], eax
0x98470F: lea     eax, [ebp+FindFileData.cFileName]
0x984715: push    eax; Src
0x984716: mov     [esi+1Ch], edx
0x984719: push    104h; SizeInBytes
0x98471E: add     esi, 24h ; '$'
0x984721: push    esi; Dst
0x984722: call    _strcpy_s
0x984727: add     esp, 18h
0x98472A: test    eax, eax
0x98472C: jz      short loc_98473B
0x98472E: push    edi
0x98472F: push    edi
0x984730: push    edi
0x984731: push    edi
0x984732: push    edi
0x984733: call    __invoke_watson
0x984738: add     esp, 14h
0x98473B: xor     eax, eax
0x98473D: mov     ecx, [ebp+var_4]
0x984740: pop     edi
0x984741: xor     ecx, ebp
0x984743: pop     esi
0x984744: call    @__security_check_cookie@4
0x984749: leave
0x98474A: retn
