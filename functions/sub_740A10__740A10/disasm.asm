0x740A10: push    0FFFFFFFFh
0x740A12: push    offset SEH_8C62B0
0x740A17: mov     eax, large fs:0
0x740A1D: push    eax
0x740A1E: push    ecx
0x740A1F: push    esi
0x740A20: mov     eax, ds:0B30AACh
0x740A25: xor     eax, esp
0x740A27: push    eax
0x740A28: lea     eax, [esp+18h+var_C]
0x740A2C: mov     large fs:0, eax
0x740A32: push    14h; Size
0x740A34: call    FormHeapAlloc
0x740A39: mov     esi, eax
0x740A3B: add     esp, 4
0x740A3E: mov     [esp+18h+var_10], esi
0x740A42: test    esi, esi
0x740A44: mov     [esp+18h+var_4], 0
0x740A4C: jz      short loc_740A7C
0x740A4E: mov     ecx, esi
0x740A50: call    sub_721350
0x740A55: mov     dword ptr [esi], offset ??_7NiIntegersExtraData@@6B@; const NiIntegersExtraData::`vftable'
0x740A5B: mov     dword ptr [esi+10h], 0
0x740A62: mov     dword ptr [esi+0Ch], 0
0x740A69: mov     eax, esi
0x740A6B: mov     ecx, [esp+18h+var_C]
0x740A6F: mov     large fs:0, ecx
0x740A76: pop     ecx
0x740A77: pop     esi
0x740A78: add     esp, 10h
0x740A7B: retn
0x740A7C: xor     eax, eax
0x740A7E: mov     ecx, [esp+18h+var_C]
0x740A82: mov     large fs:0, ecx
0x740A89: pop     ecx
0x740A8A: pop     esi
0x740A8B: add     esp, 10h
0x740A8E: retn
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
