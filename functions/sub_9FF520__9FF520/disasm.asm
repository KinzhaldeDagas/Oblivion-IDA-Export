0x9FF520: push    0FFFFFFFFh
0x9FF522: push    offset SEH_9FF520
0x9FF527: mov     eax, large fs:0
0x9FF52D: push    eax
0x9FF52E: mov     eax, ___security_cookie
0x9FF533: xor     eax, esp
0x9FF535: push    eax
0x9FF536: lea     eax, [esp+10h+var_C]
0x9FF53A: mov     large fs:0, eax
0x9FF540: push    offset dword_B1626C
0x9FF545: mov     ecx, offset INISettingCollection
0x9FF54A: mov     [esp+14h+var_4], 0
0x9FF552: call    SettingCollectionList_AddSetting
0x9FF557: push    offset sub_A26370; void (__cdecl *)()
0x9FF55C: call    _atexit
0x9FF561: add     esp, 4
0x9FF564: mov     ecx, [esp+10h+var_C]
0x9FF568: mov     large fs:0, ecx
0x9FF56F: pop     ecx
0x9FF570: add     esp, 0Ch
0x9FF573: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9C6A10: mov     ecx, offset dword_B1626C
0x9C6A15: jmp     loc_403BC0
0x9C6A1A: mov     edx, [esp+arg_4]
0x9C6A1E: lea     eax, [edx]
0x9C6A20: mov     ecx, [edx-4]
0x9C6A23: xor     ecx, eax
0x9C6A25: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C6A2A: mov     eax, offset stru_AEEEFC
0x9C6A2F: jmp     ___CxxFrameHandler3
