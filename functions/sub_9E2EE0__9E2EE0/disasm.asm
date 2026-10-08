0x9E2EE0: push    0FFFFFFFFh
0x9E2EE2: push    offset SEH_9E2EE0
0x9E2EE7: mov     eax, large fs:0
0x9E2EED: push    eax
0x9E2EEE: mov     eax, ___security_cookie
0x9E2EF3: xor     eax, esp
0x9E2EF5: push    eax
0x9E2EF6: lea     eax, [esp+10h+var_C]
0x9E2EFA: mov     large fs:0, eax
0x9E2F00: push    offset dword_B08B9C
0x9E2F05: mov     ecx, offset INISettingCollection
0x9E2F0A: mov     [esp+14h+var_4], 0
0x9E2F12: call    SettingCollectionList_AddSetting
0x9E2F17: push    offset sub_A1BA50; void (__cdecl *)()
0x9E2F1C: call    _atexit
0x9E2F21: add     esp, 4
0x9E2F24: mov     ecx, [esp+10h+var_C]
0x9E2F28: mov     large fs:0, ecx
0x9E2F2F: pop     ecx
0x9E2F30: add     esp, 0Ch
0x9E2F33: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B4FF0: mov     ecx, offset dword_B08B9C
0x9B4FF5: jmp     loc_403BC0
0x9B4FFA: mov     edx, [esp+arg_4]
0x9B4FFE: lea     eax, [edx]
0x9B5000: mov     ecx, [edx-4]
0x9B5003: xor     ecx, eax
0x9B5005: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B500A: mov     eax, offset stru_AE0210
0x9B500F: jmp     ___CxxFrameHandler3
