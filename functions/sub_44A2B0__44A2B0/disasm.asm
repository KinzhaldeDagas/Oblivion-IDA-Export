0x44A2B0: push    0FFFFFFFFh
0x44A2B2: push    offset SEH_44A2B0
0x44A2B7: mov     eax, large fs:0
0x44A2BD: push    eax
0x44A2BE: sub     esp, 364h
0x44A2C4: mov     eax, ds:0B30AACh
0x44A2C9: xor     eax, esp
0x44A2CB: mov     [esp+370h+var_10], eax
0x44A2D2: push    ebx
0x44A2D3: push    ebp
0x44A2D4: push    esi
0x44A2D5: push    edi
0x44A2D6: mov     eax, ds:0B30AACh
0x44A2DB: xor     eax, esp
0x44A2DD: push    eax
0x44A2DE: lea     eax, [esp+384h+var_C]
0x44A2E5: mov     large fs:0, eax
0x44A2EB: mov     eax, [esp+384h+lpString2]
0x44A2F2: push    eax; lpString2
0x44A2F3: mov     [esp+388h+var_360], eax
0x44A2F7: lea     eax, [esp+388h+String1]
0x44A2FE: push    eax; lpString1
0x44A2FF: mov     esi, ecx
0x44A301: call    dword ptr ds:0A28164h
0x44A307: add     esi, 8C8h
0x44A30D: xor     ebx, ebx
0x44A30F: cmp     esi, ebx
0x44A311: mov     [esp+384h+var_36C], esi
0x44A315: jz      short loc_44A369
0x44A317: mov     edi, [esi]
0x44A319: cmp     edi, ebx
0x44A31B: jz      short loc_44A362
0x44A31D: mov     ecx, edi
0x44A31F: call    TESFile_Open
0x44A324: test    eax, eax
0x44A326: jz      short loc_44A356
0x44A328: mov     eax, [esi+4]
0x44A32B: cmp     eax, ebx
0x44A32D: jz      short loc_44A34B
0x44A32F: mov     ecx, [eax+4]
0x44A332: mov     [esi+4], ecx
0x44A335: mov     edx, [eax]
0x44A337: push    eax
0x44A338: mov     [esi], edx
0x44A33A: call    FormHeapFree
0x44A33F: add     esp, 4
0x44A342: mov     ecx, edi
0x44A344: call    TESFile_Close
0x44A349: jmp     short loc_44A365
0x44A34B: mov     ecx, edi
0x44A34D: mov     [esi], ebx
0x44A34F: call    TESFile_Close
0x44A354: jmp     short loc_44A365
0x44A356: mov     esi, [esi+4]
0x44A359: mov     ecx, edi
0x44A35B: call    TESFile_Close
0x44A360: jmp     short loc_44A365
0x44A362: mov     esi, [esi+4]
0x44A365: cmp     esi, ebx
0x44A367: jnz     short loc_44A317
0x44A369: mov     edi, ds:0A28160h
0x44A36F: xor     esi, esi
0x44A371: mov     [esp+384h+var_364], esi
0x44A375: lea     eax, [esp+384h+String1]
0x44A37C: push    eax; lpString2
0x44A37D: lea     ecx, [esp+388h+FileName]
0x44A384: push    ecx; lpString1
0x44A385: call    dword ptr ds:0A28164h
0x44A38B: mov     eax, esi
0x44A38D: sub     eax, ebx
0x44A38F: jz      short loc_44A3A5
0x44A391: sub     eax, 1
0x44A394: jnz     short loc_44A3B4
0x44A396: push    offset a_esp; "*.esp"
0x44A39B: lea     edx, [esp+388h+FileName]
0x44A3A2: push    edx
0x44A3A3: jmp     short loc_44A3B2
0x44A3A5: push    offset String2; "*.esm"
0x44A3AA: lea     eax, [esp+388h+FileName]
0x44A3B1: push    eax; lpString1
0x44A3B2: call    edi ; lstrcatA
0x44A3B4: lea     ecx, [esp+384h+FindFileData]
0x44A3B8: push    ecx; lpFindFileData
0x44A3B9: lea     edx, [esp+388h+FileName]
0x44A3C0: push    edx; lpFileName
0x44A3C1: call    dword ptr ds:0A2812Ch
0x44A3C7: cmp     eax, 0FFFFFFFFh
0x44A3CA: mov     [esp+384h+hFindFile], eax
0x44A3CE: jz      loc_44A541
0x44A3D4: cmp     [esp+384h+FindFileData.nFileSizeHigh], ebx
0x44A3D8: jnz     short loc_44A3E4
0x44A3DA: cmp     [esp+384h+FindFileData.nFileSizeLow], ebx
0x44A3DE: jz      loc_44A514
0x44A3E4: mov     esi, [esp+384h+var_36C]
0x44A3E8: cmp     esi, ebx
0x44A3EA: jz      short loc_44A41C
0x44A3EC: lea     esp, [esp+0]
0x44A3F0: mov     edi, [esi]
0x44A3F2: cmp     edi, ebx
0x44A3F4: jz      short loc_44A41C
0x44A3F6: lea     eax, [edi+1Ch]
0x44A3F9: push    eax; Str2
0x44A3FA: lea     ecx, [esp+388h+FindFileData.cFileName]
0x44A3FE: push    ecx; Str1
0x44A3FF: call    __strcmp
0x44A404: add     esp, 8
0x44A407: test    eax, eax
0x44A409: jz      short loc_44A414
0x44A40B: mov     esi, [esi+4]
0x44A40E: cmp     esi, ebx
0x44A410: jnz     short loc_44A3F0
0x44A412: jmp     short loc_44A41C
0x44A414: cmp     edi, ebx
0x44A416: jnz     loc_44A514
0x44A41C: push    41Ch; Size
0x44A421: call    FormHeapAlloc
0x44A426: add     esp, 4
0x44A429: mov     [esp+384h+var_35C], eax
0x44A42D: cmp     eax, ebx
0x44A42F: mov     [esp+384h+var_4], ebx
0x44A436: jz      short loc_44A44E
0x44A438: mov     ecx, [esp+384h+var_360]
0x44A43C: push    ebx; int
0x44A43D: lea     edx, [esp+388h+FindFileData.cFileName]
0x44A441: push    edx; ArgList
0x44A442: push    ecx; lpString2
0x44A443: mov     ecx, eax
0x44A445: call    TESFile_constr
0x44A44A: mov     ebp, eax
0x44A44C: jmp     short loc_44A450
0x44A44E: xor     ebp, ebp
0x44A450: mov     ecx, ebp
0x44A452: mov     [esp+384h+var_4], 0FFFFFFFFh
0x44A45D: call    TESFile_Close
0x44A462: mov     esi, [esp+384h+var_36C]
0x44A466: xor     ecx, ecx
0x44A468: cmp     esi, ebx
0x44A46A: jz      loc_44A50A
0x44A470: mov     edi, [esi]
0x44A472: cmp     edi, ebx
0x44A474: jz      loc_44A506
0x44A47A: mov     ecx, edi
0x44A47C: call    TESFile_GetIsMaster
0x44A481: test    al, al
0x44A483: jz      short loc_44A490
0x44A485: mov     ecx, ebp
0x44A487: call    TESFile_GetIsMaster
0x44A48C: test    al, al
0x44A48E: jnz     short loc_44A4A6
0x44A490: mov     ecx, edi
0x44A492: call    TESFile_GetIsMaster
0x44A497: test    al, al
0x44A499: jnz     short loc_44A4EE
0x44A49B: mov     ecx, ebp
0x44A49D: call    TESFile_GetIsMaster
0x44A4A2: test    al, al
0x44A4A4: jnz     short loc_44A4EE
0x44A4A6: lea     edx, [esp+384h+FindFileData.ftLastWriteTime]
0x44A4AA: push    edx; lpFileTime2
0x44A4AB: add     edi, 2A4h
0x44A4B1: push    edi; lpFileTime1
0x44A4B2: call    dword ptr ds:0A28128h
0x44A4B8: test    eax, eax
0x44A4BA: jl      short loc_44A4F9
0x44A4BC: cmp     ebp, ebx
0x44A4BE: jz      short loc_44A514
0x44A4C0: cmp     [esi], ebx
0x44A4C2: jz      loc_44A5CB
0x44A4C8: push    8; Size
0x44A4CA: call    FormHeapAlloc
0x44A4CF: add     esp, 4
0x44A4D2: cmp     eax, ebx
0x44A4D4: jz      loc_44A5C0
0x44A4DA: mov     ecx, [esi]
0x44A4DC: mov     [eax], ecx
0x44A4DE: mov     [eax+4], ebx
0x44A4E1: mov     edx, [esi+4]
0x44A4E4: mov     [eax+4], edx
0x44A4E7: mov     [esi+4], eax
0x44A4EA: mov     [esi], ebp
0x44A4EC: jmp     short loc_44A514
0x44A4EE: mov     ecx, ebp
0x44A4F0: call    TESFile_GetIsMaster
0x44A4F5: test    al, al
0x44A4F7: jnz     short loc_44A4BC
0x44A4F9: mov     ecx, esi
0x44A4FB: mov     esi, [esi+4]
0x44A4FE: cmp     esi, ebx
0x44A500: jnz     loc_44A470
0x44A506: cmp     ecx, ebx
0x44A508: jnz     short loc_44A50E
0x44A50A: mov     ecx, [esp+384h+var_36C]
0x44A50E: push    ebp
0x44A50F: call    BSSimpleList_PushBack
0x44A514: mov     ecx, [esp+384h+hFindFile]
0x44A518: lea     eax, [esp+384h+FindFileData]
0x44A51C: push    eax; lpFindFileData
0x44A51D: push    ecx; hFindFile
0x44A51E: call    dword ptr ds:0A28124h
0x44A524: test    eax, eax
0x44A526: jnz     loc_44A3D4
0x44A52C: mov     edx, [esp+384h+hFindFile]
0x44A530: push    edx; hFindFile
0x44A531: call    dword ptr ds:0A28120h
0x44A537: mov     edi, ds:0A28160h
0x44A53D: mov     esi, [esp+384h+var_364]
0x44A541: add     esi, 1
0x44A544: cmp     esi, 2
0x44A547: mov     [esp+384h+var_364], esi
0x44A54B: jb      loc_44A375
0x44A551: mov     esi, [esp+384h+var_36C]
0x44A555: xor     ebp, ebp
0x44A557: cmp     esi, ebx
0x44A559: jz      loc_44A617
0x44A55F: mov     edi, [esi]
0x44A561: cmp     edi, ebx
0x44A563: jz      loc_44A617
0x44A569: lea     eax, [edi+120h]
0x44A56F: push    eax; lpString2
0x44A570: lea     ecx, [esp+388h+FileName]
0x44A577: push    ecx; lpString1
0x44A578: call    dword ptr ds:0A28164h
0x44A57E: lea     edx, [edi+1Ch]
0x44A581: push    edx; lpString2
0x44A582: lea     eax, [esp+388h+FileName]
0x44A589: push    eax; lpString1
0x44A58A: call    dword ptr ds:0A28160h
0x44A590: lea     ecx, [esp+384h+FindFileData]
0x44A594: push    ecx; lpFindFileData
0x44A595: lea     edx, [esp+388h+FileName]
0x44A59C: push    edx; lpFileName
0x44A59D: call    dword ptr ds:0A2812Ch
0x44A5A3: cmp     eax, 0FFFFFFFFh
0x44A5A6: jnz     short loc_44A603
0x44A5A8: mov     eax, [esi+4]
0x44A5AB: cmp     eax, ebx
0x44A5AD: jnz     short loc_44A5D6
0x44A5AF: cmp     ebp, ebx
0x44A5B1: jz      short loc_44A5D2
0x44A5B3: push    edi
0x44A5B4: mov     ecx, ebp
0x44A5B6: call    BSSimpleList_Remove
0x44A5BB: mov     esi, [ebp+4]
0x44A5BE: jmp     short loc_44A5ED
0x44A5C0: mov     edx, [esi+4]
0x44A5C3: xor     eax, eax
0x44A5C5: mov     [eax+4], edx
0x44A5C8: mov     [esi+4], eax
0x44A5CB: mov     [esi], ebp
0x44A5CD: jmp     loc_44A514
0x44A5D2: cmp     eax, ebx
0x44A5D4: jz      short loc_44A5EB
0x44A5D6: mov     ecx, [eax+4]
0x44A5D9: mov     [esi+4], ecx
0x44A5DC: mov     edx, [eax]
0x44A5DE: push    eax
0x44A5DF: mov     [esi], edx
0x44A5E1: call    FormHeapFree
0x44A5E6: add     esp, 4
0x44A5E9: jmp     short loc_44A5ED
0x44A5EB: mov     [esi], ebx
0x44A5ED: cmp     edi, ebx
0x44A5EF: jz      short loc_44A60F
0x44A5F1: mov     ecx, edi
0x44A5F3: call    TESFile_destr
0x44A5F8: push    edi
0x44A5F9: call    FormHeapFree
0x44A5FE: add     esp, 4
0x44A601: jmp     short loc_44A60F
0x44A603: mov     ebp, esi
0x44A605: mov     esi, [esi+4]
0x44A608: push    eax; hFindFile
0x44A609: call    dword ptr ds:0A28120h
0x44A60F: cmp     esi, ebx
0x44A611: jnz     loc_44A55F
0x44A617: mov     esi, [esp+384h+var_36C]
0x44A61B: cmp     esi, ebx
0x44A61D: jz      loc_44A6DB
0x44A623: cmp     [esi+4], ebx
0x44A626: jnz     short loc_44A630
0x44A628: cmp     [esi], ebx
0x44A62A: jz      loc_44A6DB
0x44A630: mov     ebp, [esi]
0x44A632: mov     ecx, ebp
0x44A634: mov     [esp+384h+var_36D], 0
0x44A639: call    TESFile_GetIsMaster
0x44A63E: test    al, al
0x44A640: jz      loc_44A6CE
0x44A646: mov     eax, [esp+384h+var_36C]
0x44A64A: push    ebx
0x44A64B: push    eax
0x44A64C: mov     ecx, ebp
0x44A64E: call    TESFile_BuildLoadedMasterArray
0x44A653: mov     ecx, ebp
0x44A655: xor     edi, edi
0x44A657: call    TESFile_GetMasterFileCount
0x44A65C: test    eax, eax
0x44A65E: jbe     short loc_44A6CE
0x44A660: lea     ebx, [edi+1]
0x44A663: push    ebx
0x44A664: mov     ecx, ebp
0x44A666: call    TESFile_GetMasterByIndex
0x44A66B: mov     edi, eax
0x44A66D: test    edi, edi
0x44A66F: jz      short loc_44A6BA
0x44A671: mov     eax, esi
0x44A673: cmp     [eax], edi
0x44A675: jz      short loc_44A680
0x44A677: mov     eax, [eax+4]
0x44A67A: test    eax, eax
0x44A67C: jnz     short loc_44A673
0x44A67E: jmp     short loc_44A6BA
0x44A680: push    edi
0x44A681: mov     ecx, esi
0x44A683: call    BSSimpleList_Remove
0x44A688: cmp     dword ptr [esi], 0
0x44A68B: jz      short loc_44A6B3
0x44A68D: push    8; Size
0x44A68F: call    FormHeapAlloc
0x44A694: add     esp, 4
0x44A697: test    eax, eax
0x44A699: jz      short loc_44A6A8
0x44A69B: mov     ecx, [esi]
0x44A69D: mov     [eax], ecx
0x44A69F: mov     dword ptr [eax+4], 0
0x44A6A6: jmp     short loc_44A6AA
0x44A6A8: xor     eax, eax
0x44A6AA: mov     edx, [esi+4]
0x44A6AD: mov     [eax+4], edx
0x44A6B0: mov     [esi+4], eax
0x44A6B3: mov     [esi], edi
0x44A6B5: mov     [esp+384h+var_36D], 1
0x44A6BA: mov     ecx, ebp
0x44A6BC: mov     edi, ebx
0x44A6BE: call    TESFile_GetMasterFileCount
0x44A6C3: cmp     edi, eax
0x44A6C5: jb      short loc_44A660
0x44A6C7: cmp     [esp+384h+var_36D], 0
0x44A6CC: jnz     short loc_44A6D1
0x44A6CE: mov     esi, [esi+4]
0x44A6D1: xor     ebx, ebx
0x44A6D3: test    esi, esi
0x44A6D5: jnz     loc_44A623
0x44A6DB: mov     edi, [esp+384h+var_36C]
0x44A6DF: mov     esi, edi
0x44A6E1: cmp     esi, ebx
0x44A6E3: jz      short loc_44A6FE
0x44A6E5: cmp     [esi+4], ebx
0x44A6E8: jnz     short loc_44A6EE
0x44A6EA: cmp     [esi], ebx
0x44A6EC: jz      short loc_44A6FE
0x44A6EE: mov     ecx, [esi]
0x44A6F0: push    ebx
0x44A6F1: push    edi
0x44A6F2: call    TESFile_BuildLoadedMasterArray
0x44A6F7: mov     esi, [esi+4]
0x44A6FA: cmp     esi, ebx
0x44A6FC: jnz     short loc_44A6E5
0x44A6FE: mov     esi, edi
0x44A700: cmp     esi, ebx
0x44A702: jz      short loc_44A716
0x44A704: mov     ecx, [esi]
0x44A706: cmp     ecx, ebx
0x44A708: jz      short loc_44A716
0x44A70A: call    TESFile_Close
0x44A70F: mov     esi, [esi+4]
0x44A712: cmp     esi, ebx
0x44A714: jnz     short loc_44A704
0x44A716: mov     eax, 1
0x44A71B: mov     ecx, dword ptr [esp+384h+var_C]
0x44A722: mov     large fs:0, ecx
0x44A729: pop     ecx
0x44A72A: pop     edi
0x44A72B: pop     esi
0x44A72C: pop     ebp
0x44A72D: pop     ebx
0x44A72E: mov     ecx, [esp+370h+var_10]
0x44A735: xor     ecx, esp
0x44A737: call    @__security_check_cookie@4; __security_check_cookie(x)
0x44A73C: add     esp, 370h
0x44A742: retn    4
