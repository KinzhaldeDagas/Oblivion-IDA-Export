0x9E3280: push    0FFFFFFFFh
0x9E3282: push    offset SEH_9E3280
0x9E3287: mov     eax, large fs:0
0x9E328D: push    eax
0x9E328E: mov     eax, ___security_cookie
0x9E3293: xor     eax, esp
0x9E3295: push    eax
0x9E3296: lea     eax, [esp+10h+var_C]
0x9E329A: mov     large fs:0, eax
0x9E32A0: push    offset preventHavokAddClutter
0x9E32A5: mov     ecx, offset INISettingCollection
0x9E32AA: mov     [esp+14h+var_4], 0
0x9E32B2: call    SettingCollectionList_AddSetting
0x9E32B7: push    offset sub_A1BC30; void (__cdecl *)()
0x9E32BC: call    _atexit
0x9E32C1: add     esp, 4
0x9E32C4: mov     ecx, [esp+10h+var_C]
0x9E32C8: mov     large fs:0, ecx
0x9E32CF: pop     ecx
0x9E32D0: add     esp, 0Ch
0x9E32D3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B5CD0: mov     ecx, offset preventHavokAddClutter
0x9B5CD5: jmp     loc_403BC0
0x9B5CDA: mov     edx, [esp+arg_4]
0x9B5CDE: lea     eax, [edx]
0x9B5CE0: mov     ecx, [edx-4]
0x9B5CE3: xor     ecx, eax
0x9B5CE5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B5CEA: mov     eax, offset stru_AE0C8C
0x9B5CEF: jmp     ___CxxFrameHandler3
