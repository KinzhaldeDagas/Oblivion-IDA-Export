0x9FF220: push    0FFFFFFFFh
0x9FF222: push    offset SEH_9FF220
0x9FF227: mov     eax, large fs:0
0x9FF22D: push    eax
0x9FF22E: mov     eax, ___security_cookie
0x9FF233: xor     eax, esp
0x9FF235: push    eax
0x9FF236: lea     eax, [esp+10h+var_C]
0x9FF23A: mov     large fs:0, eax
0x9FF240: push    offset flt_B161D0
0x9FF245: mov     ecx, offset INISettingCollection
0x9FF24A: mov     [esp+14h+var_4], 0
0x9FF252: call    SettingCollectionList_AddSetting
0x9FF257: push    offset sub_A261E0; void (__cdecl *)()
0x9FF25C: call    _atexit
0x9FF261: add     esp, 4
0x9FF264: mov     ecx, [esp+10h+var_C]
0x9FF268: mov     large fs:0, ecx
0x9FF26F: pop     ecx
0x9FF270: add     esp, 0Ch
0x9FF273: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9C6830: mov     ecx, offset flt_B161D0
0x9C6835: jmp     loc_403BC0
0x9C683A: mov     edx, [esp+arg_4]
0x9C683E: lea     eax, [edx]
0x9C6840: mov     ecx, [edx-4]
0x9C6843: xor     ecx, eax
0x9C6845: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C684A: mov     eax, offset stru_AEED44
0x9C684F: jmp     ___CxxFrameHandler3
