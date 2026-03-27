0x4507D0: sub     esp, 20Ch
0x4507D6: mov     eax, ds:0B30AACh
0x4507DB: xor     eax, esp
0x4507DD: mov     [esp+20Ch+var_4], eax
0x4507E4: mov     eax, ds:0B33A98h
0x4507E9: push    esi
0x4507EA: push    edi
0x4507EB: xor     edi, edi
0x4507ED: cmp     eax, edi
0x4507EF: mov     esi, ecx
0x4507F1: jz      short loc_450815
0x4507F3: cmp     byte ptr [eax+0CD4h], 0
0x4507FA: jnz     short loc_450815
0x4507FC: pop     edi
0x4507FD: mov     al, 1
0x4507FF: pop     esi
0x450800: mov     ecx, [esp+20Ch+var_4]
0x450807: xor     ecx, esp
0x450809: call    @__security_check_cookie@4; __security_check_cookie(x)
0x45080E: add     esp, 20Ch
0x450814: retn
0x450815: call    sub_450430
0x45081A: mov     ecx, [esi+10h]
0x45081D: cmp     ecx, edi
0x45081F: jz      short loc_45082C
0x450821: mov     eax, [ecx]
0x450823: mov     edx, [eax]
0x450825: push    1
0x450827: call    edx
0x450829: mov     [esi+10h], edi
0x45082C: mov     eax, [esi+414h]
0x450832: cmp     eax, edi
0x450834: jz      short loc_45084D
0x450836: push    eax; void *
0x450837: mov     ecx, offset FormHeap
0x45083C: call    MemoryHeap_Free_checked
0x450841: mov     [esi+414h], edi
0x450847: mov     [esi+418h], edi
0x45084D: cmp     [esi+0Ch], edi
0x450850: push    ebx; ArgList
0x450851: jz      loc_45095E
0x450857: push    ebp
0x450858: lea     ebp, [esi+120h]
0x45085E: push    ebp; lpString2
0x45085F: lea     eax, [esp+220h+String1]
0x450866: push    eax; lpString1
0x450867: call    dword ptr ds:0A28164h
0x45086D: mov     ebx, ds:0A28160h
0x450873: lea     edi, [esi+1Ch]
0x450876: push    edi; lpString2
0x450877: lea     ecx, [esp+220h+String1]
0x45087E: push    ecx; lpString1
0x45087F: call    ebx ; lstrcatA
0x450881: push    ebp; lpString2
0x450882: lea     edx, [esp+220h+OldFilename]
0x450886: push    edx; lpString1
0x450887: call    dword ptr ds:0A28164h
0x45088D: push    2Eh ; '.'; Val
0x45088F: push    edi; Str
0x450890: call    _strchr
0x450895: add     esp, 8
0x450898: mov     ebp, eax
0x45089A: test    ebp, ebp
0x45089C: push    edi; lpString2
0x45089D: jz      short loc_4508BC
0x45089F: lea     eax, [esp+220h+OldFilename]
0x4508A3: push    eax; lpString1
0x4508A4: mov     byte ptr [ebp+0], 0
0x4508A8: call    ebx ; lstrcatA
0x4508AA: push    offset a_tes; ".tes"
0x4508AF: lea     ecx, [esp+220h+OldFilename]
0x4508B3: push    ecx; lpString1
0x4508B4: call    ebx ; lstrcatA
0x4508B6: mov     byte ptr [ebp+0], 2Eh ; '.'
0x4508BA: jmp     short loc_4508CF
0x4508BC: lea     edx, [esp+220h+OldFilename]
0x4508C0: push    edx; lpString1
0x4508C1: call    ebx ; lstrcatA
0x4508C3: push    offset a_tes; ".tes"
0x4508C8: lea     eax, [esp+220h+OldFilename]
0x4508CC: push    eax; lpString1
0x4508CD: call    ebx ; lstrcatA
0x4508CF: mov     ecx, [esi+0Ch]
0x4508D2: test    ecx, ecx
0x4508D4: pop     ebp
0x4508D5: jz      short loc_4508DF
0x4508D7: mov     edx, [ecx]
0x4508D9: mov     eax, [edx]
0x4508DB: push    1
0x4508DD: call    eax
0x4508DF: mov     dword ptr [esi+0Ch], 0
0x4508E6: mov     bl, ds:0B06B18h
0x4508EC: lea     ecx, [esp+218h+String1]
0x4508F3: push    ecx; lpFileName
0x4508F4: mov     byte ptr ds:0B06B18h, 0
0x4508FB: call    dword ptr ds:0A280ACh
0x450901: test    eax, eax
0x450903: jnz     short loc_45090C
0x450905: push    offset aUnableToComple; "Unable to complete operation due to fai"...
0x45090A: jmp     short loc_45092A
0x45090C: lea     edx, [esp+218h+String1]
0x450913: push    edx; NewFilename
0x450914: lea     eax, [esp+21Ch+OldFilename]
0x450918: push    eax; OldFilename
0x450919: call    _rename
0x45091E: add     esp, 8
0x450921: test    eax, eax
0x450923: jz      short loc_450958
0x450925: push    offset aUnableToComp_0; "Unable to complete operation due to fai"...
0x45092A: mov     dword ptr [esi], 9
0x450930: call    PrintError
0x450935: add     esp, 4
0x450938: mov     ds:0B06B18h, bl
0x45093E: pop     ebx
0x45093F: pop     edi
0x450940: xor     al, al
0x450942: pop     esi
0x450943: mov     ecx, [esp+20Ch+var_4]
0x45094A: xor     ecx, esp
0x45094C: call    @__security_check_cookie@4; __security_check_cookie(x)
0x450951: add     esp, 20Ch
0x450957: retn
0x450958: mov     ds:0B06B18h, bl
0x45095E: mov     ecx, [esp+218h+var_4]
0x450965: pop     ebx
0x450966: pop     edi
0x450967: pop     esi
0x450968: xor     ecx, esp
0x45096A: mov     al, 1
0x45096C: call    @__security_check_cookie@4; __security_check_cookie(x)
0x450971: add     esp, 20Ch
0x450977: retn
