0x7245C0: push    0FFFFFFFFh
0x7245C2: push    offset SEH_8C8970
0x7245C7: mov     eax, large fs:0
0x7245CD: push    eax
0x7245CE: push    ecx
0x7245CF: push    esi
0x7245D0: push    edi
0x7245D1: mov     eax, ds:0B30AACh
0x7245D6: xor     eax, esp
0x7245D8: push    eax
0x7245D9: lea     eax, [esp+1Ch+var_C]
0x7245DD: mov     large fs:0, eax
0x7245E3: mov     edi, ecx
0x7245E5: push    0FCh ; 'ü'; Size
0x7245EA: call    FormHeapAlloc
0x7245EF: add     esp, 4
0x7245F2: mov     [esp+1Ch+var_10], eax
0x7245F6: xor     esi, esi
0x7245F8: cmp     eax, esi
0x7245FA: mov     [esp+1Ch+var_4], esi
0x7245FE: jz      short loc_724609
0x724600: mov     ecx, eax
0x724602: call    sub_723F70
0x724607: mov     esi, eax
0x724609: mov     eax, [esp+1Ch+cloningProcess]
0x72460D: push    eax; cloningProcess
0x72460E: push    esi; destination
0x72460F: mov     ecx, edi; this
0x724611: mov     [esp+24h+var_4], 0FFFFFFFFh
0x724619: call    OB_NiNode_CopyMembersForClone
0x72461E: mov     cx, [edi+0DCh]
0x724625: mov     [esi+0DCh], cx
0x72462C: mov     edx, [edi+0E0h]
0x724632: mov     [esi+0E0h], edx
0x724638: mov     eax, esi
0x72463A: mov     ecx, [esp+1Ch+var_C]
0x72463E: mov     large fs:0, ecx
0x724645: pop     ecx
0x724646: pop     edi
0x724647: pop     esi
0x724648: add     esp, 10h
0x72464B: retn    4
0x9CA7E0: mov     eax, [ebp-10h]
0x9CA7E3: push    eax
0x9CA7E4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9CA7E9: pop     ecx
0x9CA7EA: retn
0x9CA7EB: mov     edx, [esp+arg_4]
0x9CA7EF: lea     eax, [edx-0Ch]
0x9CA7F2: mov     ecx, [edx-10h]
0x9CA7F5: xor     ecx, eax
0x9CA7F7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CA7FC: mov     eax, offset stru_AF2E8C
0x9CA801: jmp     ___CxxFrameHandler3
