0x9DC8C0: push    0FFFFFFFFh
0x9DC8C2: push    offset SEH_9DC8C0
0x9DC8C7: mov     eax, large fs:0
0x9DC8CD: push    eax
0x9DC8CE: mov     eax, ___security_cookie
0x9DC8D3: xor     eax, esp
0x9DC8D5: push    eax
0x9DC8D6: lea     eax, [esp+10h+var_C]
0x9DC8DA: mov     large fs:0, eax
0x9DC8E0: push    offset bSkipInitializationFlows_MESSAGES
0x9DC8E5: mov     ecx, offset INISettingCollection
0x9DC8EA: mov     [esp+14h+var_4], 0
0x9DC8F2: call    SettingCollectionList_AddSetting
0x9DC8F7: push    offset sub_A18A20; void (__cdecl *)()
0x9DC8FC: call    _atexit
0x9DC901: add     esp, 4
0x9DC904: mov     ecx, [esp+10h+var_C]
0x9DC908: mov     large fs:0, ecx
0x9DC90F: pop     ecx
0x9DC910: add     esp, 0Ch
0x9DC913: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B0120: mov     ecx, offset bSkipInitializationFlows_MESSAGES
0x9B0125: jmp     loc_403BC0
0x9B012A: mov     edx, [esp+arg_4]
0x9B012E: lea     eax, [edx]
0x9B0130: mov     ecx, [edx-4]
0x9B0133: xor     ecx, eax
0x9B0135: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B013A: mov     eax, offset stru_ADC510
0x9B013F: jmp     ___CxxFrameHandler3
