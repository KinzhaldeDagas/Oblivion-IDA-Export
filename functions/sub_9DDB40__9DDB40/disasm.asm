0x9DDB40: push    0FFFFFFFFh; [Verified] Registers bForce1XShaders in INISettingCollection and schedules its destructor with atexit. Its setting-name pointer resolves to "bForce1XShaders:Display".
0x9DDB42: push    offset SEH_9DDB40
0x9DDB47: mov     eax, large fs:0
0x9DDB4D: push    eax
0x9DDB4E: mov     eax, ___security_cookie
0x9DDB53: xor     eax, esp
0x9DDB55: push    eax
0x9DDB56: lea     eax, [esp+10h+var_C]
0x9DDB5A: mov     large fs:0, eax
0x9DDB60: push    offset bForce1XShaders
0x9DDB65: mov     ecx, offset INISettingCollection
0x9DDB6A: mov     [esp+14h+var_4], 0
0x9DDB72: call    SettingCollectionList_AddSetting
0x9DDB77: push    offset Destroy_INISetting_bForce1XShaders; void (__cdecl *)()
0x9DDB7C: call    _atexit
0x9DDB81: add     esp, 4
0x9DDB84: mov     ecx, [esp+10h+var_C]
0x9DDB88: mov     large fs:0, ecx
0x9DDB8F: pop     ecx
0x9DDB90: add     esp, 0Ch
0x9DDB93: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B0CA0: mov     ecx, offset bForce1XShaders
0x9B0CA5: jmp     loc_403BC0
0x9B0CAA: mov     edx, [esp+arg_4]
0x9B0CAE: lea     eax, [edx]
0x9B0CB0: mov     ecx, [edx-4]
0x9B0CB3: xor     ecx, eax
0x9B0CB5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B0CBA: mov     eax, offset stru_ADCF20
0x9B0CBF: jmp     ___CxxFrameHandler3
