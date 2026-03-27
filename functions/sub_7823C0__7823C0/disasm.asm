0x7823C0: sub     esp, 114h
0x7823C6: mov     eax, ds:0B30AACh
0x7823CB: xor     eax, esp
0x7823CD: mov     [esp+114h+var_4], eax
0x7823D4: mov     eax, [esp+114h+arg_4]
0x7823DB: mov     ecx, [esp+114h+arg_8]
0x7823E2: mov     edx, [esp+114h+arg_C]
0x7823E9: push    esi
0x7823EA: mov     esi, dword ptr [esp+118h+ArgList]
0x7823F1: test    esi, esi
0x7823F3: mov     dword ptr [eax], 0
0x7823F9: push    edi; ArgList
0x7823FA: mov     edi, [esp+11Ch+arg_10]
0x782401: mov     dword ptr [ecx], 0
0x782407: mov     dword ptr [edx], 0
0x78240D: mov     [esp+11Ch+var_110], eax
0x782411: mov     [esp+11Ch+var_114], ecx
0x782415: mov     dword ptr [edi], 0
0x78241B: jz      loc_782513
0x782421: cmp     byte ptr [esi], 0
0x782424: jz      loc_782513
0x78242A: push    104h
0x78242F: lea     eax, [esp+120h+FileName]
0x782433: push    eax
0x782434: push    esi
0x782435: call    sub_77EC60
0x78243A: add     esp, 0Ch
0x78243D: test    al, al
0x78243F: jnz     short loc_78245A
0x782441: push    esi; ArgList
0x782442: push    offset aFailedToFind_2; "Failed to find shader program file %s\n"
0x782447: push    0; int
0x782449: push    1; int
0x78244B: call    sub_738460
0x782450: add     esp, 10h
0x782453: xor     al, al
0x782455: jmp     loc_7824EA
0x78245A: push    ebx
0x78245B: push    0; hTemplateFile
0x78245D: push    0; dwFlagsAndAttributes
0x78245F: push    3; dwCreationDisposition
0x782461: push    0; lpSecurityAttributes
0x782463: push    1; dwShareMode
0x782465: push    80000000h; dwDesiredAccess
0x78246A: lea     ecx, [esp+138h+FileName]
0x78246E: push    ecx; lpFileName
0x78246F: call    dword ptr ds:0A28090h
0x782475: mov     ebx, eax
0x782477: cmp     ebx, 0FFFFFFFFh
0x78247A: jnz     short loc_782496
0x78247C: lea     edx, [esp+120h+FileName]
0x782480: push    edx; ArgList
0x782481: push    offset aInvalidShade_0; "Invalid shader file %s\n"
0x782486: push    0; int
0x782488: push    1; int
0x78248A: call    sub_738460
0x78248F: add     esp, 10h
0x782492: xor     al, al
0x782494: jmp     short loc_7824E9
0x782496: push    ebp
0x782497: push    0; lpFileSizeHigh
0x782499: push    ebx; hFile
0x78249A: call    dword ptr ds:0A280A0h
0x7824A0: mov     edi, eax
0x7824A2: lea     ebp, [edi+4]
0x7824A5: push    ebp; Size
0x7824A6: call    FormHeapAlloc
0x7824AB: mov     esi, eax
0x7824AD: add     esp, 4
0x7824B0: test    esi, esi
0x7824B2: jz      short loc_7824E6
0x7824B4: push    ebp
0x7824B5: push    0
0x7824B7: push    esi
0x7824B8: call    __memset
0x7824BD: add     esp, 0Ch
0x7824C0: push    0; lpOverlapped
0x7824C2: lea     eax, [esp+128h+NumberOfBytesRead]
0x7824C6: push    eax; lpNumberOfBytesRead
0x7824C7: push    edi; nNumberOfBytesToRead
0x7824C8: push    esi; lpBuffer
0x7824C9: push    ebx; hFile
0x7824CA: call    dword ptr ds:0A2809Ch
0x7824D0: push    ebx; hObject
0x7824D1: call    dword ptr ds:0A28094h
0x7824D7: cmp     [esp+124h+NumberOfBytesRead], edi
0x7824DB: jz      short loc_782503
0x7824DD: push    esi
0x7824DE: call    FormHeapFree
0x7824E3: add     esp, 4
0x7824E6: xor     al, al
0x7824E8: pop     ebp
0x7824E9: pop     ebx
0x7824EA: mov     ecx, [esp+11Ch+var_4]
0x7824F1: pop     edi
0x7824F2: pop     esi
0x7824F3: xor     ecx, esp
0x7824F5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7824FA: add     esp, 114h
0x782500: retn    14h
0x782503: mov     ecx, [esp+124h+var_114]
0x782507: mov     edx, [esp+124h+var_110]
0x78250B: mov     [ecx], edi
0x78250D: mov     [edx], esi
0x78250F: mov     al, 1
0x782511: jmp     short loc_7824E8
0x782513: push    offset aInvalidShaderF; "Invalid shader file name\n"
0x782518: push    0; int
0x78251A: push    1; int
0x78251C: call    sub_738460
0x782521: add     esp, 0Ch
0x782524: xor     al, al
0x782526: jmp     short loc_7824EA
