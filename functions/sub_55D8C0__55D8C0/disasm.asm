0x55D8C0: push    0FFFFFFFFh
0x55D8C2: push    offset SEH_8C8970
0x55D8C7: mov     eax, large fs:0
0x55D8CD: push    eax
0x55D8CE: push    ecx
0x55D8CF: push    esi
0x55D8D0: push    edi
0x55D8D1: mov     eax, ds:0B30AACh
0x55D8D6: xor     eax, esp
0x55D8D8: push    eax
0x55D8D9: lea     eax, [esp+1Ch+var_C]
0x55D8DD: mov     large fs:0, eax
0x55D8E3: mov     edi, ecx
0x55D8E5: push    118h; Size
0x55D8EA: call    FormHeapAlloc
0x55D8EF: add     esp, 4
0x55D8F2: mov     [esp+1Ch+var_10], eax
0x55D8F6: xor     esi, esi
0x55D8F8: cmp     eax, esi
0x55D8FA: mov     [esp+1Ch+var_4], esi
0x55D8FE: jz      short loc_55D909
0x55D900: mov     ecx, eax; this
0x55D902: call    ??0BSFaceGenNiNode@@QAE@XZ; BSFaceGenNiNode::BSFaceGenNiNode(void)
0x55D907: mov     esi, eax
0x55D909: mov     eax, [esp+1Ch+arg_0]
0x55D90D: push    eax
0x55D90E: push    esi
0x55D90F: mov     ecx, edi
0x55D911: mov     [esp+24h+var_4], 0FFFFFFFFh
0x55D919: call    sub_55CFE0
0x55D91E: mov     eax, esi
0x55D920: mov     ecx, [esp+1Ch+var_C]
0x55D924: mov     large fs:0, ecx
0x55D92B: pop     ecx
0x55D92C: pop     edi
0x55D92D: pop     esi
0x55D92E: add     esp, 10h
0x55D931: retn    4
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
