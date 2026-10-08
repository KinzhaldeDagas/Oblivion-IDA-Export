0x9DFC80: push    0FFFFFFFFh
0x9DFC82: push    offset SEH_9DFC80
0x9DFC87: mov     eax, large fs:0
0x9DFC8D: push    eax
0x9DFC8E: mov     eax, ___security_cookie
0x9DFC93: xor     eax, esp
0x9DFC95: push    eax
0x9DFC96: lea     eax, [esp+10h+var_C]
0x9DFC9A: mov     large fs:0, eax
0x9DFCA0: push    offset unk_B070A8
0x9DFCA5: mov     ecx, offset INISettingCollection
0x9DFCAA: mov     [esp+14h+var_4], 0
0x9DFCB2: call    SettingCollectionList_AddSetting
0x9DFCB7: push    offset sub_A1A450; void (__cdecl *)()
0x9DFCBC: call    _atexit
0x9DFCC1: add     esp, 4
0x9DFCC4: mov     ecx, [esp+10h+var_C]
0x9DFCC8: mov     large fs:0, ecx
0x9DFCCF: pop     ecx
0x9DFCD0: add     esp, 0Ch
0x9DFCD3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B1F40: mov     ecx, offset unk_B070A8
0x9B1F45: jmp     loc_403BC0
0x9B1F4A: mov     edx, [esp+arg_4]
0x9B1F4E: lea     eax, [edx]
0x9B1F50: mov     ecx, [edx-4]
0x9B1F53: xor     ecx, eax
0x9B1F55: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B1F5A: mov     eax, offset stru_ADDFB4
0x9B1F5F: jmp     ___CxxFrameHandler3
