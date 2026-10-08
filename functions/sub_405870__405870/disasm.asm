0x405870: push    0FFFFFFFFh; NiTexturingProperty map flag helper: ensures map slot 0 exists and writes arg-derived bits into map Unk04 bits 0xC000. 0x560AC0 calls it with 0 for billboard texture property state.
0x405872: push    offset SEH_8C8970
0x405877: mov     eax, large fs:0
0x40587D: push    eax
0x40587E: push    ecx
0x40587F: push    esi
0x405880: push    edi
0x405881: mov     eax, ___security_cookie
0x405886: xor     eax, esp
0x405888: push    eax
0x405889: lea     eax, [esp+1Ch+var_C]
0x40588D: mov     large fs:0, eax
0x405893: mov     edi, ecx
0x405895: mov     eax, [edi+20h]
0x405898: mov     esi, [eax]
0x40589A: test    esi, esi
0x40589C: jnz     short loc_4058D4
0x40589E: push    10h; Size
0x4058A0: call    FormHeapAlloc
0x4058A5: add     esp, 4
0x4058A8: mov     [esp+1Ch+var_10], eax
0x4058AC: test    eax, eax
0x4058AE: mov     [esp+1Ch+var_4], esi
0x4058B2: jz      short loc_4058BD
0x4058B4: mov     ecx, eax
0x4058B6: call    sub_704100
0x4058BB: jmp     short loc_4058BF
0x4058BD: xor     eax, eax
0x4058BF: lea     ecx, [esp+1Ch+var_10]
0x4058C3: push    ecx
0x4058C4: mov     esi, eax
0x4058C6: push    0
0x4058C8: lea     ecx, [edi+1Ch]
0x4058CB: mov     [esp+24h+var_10], esi
0x4058CF: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x4058D4: mov     dx, [esi+4]
0x4058D8: mov     eax, [esp+1Ch+value]
0x4058DC: and     dx, 0CFFFh
0x4058E1: shl     eax, 0Ch
0x4058E4: or      dx, ax
0x4058E7: mov     [esi+4], dx
0x4058EB: mov     ecx, [esp+1Ch+var_C]
0x4058EF: mov     large fs:0, ecx
0x4058F6: pop     ecx
0x4058F7: pop     edi
0x4058F8: pop     esi
0x4058F9: add     esp, 10h
0x4058FC: retn    4
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
