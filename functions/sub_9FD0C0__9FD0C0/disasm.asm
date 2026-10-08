0x9FD0C0: push    0FFFFFFFFh
0x9FD0C2: push    offset SEH_9FD0C0
0x9FD0C7: mov     eax, large fs:0
0x9FD0CD: push    eax
0x9FD0CE: mov     eax, ___security_cookie
0x9FD0D3: xor     eax, esp
0x9FD0D5: push    eax
0x9FD0D6: lea     eax, [esp+10h+var_C]
0x9FD0DA: mov     large fs:0, eax
0x9FD0E0: push    offset g_iMaxHiPerfCombatCount_Combat
0x9FD0E5: mov     ecx, offset INISettingCollection
0x9FD0EA: mov     [esp+14h+var_4], 0
0x9FD0F2: call    SettingCollectionList_AddSetting
0x9FD0F7: push    offset sub_A25380; void (__cdecl *)()
0x9FD0FC: call    _atexit
0x9FD101: add     esp, 4
0x9FD104: mov     ecx, [esp+10h+var_C]
0x9FD108: mov     large fs:0, ecx
0x9FD10F: pop     ecx
0x9FD110: add     esp, 0Ch
0x9FD113: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9C2D50: mov     ecx, offset g_iMaxHiPerfCombatCount_Combat
0x9C2D55: jmp     loc_403BC0
0x9C2D5A: mov     edx, [esp+arg_4]
0x9C2D5E: lea     eax, [edx]
0x9C2D60: mov     ecx, [edx-4]
0x9C2D63: xor     ecx, eax
0x9C2D65: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C2D6A: mov     eax, offset stru_AEBA8C
0x9C2D6F: jmp     ___CxxFrameHandler3
