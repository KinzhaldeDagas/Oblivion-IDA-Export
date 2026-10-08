0x9DC5B0: push    0FFFFFFFFh
0x9DC5B2: push    offset SEH_9DC5B0
0x9DC5B7: mov     eax, large fs:0
0x9DC5BD: push    eax
0x9DC5BE: mov     eax, ___security_cookie
0x9DC5C3: xor     eax, esp
0x9DC5C5: push    eax
0x9DC5C6: lea     eax, [esp+10h+var_C]
0x9DC5CA: mov     large fs:0, eax
0x9DC5D0: push    offset dword_B06A98
0x9DC5D5: mov     ecx, offset INISettingCollection
0x9DC5DA: mov     [esp+14h+var_4], 0
0x9DC5E2: call    SettingCollectionList_AddSetting
0x9DC5E7: push    offset sub_A18830; void (__cdecl *)()
0x9DC5EC: call    _atexit
0x9DC5F1: add     esp, 4
0x9DC5F4: mov     ecx, [esp+10h+var_C]
0x9DC5F8: mov     large fs:0, ecx
0x9DC5FF: pop     ecx
0x9DC600: add     esp, 0Ch
0x9DC603: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9AF9B0: mov     ecx, offset dword_B06A98
0x9AF9B5: jmp     loc_403BC0
0x9AF9BA: mov     edx, [esp+arg_4]
0x9AF9BE: lea     eax, [edx]
0x9AF9C0: mov     ecx, [edx-4]
0x9AF9C3: xor     ecx, eax
0x9AF9C5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AF9CA: mov     eax, offset stru_ADBED4
0x9AF9CF: jmp     ___CxxFrameHandler3
