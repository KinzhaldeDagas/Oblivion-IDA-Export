0x9E0270: push    0FFFFFFFFh
0x9E0272: push    offset SEH_9E0270
0x9E0277: mov     eax, large fs:0
0x9E027D: push    eax
0x9E027E: mov     eax, ___security_cookie
0x9E0283: xor     eax, esp
0x9E0285: push    eax
0x9E0286: lea     eax, [esp+10h+var_C]
0x9E028A: mov     large fs:0, eax
0x9E0290: push    offset unk_B075FC
0x9E0295: mov     ecx, offset INISettingCollection
0x9E029A: mov     [esp+14h+var_4], 0
0x9E02A2: call    SettingCollectionList_AddSetting
0x9E02A7: push    offset sub_A1A790; void (__cdecl *)()
0x9E02AC: call    _atexit
0x9E02B1: add     esp, 4
0x9E02B4: mov     ecx, [esp+10h+var_C]
0x9E02B8: mov     large fs:0, ecx
0x9E02BF: pop     ecx
0x9E02C0: add     esp, 0Ch
0x9E02C3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B2440: mov     ecx, offset unk_B075FC
0x9B2445: jmp     loc_403BC0
0x9B244A: mov     edx, [esp+arg_4]
0x9B244E: lea     eax, [edx]
0x9B2450: mov     ecx, [edx-4]
0x9B2453: xor     ecx, eax
0x9B2455: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B245A: mov     eax, offset stru_ADE414
0x9B245F: jmp     ___CxxFrameHandler3
