0x9FF040: push    0FFFFFFFFh
0x9FF042: push    offset SEH_9FF040
0x9FF047: mov     eax, large fs:0
0x9FF04D: push    eax
0x9FF04E: mov     eax, ___security_cookie
0x9FF053: xor     eax, esp
0x9FF055: push    eax
0x9FF056: lea     eax, [esp+10h+var_C]
0x9FF05A: mov     large fs:0, eax
0x9FF060: push    offset flt_B161A8
0x9FF065: mov     ecx, offset INISettingCollection
0x9FF06A: mov     [esp+14h+var_4], 0
0x9FF072: call    SettingCollectionList_AddSetting
0x9FF077: push    offset sub_A260F0; void (__cdecl *)()
0x9FF07C: call    _atexit
0x9FF081: add     esp, 4
0x9FF084: mov     ecx, [esp+10h+var_C]
0x9FF088: mov     large fs:0, ecx
0x9FF08F: pop     ecx
0x9FF090: add     esp, 0Ch
0x9FF093: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9C6740: mov     ecx, offset flt_B161A8
0x9C6745: jmp     loc_403BC0
0x9C674A: mov     edx, [esp+arg_4]
0x9C674E: lea     eax, [edx]
0x9C6750: mov     ecx, [edx-4]
0x9C6753: xor     ecx, eax
0x9C6755: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C675A: mov     eax, offset stru_AEEC68
0x9C675F: jmp     ___CxxFrameHandler3
