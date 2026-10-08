0x6FAC00: push    0FFFFFFFFh
0x6FAC02: push    offset SEH_8C62B0
0x6FAC07: mov     eax, large fs:0
0x6FAC0D: push    eax
0x6FAC0E: push    ecx
0x6FAC0F: push    esi
0x6FAC10: mov     eax, ds:0B30AACh
0x6FAC15: xor     eax, esp
0x6FAC17: push    eax
0x6FAC18: lea     eax, [esp+18h+var_C]
0x6FAC1C: mov     large fs:0, eax
0x6FAC22: push    1Ch; Size
0x6FAC24: call    FormHeapAlloc
0x6FAC29: mov     esi, eax
0x6FAC2B: add     esp, 4
0x6FAC2E: mov     [esp+18h+var_10], esi
0x6FAC32: xor     eax, eax
0x6FAC34: cmp     esi, eax
0x6FAC36: mov     [esp+18h+var_4], eax
0x6FAC3A: jz      short loc_6FAC57
0x6FAC3C: mov     ecx, esi
0x6FAC3E: call    sub_752BF0
0x6FAC43: fld1
0x6FAC45: fstp    dword ptr [esi+18h]
0x6FAC48: mov     dword ptr [esi], offset ??_7BSWindModifier@@6B@; const BSWindModifier::`vftable'
0x6FAC4E: mov     dword ptr [esi+0Ch], 0FA0h
0x6FAC55: mov     eax, esi
0x6FAC57: mov     ecx, [esp+18h+var_C]
0x6FAC5B: mov     large fs:0, ecx
0x6FAC62: pop     ecx
0x6FAC63: pop     esi
0x6FAC64: add     esp, 10h
0x6FAC67: retn
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
