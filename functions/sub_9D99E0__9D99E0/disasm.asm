0x9D99E0: push    0FFFFFFFFh
0x9D99E2: push    offset SEH_9D99E0
0x9D99E7: mov     eax, large fs:0
0x9D99ED: push    eax
0x9D99EE: mov     eax, ___security_cookie
0x9D99F3: xor     eax, esp
0x9D99F5: push    eax
0x9D99F6: lea     eax, [esp+10h+var_C]
0x9D99FA: mov     large fs:0, eax
0x9D9A00: push    offset NearDistance
0x9D9A05: mov     ecx, offset INISettingCollection
0x9D9A0A: mov     [esp+14h+var_4], 0
0x9D9A12: call    SettingCollectionList_AddSetting
0x9D9A17: push    offset sub_A172A0; void (__cdecl *)()
0x9D9A1C: call    _atexit
0x9D9A21: add     esp, 4
0x9D9A24: mov     ecx, [esp+10h+var_C]
0x9D9A28: mov     large fs:0, ecx
0x9D9A2F: pop     ecx
0x9D9A30: add     esp, 0Ch
0x9D9A33: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9AADF0: mov     ecx, offset NearDistance
0x9AADF5: jmp     loc_403BC0
0x9AADFA: mov     edx, [esp+arg_4]
0x9AADFE: lea     eax, [edx]
0x9AAE00: mov     ecx, [edx-4]
0x9AAE03: xor     ecx, eax
0x9AAE05: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AAE0A: mov     eax, offset stru_AD7CF8
0x9AAE0F: jmp     ___CxxFrameHandler3
