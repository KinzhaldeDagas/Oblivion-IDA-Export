0x9FC5A0: push    0FFFFFFFFh; [Controller decode 2026-07-10] Registers the paired Xenon-era Controls INI setting with INISettingCollection and installs its atexit cleanup.
0x9FC5A2: push    offset SEH_9FC5A0
0x9FC5A7: mov     eax, large fs:0
0x9FC5AD: push    eax
0x9FC5AE: mov     eax, ___security_cookie
0x9FC5B3: xor     eax, esp
0x9FC5B5: push    eax
0x9FC5B6: lea     eax, [esp+10h+var_C]
0x9FC5BA: mov     large fs:0, eax
0x9FC5C0: push    offset fXenonMenuStickMapCursorGamma
0x9FC5C5: mov     ecx, offset INISettingCollection
0x9FC5CA: mov     [esp+14h+var_4], 0
0x9FC5D2: call    SettingCollectionList_AddSetting
0x9FC5D7: push    offset INISetting_Destroy_fXenonMenuStickMapCursorGamma; void (__cdecl *)()
0x9FC5DC: call    _atexit
0x9FC5E1: add     esp, 4
0x9FC5E4: mov     ecx, [esp+10h+var_C]
0x9FC5E8: mov     large fs:0, ecx
0x9FC5EF: pop     ecx
0x9FC5F0: add     esp, 0Ch
0x9FC5F3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9C0DC0: mov     ecx, offset fXenonMenuStickMapCursorGamma
0x9C0DC5: jmp     loc_403BC0
0x9C0DCA: mov     edx, [esp+arg_4]
0x9C0DCE: lea     eax, [edx]
0x9C0DD0: mov     ecx, [edx-4]
0x9C0DD3: xor     ecx, eax
0x9C0DD5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C0DDA: mov     eax, offset stru_AE9F0C
0x9C0DDF: jmp     ___CxxFrameHandler3
