0x42E2D0: sub     esp, 174h
0x42E2D6: mov     eax, ___security_cookie
0x42E2DB: xor     eax, esp
0x42E2DD: mov     [esp+174h+var_4], eax
0x42E2E4: mov     eax, ArchiveInvalidatedDirPAths
0x42E2E9: push    edi
0x42E2EA: mov     edi, ecx
0x42E2EC: xor     ecx, ecx
0x42E2EE: cmp     eax, ecx
0x42E2F0: mov     [esp+178h+var_16C], edi
0x42E2F4: mov     [esp+178h+var_174], ecx
0x42E2F8: jnz     short loc_42E31A
0x42E2FA: cmp     ArchiveInvalidateFilenames, ecx
0x42E300: jnz     short loc_42E31A
0x42E302: xor     eax, eax
0x42E304: pop     edi
0x42E305: mov     ecx, [esp+174h+var_4]
0x42E30C: xor     ecx, esp
0x42E30E: call    @__security_check_cookie@4; __security_check_cookie(x)
0x42E313: add     esp, 174h
0x42E319: retn
0x42E31A: test    byte ptr [edi+160h], 1
0x42E321: push    esi; ArgList
0x42E322: jz      loc_42E51A
0x42E328: mov     edx, [edi+160h]
0x42E32E: shr     edx, 1
0x42E330: test    dl, 1
0x42E333: jz      loc_42E51A
0x42E339: cmp     [edi+164h], ecx
0x42E33F: mov     [esp+17Ch+var_164], ecx
0x42E343: jbe     loc_42E56A
0x42E349: push    ebx
0x42E34A: push    ebp
0x42E34B: mov     [esp+184h+var_168], ecx
0x42E34F: jmp     short loc_42E358
0x42E351: mov     eax, ArchiveInvalidatedDirPAths
0x42E356: mov     edi, edx
0x42E358: mov     ebp, [edi+178h]
0x42E35E: add     ebp, [esp+184h+var_168]
0x42E362: test    eax, eax
0x42E364: mov     [esp+184h+var_170], ebp
0x42E368: jz      short loc_42E3BA
0x42E36A: movzx   ebx, word ptr [eax+0Ah]
0x42E36E: xor     esi, esi
0x42E370: test    ebx, ebx
0x42E372: jbe     short loc_42E3BA
0x42E374: mov     ecx, [ebp+0]
0x42E377: mov     edi, [ebp+4]
0x42E37A: mov     [esp+184h+var_154], ecx
0x42E37E: mov     ecx, [eax+4]
0x42E381: mov     eax, [ecx]
0x42E383: mov     edx, [eax]
0x42E385: mov     eax, [eax+4]
0x42E388: cmp     eax, edi
0x42E38A: jb      short loc_42E3AC
0x42E38C: ja      short loc_42E398
0x42E38E: cmp     edx, [esp+184h+var_154]
0x42E392: mov     ebp, [esp+184h+var_170]
0x42E396: jb      short loc_42E3AC
0x42E398: cmp     eax, edi
0x42E39A: jb      loc_42E4A1
0x42E3A0: ja      short loc_42E3AC
0x42E3A2: cmp     edx, [esp+184h+var_154]
0x42E3A6: jbe     loc_42E4A1
0x42E3AC: add     esi, 1
0x42E3AF: add     ecx, 4
0x42E3B2: cmp     esi, ebx
0x42E3B4: jb      short loc_42E381
0x42E3B6: mov     edi, [esp+184h+var_16C]
0x42E3BA: mov     cx, word ptr ds:aData+4; "\\"
0x42E3C1: mov     edx, [esp+184h+var_164]
0x42E3C5: mov     eax, dword ptr ds:aData; "Data\\"
0x42E3CA: mov     word ptr [esp+184h+FindFileData.ftCreationTime.dwLowDateTime], cx
0x42E3CF: push    edx
0x42E3D0: mov     ecx, edi
0x42E3D2: mov     [esp+188h+FindFileData.dwFileAttributes], eax
0x42E3D6: call    Archive_LoadFolderNames
0x42E3DB: mov     ecx, eax
0x42E3DD: lea     ecx, [ecx+0]
0x42E3E0: mov     dl, [eax]
0x42E3E2: add     eax, 1
0x42E3E5: test    dl, dl
0x42E3E7: jnz     short loc_42E3E0
0x42E3E9: lea     edi, [esp+184h+FindFileData]
0x42E3ED: sub     eax, ecx
0x42E3EF: mov     esi, ecx
0x42E3F1: add     edi, 0FFFFFFFFh
0x42E3F4: mov     cl, [edi+1]
0x42E3F7: add     edi, 1
0x42E3FA: test    cl, cl
0x42E3FC: jnz     short loc_42E3F4
0x42E3FE: mov     ecx, eax
0x42E400: shr     ecx, 2
0x42E403: rep movsd
0x42E405: mov     ecx, eax
0x42E407: and     ecx, 3
0x42E40A: rep movsb
0x42E40C: xor     esi, esi
0x42E40E: lea     eax, [esp+184h+FindFileData]
0x42E412: push    esi; int
0x42E413: push    eax; char *
0x42E414: call    __access
0x42E419: add     esp, 8
0x42E41C: cmp     eax, 0FFFFFFFFh
0x42E41F: jz      loc_42E4F6
0x42E425: cmp     [ebp+8], esi
0x42E428: mov     [esp+184h+var_15C], esi
0x42E42C: jbe     loc_42E4F6
0x42E432: mov     [esp+184h+var_160], esi
0x42E436: jmp     short loc_42E440
0x42E438: align 10h
0x42E440: mov     edx, [ebp+0Ch]
0x42E443: mov     eax, ArchiveInvalidateFilenames
0x42E448: add     edx, [esp+184h+var_160]
0x42E44C: test    eax, eax
0x42E44E: jz      loc_42E4DD
0x42E454: movzx   ecx, word ptr [eax+0Ah]
0x42E458: xor     edi, edi
0x42E45A: test    ecx, ecx
0x42E45C: mov     [esp+184h+var_158], ecx
0x42E460: jbe     short loc_42E4DD
0x42E462: mov     ecx, [edx]
0x42E464: mov     ebx, [edx+4]
0x42E467: mov     [esp+184h+var_14C], ecx
0x42E46B: mov     ecx, [eax+4]
0x42E46E: mov     edi, edi
0x42E470: mov     eax, [ecx]
0x42E472: mov     esi, [eax]
0x42E474: mov     eax, [eax+4]
0x42E477: cmp     eax, ebx
0x42E479: jb      short loc_42E493
0x42E47B: ja      short loc_42E487
0x42E47D: cmp     esi, [esp+184h+var_14C]
0x42E481: mov     ebp, [esp+184h+var_170]
0x42E485: jb      short loc_42E493
0x42E487: cmp     eax, ebx
0x42E489: jb      short loc_42E4D1
0x42E48B: ja      short loc_42E493
0x42E48D: cmp     esi, [esp+184h+var_14C]
0x42E491: jbe     short loc_42E4D1
0x42E493: add     edi, 1
0x42E496: add     ecx, 4
0x42E499: cmp     edi, [esp+184h+var_158]
0x42E49D: jb      short loc_42E470
0x42E49F: jmp     short loc_42E4DD
0x42E4A1: xor     ecx, ecx
0x42E4A3: cmp     [ebp+8], ecx
0x42E4A6: jbe     short loc_42E4C8
0x42E4A8: xor     edx, edx
0x42E4AA: lea     ebx, [ebx+0]
0x42E4B0: mov     eax, [ebp+0Ch]
0x42E4B3: and     dword ptr [eax+edx+0Ch], 80000000h
0x42E4BB: add     eax, edx
0x42E4BD: add     ecx, 1
0x42E4C0: add     edx, 10h
0x42E4C3: cmp     ecx, [ebp+8]
0x42E4C6: jb      short loc_42E4B0
0x42E4C8: mov     edx, [ebp+8]
0x42E4CB: add     [esp+184h+var_174], edx
0x42E4CF: jmp     short loc_42E4F6
0x42E4D1: and     dword ptr [edx+0Ch], 80000000h
0x42E4D8: add     [esp+184h+var_174], 1
0x42E4DD: mov     eax, [esp+184h+var_15C]
0x42E4E1: add     [esp+184h+var_160], 10h
0x42E4E6: add     eax, 1
0x42E4E9: cmp     eax, [ebp+8]
0x42E4EC: mov     [esp+184h+var_15C], eax
0x42E4F0: jb      loc_42E440
0x42E4F6: mov     eax, [esp+184h+var_164]
0x42E4FA: mov     edx, [esp+184h+var_16C]
0x42E4FE: add     [esp+184h+var_168], 10h
0x42E503: add     eax, 1
0x42E506: cmp     eax, [edx+164h]
0x42E50C: mov     [esp+184h+var_164], eax
0x42E510: jb      loc_42E351
0x42E516: pop     ebp
0x42E517: pop     ebx
0x42E518: jmp     short loc_42E56A
0x42E51A: push    offset aBinvalidateold; "bInvalidateOlderFiles is true in the IN"...
0x42E51F: call    PrintError
0x42E524: add     esp, 4
0x42E527: lea     eax, [esp+17Ch+FindFileData]
0x42E52B: push    eax; lpFindFileData
0x42E52C: lea     esi, [edi+3Ch]
0x42E52F: push    esi; lpFileName
0x42E530: call    ds:FindFirstFileA
0x42E536: cmp     eax, 0FFFFFFFFh
0x42E539: jnz     short loc_42E54B
0x42E53B: push    esi; ArgList
0x42E53C: push    offset aCouldNotFin_10; "Could not find Archive %s to get file t"...
0x42E541: call    PrintError
0x42E546: add     esp, 8
0x42E549: jmp     short loc_42E552
0x42E54B: push    eax; hFindFile
0x42E54C: call    ds:FindClose
0x42E552: mov     edx, off_B0555C; "Data\\"
0x42E558: lea     ecx, [esp+17Ch+FindFileData.ftLastWriteTime]
0x42E55C: push    ecx
0x42E55D: push    offset EmptyString
0x42E562: push    edx
0x42E563: mov     ecx, edi
0x42E565: call    BSA_InvalidateAgainstLooseFiles
0x42E56A: mov     ecx, [esp+17Ch+var_4]
0x42E571: mov     eax, [esp+17Ch+var_174]
0x42E575: pop     esi
0x42E576: pop     edi
0x42E577: xor     ecx, esp
0x42E579: call    @__security_check_cookie@4; __security_check_cookie(x)
0x42E57E: add     esp, 174h
0x42E584: retn
