0x9FCC40: push    0FFFFFFFFh
0x9FCC42: push    offset SEH_9FCC40
0x9FCC47: mov     eax, large fs:0
0x9FCC4D: push    eax
0x9FCC4E: mov     eax, ___security_cookie
0x9FCC53: xor     eax, esp
0x9FCC55: push    eax
0x9FCC56: lea     eax, [esp+10h+var_C]
0x9FCC5A: mov     large fs:0, eax
0x9FCC60: push    offset dword_B1486C
0x9FCC65: mov     ecx, offset INISettingCollection
0x9FCC6A: mov     [esp+14h+var_4], 0
0x9FCC72: call    SettingCollectionList_AddSetting
0x9FCC77: push    offset sub_A25140; void (__cdecl *)()
0x9FCC7C: call    _atexit
0x9FCC81: add     esp, 4
0x9FCC84: mov     ecx, [esp+10h+var_C]
0x9FCC88: mov     large fs:0, ecx
0x9FCC8F: pop     ecx
0x9FCC90: add     esp, 0Ch
0x9FCC93: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9C2440: mov     ecx, offset dword_B1486C
0x9C2445: jmp     loc_403BC0
0x9C244A: mov     edx, [esp+arg_4]
0x9C244E: lea     eax, [edx]
0x9C2450: mov     ecx, [edx-4]
0x9C2453: xor     ecx, eax
0x9C2455: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C245A: mov     eax, offset stru_AEB32C
0x9C245F: jmp     ___CxxFrameHandler3
