0x9DDAE0: push    0FFFFFFFFh
0x9DDAE2: push    offset SEH_9DDAE0
0x9DDAE7: mov     eax, large fs:0
0x9DDAED: push    eax
0x9DDAEE: mov     eax, ___security_cookie
0x9DDAF3: xor     eax, esp
0x9DDAF5: push    eax
0x9DDAF6: lea     eax, [esp+10h+var_C]
0x9DDAFA: mov     large fs:0, eax
0x9DDB00: push    offset dword_B06DAC;
0x9DDB05: mov     ecx, offset INISettingCollection
0x9DDB0A: mov     [esp+14h+var_4], 0
0x9DDB12: call    SettingCollectionList_AddSetting
0x9DDB17: push    offset sub_A19320; void (__cdecl *)()
0x9DDB1C: call    _atexit
0x9DDB21: add     esp, 4
0x9DDB24: mov     ecx, [esp+10h+var_C]
0x9DDB28: mov     large fs:0, ecx
0x9DDB2F: pop     ecx
0x9DDB30: add     esp, 0Ch
0x9DDB33: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B0C70: mov     ecx, offset dword_B06DAC;
0x9B0C75: jmp     loc_403BC0
0x9B0C7A: mov     edx, [esp+arg_4]
0x9B0C7E: lea     eax, [edx]
0x9B0C80: mov     ecx, [edx-4]
0x9B0C83: xor     ecx, eax
0x9B0C85: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B0C8A: mov     eax, offset stru_ADCEF4
0x9B0C8F: jmp     ___CxxFrameHandler3
