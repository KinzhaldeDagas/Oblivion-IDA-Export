0x9FE2A0: push    0FFFFFFFFh
0x9FE2A2: push    offset SEH_9FE2A0
0x9FE2A7: mov     eax, large fs:0
0x9FE2AD: push    eax
0x9FE2AE: mov     eax, ___security_cookie
0x9FE2B3: xor     eax, esp
0x9FE2B5: push    eax
0x9FE2B6: lea     eax, [esp+10h+var_C]
0x9FE2BA: mov     large fs:0, eax
0x9FE2C0: push    offset dword_B14F30
0x9FE2C5: mov     ecx, offset INISettingCollection
0x9FE2CA: mov     [esp+14h+var_4], 0
0x9FE2D2: call    SettingCollectionList_AddSetting
0x9FE2D7: push    offset sub_A25C50; void (__cdecl *)()
0x9FE2DC: call    _atexit
0x9FE2E1: add     esp, 4
0x9FE2E4: mov     ecx, [esp+10h+var_C]
0x9FE2E8: mov     large fs:0, ecx
0x9FE2EF: pop     ecx
0x9FE2F0: add     esp, 0Ch
0x9FE2F3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9C46C0: mov     ecx, offset dword_B14F30
0x9C46C5: jmp     loc_403BC0
0x9C46CA: mov     edx, [esp+arg_4]
0x9C46CE: lea     eax, [edx]
0x9C46D0: mov     ecx, [edx-4]
0x9C46D3: xor     ecx, eax
0x9C46D5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C46DA: mov     eax, offset stru_AED050
0x9C46DF: jmp     ___CxxFrameHandler3
