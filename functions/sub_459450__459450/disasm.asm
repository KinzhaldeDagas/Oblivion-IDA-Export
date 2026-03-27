0x459450: sub     esp, 154h
0x459456: mov     eax, ds:0B30AACh
0x45945B: xor     eax, esp
0x45945D: mov     [esp+154h+var_4], eax
0x459464: push    ebx
0x459465: push    ebp
0x459466: push    esi
0x459467: mov     esi, [esp+160h+arg_0]
0x45946E: xor     ebx, ebx
0x459470: xor     ebp, ebp
0x459472: cmp     [esi+154h], bl
0x459478: push    edi
0x459479: mov     edi, [esp+164h+arg_4]
0x459480: mov     [esp+164h+var_148], ebx
0x459484: mov     [esp+164h+var_150], ebp
0x459488: jz      short loc_459498
0x45948A: mov     ebx, [esi+158h]
0x459490: mov     esi, [esi+15Ch]
0x459496: jmp     short loc_4594D8
0x459498: lea     eax, [esp+164h+FindFileData]
0x45949C: push    eax; lpFindFileData
0x45949D: lea     ecx, [esi+3Ch]
0x4594A0: push    ecx; lpFileName
0x4594A1: call    dword ptr ds:0A2812Ch
0x4594A7: cmp     eax, 0FFFFFFFFh
0x4594AA: jz      short loc_4594B8
0x4594AC: mov     edx, [esp+164h+FindFileData.ftLastWriteTime.dwHighDateTime]
0x4594B0: mov     ebx, [esp+164h+FindFileData.ftLastWriteTime.dwLowDateTime]
0x4594B4: mov     [esp+164h+var_148], edx
0x4594B8: push    eax; hFindFile
0x4594B9: call    dword ptr ds:0A28120h
0x4594BF: mov     eax, [esp+164h+var_148]
0x4594C3: mov     [esi+158h], ebx
0x4594C9: mov     [esi+15Ch], eax
0x4594CF: mov     byte ptr [esi+154h], 1
0x4594D6: mov     esi, eax
0x4594D8: cmp     byte ptr [edi+154h], 0
0x4594DF: jz      short loc_4594EF
0x4594E1: mov     ebp, [edi+158h]
0x4594E7: mov     edi, [edi+15Ch]
0x4594ED: jmp     short loc_45952F
0x4594EF: lea     ecx, [esp+164h+FindFileData]
0x4594F3: push    ecx; lpFindFileData
0x4594F4: lea     edx, [edi+3Ch]
0x4594F7: push    edx; lpFileName
0x4594F8: call    dword ptr ds:0A2812Ch
0x4594FE: cmp     eax, 0FFFFFFFFh
0x459501: jz      short loc_45950F
0x459503: mov     ecx, [esp+164h+FindFileData.ftLastWriteTime.dwHighDateTime]
0x459507: mov     ebp, [esp+164h+FindFileData.ftLastWriteTime.dwLowDateTime]
0x45950B: mov     [esp+164h+var_150], ecx
0x45950F: push    eax; hFindFile
0x459510: call    dword ptr ds:0A28120h
0x459516: mov     edx, [esp+164h+var_150]
0x45951A: mov     [edi+158h], ebp
0x459520: mov     [edi+15Ch], edx
0x459526: mov     byte ptr [edi+154h], 1
0x45952D: mov     edi, edx
0x45952F: cmp     esi, edi
0x459531: jbe     short loc_459538
0x459533: or      eax, 0FFFFFFFFh
0x459536: jmp     short loc_459549
0x459538: jnb     short loc_459541
0x45953A: mov     eax, 1
0x45953F: jmp     short loc_459549
0x459541: cmp     ebx, ebp
0x459543: ja      short loc_459533
0x459545: sbb     eax, eax
0x459547: neg     eax
0x459549: mov     ecx, [esp+164h+var_4]
0x459550: pop     edi
0x459551: pop     esi
0x459552: pop     ebp
0x459553: pop     ebx
0x459554: xor     ecx, esp
0x459556: call    @__security_check_cookie@4; __security_check_cookie(x)
0x45955B: add     esp, 154h
0x459561: retn
