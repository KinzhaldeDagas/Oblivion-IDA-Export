0x9E4300: push    0FFFFFFFFh
0x9E4302: push    offset SEH_9E4300
0x9E4307: mov     eax, large fs:0
0x9E430D: push    eax
0x9E430E: mov     eax, ___security_cookie
0x9E4313: xor     eax, esp
0x9E4315: push    eax
0x9E4316: lea     eax, [esp+10h+var_C]
0x9E431A: mov     large fs:0, eax
0x9E4320: push    offset useFuzzyPicking
0x9E4325: mov     ecx, offset INISettingCollection
0x9E432A: mov     [esp+14h+var_4], 0
0x9E4332: call    SettingCollectionList_AddSetting
0x9E4337: push    offset sub_A1C5E0; void (__cdecl *)()
0x9E433C: call    _atexit
0x9E4341: add     esp, 4
0x9E4344: mov     ecx, [esp+10h+var_C]
0x9E4348: mov     large fs:0, ecx
0x9E434F: pop     ecx
0x9E4350: add     esp, 0Ch
0x9E4353: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B94A0: mov     ecx, offset useFuzzyPicking
0x9B94A5: jmp     loc_403BC0
0x9B94AA: mov     edx, [esp+arg_4]
0x9B94AE: lea     eax, [edx]
0x9B94B0: mov     ecx, [edx-4]
0x9B94B3: xor     ecx, eax
0x9B94B5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B94BA: mov     eax, offset stru_AE3814
0x9B94BF: jmp     ___CxxFrameHandler3
