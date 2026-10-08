0x9D9A40: push    0FFFFFFFFh
0x9D9A42: push    offset SEH_9D9A40
0x9D9A47: mov     eax, large fs:0
0x9D9A4D: push    eax
0x9D9A4E: mov     eax, ___security_cookie
0x9D9A53: xor     eax, esp
0x9D9A55: push    eax
0x9D9A56: lea     eax, [esp+10h+var_C]
0x9D9A5A: mov     large fs:0, eax
0x9D9A60: push    offset g_DefaulFOV
0x9D9A65: mov     ecx, offset INISettingCollection
0x9D9A6A: mov     [esp+14h+var_4], 0
0x9D9A72: call    SettingCollectionList_AddSetting
0x9D9A77: push    offset sub_A172D0; void (__cdecl *)()
0x9D9A7C: call    _atexit
0x9D9A81: add     esp, 4
0x9D9A84: mov     ecx, [esp+10h+var_C]
0x9D9A88: mov     large fs:0, ecx
0x9D9A8F: pop     ecx
0x9D9A90: add     esp, 0Ch
0x9D9A93: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9AAE20: mov     ecx, offset g_DefaulFOV
0x9AAE25: jmp     loc_403BC0
0x9AAE2A: mov     edx, [esp+arg_4]
0x9AAE2E: lea     eax, [edx]
0x9AAE30: mov     ecx, [edx-4]
0x9AAE33: xor     ecx, eax
0x9AAE35: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AAE3A: mov     eax, offset stru_AD7D24
0x9AAE3F: jmp     ___CxxFrameHandler3
