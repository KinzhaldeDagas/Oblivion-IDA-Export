0x6D2350: push    0FFFFFFFFh
0x6D2352: push    offset SEH_8C8970
0x6D2357: mov     eax, large fs:0
0x6D235D: push    eax
0x6D235E: push    ecx
0x6D235F: push    esi
0x6D2360: push    edi
0x6D2361: mov     eax, ds:0B30AACh
0x6D2366: xor     eax, esp
0x6D2368: push    eax
0x6D2369: lea     eax, [esp+1Ch+var_C]
0x6D236D: mov     large fs:0, eax
0x6D2373: mov     edi, ecx
0x6D2375: push    40h ; '@'; Size
0x6D2377: call    FormHeapAlloc
0x6D237C: mov     esi, eax
0x6D237E: add     esp, 4
0x6D2381: mov     [esp+1Ch+var_10], esi
0x6D2385: test    esi, esi
0x6D2387: mov     [esp+1Ch+var_4], 0
0x6D238F: jz      short loc_6D23A0
0x6D2391: mov     ecx, esi
0x6D2393: call    sub_6EC180
0x6D2398: mov     dword ptr [esi], offset ??_7NiAlphaController@@6B@; const NiAlphaController::`vftable'
0x6D239E: jmp     short loc_6D23A2
0x6D23A0: xor     esi, esi
0x6D23A2: mov     eax, [esp+1Ch+arg_0]
0x6D23A6: push    eax
0x6D23A7: push    esi
0x6D23A8: mov     ecx, edi
0x6D23AA: mov     [esp+24h+var_4], 0FFFFFFFFh
0x6D23B2: call    j_NiSingleInterpController_CopyMembers
0x6D23B7: mov     eax, esi
0x6D23B9: mov     ecx, [esp+1Ch+var_C]
0x6D23BD: mov     large fs:0, ecx
0x6D23C4: pop     ecx
0x6D23C5: pop     edi
0x6D23C6: pop     esi
0x6D23C7: add     esp, 10h
0x6D23CA: retn    4
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
