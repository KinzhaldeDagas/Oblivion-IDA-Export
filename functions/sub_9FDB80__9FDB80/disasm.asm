0x9FDB80: push    0FFFFFFFFh
0x9FDB82: push    offset SEH_9FDB80
0x9FDB87: mov     eax, large fs:0
0x9FDB8D: push    eax
0x9FDB8E: mov     eax, ___security_cookie
0x9FDB93: xor     eax, esp
0x9FDB95: push    eax
0x9FDB96: lea     eax, [esp+10h+var_C]
0x9FDB9A: mov     large fs:0, eax
0x9FDBA0: push    offset byte_B14E98
0x9FDBA5: mov     ecx, offset INISettingCollection
0x9FDBAA: mov     [esp+14h+var_4], 0
0x9FDBB2: call    SettingCollectionList_AddSetting
0x9FDBB7: push    offset sub_A258C0; void (__cdecl *)()
0x9FDBBC: call    _atexit
0x9FDBC1: add     esp, 4
0x9FDBC4: mov     ecx, [esp+10h+var_C]
0x9FDBC8: mov     large fs:0, ecx
0x9FDBCF: pop     ecx
0x9FDBD0: add     esp, 0Ch
0x9FDBD3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9C4330: mov     ecx, offset byte_B14E98
0x9C4335: jmp     loc_403BC0
0x9C433A: mov     edx, [esp+arg_4]
0x9C433E: lea     eax, [edx]
0x9C4340: mov     ecx, [edx-4]
0x9C4343: xor     ecx, eax
0x9C4345: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C434A: mov     eax, offset stru_AECD0C
0x9C434F: jmp     ___CxxFrameHandler3
