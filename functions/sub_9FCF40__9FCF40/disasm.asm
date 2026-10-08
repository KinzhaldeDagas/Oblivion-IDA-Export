0x9FCF40: push    0FFFFFFFFh
0x9FCF42: push    offset SEH_9FCF40
0x9FCF47: mov     eax, large fs:0
0x9FCF4D: push    eax
0x9FCF4E: mov     eax, ___security_cookie
0x9FCF53: xor     eax, esp
0x9FCF55: push    eax
0x9FCF56: lea     eax, [esp+10h+var_C]
0x9FCF5A: mov     large fs:0, eax
0x9FCF60: push    offset trackAllDeath
0x9FCF65: mov     ecx, offset INISettingCollection
0x9FCF6A: mov     [esp+14h+var_4], 0
0x9FCF72: call    SettingCollectionList_AddSetting
0x9FCF77: push    offset sub_A252C0; void (__cdecl *)()
0x9FCF7C: call    _atexit
0x9FCF81: add     esp, 4
0x9FCF84: mov     ecx, [esp+10h+var_C]
0x9FCF88: mov     large fs:0, ecx
0x9FCF8F: pop     ecx
0x9FCF90: add     esp, 0Ch
0x9FCF93: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9C2C90: mov     ecx, offset trackAllDeath
0x9C2C95: jmp     loc_403BC0
0x9C2C9A: mov     edx, [esp+arg_4]
0x9C2C9E: lea     eax, [edx]
0x9C2CA0: mov     ecx, [edx-4]
0x9C2CA3: xor     ecx, eax
0x9C2CA5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C2CAA: mov     eax, offset stru_AEB9DC
0x9C2CAF: jmp     ___CxxFrameHandler3
