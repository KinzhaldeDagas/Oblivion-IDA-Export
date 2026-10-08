0x9DDCC0: push    0FFFFFFFFh
0x9DDCC2: push    offset SEH_9DDCC0
0x9DDCC7: mov     eax, large fs:0
0x9DDCCD: push    eax
0x9DDCCE: mov     eax, ___security_cookie
0x9DDCD3: xor     eax, esp
0x9DDCD5: push    eax
0x9DDCD6: lea     eax, [esp+10h+var_C]
0x9DDCDA: mov     large fs:0, eax
0x9DDCE0: push    offset unk_B06DD4
0x9DDCE5: mov     ecx, offset INISettingCollection
0x9DDCEA: mov     [esp+14h+var_4], 0
0x9DDCF2: call    SettingCollectionList_AddSetting
0x9DDCF7: push    offset sub_A19410; void (__cdecl *)()
0x9DDCFC: call    _atexit
0x9DDD01: add     esp, 4
0x9DDD04: mov     ecx, [esp+10h+var_C]
0x9DDD08: mov     large fs:0, ecx
0x9DDD0F: pop     ecx
0x9DDD10: add     esp, 0Ch
0x9DDD13: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B0D60: mov     ecx, offset unk_B06DD4
0x9B0D65: jmp     loc_403BC0
0x9B0D6A: mov     edx, [esp+arg_4]
0x9B0D6E: lea     eax, [edx]
0x9B0D70: mov     ecx, [edx-4]
0x9B0D73: xor     ecx, eax
0x9B0D75: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B0D7A: mov     eax, offset stru_ADCFD0
0x9B0D7F: jmp     ___CxxFrameHandler3
