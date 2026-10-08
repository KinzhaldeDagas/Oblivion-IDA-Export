0x6EB4C0: push    0FFFFFFFFh
0x6EB4C2: push    offset SEH_8C62B0
0x6EB4C7: mov     eax, large fs:0
0x6EB4CD: push    eax
0x6EB4CE: push    ecx
0x6EB4CF: push    esi
0x6EB4D0: mov     eax, ds:0B30AACh
0x6EB4D5: xor     eax, esp
0x6EB4D7: push    eax
0x6EB4D8: lea     eax, [esp+18h+var_C]
0x6EB4DC: mov     large fs:0, eax
0x6EB4E2: push    34h ; '4'; Size
0x6EB4E4: call    FormHeapAlloc
0x6EB4E9: mov     esi, eax
0x6EB4EB: add     esp, 4
0x6EB4EE: mov     [esp+18h+var_10], esi
0x6EB4F2: xor     eax, eax
0x6EB4F4: cmp     esi, eax
0x6EB4F6: mov     [esp+18h+var_4], eax
0x6EB4FA: jz      short loc_6EB513
0x6EB4FC: mov     ecx, esi
0x6EB4FE: call    sub_6CC4E0
0x6EB503: mov     dword ptr [esi], offset ??_7NiBlendBoolInterpolator@@6B@; const NiBlendBoolInterpolator::`vftable'
0x6EB509: mov     al, ds:0A7C6ACh
0x6EB50E: mov     [esi+30h], al
0x6EB511: mov     eax, esi
0x6EB513: mov     ecx, [esp+18h+var_C]
0x6EB517: mov     large fs:0, ecx
0x6EB51E: pop     ecx
0x6EB51F: pop     esi
0x6EB520: add     esp, 10h
0x6EB523: retn
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
