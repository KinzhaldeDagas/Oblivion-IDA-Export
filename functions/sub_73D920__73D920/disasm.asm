0x73D920: push    0FFFFFFFFh
0x73D922: push    offset SEH_8C8970
0x73D927: mov     eax, large fs:0
0x73D92D: push    eax
0x73D92E: push    ecx
0x73D92F: push    esi
0x73D930: push    edi
0x73D931: mov     eax, ds:0B30AACh
0x73D936: xor     eax, esp
0x73D938: push    eax
0x73D939: lea     eax, [esp+1Ch+var_C]
0x73D93D: mov     large fs:0, eax
0x73D943: mov     edi, ecx
0x73D945: push    0E0h ; 'à'; Size
0x73D94A: call    FormHeapAlloc
0x73D94F: mov     esi, eax
0x73D951: add     esp, 4
0x73D954: mov     [esp+1Ch+var_10], esi
0x73D958: test    esi, esi
0x73D95A: mov     [esp+1Ch+var_4], 0
0x73D962: jz      short loc_73D97F
0x73D964: push    0
0x73D966: mov     ecx, esi; this
0x73D968: call    ??0NiNode@@QAE@XZ; NiNode::NiNode(void)
0x73D96D: mov     dword ptr [esi], offset ??_7NiSortAdjustNode@@6B@; const NiSortAdjustNode::`vftable'
0x73D973: mov     dword ptr [esi+0DCh], 0
0x73D97D: jmp     short loc_73D981
0x73D97F: xor     esi, esi
0x73D981: mov     eax, [esp+1Ch+cloningProcess]
0x73D985: push    eax; cloningProcess
0x73D986: push    esi; destination
0x73D987: mov     ecx, edi; this
0x73D989: mov     [esp+24h+var_4], 0FFFFFFFFh
0x73D991: call    OB_NiNode_CopyMembersForClone
0x73D996: mov     ecx, [edi+0DCh]
0x73D99C: mov     [esi+0DCh], ecx
0x73D9A2: mov     eax, esi
0x73D9A4: mov     ecx, [esp+1Ch+var_C]
0x73D9A8: mov     large fs:0, ecx
0x73D9AF: pop     ecx
0x73D9B0: pop     edi
0x73D9B1: pop     esi
0x73D9B2: add     esp, 10h
0x73D9B5: retn    4
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
