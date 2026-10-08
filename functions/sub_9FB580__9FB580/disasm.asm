0x9FB580: push    0FFFFFFFFh
0x9FB582: push    offset SEH_9FB580
0x9FB587: mov     eax, large fs:0
0x9FB58D: push    eax
0x9FB58E: mov     eax, ___security_cookie
0x9FB593: xor     eax, esp
0x9FB595: push    eax
0x9FB596: lea     eax, [esp+10h+var_C]
0x9FB59A: mov     large fs:0, eax
0x9FB5A0: push    offset flt_B135C8
0x9FB5A5: mov     ecx, offset INISettingCollection
0x9FB5AA: mov     [esp+14h+var_4], 0
0x9FB5B2: call    SettingCollectionList_AddSetting
0x9FB5B7: push    offset sub_A24700; void (__cdecl *)()
0x9FB5BC: call    _atexit
0x9FB5C1: add     esp, 4
0x9FB5C4: mov     ecx, [esp+10h+var_C]
0x9FB5C8: mov     large fs:0, ecx
0x9FB5CF: pop     ecx
0x9FB5D0: add     esp, 0Ch
0x9FB5D3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9BEF10: mov     ecx, offset flt_B135C8
0x9BEF15: jmp     loc_403BC0
0x9BEF1A: mov     edx, [esp+arg_4]
0x9BEF1E: lea     eax, [edx]
0x9BEF20: mov     ecx, [edx-4]
0x9BEF23: xor     ecx, eax
0x9BEF25: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BEF2A: mov     eax, offset stru_AE8564
0x9BEF2F: jmp     ___CxxFrameHandler3
