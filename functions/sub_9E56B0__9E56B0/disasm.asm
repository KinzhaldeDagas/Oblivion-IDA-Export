0x9E56B0: push    0FFFFFFFFh
0x9E56B2: push    offset SEH_9E56B0
0x9E56B7: mov     eax, large fs:0
0x9E56BD: push    eax
0x9E56BE: mov     eax, ___security_cookie
0x9E56C3: xor     eax, esp
0x9E56C5: push    eax
0x9E56C6: lea     eax, [esp+10h+var_C]
0x9E56CA: mov     large fs:0, eax
0x9E56D0: push    offset off_B11BA4; "1.0, 1.0"
0x9E56D5: mov     ecx, offset BlendSettingCollection
0x9E56DA: mov     [esp+14h+var_4], 0
0x9E56E2: call    SettingCollectionList_AddSetting
0x9E56E7: push    offset sub_A1CFA0; void (__cdecl *)()
0x9E56EC: call    _atexit
0x9E56F1: add     esp, 4
0x9E56F4: mov     ecx, [esp+10h+var_C]
0x9E56F8: mov     large fs:0, ecx
0x9E56FF: pop     ecx
0x9E5700: add     esp, 0Ch
0x9E5703: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B9F50: mov     ecx, offset off_B11BA4; "1.0, 1.0"
0x9B9F55: jmp     loc_403BC0
0x9B9F5A: mov     edx, [esp+arg_4]
0x9B9F5E: lea     eax, [edx]
0x9B9F60: mov     ecx, [edx-4]
0x9B9F63: xor     ecx, eax
0x9B9F65: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B9F6A: mov     eax, offset stru_AE41A8
0x9B9F6F: jmp     ___CxxFrameHandler3
