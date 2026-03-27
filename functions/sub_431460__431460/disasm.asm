0x431460: sub     esp, 148h
0x431466: mov     eax, ___security_cookie
0x43146B: xor     eax, esp
0x43146D: mov     [esp+148h+var_4], eax
0x431474: mov     eax, [esp+148h+arg_C]
0x43147B: test    eax, eax
0x43147D: push    ebx
0x43147E: mov     ebx, [esp+14Ch+lpFileName]
0x431485: push    ebp
0x431486: mov     ebp, [esp+150h+Str]
0x43148D: push    esi
0x43148E: mov     esi, eax
0x431490: mov     [esp+154h+var_148], esi
0x431494: jnz     short loc_4314B3
0x431496: push    8; Size
0x431498: call    FormHeapAlloc
0x43149D: add     esp, 4
0x4314A0: test    eax, eax
0x4314A2: jz      short loc_4314AB
0x4314A4: mov     [eax], esi
0x4314A6: mov     [eax+4], esi
0x4314A9: jmp     short loc_4314AD
0x4314AB: xor     eax, eax
0x4314AD: mov     [esp+154h+var_148], eax
0x4314B1: mov     esi, eax
0x4314B3: cmp     bInvalidateOlderFiles_Archive, 0
0x4314BA: jz      short loc_4314D6
0x4314BC: lea     eax, [esp+154h+FindFileData]
0x4314C0: push    eax; lpFindFileData
0x4314C1: push    ebx; lpFileName
0x4314C2: call    ds:FindFirstFileA
0x4314C8: cmp     eax, 0FFFFFFFFh
0x4314CB: jz      short loc_4314D6
0x4314CD: push    eax; hFindFile
0x4314CE: call    ds:FindClose
0x4314D4: jmp     short loc_4314EF
0x4314D6: mov     ecx, [esp+154h+arg_8]
0x4314DD: push    ecx; int
0x4314DE: push    ebx; Str1
0x4314DF: call    ArchiveManager_IsFileInArchives?
0x4314E4: add     esp, 8
0x4314E7: test    al, al
0x4314E9: jz      loc_4315A7
0x4314EF: mov     eax, ebp
0x4314F1: lea     edx, [eax+1]
0x4314F4: mov     cl, [eax]
0x4314F6: add     eax, 1
0x4314F9: test    cl, cl
0x4314FB: jnz     short loc_4314F4
0x4314FD: push    edi
0x4314FE: sub     eax, edx
0x431500: push    5Ch ; '\'; Ch
0x431502: push    ebp; Str
0x431503: mov     esi, eax
0x431505: call    _strrchr
0x43150A: push    5Ch ; '\'; Ch
0x43150C: push    ebx; Str
0x43150D: mov     edi, eax
0x43150F: call    _strrchr
0x431514: add     esp, 10h
0x431517: test    edi, edi
0x431519: jz      loc_4315A2
0x43151F: test    eax, eax
0x431521: jz      loc_4315A2
0x431527: lea     ecx, [edi+1]
0x43152A: lea     edi, [ecx+1]
0x43152D: lea     ecx, [ecx+0]
0x431530: mov     dl, [ecx]
0x431532: add     ecx, 1
0x431535: test    dl, dl
0x431537: jnz     short loc_431530
0x431539: sub     ecx, edi
0x43153B: lea     edi, [eax+1]
0x43153E: mov     eax, edi
0x431540: sub     esi, ecx
0x431542: lea     ecx, [eax+1]
0x431545: mov     dl, [eax]
0x431547: add     eax, 1
0x43154A: test    dl, dl
0x43154C: jnz     short loc_431545
0x43154E: sub     eax, ecx
0x431550: lea     edx, [eax+esi+1]
0x431554: push    edx; Size
0x431555: call    FormHeapAlloc
0x43155A: push    esi; Size
0x43155B: mov     ebx, eax
0x43155D: push    ebp; Src
0x43155E: push    ebx; Dst
0x43155F: call    _memcpy
0x431564: mov     eax, edi
0x431566: mov     byte ptr [ebx+esi], 0
0x43156A: add     esp, 10h
0x43156D: mov     esi, eax
0x43156F: nop
0x431570: mov     cl, [eax]
0x431572: add     eax, 1
0x431575: test    cl, cl
0x431577: jnz     short loc_431570
0x431579: mov     edi, ebx
0x43157B: sub     eax, esi
0x43157D: add     edi, 0FFFFFFFFh
0x431580: mov     cl, [edi+1]
0x431583: add     edi, 1
0x431586: test    cl, cl
0x431588: jnz     short loc_431580
0x43158A: mov     ecx, eax
0x43158C: shr     ecx, 2
0x43158F: rep movsd
0x431591: mov     ecx, eax
0x431593: and     ecx, 3
0x431596: rep movsb
0x431598: mov     ecx, [esp+158h+var_148]
0x43159C: push    ebx
0x43159D: call    BSSimpleList_PushFront
0x4315A2: mov     esi, [esp+158h+var_148]
0x4315A6: pop     edi
0x4315A7: cmp     dword ptr [esi+4], 0
0x4315AB: jnz     short loc_4315D5
0x4315AD: cmp     dword ptr [esi], 0
0x4315B0: jnz     short loc_4315D5
0x4315B2: push    esi
0x4315B3: call    FormHeapFree
0x4315B8: add     esp, 4
0x4315BB: pop     esi
0x4315BC: pop     ebp
0x4315BD: xor     eax, eax
0x4315BF: pop     ebx
0x4315C0: mov     ecx, [esp+148h+var_4]
0x4315C7: xor     ecx, esp
0x4315C9: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4315CE: add     esp, 148h
0x4315D4: retn
0x4315D5: mov     ecx, [esp+154h+var_4]
0x4315DC: mov     eax, esi
0x4315DE: pop     esi
0x4315DF: pop     ebp
0x4315E0: pop     ebx
0x4315E1: xor     ecx, esp
0x4315E3: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4315E8: add     esp, 148h
0x4315EE: retn
