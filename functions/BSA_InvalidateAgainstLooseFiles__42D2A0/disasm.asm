0x42D2A0: sub     esp, 378h
0x42D2A6: mov     eax, ___security_cookie
0x42D2AB: xor     eax, esp
0x42D2AD: mov     [esp+378h+var_4], eax
0x42D2B4: mov     eax, [esp+378h+arg_0]
0x42D2BB: push    ebx
0x42D2BC: push    ebp
0x42D2BD: mov     ebp, [esp+380h+arg_4]
0x42D2C4: mov     ebx, ecx
0x42D2C6: mov     ecx, [esp+380h+arg_8]
0x42D2CD: push    esi
0x42D2CE: lea     edx, [esp+384h+FileName]
0x42D2D5: push    edi
0x42D2D6: mov     [esp+388h+var_368], eax
0x42D2DA: mov     [esp+388h+var_364], ebp
0x42D2DE: mov     [esp+388h+lpFileTime2], ecx
0x42D2E2: mov     [esp+388h+var_374], 0
0x42D2EA: sub     edx, eax
0x42D2EC: lea     esp, [esp+0]
0x42D2F0: mov     cl, [eax]
0x42D2F2: mov     [edx+eax], cl
0x42D2F5: add     eax, 1
0x42D2F8: test    cl, cl
0x42D2FA: jnz     short loc_42D2F0
0x42D2FC: mov     eax, ebp
0x42D2FE: mov     edx, ebp
0x42D300: mov     cl, [eax]
0x42D302: add     eax, 1
0x42D305: test    cl, cl
0x42D307: jnz     short loc_42D300
0x42D309: lea     edi, [esp+388h+FileName]
0x42D310: sub     eax, edx
0x42D312: add     edi, 0FFFFFFFFh
0x42D315: mov     cl, [edi+1]
0x42D318: add     edi, 1
0x42D31B: test    cl, cl
0x42D31D: jnz     short loc_42D315
0x42D31F: mov     ecx, eax
0x42D321: shr     ecx, 2
0x42D324: mov     esi, edx
0x42D326: rep movsd
0x42D328: mov     ecx, eax
0x42D32A: and     ecx, 3
0x42D32D: rep movsb
0x42D32F: lea     edi, [esp+388h+FileName]
0x42D336: add     edi, 0FFFFFFFFh
0x42D339: lea     esp, [esp+0]
0x42D340: mov     al, [edi+1]
0x42D343: add     edi, 1
0x42D346: test    al, al
0x42D348: jnz     short loc_42D340
0x42D34A: mov     edx, ds:dword_A35DD8
0x42D350: lea     eax, [esp+388h+FindFileData]
0x42D354: push    eax; lpFindFileData
0x42D355: lea     ecx, [esp+38Ch+FileName]
0x42D35C: push    ecx; lpFileName
0x42D35D: mov     [edi], edx
0x42D35F: call    ds:FindFirstFileA
0x42D365: mov     esi, eax
0x42D367: cmp     esi, 0FFFFFFFFh
0x42D36A: mov     [esp+388h+hFindFile], esi
0x42D36E: jnz     short loc_42D377
0x42D370: xor     eax, eax
0x42D372: jmp     loc_42D520
0x42D377: lea     edx, [esp+388h+FullPath]
0x42D37E: mov     eax, ebp
0x42D380: sub     edx, ebp
0x42D382: mov     cl, [eax]
0x42D384: mov     [edx+eax], cl
0x42D387: add     eax, 1
0x42D38A: test    cl, cl
0x42D38C: jnz     short loc_42D382
0x42D38E: lea     eax, [esp+388h+FullPath]
0x42D395: lea     edx, [eax+1]
0x42D398: mov     cl, [eax]
0x42D39A: add     eax, 1
0x42D39D: test    cl, cl
0x42D39F: jnz     short loc_42D398
0x42D3A1: sub     eax, edx
0x42D3A3: cmp     al, 1
0x42D3A5: jbe     short loc_42D3B1
0x42D3A7: movzx   edx, al
0x42D3AA: mov     [esp+edx+388h+var_109], cl
0x42D3B1: push    2; int
0x42D3B3: lea     eax, [esp+38Ch+FullPath]
0x42D3BA: push    eax; FullPath
0x42D3BB: lea     ecx, [esp+390h+var_354]
0x42D3BF: call    BSHash_constr
0x42D3C4: push    0
0x42D3C6: lea     ecx, [esp+38Ch+var_370]
0x42D3CA: push    ecx
0x42D3CB: lea     edx, [esp+390h+var_354]
0x42D3CF: push    edx
0x42D3D0: mov     ecx, ebx
0x42D3D2: mov     [esp+394h+var_375], 0
0x42D3D7: call    Archive_ContainsFolder
0x42D3DC: test    al, al
0x42D3DE: jz      short loc_42D3E5
0x42D3E0: mov     [esp+388h+var_375], 1
0x42D3E5: mov     ebp, [esp+388h+var_370]
0x42D3E9: lea     esp, [esp+0]
0x42D3F0: test    byte ptr [esp+388h+FindFileData.dwFileAttributes], 10h
0x42D3F5: jz      loc_42D49A
0x42D3FB: cmp     [esp+388h+FindFileData.cFileName], 2Eh ; '.'
0x42D400: jz      loc_42D49A
0x42D406: mov     eax, [esp+388h+var_364]
0x42D40A: lea     edx, [esp+388h+FileName]
0x42D411: sub     edx, eax
0x42D413: mov     cl, [eax]
0x42D415: mov     [edx+eax], cl
0x42D418: add     eax, 1
0x42D41B: test    cl, cl
0x42D41D: jnz     short loc_42D413
0x42D41F: lea     eax, [esp+388h+FindFileData.cFileName]
0x42D423: mov     edx, eax
0x42D425: mov     cl, [eax]
0x42D427: add     eax, 1
0x42D42A: test    cl, cl
0x42D42C: jnz     short loc_42D425
0x42D42E: lea     edi, [esp+388h+FileName]
0x42D435: sub     eax, edx
0x42D437: add     edi, 0FFFFFFFFh
0x42D43A: lea     ebx, [ebx+0]
0x42D440: mov     cl, [edi+1]
0x42D443: add     edi, 1
0x42D446: test    cl, cl
0x42D448: jnz     short loc_42D440
0x42D44A: mov     ecx, eax
0x42D44C: shr     ecx, 2
0x42D44F: mov     esi, edx
0x42D451: rep movsd
0x42D453: mov     ecx, eax
0x42D455: and     ecx, 3
0x42D458: rep movsb
0x42D45A: lea     edi, [esp+388h+FileName]
0x42D461: add     edi, 0FFFFFFFFh
0x42D464: mov     al, [edi+1]
0x42D467: add     edi, 1
0x42D46A: test    al, al
0x42D46C: jnz     short loc_42D464
0x42D46E: mov     ax, ds:SubStr
0x42D474: mov     ecx, [esp+388h+lpFileTime2]
0x42D478: push    ecx
0x42D479: lea     edx, [esp+38Ch+FileName]
0x42D480: mov     [edi], ax
0x42D483: mov     eax, [esp+38Ch+var_368]
0x42D487: push    edx
0x42D488: push    eax
0x42D489: mov     ecx, ebx
0x42D48B: call    BSA_InvalidateAgainstLooseFiles
0x42D490: add     [esp+388h+var_374], eax
0x42D494: mov     esi, [esp+388h+hFindFile]
0x42D498: jmp     short loc_42D501
0x42D49A: cmp     [esp+388h+var_375], 0
0x42D49F: jz      short loc_42D501
0x42D4A1: mov     ecx, [esp+388h+lpFileTime2]
0x42D4A5: push    ecx; lpFileTime2
0x42D4A6: lea     edx, [esp+38Ch+FindFileData.ftLastWriteTime]
0x42D4AA: push    edx; lpFileTime1
0x42D4AB: call    ds:CompareFileTime
0x42D4B1: test    eax, eax
0x42D4B3: jle     short loc_42D501
0x42D4B5: push    0; int
0x42D4B7: lea     eax, [esp+38Ch+FindFileData.cFileName]
0x42D4BB: push    eax; FullPath
0x42D4BC: lea     ecx, [esp+390h+var_35C]
0x42D4C0: call    BSHash_constr
0x42D4C5: push    0
0x42D4C7: push    0
0x42D4C9: lea     ecx, [esp+390h+var_370]
0x42D4CD: push    ecx
0x42D4CE: lea     edx, [esp+394h+var_35C]
0x42D4D2: push    edx
0x42D4D3: push    ebp
0x42D4D4: mov     ecx, ebx
0x42D4D6: call    Archive_FolderContainFile
0x42D4DB: test    al, al
0x42D4DD: jz      short loc_42D501
0x42D4DF: mov     eax, [esp+388h+var_370]
0x42D4E3: mov     edx, [ebx+178h]
0x42D4E9: mov     ecx, ebp
0x42D4EB: shl     ecx, 4
0x42D4EE: shl     eax, 4
0x42D4F1: add     eax, [edx+ecx+0Ch]
0x42D4F5: and     dword ptr [eax+0Ch], 80000000h
0x42D4FC: add     [esp+388h+var_374], 1
0x42D501: lea     eax, [esp+388h+FindFileData]
0x42D505: push    eax; lpFindFileData
0x42D506: push    esi; hFindFile
0x42D507: call    ds:FindNextFileA
0x42D50D: test    eax, eax
0x42D50F: jnz     loc_42D3F0
0x42D515: push    esi; hFindFile
0x42D516: call    ds:FindClose
0x42D51C: mov     eax, [esp+388h+var_374]
0x42D520: mov     ecx, [esp+388h+var_4]
0x42D527: pop     edi
0x42D528: pop     esi
0x42D529: pop     ebp
0x42D52A: pop     ebx
0x42D52B: xor     ecx, esp
0x42D52D: call    @__security_check_cookie@4; __security_check_cookie(x)
0x42D532: add     esp, 378h
0x42D538: retn    0Ch
