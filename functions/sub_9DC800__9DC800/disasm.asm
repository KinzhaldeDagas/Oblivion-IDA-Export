0x9DC800: push    0FFFFFFFFh
0x9DC802: push    offset SEH_9DC800
0x9DC807: mov     eax, large fs:0
0x9DC80D: push    eax
0x9DC80E: mov     eax, ___security_cookie
0x9DC813: xor     eax, esp
0x9DC815: push    eax
0x9DC816: lea     eax, [esp+10h+var_C]
0x9DC81A: mov     large fs:0, eax
0x9DC820: push    offset bAllowYesToAll_MESSAGES
0x9DC825: mov     ecx, offset INISettingCollection
0x9DC82A: mov     [esp+14h+var_4], 0
0x9DC832: call    SettingCollectionList_AddSetting
0x9DC837: push    offset sub_A189C0; void (__cdecl *)()
0x9DC83C: call    _atexit
0x9DC841: add     esp, 4
0x9DC844: mov     ecx, [esp+10h+var_C]
0x9DC848: mov     large fs:0, ecx
0x9DC84F: pop     ecx
0x9DC850: add     esp, 0Ch
0x9DC853: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B00C0: mov     ecx, offset bAllowYesToAll_MESSAGES
0x9B00C5: jmp     loc_403BC0
0x9B00CA: mov     edx, [esp+arg_4]
0x9B00CE: lea     eax, [edx]
0x9B00D0: mov     ecx, [edx-4]
0x9B00D3: xor     ecx, eax
0x9B00D5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B00DA: mov     eax, offset stru_ADC4B8
0x9B00DF: jmp     ___CxxFrameHandler3
