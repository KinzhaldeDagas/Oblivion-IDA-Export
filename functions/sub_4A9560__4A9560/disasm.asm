0x4A9560: push    0FFFFFFFFh
0x4A9562: push    offset SEH_5ACE20
0x4A9567: mov     eax, large fs:0
0x4A956D: push    eax
0x4A956E: sub     esp, 8
0x4A9571: push    ebx
0x4A9572: push    ebp
0x4A9573: push    esi
0x4A9574: push    edi
0x4A9575: mov     eax, ds:0B30AACh
0x4A957A: xor     eax, esp
0x4A957C: push    eax
0x4A957D: lea     eax, [esp+28h+var_C]
0x4A9581: mov     large fs:0, eax
0x4A9587: mov     eax, [esp+28h+arg_4]
0x4A958B: mov     edi, [esp+28h+arg_0]
0x4A958F: push    eax; int
0x4A9590: push    edi; int
0x4A9591: call    sub_4B3750
0x4A9596: xor     esi, esi
0x4A9598: cmp     edi, esi
0x4A959A: mov     ebp, eax
0x4A959C: jz      short loc_4A95AB
0x4A959E: lea     ecx, [edi+44h]
0x4A95A1: call    ExtraDataList_GetExtraCount
0x4A95A6: movsx   ebx, ax
0x4A95A9: jmp     short loc_4A95B0
0x4A95AB: mov     ebx, 1
0x4A95B0: cmp     ebp, esi
0x4A95B2: jz      short loc_4A95F9
0x4A95B4: cmp     ebx, ds:0B35588h
0x4A95BA: jge     short loc_4A95F9
0x4A95BC: cmp     ebx, 1
0x4A95BF: jnz     short loc_4A9611
0x4A95C1: mov     edx, [ebp+0]
0x4A95C4: mov     eax, [edx+58h]
0x4A95C7: push    offset aArrowquiver; "ArrowQuiver"
0x4A95CC: mov     ecx, ebp
0x4A95CE: call    eax
0x4A95D0: cmp     eax, esi
0x4A95D2: jz      short loc_4A95F0
0x4A95D4: mov     ecx, [eax+1Ch]
0x4A95D7: mov     edx, [ecx]
0x4A95D9: mov     edx, [edx+88h]
0x4A95DF: push    eax
0x4A95E0: lea     eax, [esp+2Ch+arg_4]
0x4A95E4: push    eax
0x4A95E5: call    edx
0x4A95E7: lea     ecx, [esp+28h+arg_4]; this
0x4A95EB: call    sub_7016A0
0x4A95F0: push    ebp
0x4A95F1: call    sub_8A5720
0x4A95F6: add     esp, 4
0x4A95F9: mov     eax, ebp
0x4A95FB: mov     ecx, [esp+28h+var_C]
0x4A95FF: mov     large fs:0, ecx
0x4A9606: pop     ecx
0x4A9607: pop     edi
0x4A9608: pop     esi
0x4A9609: pop     ebp
0x4A960A: pop     ebx
0x4A960B: add     esp, 14h
0x4A960E: retn    8
0x4A9611: cmp     ebx, ds:0B35588h
0x4A9617: jge     short loc_4A95F9
0x4A9619: mov     [esp+28h+var_14], esi
0x4A961D: mov     word ptr [esp+28h+var_10], si
0x4A9622: mov     word ptr [esp+28h+var_10+2], si
0x4A9627: push    ebx; ArgList
0x4A9628: lea     eax, [esp+2Ch+var_14]
0x4A962C: push    offset aArrowD; "Arrow%d"
0x4A9631: push    eax; int
0x4A9632: mov     [esp+34h+var_4], esi
0x4A9636: call    BSStringT_Static_Format
0x4A963B: mov     edx, [ebp+0]
0x4A963E: mov     eax, [esp+34h+var_14]
0x4A9642: mov     edx, [edx+58h]
0x4A9645: add     esp, 0Ch
0x4A9648: push    eax
0x4A9649: mov     ecx, ebp
0x4A964B: call    edx
0x4A964D: cmp     eax, esi
0x4A964F: jz      short loc_4A968A
0x4A9651: mov     ecx, [eax+1Ch]
0x4A9654: mov     edx, [ecx]
0x4A9656: mov     edx, [edx+88h]
0x4A965C: push    eax
0x4A965D: lea     eax, [esp+2Ch+arg_0]
0x4A9661: push    eax
0x4A9662: call    edx
0x4A9664: mov     eax, [esp+28h+arg_0]
0x4A9668: cmp     eax, esi
0x4A966A: jz      short loc_4A968A
0x4A966C: mov     edi, eax
0x4A966E: add     eax, 4
0x4A9671: push    eax; lpAddend
0x4A9672: call    dword ptr ds:0A2807Ch
0x4A9678: test    eax, eax
0x4A967A: jnz     short loc_4A968A
0x4A967C: cmp     edi, esi
0x4A967E: jz      short loc_4A968A
0x4A9680: mov     eax, [edi]
0x4A9682: mov     edx, [eax]
0x4A9684: push    1
0x4A9686: mov     ecx, edi
0x4A9688: call    edx
0x4A968A: mov     eax, [esp+28h+var_14]
0x4A968E: push    eax
0x4A968F: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x4A9697: call    FormHeapFree
0x4A969C: add     esp, 4
0x4A969F: mov     [esp+28h+var_14], esi
0x4A96A3: mov     word ptr [esp+28h+var_10+2], si
0x4A96A8: mov     word ptr [esp+28h+var_10], si
0x4A96AD: add     ebx, 1
0x4A96B0: jmp     loc_4A9611
