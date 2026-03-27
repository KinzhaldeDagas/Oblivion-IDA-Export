0x43D510: push    0FFFFFFFFh
0x43D512: push    offset SEH_616DB0
0x43D517: mov     eax, large fs:0
0x43D51D: push    eax
0x43D51E: sub     esp, 8
0x43D521: push    ebx
0x43D522: push    ebp
0x43D523: push    esi
0x43D524: push    edi
0x43D525: mov     eax, ___security_cookie
0x43D52A: xor     eax, esp
0x43D52C: push    eax
0x43D52D: lea     eax, [esp+28h+var_C]
0x43D531: mov     large fs:0, eax
0x43D537: mov     ebp, ecx
0x43D539: mov     esi, [ebp+14h]
0x43D53C: mov     eax, [esi]
0x43D53E: xor     ebx, ebx
0x43D540: cmp     esi, ebx
0x43D542: mov     [esp+28h+a2], eax
0x43D546: jz      short loc_43D558
0x43D548: mov     ecx, esi
0x43D54A: call    sub_4330A0
0x43D54F: push    esi
0x43D550: call    FormHeapFree
0x43D555: add     esp, 4
0x43D558: cmp     [ebp+4], ebx
0x43D55B: mov     [ebp+18h], ebx
0x43D55E: jz      short loc_43D5CD
0x43D560: mov     edi, [ebp+4]
0x43D563: mov     esi, [edi+4]
0x43D566: cmp     esi, ebx
0x43D568: mov     ecx, [edi]
0x43D56A: mov     [esp+28h+var_14], ecx
0x43D56E: jz      short loc_43D58F
0x43D570: lea     edx, [esi+8]
0x43D573: push    edx; lpAddend
0x43D574: call    ds:InterlockedDecrement
0x43D57A: test    eax, eax
0x43D57C: jnz     short loc_43D58C
0x43D57E: cmp     esi, ebx
0x43D580: jz      short loc_43D58C
0x43D582: mov     eax, [esi]
0x43D584: mov     edx, [eax]
0x43D586: push    1
0x43D588: mov     ecx, esi
0x43D58A: call    edx
0x43D58C: mov     [edi+4], ebx
0x43D58F: mov     edi, [ebp+4]
0x43D592: cmp     edi, ebx
0x43D594: jz      short loc_43D5C2
0x43D596: mov     esi, [edi+4]
0x43D599: cmp     esi, ebx
0x43D59B: jz      short loc_43D5B9
0x43D59D: lea     eax, [esi+8]
0x43D5A0: push    eax; lpAddend
0x43D5A1: call    ds:InterlockedDecrement
0x43D5A7: test    eax, eax
0x43D5A9: jnz     short loc_43D5B9
0x43D5AB: cmp     esi, ebx
0x43D5AD: jz      short loc_43D5B9
0x43D5AF: mov     edx, [esi]
0x43D5B1: mov     eax, [edx]
0x43D5B3: push    1
0x43D5B5: mov     ecx, esi
0x43D5B7: call    eax
0x43D5B9: push    edi
0x43D5BA: call    FormHeapFree
0x43D5BF: add     esp, 4
0x43D5C2: mov     ecx, [esp+28h+var_14]
0x43D5C6: cmp     ecx, ebx
0x43D5C8: mov     [ebp+4], ecx
0x43D5CB: jnz     short loc_43D560
0x43D5CD: cmp     byte ptr [esp+28h+arg_0], bl
0x43D5D1: jnz     short loc_43D619
0x43D5D3: push    8; Size
0x43D5D5: call    FormHeapAlloc
0x43D5DA: add     esp, 4
0x43D5DD: cmp     eax, ebx
0x43D5DF: jz      short loc_43D5E8
0x43D5E1: mov     [eax], ebx
0x43D5E3: mov     [eax+4], ebx
0x43D5E6: jmp     short loc_43D5EA
0x43D5E8: xor     eax, eax
0x43D5EA: push    10h; Size
0x43D5EC: mov     [ebp+4], eax
0x43D5EF: mov     [ebp+8], eax
0x43D5F2: call    FormHeapAlloc
0x43D5F7: add     esp, 4
0x43D5FA: mov     [esp+28h+arg_0], eax
0x43D5FE: cmp     eax, ebx
0x43D600: mov     [esp+28h+var_4], ebx
0x43D604: jz      short loc_43D614
0x43D606: mov     edx, [esp+28h+a2]
0x43D60A: push    edx; a2
0x43D60B: mov     ecx, eax; this
0x43D60D: call    ThreadSpecificInterfaceManager__ThreadSpecificInterfaceManager
0x43D612: jmp     short loc_43D616
0x43D614: xor     eax, eax
0x43D616: mov     [ebp+14h], eax
0x43D619: mov     ecx, [esp+28h+var_C]
0x43D61D: mov     large fs:0, ecx
0x43D624: pop     ecx
0x43D625: pop     edi
0x43D626: pop     esi
0x43D627: pop     ebp
0x43D628: pop     ebx
0x43D629: add     esp, 14h
0x43D62C: retn    4
