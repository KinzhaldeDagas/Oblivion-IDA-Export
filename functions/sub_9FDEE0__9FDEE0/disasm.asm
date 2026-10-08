0x9FDEE0: push    0FFFFFFFFh
0x9FDEE2: push    offset SEH_9FDEE0
0x9FDEE7: mov     eax, large fs:0
0x9FDEED: push    eax
0x9FDEEE: mov     eax, ___security_cookie
0x9FDEF3: xor     eax, esp
0x9FDEF5: push    eax
0x9FDEF6: lea     eax, [esp+10h+var_C]
0x9FDEFA: mov     large fs:0, eax
0x9FDF00: push    offset iJoystickLookLeftRight
0x9FDF05: mov     ecx, offset INISettingCollection
0x9FDF0A: mov     [esp+14h+var_4], 0
0x9FDF12: call    SettingCollectionList_AddSetting
0x9FDF17: push    offset sub_A25A70; void (__cdecl *)()
0x9FDF1C: call    _atexit
0x9FDF21: add     esp, 4
0x9FDF24: mov     ecx, [esp+10h+var_C]
0x9FDF28: mov     large fs:0, ecx
0x9FDF2F: pop     ecx
0x9FDF30: add     esp, 0Ch
0x9FDF33: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9C44E0: mov     ecx, offset iJoystickLookLeftRight
0x9C44E5: jmp     loc_403BC0
0x9C44EA: mov     edx, [esp+arg_4]
0x9C44EE: lea     eax, [edx]
0x9C44F0: mov     ecx, [edx-4]
0x9C44F3: xor     ecx, eax
0x9C44F5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C44FA: mov     eax, offset stru_AECE98
0x9C44FF: jmp     ___CxxFrameHandler3
