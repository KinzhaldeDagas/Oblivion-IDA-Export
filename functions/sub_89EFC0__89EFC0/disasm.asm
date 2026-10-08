0x89EFC0: push    0FFFFFFFFh
0x89EFC2: push    offset SEH_8C62B0
0x89EFC7: mov     eax, large fs:0
0x89EFCD: push    eax
0x89EFCE: push    ecx
0x89EFCF: push    esi
0x89EFD0: mov     eax, ds:0B30AACh
0x89EFD5: xor     eax, esp
0x89EFD7: push    eax
0x89EFD8: lea     eax, [esp+18h+var_C]
0x89EFDC: mov     large fs:0, eax
0x89EFE2: push    14h; Size
0x89EFE4: call    FormHeapAlloc
0x89EFE9: mov     esi, eax
0x89EFEB: add     esp, 4
0x89EFEE: mov     [esp+18h+var_10], esi
0x89EFF2: xor     eax, eax
0x89EFF4: cmp     esi, eax
0x89EFF6: mov     [esp+18h+var_4], eax
0x89EFFA: jz      short loc_89F00B
0x89EFFC: mov     ecx, esi
0x89EFFE: call    sub_897600
0x89F003: mov     dword ptr [esi], offset ??_7bhkPCollisionObject@@6B@; const bhkPCollisionObject::`vftable'
0x89F009: mov     eax, esi
0x89F00B: mov     ecx, [esp+18h+var_C]
0x89F00F: mov     large fs:0, ecx
0x89F016: pop     ecx
0x89F017: pop     esi
0x89F018: add     esp, 10h
0x89F01B: retn
0x9D62E0: mov     eax, [ebp-10h]
0x9D62E3: push    eax
0x9D62E4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9D62E9: pop     ecx
0x9D62EA: retn
0x9D62EB: mov     edx, [esp+arg_4]
0x9D62EF: lea     eax, [edx-8]
0x9D62F2: mov     ecx, [edx-0Ch]
0x9D62F5: xor     ecx, eax
0x9D62F7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D62FC: mov     eax, offset stru_AFE21C
0x9D6301: jmp     ___CxxFrameHandler3
