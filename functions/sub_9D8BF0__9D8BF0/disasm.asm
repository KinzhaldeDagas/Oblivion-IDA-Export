0x9D8BF0: push    0FFFFFFFFh
0x9D8BF2: push    offset SEH_9D8BF0
0x9D8BF7: mov     eax, large fs:0
0x9D8BFD: push    eax
0x9D8BFE: mov     eax, ___security_cookie
0x9D8C03: xor     eax, esp
0x9D8C05: push    eax
0x9D8C06: lea     eax, [esp+10h+var_C]
0x9D8C0A: mov     large fs:0, eax
0x9D8C10: push    offset dword_B02D58
0x9D8C15: mov     ecx, offset INISettingCollection
0x9D8C1A: mov     [esp+14h+var_4], 0
0x9D8C22: call    SettingCollectionList_AddSetting
0x9D8C27: push    offset sub_A16BB0; void (__cdecl *)()
0x9D8C2C: call    _atexit
0x9D8C31: add     esp, 4
0x9D8C34: mov     ecx, [esp+10h+var_C]
0x9D8C38: mov     large fs:0, ecx
0x9D8C3F: pop     ecx
0x9D8C40: add     esp, 0Ch
0x9D8C43: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9AA630: mov     ecx, offset dword_B02D58
0x9AA635: jmp     loc_403BC0
0x9AA63A: mov     edx, [esp+arg_4]
0x9AA63E: lea     eax, [edx]
0x9AA640: mov     ecx, [edx-4]
0x9AA643: xor     ecx, eax
0x9AA645: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AA64A: mov     eax, offset stru_AD75F0
0x9AA64F: jmp     ___CxxFrameHandler3
