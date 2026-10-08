0x741D00: push    0FFFFFFFFh
0x741D02: push    offset SEH_8C62B0
0x741D07: mov     eax, large fs:0
0x741D0D: push    eax
0x741D0E: push    ecx
0x741D0F: push    esi
0x741D10: mov     eax, ds:0B30AACh
0x741D15: xor     eax, esp
0x741D17: push    eax
0x741D18: lea     eax, [esp+18h+var_C]
0x741D1C: mov     large fs:0, eax
0x741D22: push    10h; Size
0x741D24: call    FormHeapAlloc
0x741D29: mov     esi, eax
0x741D2B: add     esp, 4
0x741D2E: mov     [esp+18h+var_10], esi
0x741D32: test    esi, esi
0x741D34: mov     [esp+18h+var_4], 0
0x741D3C: jz      short loc_741D62
0x741D3E: mov     ecx, esi
0x741D40: call    sub_721350
0x741D45: mov     dword ptr [esi], offset ??_7NiBooleanExtraData@@6B@; const NiBooleanExtraData::`vftable'
0x741D4B: mov     byte ptr [esi+0Ch], 0
0x741D4F: mov     eax, esi
0x741D51: mov     ecx, [esp+18h+var_C]
0x741D55: mov     large fs:0, ecx
0x741D5C: pop     ecx
0x741D5D: pop     esi
0x741D5E: add     esp, 10h
0x741D61: retn
0x741D62: xor     eax, eax
0x741D64: mov     ecx, [esp+18h+var_C]
0x741D68: mov     large fs:0, ecx
0x741D6F: pop     ecx
0x741D70: pop     esi
0x741D71: add     esp, 10h
0x741D74: retn
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
