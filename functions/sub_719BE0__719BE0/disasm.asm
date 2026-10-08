0x719BE0: push    0FFFFFFFFh
0x719BE2: push    offset SEH_8C8970
0x719BE7: mov     eax, large fs:0
0x719BED: push    eax
0x719BEE: push    ecx
0x719BEF: push    esi
0x719BF0: push    edi
0x719BF1: mov     eax, ds:0B30AACh
0x719BF6: xor     eax, esp
0x719BF8: push    eax
0x719BF9: lea     eax, [esp+1Ch+var_C]
0x719BFD: mov     large fs:0, eax
0x719C03: mov     edi, ecx
0x719C05: push    0C0h ; 'À'; Size
0x719C0A: call    FormHeapAlloc
0x719C0F: mov     esi, eax
0x719C11: add     esp, 4
0x719C14: mov     [esp+1Ch+var_10], esi
0x719C18: test    esi, esi
0x719C1A: mov     [esp+1Ch+var_4], 0
0x719C22: jz      short loc_719C33
0x719C24: mov     ecx, esi
0x719C26: call    sub_7226C0
0x719C2B: mov     dword ptr [esi], offset ??_7NiTriStrips@@6B@; const NiTriStrips::`vftable'
0x719C31: jmp     short loc_719C35
0x719C33: xor     esi, esi
0x719C35: mov     eax, [esp+1Ch+arg_0]
0x719C39: push    eax
0x719C3A: push    esi
0x719C3B: mov     ecx, edi
0x719C3D: mov     [esp+24h+var_4], 0FFFFFFFFh
0x719C45: call    j_NiGeometry_CopyMembersForClone
0x719C4A: mov     eax, esi
0x719C4C: mov     ecx, [esp+1Ch+var_C]
0x719C50: mov     large fs:0, ecx
0x719C57: pop     ecx
0x719C58: pop     edi
0x719C59: pop     esi
0x719C5A: add     esp, 10h
0x719C5D: retn    4
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
