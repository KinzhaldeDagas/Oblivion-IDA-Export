0x41EB90: push    0FFFFFFFFh; Returns existing ExtraAction type 0x13, or creates one with default action flag byte 1 and null action reference.
0x41EB92: push    offset SEH_8C8970
0x41EB97: mov     eax, large fs:0
0x41EB9D: push    eax
0x41EB9E: push    ecx
0x41EB9F: push    esi
0x41EBA0: push    edi
0x41EBA1: mov     eax, ___security_cookie
0x41EBA6: xor     eax, esp
0x41EBA8: push    eax
0x41EBA9: lea     eax, [esp+1Ch+var_C]
0x41EBAD: mov     large fs:0, eax
0x41EBB3: mov     edi, ecx
0x41EBB5: push    13h; a2
0x41EBB7: call    BaseExtraList_GetExtraData
0x41EBBC: xor     esi, esi
0x41EBBE: cmp     eax, esi
0x41EBC0: jnz     short loc_41EBF3
0x41EBC2: push    14h; Size
0x41EBC4: call    FormHeapAlloc
0x41EBC9: add     esp, 4
0x41EBCC: mov     [esp+1Ch+var_10], eax
0x41EBD0: cmp     eax, esi
0x41EBD2: mov     [esp+1Ch+var_4], esi
0x41EBD6: jz      short loc_41EBE1
0x41EBD8: mov     ecx, eax
0x41EBDA: call    ExtraAction_ctor; Constructs ExtraAction: type 0x13, default flag byte 1, null action reference.
0x41EBDF: mov     esi, eax
0x41EBE1: push    esi; BSExtraData *
0x41EBE2: mov     ecx, edi; ExtraDataList *
0x41EBE4: mov     [esp+20h+var_4], 0FFFFFFFFh
0x41EBEC: call    BaseExtraList_AddExtra
0x41EBF1: mov     eax, esi
0x41EBF3: mov     ecx, [esp+1Ch+var_C]
0x41EBF7: mov     large fs:0, ecx
0x41EBFE: pop     ecx
0x41EBFF: pop     edi
0x41EC00: pop     esi
0x41EC01: add     esp, 10h
0x41EC04: retn
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
