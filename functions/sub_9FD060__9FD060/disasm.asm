0x9FD060: push    0FFFFFFFFh
0x9FD062: push    offset SEH_9FD060
0x9FD067: mov     eax, large fs:0
0x9FD06D: push    eax
0x9FD06E: mov     eax, ___security_cookie
0x9FD073: xor     eax, esp
0x9FD075: push    eax
0x9FD076: lea     eax, [esp+10h+var_C]
0x9FD07A: mov     large fs:0, eax
0x9FD080: push    offset g_fMinBloodDamage_Combat
0x9FD085: mov     ecx, offset INISettingCollection
0x9FD08A: mov     [esp+14h+var_4], 0
0x9FD092: call    SettingCollectionList_AddSetting
0x9FD097: push    offset sub_A25350; void (__cdecl *)()
0x9FD09C: call    _atexit
0x9FD0A1: add     esp, 4
0x9FD0A4: mov     ecx, [esp+10h+var_C]
0x9FD0A8: mov     large fs:0, ecx
0x9FD0AF: pop     ecx
0x9FD0B0: add     esp, 0Ch
0x9FD0B3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9C2D20: mov     ecx, offset g_fMinBloodDamage_Combat
0x9C2D25: jmp     loc_403BC0
0x9C2D2A: mov     edx, [esp+arg_4]
0x9C2D2E: lea     eax, [edx]
0x9C2D30: mov     ecx, [edx-4]
0x9C2D33: xor     ecx, eax
0x9C2D35: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C2D3A: mov     eax, offset stru_AEBA60
0x9C2D3F: jmp     ___CxxFrameHandler3
