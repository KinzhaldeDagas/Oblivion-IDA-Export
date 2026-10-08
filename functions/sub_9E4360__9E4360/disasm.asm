0x9E4360: push    0FFFFFFFFh
0x9E4362: push    offset SEH_9E4360
0x9E4367: mov     eax, large fs:0
0x9E436D: push    eax
0x9E436E: mov     eax, ___security_cookie
0x9E4373: xor     eax, esp
0x9E4375: push    eax
0x9E4376: lea     eax, [esp+10h+var_C]
0x9E437A: mov     large fs:0, eax
0x9E4380: push    offset dword_B11910
0x9E4385: mov     ecx, offset INISettingCollection
0x9E438A: mov     [esp+14h+var_4], 0
0x9E4392: call    SettingCollectionList_AddSetting
0x9E4397: push    offset sub_A1C610; void (__cdecl *)()
0x9E439C: call    _atexit
0x9E43A1: add     esp, 4
0x9E43A4: mov     ecx, [esp+10h+var_C]
0x9E43A8: mov     large fs:0, ecx
0x9E43AF: pop     ecx
0x9E43B0: add     esp, 0Ch
0x9E43B3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B94D0: mov     ecx, offset dword_B11910
0x9B94D5: jmp     loc_403BC0
0x9B94DA: mov     edx, [esp+arg_4]
0x9B94DE: lea     eax, [edx]
0x9B94E0: mov     ecx, [edx-4]
0x9B94E3: xor     ecx, eax
0x9B94E5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B94EA: mov     eax, offset stru_AE3840
0x9B94EF: jmp     ___CxxFrameHandler3
