0x9DC370: push    0FFFFFFFFh
0x9DC372: push    offset SEH_9DC370
0x9DC377: mov     eax, large fs:0
0x9DC37D: push    eax
0x9DC37E: mov     eax, ___security_cookie
0x9DC383: xor     eax, esp
0x9DC385: push    eax
0x9DC386: lea     eax, [esp+10h+var_C]
0x9DC38A: mov     large fs:0, eax
0x9DC390: push    offset aHsz?fG
0x9DC395: mov     ecx, offset INISettingCollection
0x9DC39A: mov     [esp+14h+var_4], 0
0x9DC3A2: call    SettingCollectionList_AddSetting
0x9DC3A7: push    offset sub_A186E0; void (__cdecl *)()
0x9DC3AC: call    _atexit
0x9DC3B1: add     esp, 4
0x9DC3B4: mov     ecx, [esp+10h+var_C]
0x9DC3B8: mov     large fs:0, ecx
0x9DC3BF: pop     ecx
0x9DC3C0: add     esp, 0Ch
0x9DC3C3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9AF660: mov     ecx, offset aHsz?fG
0x9AF665: jmp     loc_403BC0
0x9AF66A: mov     edx, [esp+arg_4]
0x9AF66E: lea     eax, [edx]
0x9AF670: mov     ecx, [edx-4]
0x9AF673: xor     ecx, eax
0x9AF675: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AF67A: mov     eax, offset stru_ADBBF8
0x9AF67F: jmp     ___CxxFrameHandler3
