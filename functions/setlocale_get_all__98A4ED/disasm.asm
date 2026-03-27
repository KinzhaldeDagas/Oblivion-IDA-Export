0x98A4ED: sub     esp, 10h
0x98A4F0: push    ebx
0x98A4F1: xor     ebx, ebx
0x98A4F3: inc     ebx
0x98A4F4: push    355h
0x98A4F9: mov     [esp+18h+var_8], ebx
0x98A4FD: call    unknown_libname_72
0x98A502: test    eax, eax
0x98A504: pop     ecx
0x98A505: mov     [esp+14h+Memory], eax
0x98A509: jz      loc_98A659
0x98A50F: push    ebp
0x98A510: push    edi; Src
0x98A511: lea     edi, [eax+4]
0x98A514: mov     byte ptr [edi], 0
0x98A517: mov     [eax], ebx
0x98A519: lea     ebp, [esi+10h]
0x98A51C: mov     [esp+1Ch+var_C], ebx
0x98A520: lea     ebx, [ebp+48h]
0x98A523: push    dword ptr [ebx]
0x98A525: push    offset word_A61F44
0x98A52A: push    ds:off_AA486C; int
0x98A530: push    3; int
0x98A532: push    351h; SizeInBytes
0x98A537: push    edi; Dst
0x98A538: call    __strcats
0x98A53D: add     esp, 18h
0x98A540: mov     [esp+1Ch+var_10], offset off_AA486C
0x98A548: push    offset asc_A3206C
0x98A54D: push    351h; SizeInBytes
0x98A552: push    edi; Dst
0x98A553: call    _strcat_s
0x98A558: add     esp, 0Ch
0x98A55B: test    eax, eax
0x98A55D: jz      short loc_98A56E
0x98A55F: xor     eax, eax
0x98A561: push    eax
0x98A562: push    eax
0x98A563: push    eax
0x98A564: push    eax
0x98A565: push    eax
0x98A566: call    __invoke_watson
0x98A56B: add     esp, 14h
0x98A56E: push    dword ptr [ebp+58h]; Str2
0x98A571: push    dword ptr [ebx]; Str1
0x98A573: call    _strcmp
0x98A578: test    eax, eax
0x98A57A: pop     ecx
0x98A57B: pop     ecx
0x98A57C: jz      short loc_98A583
0x98A57E: and     [esp+1Ch+var_8], 0
0x98A583: inc     [esp+1Ch+var_C]
0x98A587: mov     eax, [esp+1Ch+var_C]
0x98A58B: add     [esp+1Ch+var_10], 0Ch
0x98A590: shl     eax, 4
0x98A593: lea     ebp, [eax+esi]
0x98A596: mov     eax, [esp+1Ch+var_10]
0x98A59A: lea     ebx, [ebp+48h]
0x98A59D: push    dword ptr [ebx]
0x98A59F: push    offset word_A61F44
0x98A5A4: push    dword ptr [eax]; int
0x98A5A6: push    3; int
0x98A5A8: push    351h; SizeInBytes
0x98A5AD: push    edi; Dst
0x98A5AE: call    __strcats
0x98A5B3: add     esp, 18h
0x98A5B6: cmp     [esp+1Ch+var_10], offset off_AA489C
0x98A5BE: jl      short loc_98A548
0x98A5C0: xor     ebp, ebp
0x98A5C2: cmp     [esp+1Ch+var_8], ebp
0x98A5C6: jnz     short loc_98A60A
0x98A5C8: mov     eax, [esi+50h]
0x98A5CB: cmp     eax, ebp
0x98A5CD: mov     ebx, ds:InterlockedDecrement
0x98A5D3: jz      short loc_98A5E5
0x98A5D5: push    eax; lpAddend
0x98A5D6: call    ebx ; InterlockedDecrement
0x98A5D8: test    eax, eax
0x98A5DA: jnz     short loc_98A5E5
0x98A5DC: push    dword ptr [esi+50h]; Memory
0x98A5DF: call    _free
0x98A5E4: pop     ecx
0x98A5E5: mov     eax, [esi+54h]
0x98A5E8: cmp     eax, ebp
0x98A5EA: jz      short loc_98A5FC
0x98A5EC: push    eax; lpAddend
0x98A5ED: call    ebx ; InterlockedDecrement
0x98A5EF: test    eax, eax
0x98A5F1: jnz     short loc_98A5FC
0x98A5F3: push    dword ptr [esi+54h]; Memory
0x98A5F6: call    _free
0x98A5FB: pop     ecx
0x98A5FC: mov     eax, [esp+1Ch+Memory]
0x98A600: mov     [esi+50h], eax
0x98A603: mov     [esi+48h], edi
0x98A606: mov     eax, edi
0x98A608: jmp     short loc_98A651
0x98A60A: push    [esp+1Ch+Memory]; Memory
0x98A60E: call    _free
0x98A613: mov     eax, [esi+50h]
0x98A616: cmp     eax, ebp
0x98A618: mov     edi, ds:InterlockedDecrement
0x98A61E: pop     ecx
0x98A61F: jz      short loc_98A631
0x98A621: push    eax; lpAddend
0x98A622: call    edi ; InterlockedDecrement
0x98A624: test    eax, eax
0x98A626: jnz     short loc_98A631
0x98A628: push    dword ptr [esi+50h]; Memory
0x98A62B: call    _free
0x98A630: pop     ecx
0x98A631: mov     eax, [esi+54h]
0x98A634: cmp     eax, ebp
0x98A636: jz      short loc_98A648
0x98A638: push    eax; lpAddend
0x98A639: call    edi ; InterlockedDecrement
0x98A63B: test    eax, eax
0x98A63D: jnz     short loc_98A648
0x98A63F: push    dword ptr [esi+54h]; Memory
0x98A642: call    _free
0x98A647: pop     ecx
0x98A648: mov     eax, [esi+68h]
0x98A64B: mov     [esi+50h], ebp
0x98A64E: mov     [esi+48h], ebp
0x98A651: pop     edi
0x98A652: mov     [esi+4Ch], ebp
0x98A655: mov     [esi+54h], ebp
0x98A658: pop     ebp
0x98A659: pop     ebx
0x98A65A: add     esp, 10h
0x98A65D: retn
