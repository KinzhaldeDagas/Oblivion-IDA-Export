0x9E32E0: push    0FFFFFFFFh
0x9E32E2: push    offset SEH_9E32E0
0x9E32E7: mov     eax, large fs:0
0x9E32ED: push    eax
0x9E32EE: mov     eax, ___security_cookie
0x9E32F3: xor     eax, esp
0x9E32F5: push    eax
0x9E32F6: lea     eax, [esp+10h+var_C]
0x9E32FA: mov     large fs:0, eax
0x9E3300: push    offset preventHavokAddAll
0x9E3305: mov     ecx, offset INISettingCollection
0x9E330A: mov     [esp+14h+var_4], 0
0x9E3312: call    SettingCollectionList_AddSetting
0x9E3317: push    offset sub_A1BC60; void (__cdecl *)()
0x9E331C: call    _atexit
0x9E3321: add     esp, 4
0x9E3324: mov     ecx, [esp+10h+var_C]
0x9E3328: mov     large fs:0, ecx
0x9E332F: pop     ecx
0x9E3330: add     esp, 0Ch
0x9E3333: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B5D00: mov     ecx, offset preventHavokAddAll
0x9B5D05: jmp     loc_403BC0
0x9B5D0A: mov     edx, [esp+arg_4]
0x9B5D0E: lea     eax, [edx]
0x9B5D10: mov     ecx, [edx-4]
0x9B5D13: xor     ecx, eax
0x9B5D15: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B5D1A: mov     eax, offset stru_AE0CB8
0x9B5D1F: jmp     ___CxxFrameHandler3
