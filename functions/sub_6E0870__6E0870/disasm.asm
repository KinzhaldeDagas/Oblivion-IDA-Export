0x6E0870: push    0FFFFFFFFh
0x6E0872: push    offset SEH_8C8970
0x6E0877: mov     eax, large fs:0
0x6E087D: push    eax
0x6E087E: push    ecx
0x6E087F: push    esi
0x6E0880: push    edi
0x6E0881: mov     eax, ds:0B30AACh
0x6E0886: xor     eax, esp
0x6E0888: push    eax
0x6E0889: lea     eax, [esp+1Ch+var_C]
0x6E088D: mov     large fs:0, eax
0x6E0893: mov     edi, ecx
0x6E0895: push    40h ; '@'; Size
0x6E0897: call    FormHeapAlloc
0x6E089C: mov     esi, eax
0x6E089E: add     esp, 4
0x6E08A1: mov     [esp+1Ch+var_10], esi
0x6E08A5: test    esi, esi
0x6E08A7: mov     [esp+1Ch+var_4], 0
0x6E08AF: jz      short loc_6E08C0
0x6E08B1: mov     ecx, esi
0x6E08B3: call    sub_6EC180
0x6E08B8: mov     dword ptr [esi], offset ??_7NiLightDimmerController@@6B@; const NiLightDimmerController::`vftable'
0x6E08BE: jmp     short loc_6E08C2
0x6E08C0: xor     esi, esi
0x6E08C2: mov     eax, [esp+1Ch+arg_0]
0x6E08C6: push    eax
0x6E08C7: push    esi
0x6E08C8: mov     ecx, edi
0x6E08CA: mov     [esp+24h+var_4], 0FFFFFFFFh
0x6E08D2: call    j_NiSingleInterpController_CopyMembers
0x6E08D7: mov     eax, esi
0x6E08D9: mov     ecx, [esp+1Ch+var_C]
0x6E08DD: mov     large fs:0, ecx
0x6E08E4: pop     ecx
0x6E08E5: pop     edi
0x6E08E6: pop     esi
0x6E08E7: add     esp, 10h
0x6E08EA: retn    4
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
