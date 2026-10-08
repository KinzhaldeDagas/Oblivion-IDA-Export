0x9FDD00: push    0FFFFFFFFh
0x9FDD02: push    offset SEH_9FDD00
0x9FDD07: mov     eax, large fs:0
0x9FDD0D: push    eax
0x9FDD0E: mov     eax, ___security_cookie
0x9FDD13: xor     eax, esp
0x9FDD15: push    eax
0x9FDD16: lea     eax, [esp+10h+var_C]
0x9FDD1A: mov     large fs:0, eax
0x9FDD20: push    offset off_B14EB8; "\\\\vault\\TES4\\LevelData\\"
0x9FDD25: mov     ecx, offset INISettingCollection
0x9FDD2A: mov     [esp+14h+var_4], 0
0x9FDD32: call    SettingCollectionList_AddSetting
0x9FDD37: push    offset sub_A25980; void (__cdecl *)()
0x9FDD3C: call    _atexit
0x9FDD41: add     esp, 4
0x9FDD44: mov     ecx, [esp+10h+var_C]
0x9FDD48: mov     large fs:0, ecx
0x9FDD4F: pop     ecx
0x9FDD50: add     esp, 0Ch
0x9FDD53: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9C43F0: mov     ecx, offset off_B14EB8; "\\\\vault\\TES4\\LevelData\\"
0x9C43F5: jmp     loc_403BC0
0x9C43FA: mov     edx, [esp+arg_4]
0x9C43FE: lea     eax, [edx]
0x9C4400: mov     ecx, [edx-4]
0x9C4403: xor     ecx, eax
0x9C4405: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C440A: mov     eax, offset stru_AECDBC
0x9C440F: jmp     ___CxxFrameHandler3
