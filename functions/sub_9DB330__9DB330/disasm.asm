0x9DB330: push    0FFFFFFFFh
0x9DB332: push    offset SEH_9DB330
0x9DB337: mov     eax, large fs:0
0x9DB33D: push    eax
0x9DB33E: mov     eax, ___security_cookie
0x9DB343: xor     eax, esp
0x9DB345: push    eax
0x9DB346: lea     eax, [esp+10h+var_C]
0x9DB34A: mov     large fs:0, eax
0x9DB350: push    offset iIdentityBatchRemove
0x9DB355: mov     ecx, offset INISettingCollection
0x9DB35A: mov     [esp+14h+var_4], 0
0x9DB362: call    SettingCollectionList_AddSetting
0x9DB367: push    offset sub_A17F00; void (__cdecl *)()
0x9DB36C: call    _atexit
0x9DB371: add     esp, 4
0x9DB374: mov     ecx, [esp+10h+var_C]
0x9DB378: mov     large fs:0, ecx
0x9DB37F: pop     ecx
0x9DB380: add     esp, 0Ch
0x9DB383: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9AD4B0: mov     ecx, offset iIdentityBatchRemove
0x9AD4B5: jmp     loc_403BC0
0x9AD4BA: mov     edx, [esp+arg_4]
0x9AD4BE: lea     eax, [edx]
0x9AD4C0: mov     ecx, [edx-4]
0x9AD4C3: xor     ecx, eax
0x9AD4C5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AD4CA: mov     eax, offset stru_ADA040
0x9AD4CF: jmp     ___CxxFrameHandler3
