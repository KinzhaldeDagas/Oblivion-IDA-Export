0x9D8140: push    0FFFFFFFFh
0x9D8142: push    offset SEH_9D8140
0x9D8147: mov     eax, large fs:0
0x9D814D: push    eax
0x9D814E: mov     eax, ___security_cookie
0x9D8153: xor     eax, esp
0x9D8155: push    eax
0x9D8156: lea     eax, [esp+10h+var_C]
0x9D815A: mov     large fs:0, eax
0x9D8160: push    offset dword_B02C44
0x9D8165: mov     ecx, offset INISettingCollection
0x9D816A: mov     [esp+14h+var_4], 0
0x9D8172: call    SettingCollectionList_AddSetting
0x9D8177: push    offset sub_A164C0; void (__cdecl *)()
0x9D817C: call    _atexit
0x9D8181: add     esp, 4
0x9D8184: mov     ecx, [esp+10h+var_C]
0x9D8188: mov     large fs:0, ecx
0x9D818F: pop     ecx
0x9D8190: add     esp, 0Ch
0x9D8193: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9A9E80: mov     ecx, offset dword_B02C44
0x9A9E85: jmp     loc_403BC0
0x9A9E8A: mov     edx, [esp+arg_4]
0x9A9E8E: lea     eax, [edx]
0x9A9E90: mov     ecx, [edx-4]
0x9A9E93: xor     ecx, eax
0x9A9E95: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9A9E9A: mov     eax, offset stru_AD6F20
0x9A9E9F: jmp     ___CxxFrameHandler3
