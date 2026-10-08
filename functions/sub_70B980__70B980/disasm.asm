0x70B980: push    0FFFFFFFFh
0x70B982: push    offset SEH_8C8970
0x70B987: mov     eax, large fs:0
0x70B98D: push    eax
0x70B98E: push    ecx
0x70B98F: push    esi
0x70B990: push    edi
0x70B991: mov     eax, ds:0B30AACh
0x70B996: xor     eax, esp
0x70B998: push    eax
0x70B999: lea     eax, [esp+1Ch+var_C]
0x70B99D: mov     large fs:0, eax
0x70B9A3: mov     edi, ecx
0x70B9A5: push    0DCh ; 'Ü'; Size
0x70B9AA: call    FormHeapAlloc
0x70B9AF: add     esp, 4
0x70B9B2: mov     [esp+1Ch+var_10], eax
0x70B9B6: xor     esi, esi
0x70B9B8: cmp     eax, esi
0x70B9BA: mov     [esp+1Ch+var_4], esi
0x70B9BE: jz      short loc_70B9D1
0x70B9C0: movzx   ecx, word ptr [edi+0B6h]
0x70B9C7: push    ecx
0x70B9C8: mov     ecx, eax; this
0x70B9CA: call    ??0NiNode@@QAE@XZ; NiNode::NiNode(void)
0x70B9CF: mov     esi, eax
0x70B9D1: mov     eax, [esp+1Ch+cloningProcess]
0x70B9D5: push    eax; cloningProcess
0x70B9D6: push    esi; destination
0x70B9D7: mov     ecx, edi; this
0x70B9D9: mov     [esp+24h+var_4], 0FFFFFFFFh
0x70B9E1: call    OB_NiNode_CopyMembersForClone
0x70B9E6: mov     eax, esi
0x70B9E8: mov     ecx, [esp+1Ch+var_C]
0x70B9EC: mov     large fs:0, ecx
0x70B9F3: pop     ecx
0x70B9F4: pop     edi
0x70B9F5: pop     esi
0x70B9F6: add     esp, 10h
0x70B9F9: retn    4
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
