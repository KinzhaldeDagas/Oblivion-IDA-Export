0x9DD540: push    0FFFFFFFFh; [Verified] Registers bUseBlurShader in INISettingCollection and schedules its destructor with atexit. Its setting-name string is "bUseBlurShader:BlurShader".
0x9DD542: push    offset SEH_9DD540
0x9DD547: mov     eax, large fs:0
0x9DD54D: push    eax
0x9DD54E: mov     eax, ___security_cookie
0x9DD553: xor     eax, esp
0x9DD555: push    eax
0x9DD556: lea     eax, [esp+10h+var_C]
0x9DD55A: mov     large fs:0, eax
0x9DD560: push    offset bUseBlurShader
0x9DD565: mov     ecx, offset INISettingCollection
0x9DD56A: mov     [esp+14h+var_4], 0
0x9DD572: call    SettingCollectionList_AddSetting
0x9DD577: push    offset Destroy_INISetting_bUseBlurShader; void (__cdecl *)()
0x9DD57C: call    _atexit
0x9DD581: add     esp, 4
0x9DD584: mov     ecx, [esp+10h+var_C]
0x9DD588: mov     large fs:0, ecx
0x9DD58F: pop     ecx
0x9DD590: add     esp, 0Ch
0x9DD593: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B09A0: mov     ecx, offset bUseBlurShader
0x9B09A5: jmp     loc_403BC0
0x9B09AA: mov     edx, [esp+arg_4]
0x9B09AE: lea     eax, [edx]
0x9B09B0: mov     ecx, [edx-4]
0x9B09B3: xor     ecx, eax
0x9B09B5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B09BA: mov     eax, offset stru_ADCC60
0x9B09BF: jmp     ___CxxFrameHandler3
