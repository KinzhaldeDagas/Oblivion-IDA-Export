0x431970: sub     esp, 14Ch
0x431976: mov     eax, ___security_cookie
0x43197B: xor     eax, esp
0x43197D: mov     [esp+14Ch+var_4], eax
0x431984: push    ebx
0x431985: mov     ebx, [esp+150h+arg_4]
0x43198C: push    esi
0x43198D: mov     esi, [esp+154h+arg_C]
0x431994: push    edi
0x431995: mov     edi, [esp+158h+Str]
0x43199C: test    edi, edi
0x43199E: mov     [esp+158h+var_148], edi
0x4319A2: jz      loc_431B40
0x4319A8: test    ebx, ebx
0x4319AA: jz      loc_431B40
0x4319B0: push    offset asc_A3642C; "*"
0x4319B5: push    edi; Str
0x4319B6: call    _strstr
0x4319BB: add     esp, 8
0x4319BE: test    eax, eax
0x4319C0: jnz     short loc_4319FF
0x4319C2: push    offset a?_0; "?"
0x4319C7: push    edi; Str
0x4319C8: call    _strstr
0x4319CD: add     esp, 8
0x4319D0: test    eax, eax
0x4319D2: jnz     short loc_4319FF
0x4319D4: mov     eax, [esp+158h+arg_8]
0x4319DB: push    esi; int
0x4319DC: push    eax; int
0x4319DD: push    ebx; Str
0x4319DE: push    edi; lpFileName
0x4319DF: call    sub_431460
0x4319E4: add     esp, 10h
0x4319E7: pop     edi
0x4319E8: pop     esi
0x4319E9: pop     ebx
0x4319EA: mov     ecx, [esp+14Ch+var_4]
0x4319F1: xor     ecx, esp
0x4319F3: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4319F8: add     esp, 14Ch
0x4319FE: retn
0x4319FF: test    esi, esi
0x431A01: push    ebp
0x431A02: mov     ebp, esi
0x431A04: jnz     short loc_431A1F
0x431A06: push    8; Size
0x431A08: call    FormHeapAlloc
0x431A0D: add     esp, 4
0x431A10: test    eax, eax
0x431A12: jz      short loc_431A1B
0x431A14: mov     [eax], esi
0x431A16: mov     [eax+4], esi
0x431A19: jmp     short loc_431A1D
0x431A1B: xor     eax, eax
0x431A1D: mov     ebp, eax
0x431A1F: cmp     bInvalidateOlderFiles_Archive, 0
0x431A26: jz      loc_431AFB
0x431A2C: lea     ecx, [esp+15Ch+FindFileData]
0x431A30: push    ecx; lpFindFileData
0x431A31: push    edi; lpFileName
0x431A32: call    ds:FindFirstFileA
0x431A38: cmp     eax, 0FFFFFFFFh
0x431A3B: mov     [esp+15Ch+hFindFile], eax
0x431A3F: jz      loc_431AFB
0x431A45: mov     eax, ebx
0x431A47: lea     edx, [eax+1]
0x431A4A: lea     ebx, [ebx+0]
0x431A50: mov     cl, [eax]
0x431A52: add     eax, 1
0x431A55: test    cl, cl
0x431A57: jnz     short loc_431A50
0x431A59: sub     eax, edx
0x431A5B: push    5Ch ; '\'; Ch
0x431A5D: push    ebx; Str
0x431A5E: mov     edi, eax
0x431A60: call    _strrchr
0x431A65: add     esp, 8
0x431A68: test    eax, eax
0x431A6A: jz      short loc_431A80
0x431A6C: add     eax, 1
0x431A6F: lea     edx, [eax+1]
0x431A72: mov     cl, [eax]
0x431A74: add     eax, 1
0x431A77: test    cl, cl
0x431A79: jnz     short loc_431A72
0x431A7B: sub     eax, edx
0x431A7D: sub     edi, eax
0x431A7F: nop
0x431A80: lea     eax, [esp+15Ch+FindFileData.cFileName]
0x431A84: lea     edx, [eax+1]
0x431A87: mov     cl, [eax]
0x431A89: add     eax, 1
0x431A8C: test    cl, cl
0x431A8E: jnz     short loc_431A87
0x431A90: sub     eax, edx
0x431A92: lea     edx, [edi+eax+1]
0x431A96: push    edx; Size
0x431A97: call    FormHeapAlloc
0x431A9C: push    edi; Size
0x431A9D: mov     esi, eax
0x431A9F: push    ebx; Src
0x431AA0: push    esi; Dst
0x431AA1: call    _memcpy
0x431AA6: push    5Ch ; '\'; Ch
0x431AA8: push    esi; Str
0x431AA9: mov     byte ptr [esi+edi], 0
0x431AAD: call    _strrchr
0x431AB2: add     esp, 18h
0x431AB5: test    eax, eax
0x431AB7: jz      short loc_431AD8
0x431AB9: lea     ecx, [esp+15Ch+FindFileData.cFileName]
0x431ABD: mov     edx, ecx
0x431ABF: sub     eax, edx
0x431AC1: lea     edx, [eax+1]
0x431AC4: mov     al, [ecx]
0x431AC6: mov     [edx+ecx], al
0x431AC9: add     ecx, 1
0x431ACC: test    al, al
0x431ACE: jnz     short loc_431AC4
0x431AD0: push    esi
0x431AD1: mov     ecx, ebp
0x431AD3: call    BSSimpleList_PushFront
0x431AD8: mov     ecx, [esp+15Ch+hFindFile]
0x431ADC: lea     eax, [esp+15Ch+FindFileData]
0x431AE0: push    eax; lpFindFileData
0x431AE1: push    ecx; hFindFile
0x431AE2: call    ds:FindNextFileA
0x431AE8: test    eax, eax
0x431AEA: jnz     short loc_431A80
0x431AEC: mov     edx, [esp+15Ch+hFindFile]
0x431AF0: push    edx; hFindFile
0x431AF1: call    ds:FindClose
0x431AF7: mov     edi, [esp+15Ch+var_148]
0x431AFB: mov     eax, [esp+15Ch+arg_8]
0x431B02: push    eax; int
0x431B03: push    ebx; int
0x431B04: push    edi; Str1
0x431B05: push    ebp; int
0x431B06: call    sub_42EC70
0x431B0B: add     esp, 10h
0x431B0E: cmp     dword ptr [ebp+4], 0
0x431B12: jnz     short loc_431B25
0x431B14: cmp     dword ptr [ebp+0], 0
0x431B18: jnz     short loc_431B25
0x431B1A: push    ebp
0x431B1B: call    FormHeapFree
0x431B20: add     esp, 4
0x431B23: xor     ebp, ebp
0x431B25: mov     eax, ebp
0x431B27: pop     ebp
0x431B28: pop     edi
0x431B29: pop     esi
0x431B2A: pop     ebx
0x431B2B: mov     ecx, [esp+14Ch+var_4]
0x431B32: xor     ecx, esp
0x431B34: call    @__security_check_cookie@4; __security_check_cookie(x)
0x431B39: add     esp, 14Ch
0x431B3F: retn
0x431B40: mov     ecx, [esp+158h+var_4]
0x431B47: pop     edi
0x431B48: pop     esi
0x431B49: pop     ebx
0x431B4A: xor     ecx, esp
0x431B4C: xor     eax, eax
0x431B4E: call    @__security_check_cookie@4; __security_check_cookie(x)
0x431B53: add     esp, 14Ch
0x431B59: retn
