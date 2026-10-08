0x9D9CA0: push    0FFFFFFFFh
0x9D9CA2: push    offset SEH_9D9CA0
0x9D9CA7: mov     eax, large fs:0
0x9D9CAD: push    eax
0x9D9CAE: mov     eax, ___security_cookie
0x9D9CB3: xor     eax, esp
0x9D9CB5: push    eax
0x9D9CB6: lea     eax, [esp+10h+var_C]
0x9D9CBA: mov     large fs:0, eax
0x9D9CC0: push    offset dword_B0316C
0x9D9CC5: mov     ecx, offset INISettingCollection
0x9D9CCA: mov     [esp+14h+var_4], 0
0x9D9CD2: call    SettingCollectionList_AddSetting
0x9D9CD7: push    offset sub_A173F0; void (__cdecl *)()
0x9D9CDC: call    _atexit
0x9D9CE1: add     esp, 4
0x9D9CE4: mov     ecx, [esp+10h+var_C]
0x9D9CE8: mov     large fs:0, ecx
0x9D9CEF: pop     ecx
0x9D9CF0: add     esp, 0Ch
0x9D9CF3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9AAFC0: mov     ecx, offset dword_B0316C
0x9AAFC5: jmp     loc_403BC0
0x9AAFCA: mov     edx, [esp+arg_4]
0x9AAFCE: lea     eax, [edx]
0x9AAFD0: mov     ecx, [edx-4]
0x9AAFD3: xor     ecx, eax
0x9AAFD5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AAFDA: mov     eax, offset stru_AD7E8C
0x9AAFDF: jmp     ___CxxFrameHandler3
