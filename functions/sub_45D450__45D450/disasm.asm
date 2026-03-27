0x45D450: push    0FFFFFFFFh
0x45D452: push    offset SEH_45D450
0x45D457: mov     eax, large fs:0
0x45D45D: push    eax
0x45D45E: sub     esp, 350h
0x45D464: mov     eax, ds:0B30AACh
0x45D469: xor     eax, esp
0x45D46B: mov     [esp+35Ch+var_10], eax
0x45D472: push    ebx
0x45D473: push    ebp
0x45D474: push    esi
0x45D475: push    edi
0x45D476: mov     eax, ds:0B30AACh
0x45D47B: xor     eax, esp
0x45D47D: push    eax
0x45D47E: lea     eax, [esp+370h+var_C]
0x45D485: mov     large fs:0, eax
0x45D48B: mov     edi, ecx
0x45D48D: xor     ebx, ebx
0x45D48F: cmp     [edi+6Ch], ebx
0x45D492: jz      short loc_45D499
0x45D494: call    sub_459400
0x45D499: push    8; Size
0x45D49B: call    FormHeapAlloc
0x45D4A0: add     esp, 4
0x45D4A3: cmp     eax, ebx
0x45D4A5: jz      short loc_45D4AE
0x45D4A7: mov     [eax], ebx
0x45D4A9: mov     [eax+4], ebx
0x45D4AC: jmp     short loc_45D4B0
0x45D4AE: xor     eax, eax
0x45D4B0: mov     [edi+6Ch], eax
0x45D4B3: push    offset word_B3F280; lpString2
0x45D4B8: lea     eax, [esp+374h+String1]
0x45D4BF: push    eax; lpString1
0x45D4C0: call    dword ptr ds:0A28164h
0x45D4C6: mov     ecx, ds:0B05564h
0x45D4CC: mov     esi, ds:0A28160h
0x45D4D2: push    ecx; lpString2
0x45D4D3: lea     edx, [esp+374h+String1]
0x45D4DA: push    edx; lpString1
0x45D4DB: call    esi ; lstrcatA
0x45D4DD: push    offset a_ess_0; "*.ess"
0x45D4E2: lea     eax, [esp+374h+String1]
0x45D4E9: push    eax; lpString1
0x45D4EA: call    esi ; lstrcatA
0x45D4EC: lea     ecx, [esp+370h+FindFileData]
0x45D4F0: push    ecx; lpFindFileData
0x45D4F1: lea     edx, [esp+374h+String1]
0x45D4F8: push    edx; lpFileName
0x45D4F9: call    dword ptr ds:0A2812Ch
0x45D4FF: mov     ebp, eax
0x45D501: cmp     ebp, 0FFFFFFFFh
0x45D504: jz      loc_45D5BB
0x45D50A: lea     ebx, [ebx+0]
0x45D510: cmp     [esp+370h+FindFileData.nFileSizeHigh], ebx
0x45D514: jnz     short loc_45D520
0x45D516: cmp     [esp+370h+FindFileData.nFileSizeLow], ebx
0x45D51A: jz      loc_45D5A0
0x45D520: mov     ecx, ds:0B05564h
0x45D526: lea     eax, [esp+370h+FindFileData.cFileName]
0x45D52A: push    eax
0x45D52B: push    ecx
0x45D52C: push    offset word_B3F280
0x45D531: lea     edx, [esp+37Ch+var_114]
0x45D538: push    offset aSSS; "%s%s%s"
0x45D53D: push    edx
0x45D53E: call    __sprintf
0x45D543: push    160h; Size
0x45D548: call    FormHeapAlloc
0x45D54D: mov     esi, eax
0x45D54F: add     esp, 18h
0x45D552: mov     [esp+370h+var_35C], esi
0x45D556: cmp     esi, ebx
0x45D558: mov     [esp+370h+var_4], ebx
0x45D55F: jz      short loc_45D585
0x45D561: push    ebx
0x45D562: push    20000h
0x45D567: push    ebx
0x45D568: lea     eax, [esp+37Ch+var_114]
0x45D56F: push    eax
0x45D570: mov     ecx, esi
0x45D572: call    BSFile_constr
0x45D577: mov     dword ptr [esi], offset ??_7SaveGameFile@@6B@; const SaveGameFile::`vftable'
0x45D57D: mov     [esi+154h], bl
0x45D583: jmp     short loc_45D587
0x45D585: xor     esi, esi
0x45D587: mov     ecx, [edi+6Ch]
0x45D58A: push    offset sub_459450
0x45D58F: push    esi
0x45D590: mov     [esp+378h+var_4], 0FFFFFFFFh
0x45D59B: call    BSSimpleList_InsertSorted
0x45D5A0: lea     ecx, [esp+370h+FindFileData]
0x45D5A4: push    ecx; lpFindFileData
0x45D5A5: push    ebp; hFindFile
0x45D5A6: call    dword ptr ds:0A28124h
0x45D5AC: test    eax, eax
0x45D5AE: jnz     loc_45D510
0x45D5B4: push    ebp; hFindFile
0x45D5B5: call    dword ptr ds:0A28120h
0x45D5BB: mov     ecx, dword ptr [esp+370h+var_C]
0x45D5C2: mov     large fs:0, ecx
0x45D5C9: pop     ecx
0x45D5CA: pop     edi
0x45D5CB: pop     esi
0x45D5CC: pop     ebp
0x45D5CD: pop     ebx
0x45D5CE: mov     ecx, [esp+35Ch+var_10]
0x45D5D5: xor     ecx, esp
0x45D5D7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x45D5DC: add     esp, 35Ch
0x45D5E2: retn
