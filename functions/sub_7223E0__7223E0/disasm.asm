0x7223E0: push    0FFFFFFFFh
0x7223E2: push    offset SEH_8C8970
0x7223E7: mov     eax, large fs:0
0x7223ED: push    eax
0x7223EE: push    ecx
0x7223EF: push    esi
0x7223F0: push    edi
0x7223F1: mov     eax, ds:0B30AACh
0x7223F6: xor     eax, esp
0x7223F8: push    eax
0x7223F9: lea     eax, [esp+1Ch+var_C]
0x7223FD: mov     large fs:0, eax
0x722403: mov     edi, ecx
0x722405: push    0E4h ; 'ä'; Size
0x72240A: call    FormHeapAlloc
0x72240F: mov     esi, eax
0x722411: add     esp, 4
0x722414: mov     [esp+1Ch+var_10], esi
0x722418: test    esi, esi
0x72241A: mov     [esp+1Ch+var_4], 0
0x722422: jz      short loc_722446
0x722424: push    0
0x722426: mov     ecx, esi; this
0x722428: call    ??0NiNode@@QAE@XZ; NiNode::NiNode(void)
0x72242D: fldz
0x72242F: fstp    dword ptr [esi+0E0h]
0x722435: mov     dword ptr [esi], offset ??_7NiBillboardNode@@6B@; const NiBillboardNode::`vftable'
0x72243B: mov     word ptr [esi+0DCh], 9
0x722444: jmp     short loc_722448
0x722446: xor     esi, esi
0x722448: mov     eax, [esp+1Ch+cloningProcess]
0x72244C: push    eax; cloningProcess
0x72244D: push    esi; destination
0x72244E: mov     ecx, edi; this
0x722450: mov     [esp+24h+var_4], 0FFFFFFFFh
0x722458: call    OB_NiNode_CopyMembersForClone
0x72245D: mov     cx, [edi+0DCh]
0x722464: mov     [esi+0DCh], cx
0x72246B: mov     eax, esi
0x72246D: mov     ecx, [esp+1Ch+var_C]
0x722471: mov     large fs:0, ecx
0x722478: pop     ecx
0x722479: pop     edi
0x72247A: pop     esi
0x72247B: add     esp, 10h
0x72247E: retn    4
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
