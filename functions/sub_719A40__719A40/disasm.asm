0x719A40: push    0FFFFFFFFh
0x719A42: push    offset SEH_8C62B0
0x719A47: mov     eax, large fs:0
0x719A4D: push    eax
0x719A4E: push    ecx
0x719A4F: push    esi
0x719A50: mov     eax, ds:0B30AACh
0x719A55: xor     eax, esp
0x719A57: push    eax
0x719A58: lea     eax, [esp+18h+var_C]
0x719A5C: mov     large fs:0, eax
0x719A62: push    0C0h ; 'À'; Size
0x719A67: call    FormHeapAlloc
0x719A6C: mov     esi, eax
0x719A6E: add     esp, 4
0x719A71: mov     [esp+18h+var_10], esi
0x719A75: xor     eax, eax
0x719A77: cmp     esi, eax
0x719A79: mov     [esp+18h+var_4], eax
0x719A7D: jz      short loc_719A8E
0x719A7F: mov     ecx, esi
0x719A81: call    sub_7226C0
0x719A86: mov     dword ptr [esi], offset ??_7NiTriStrips@@6B@; const NiTriStrips::`vftable'
0x719A8C: mov     eax, esi
0x719A8E: mov     ecx, [esp+18h+var_C]
0x719A92: mov     large fs:0, ecx
0x719A99: pop     ecx
0x719A9A: pop     esi
0x719A9B: add     esp, 10h
0x719A9E: retn
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
