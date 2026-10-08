0x9FCA60: push    0FFFFFFFFh
0x9FCA62: push    offset SEH_9FCA60
0x9FCA67: mov     eax, large fs:0
0x9FCA6D: push    eax
0x9FCA6E: mov     eax, ___security_cookie
0x9FCA73: xor     eax, esp
0x9FCA75: push    eax
0x9FCA76: lea     eax, [esp+10h+var_C]
0x9FCA7A: mov     large fs:0, eax
0x9FCA80: push    offset dword_B14844
0x9FCA85: mov     ecx, offset INISettingCollection
0x9FCA8A: mov     [esp+14h+var_4], 0
0x9FCA92: call    SettingCollectionList_AddSetting
0x9FCA97: push    offset sub_A25050; void (__cdecl *)()
0x9FCA9C: call    _atexit
0x9FCAA1: add     esp, 4
0x9FCAA4: mov     ecx, [esp+10h+var_C]
0x9FCAA8: mov     large fs:0, ecx
0x9FCAAF: pop     ecx
0x9FCAB0: add     esp, 0Ch
0x9FCAB3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9C2350: mov     ecx, offset dword_B14844
0x9C2355: jmp     loc_403BC0
0x9C235A: mov     edx, [esp+arg_4]
0x9C235E: lea     eax, [edx]
0x9C2360: mov     ecx, [edx-4]
0x9C2363: xor     ecx, eax
0x9C2365: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C236A: mov     eax, offset stru_AEB250
0x9C236F: jmp     ___CxxFrameHandler3
