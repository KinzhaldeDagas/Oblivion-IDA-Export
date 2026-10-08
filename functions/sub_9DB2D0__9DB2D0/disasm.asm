0x9DB2D0: push    0FFFFFFFFh
0x9DB2D2: push    offset SEH_9DB2D0
0x9DB2D7: mov     eax, large fs:0
0x9DB2DD: push    eax
0x9DB2DE: mov     eax, ___security_cookie
0x9DB2E3: xor     eax, esp
0x9DB2E5: push    eax
0x9DB2E6: lea     eax, [esp+10h+var_C]
0x9DB2EA: mov     large fs:0, eax
0x9DB2F0: push    offset iMaxPickHavok
0x9DB2F5: mov     ecx, offset INISettingCollection
0x9DB2FA: mov     [esp+14h+var_4], 0
0x9DB302: call    SettingCollectionList_AddSetting
0x9DB307: push    offset sub_A17ED0; void (__cdecl *)()
0x9DB30C: call    _atexit
0x9DB311: add     esp, 4
0x9DB314: mov     ecx, [esp+10h+var_C]
0x9DB318: mov     large fs:0, ecx
0x9DB31F: pop     ecx
0x9DB320: add     esp, 0Ch
0x9DB323: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9AD480: mov     ecx, offset iMaxPickHavok
0x9AD485: jmp     loc_403BC0
0x9AD48A: mov     edx, [esp+arg_4]
0x9AD48E: lea     eax, [edx]
0x9AD490: mov     ecx, [edx-4]
0x9AD493: xor     ecx, eax
0x9AD495: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AD49A: mov     eax, offset stru_ADA014
0x9AD49F: jmp     ___CxxFrameHandler3
