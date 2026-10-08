0x9DA950: push    0FFFFFFFFh
0x9DA952: push    offset SEH_9DA950
0x9DA957: mov     eax, large fs:0
0x9DA95D: push    eax
0x9DA95E: mov     eax, ___security_cookie
0x9DA963: xor     eax, esp
0x9DA965: push    eax
0x9DA966: lea     eax, [esp+10h+var_C]
0x9DA96A: mov     large fs:0, eax
0x9DA970: push    offset bUseArchives_Archive
0x9DA975: mov     ecx, offset INISettingCollection
0x9DA97A: mov     [esp+14h+var_4], 0
0x9DA982: call    SettingCollectionList_AddSetting
0x9DA987: push    offset sub_A179E0; void (__cdecl *)()
0x9DA98C: call    _atexit
0x9DA991: add     esp, 4
0x9DA994: mov     ecx, [esp+10h+var_C]
0x9DA998: mov     large fs:0, ecx
0x9DA99F: pop     ecx
0x9DA9A0: add     esp, 0Ch
0x9DA9A3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9ABC60: mov     ecx, offset bUseArchives_Archive
0x9ABC65: jmp     loc_403BC0
0x9ABC6A: mov     edx, [esp+arg_4]
0x9ABC6E: lea     eax, [edx]
0x9ABC70: mov     ecx, [edx-4]
0x9ABC73: xor     ecx, eax
0x9ABC75: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9ABC7A: mov     eax, offset stru_AD89D8
0x9ABC7F: jmp     ___CxxFrameHandler3
