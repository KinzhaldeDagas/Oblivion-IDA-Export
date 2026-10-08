0x9DD600: push    0FFFFFFFFh
0x9DD602: push    offset SEH_9DD600
0x9DD607: mov     eax, large fs:0
0x9DD60D: push    eax
0x9DD60E: mov     eax, ___security_cookie
0x9DD613: xor     eax, esp
0x9DD615: push    eax
0x9DD616: lea     eax, [esp+10h+var_C]
0x9DD61A: mov     large fs:0, eax
0x9DD620: push    offset dword_B06D44
0x9DD625: mov     ecx, offset INISettingCollection
0x9DD62A: mov     [esp+14h+var_4], 0
0x9DD632: call    SettingCollectionList_AddSetting
0x9DD637: push    offset sub_A190B0; void (__cdecl *)()
0x9DD63C: call    _atexit
0x9DD641: add     esp, 4
0x9DD644: mov     ecx, [esp+10h+var_C]
0x9DD648: mov     large fs:0, ecx
0x9DD64F: pop     ecx
0x9DD650: add     esp, 0Ch
0x9DD653: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B0A00: mov     ecx, offset dword_B06D44
0x9B0A05: jmp     loc_403BC0
0x9B0A0A: mov     edx, [esp+arg_4]
0x9B0A0E: lea     eax, [edx]
0x9B0A10: mov     ecx, [edx-4]
0x9B0A13: xor     ecx, eax
0x9B0A15: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B0A1A: mov     eax, offset stru_ADCCB8
0x9B0A1F: jmp     ___CxxFrameHandler3
