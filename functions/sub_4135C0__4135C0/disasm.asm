0x4135C0: push    ebp
0x4135C1: mov     ebp, esp
0x4135C3: push    0FFFFFFFFh
0x4135C5: push    offset SEH_4135C0
0x4135CA: mov     eax, large fs:0
0x4135D0: push    eax
0x4135D1: sub     esp, 0Ch
0x4135D4: push    ebx
0x4135D5: push    esi
0x4135D6: push    edi
0x4135D7: mov     eax, ___security_cookie
0x4135DC: xor     eax, ebp
0x4135DE: push    eax
0x4135DF: lea     eax, [ebp+var_C]
0x4135E2: mov     large fs:0, eax
0x4135E8: mov     [ebp+var_10], esp
0x4135EB: mov     edi, ecx
0x4135ED: mov     [ebp+var_14], edi
0x4135F0: mov     eax, [ebp+Dst]
0x4135F3: mov     esi, eax
0x4135F5: or      esi, 0Fh
0x4135F8: cmp     esi, 0FFFFFFFEh
0x4135FB: jbe     short loc_413601
0x4135FD: mov     esi, eax
0x4135FF: jmp     short loc_413623
0x413601: mov     ebx, [edi+18h]
0x413604: mov     eax, 0AAAAAAABh
0x413609: mul     esi
0x41360B: mov     ecx, ebx
0x41360D: shr     ecx, 1
0x41360F: shr     edx, 1
0x413611: cmp     edx, ecx
0x413613: jnb     short loc_413623
0x413615: mov     eax, 0FFFFFFFEh
0x41361A: sub     eax, ecx
0x41361C: cmp     ebx, eax
0x41361E: ja      short loc_413623
0x413620: lea     esi, [ecx+ebx]
0x413623: lea     ecx, [esi+1]
0x413626: push    0
0x413628: push    ecx; char *
0x413629: mov     [ebp+var_4], 0
0x413630: call    sub_412E70
0x413635: add     esp, 8
0x413638: mov     [ebp+Dst], eax
0x41363B: jmp     short loc_413667
0x41363D: mov     eax, [ebp+Dst]
0x413640: mov     [ebp+var_10], esp
0x413643: mov     [ebp+var_18], eax
0x413646: add     eax, 1
0x413649: push    0
0x41364B: push    eax; char *
0x41364C: mov     byte ptr [ebp+var_4], 2
0x413650: call    sub_412E70
0x413655: mov     [ebp+Dst], eax
0x413658: add     esp, 8
0x41365B: mov     eax, offset loc_413661
0x413660: retn
0x413661: mov     edi, [ebp+var_14]
0x413664: mov     esi, [ebp+var_18]
0x413667: mov     ebx, [ebp+MaxCount]
0x41366A: test    ebx, ebx
0x41366C: jbe     short loc_41368E
0x41366E: cmp     dword ptr [edi+18h], 10h
0x413672: jb      short loc_413679
0x413674: mov     eax, [edi+4]
0x413677: jmp     short loc_41367C
0x413679: lea     eax, [edi+4]
0x41367C: push    ebx; Src
0x41367D: push    eax; Src
0x41367E: mov     eax, [ebp+Dst]
0x413681: lea     edx, [esi+1]
0x413684: push    edx; DstSize
0x413685: push    eax; Dst
0x413686: call    _memcpy_s
0x41368B: add     esp, 10h
0x41368E: cmp     dword ptr [edi+18h], 10h
0x413692: jb      short loc_4136A0
0x413694: mov     ecx, [edi+4]
0x413697: push    ecx
0x413698: call    FormHeapFree
0x41369D: add     esp, 4
0x4136A0: cmp     esi, 10h
0x4136A3: mov     ecx, [ebp+Dst]
0x4136A6: lea     eax, [edi+4]
0x4136A9: mov     byte ptr [eax], 0
0x4136AC: mov     [eax], ecx
0x4136AE: mov     [edi+18h], esi
0x4136B1: mov     [edi+14h], ebx
0x4136B4: jb      short loc_4136B8
0x4136B6: mov     eax, ecx
0x4136B8: mov     byte ptr [eax+ebx], 0
0x4136BC: mov     ecx, [ebp+var_C]
0x4136BF: mov     large fs:0, ecx
0x4136C6: pop     ecx
0x4136C7: pop     edi
0x4136C8: pop     esi
0x4136C9: pop     ebx
0x4136CA: mov     esp, ebp
0x4136CC: pop     ebp
0x4136CD: retn    8
0x4136D0: mov     esi, [ebp+var_14]
0x4136D3: cmp     dword ptr [esi+18h], 10h
0x4136D7: jb      short loc_4136E5
0x4136D9: mov     edx, [esi+4]
0x4136DC: push    edx
0x4136DD: call    FormHeapFree
0x4136E2: add     esp, 4
0x4136E5: push    0
0x4136E7: mov     dword ptr [esi+18h], 0Fh
0x4136EE: mov     dword ptr [esi+14h], 0
0x4136F5: push    0
0x4136F7: mov     byte ptr [esi+4], 0
0x4136FB: call    ThrowException??
