0x6A74E0: push    0FFFFFFFFh
0x6A74E2: push    offset SEH_8C8970
0x6A74E7: mov     eax, large fs:0
0x6A74ED: push    eax
0x6A74EE: push    ecx
0x6A74EF: push    esi
0x6A74F0: push    edi
0x6A74F1: mov     eax, ds:0B30AACh
0x6A74F6: xor     eax, esp
0x6A74F8: push    eax
0x6A74F9: lea     eax, [esp+1Ch+var_C]
0x6A74FD: mov     large fs:0, eax
0x6A7503: mov     esi, ecx
0x6A7505: push    50h ; 'P'; Size
0x6A7507: call    FormHeapAlloc
0x6A750C: add     esp, 4
0x6A750F: mov     [esp+1Ch+var_10], eax
0x6A7513: xor     edi, edi
0x6A7515: cmp     eax, edi
0x6A7517: mov     [esp+1Ch+var_4], edi
0x6A751B: jz      short loc_6A7532
0x6A751D: mov     ecx, [esi+0Ch]
0x6A7520: mov     edx, [esi+8]
0x6A7523: push    ecx; int
0x6A7524: mov     ecx, [esi+24h]
0x6A7527: push    edx; int
0x6A7528: push    ecx; int
0x6A7529: mov     ecx, eax; this
0x6A752B: call    TelekinesisEffect_constr
0x6A7530: mov     edi, eax
0x6A7532: mov     edx, [esi]
0x6A7534: mov     eax, [edx+2Ch]
0x6A7537: push    edi
0x6A7538: mov     ecx, esi
0x6A753A: mov     [esp+20h+var_4], 0FFFFFFFFh
0x6A7542: call    eax
0x6A7544: mov     eax, edi
0x6A7546: mov     ecx, dword ptr [esp+1Ch+var_C]
0x6A754A: mov     large fs:0, ecx
0x6A7551: pop     ecx
0x6A7552: pop     edi
0x6A7553: pop     esi
0x6A7554: add     esp, 10h
0x6A7557: retn
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
