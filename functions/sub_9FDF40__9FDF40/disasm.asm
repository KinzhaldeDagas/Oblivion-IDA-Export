0x9FDF40: push    0FFFFFFFFh
0x9FDF42: push    offset SEH_9FDF40
0x9FDF47: mov     eax, large fs:0
0x9FDF4D: push    eax
0x9FDF4E: mov     eax, ___security_cookie
0x9FDF53: xor     eax, esp
0x9FDF55: push    eax
0x9FDF56: lea     eax, [esp+10h+var_C]
0x9FDF5A: mov     large fs:0, eax
0x9FDF60: push    offset flt_B14EE8
0x9FDF65: mov     ecx, offset INISettingCollection
0x9FDF6A: mov     [esp+14h+var_4], 0
0x9FDF72: call    SettingCollectionList_AddSetting
0x9FDF77: push    offset sub_A25AA0; void (__cdecl *)()
0x9FDF7C: call    _atexit
0x9FDF81: add     esp, 4
0x9FDF84: mov     ecx, [esp+10h+var_C]
0x9FDF88: mov     large fs:0, ecx
0x9FDF8F: pop     ecx
0x9FDF90: add     esp, 0Ch
0x9FDF93: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9C4510: mov     ecx, offset flt_B14EE8
0x9C4515: jmp     loc_403BC0
0x9C451A: mov     edx, [esp+arg_4]
0x9C451E: lea     eax, [edx]
0x9C4520: mov     ecx, [edx-4]
0x9C4523: xor     ecx, eax
0x9C4525: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C452A: mov     eax, offset stru_AECEC4
0x9C452F: jmp     ___CxxFrameHandler3
