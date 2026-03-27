0x4315F0: sub     esp, 144h
0x4315F6: mov     eax, ___security_cookie
0x4315FB: xor     eax, esp
0x4315FD: mov     [esp+144h+var_4], eax
0x431604: push    esi
0x431605: mov     esi, [esp+148h+arg_4]
0x43160C: xor     eax, eax
0x43160E: mov     [esi], eax
0x431610: push    edi
0x431611: mov     edi, [esp+14Ch+lpFileName]
0x431618: mov     [esi+4], eax
0x43161B: mov     eax, [esp+14Ch+arg_8]
0x431622: push    eax; int
0x431623: push    edi; Str1
0x431624: call    ArchiveManager_GetArchiveForFile
0x431629: add     esp, 8
0x43162C: test    eax, eax
0x43162E: jz      short loc_431633
0x431630: lea     edi, [eax+3Ch]
0x431633: lea     ecx, [esp+14Ch+FindFileData]
0x431637: push    ecx; lpFindFileData
0x431638: push    edi; lpFileName
0x431639: call    ds:FindFirstFileA
0x43163F: cmp     eax, 0FFFFFFFFh
0x431642: jz      short loc_431671
0x431644: mov     edx, [esp+14Ch+FindFileData.ftLastWriteTime.dwLowDateTime]
0x431648: mov     ecx, [esp+14Ch+FindFileData.ftLastWriteTime.dwHighDateTime]
0x43164C: push    eax; hFindFile
0x43164D: mov     [esi], edx
0x43164F: mov     [esi+4], ecx
0x431652: call    ds:FindClose
0x431658: pop     edi
0x431659: mov     al, 1
0x43165B: pop     esi
0x43165C: mov     ecx, [esp+144h+var_4]
0x431663: xor     ecx, esp
0x431665: call    @__security_check_cookie@4; __security_check_cookie(x)
0x43166A: add     esp, 144h
0x431670: retn
0x431671: mov     ecx, [esp+14Ch+var_4]
0x431678: pop     edi
0x431679: pop     esi
0x43167A: xor     ecx, esp
0x43167C: xor     al, al
0x43167E: call    @__security_check_cookie@4; __security_check_cookie(x)
0x431683: add     esp, 144h
0x431689: retn
