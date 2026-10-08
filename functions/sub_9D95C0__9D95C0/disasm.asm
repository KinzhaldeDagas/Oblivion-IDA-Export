0x9D95C0: push    0FFFFFFFFh
0x9D95C2: push    offset SEH_9D95C0
0x9D95C7: mov     eax, large fs:0
0x9D95CD: push    eax
0x9D95CE: mov     eax, ___security_cookie
0x9D95D3: xor     eax, esp
0x9D95D5: push    eax
0x9D95D6: lea     eax, [esp+10h+var_C]
0x9D95DA: mov     large fs:0, eax
0x9D95E0: push    offset off_B0308C; "Oblivion iv logo.bik"
0x9D95E5: mov     ecx, offset INISettingCollection
0x9D95EA: mov     [esp+14h+var_4], 0
0x9D95F2: call    SettingCollectionList_AddSetting
0x9D95F7: push    offset sub_A17090; void (__cdecl *)()
0x9D95FC: call    _atexit
0x9D9601: add     esp, 4
0x9D9604: mov     ecx, [esp+10h+var_C]
0x9D9608: mov     large fs:0, ecx
0x9D960F: pop     ecx
0x9D9610: add     esp, 0Ch
0x9D9613: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9AAB10: mov     ecx, offset off_B0308C; "Oblivion iv logo.bik"
0x9AAB15: jmp     loc_403BC0
0x9AAB1A: mov     edx, [esp+arg_4]
0x9AAB1E: lea     eax, [edx]
0x9AAB20: mov     ecx, [edx-4]
0x9AAB23: xor     ecx, eax
0x9AAB25: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AAB2A: mov     eax, offset stru_AD7A68
0x9AAB2F: jmp     ___CxxFrameHandler3
