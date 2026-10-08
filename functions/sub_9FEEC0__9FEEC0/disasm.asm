0x9FEEC0: push    0FFFFFFFFh
0x9FEEC2: push    offset SEH_9FEEC0
0x9FEEC7: mov     eax, large fs:0
0x9FEECD: push    eax
0x9FEECE: mov     eax, ___security_cookie
0x9FEED3: xor     eax, esp
0x9FEED5: push    eax
0x9FEED6: lea     eax, [esp+10h+var_C]
0x9FEEDA: mov     large fs:0, eax
0x9FEEE0: push    offset flt_B16188
0x9FEEE5: mov     ecx, offset INISettingCollection
0x9FEEEA: mov     [esp+14h+var_4], 0
0x9FEEF2: call    SettingCollectionList_AddSetting
0x9FEEF7: push    offset sub_A26030; void (__cdecl *)()
0x9FEEFC: call    _atexit
0x9FEF01: add     esp, 4
0x9FEF04: mov     ecx, [esp+10h+var_C]
0x9FEF08: mov     large fs:0, ecx
0x9FEF0F: pop     ecx
0x9FEF10: add     esp, 0Ch
0x9FEF13: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9C6680: mov     ecx, offset flt_B16188
0x9C6685: jmp     loc_403BC0
0x9C668A: mov     edx, [esp+arg_4]
0x9C668E: lea     eax, [edx]
0x9C6690: mov     ecx, [edx-4]
0x9C6693: xor     ecx, eax
0x9C6695: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C669A: mov     eax, offset stru_AEEBB8
0x9C669F: jmp     ___CxxFrameHandler3
