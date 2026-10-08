0x9DFCE0: push    0FFFFFFFFh
0x9DFCE2: push    offset SEH_9DFCE0
0x9DFCE7: mov     eax, large fs:0
0x9DFCED: push    eax
0x9DFCEE: mov     eax, ___security_cookie
0x9DFCF3: xor     eax, esp
0x9DFCF5: push    eax
0x9DFCF6: lea     eax, [esp+10h+var_C]
0x9DFCFA: mov     large fs:0, eax
0x9DFD00: push    offset dword_B070B0
0x9DFD05: mov     ecx, offset INISettingCollection
0x9DFD0A: mov     [esp+14h+var_4], 0
0x9DFD12: call    SettingCollectionList_AddSetting
0x9DFD17: push    offset sub_A1A480; void (__cdecl *)()
0x9DFD1C: call    _atexit
0x9DFD21: add     esp, 4
0x9DFD24: mov     ecx, [esp+10h+var_C]
0x9DFD28: mov     large fs:0, ecx
0x9DFD2F: pop     ecx
0x9DFD30: add     esp, 0Ch
0x9DFD33: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B1F70: mov     ecx, offset dword_B070B0
0x9B1F75: jmp     loc_403BC0
0x9B1F7A: mov     edx, [esp+arg_4]
0x9B1F7E: lea     eax, [edx]
0x9B1F80: mov     ecx, [edx-4]
0x9B1F83: xor     ecx, eax
0x9B1F85: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B1F8A: mov     eax, offset stru_ADDFE0
0x9B1F8F: jmp     ___CxxFrameHandler3
