0x9DF7E0: push    0FFFFFFFFh
0x9DF7E2: push    offset SEH_9DF7E0
0x9DF7E7: mov     eax, large fs:0
0x9DF7ED: push    eax
0x9DF7EE: mov     eax, ___security_cookie
0x9DF7F3: xor     eax, esp
0x9DF7F5: push    eax
0x9DF7F6: lea     eax, [esp+10h+var_C]
0x9DF7FA: mov     large fs:0, eax
0x9DF800: push    offset flt_B07048
0x9DF805: mov     ecx, offset INISettingCollection
0x9DF80A: mov     [esp+14h+var_4], 0
0x9DF812: call    SettingCollectionList_AddSetting
0x9DF817: push    offset sub_A1A210; void (__cdecl *)()
0x9DF81C: call    _atexit
0x9DF821: add     esp, 4
0x9DF824: mov     ecx, [esp+10h+var_C]
0x9DF828: mov     large fs:0, ecx
0x9DF82F: pop     ecx
0x9DF830: add     esp, 0Ch
0x9DF833: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B1D00: mov     ecx, offset flt_B07048
0x9B1D05: jmp     loc_403BC0
0x9B1D0A: mov     edx, [esp+arg_4]
0x9B1D0E: lea     eax, [edx]
0x9B1D10: mov     ecx, [edx-4]
0x9B1D13: xor     ecx, eax
0x9B1D15: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B1D1A: mov     eax, offset stru_ADDDA4
0x9B1D1F: jmp     ___CxxFrameHandler3
