0x9D9680: push    0FFFFFFFFh
0x9D9682: push    offset SEH_9D9680
0x9D9687: mov     eax, large fs:0
0x9D968D: push    eax
0x9D968E: mov     eax, ___security_cookie
0x9D9693: xor     eax, esp
0x9D9695: push    eax
0x9D9696: lea     eax, [esp+10h+var_C]
0x9D969A: mov     large fs:0, eax
0x9D96A0: push    offset off_B0309C; "CreditsMenu.bik"
0x9D96A5: mov     ecx, offset INISettingCollection
0x9D96AA: mov     [esp+14h+var_4], 0
0x9D96B2: call    SettingCollectionList_AddSetting
0x9D96B7: push    offset sub_A170F0; void (__cdecl *)()
0x9D96BC: call    _atexit
0x9D96C1: add     esp, 4
0x9D96C4: mov     ecx, [esp+10h+var_C]
0x9D96C8: mov     large fs:0, ecx
0x9D96CF: pop     ecx
0x9D96D0: add     esp, 0Ch
0x9D96D3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9AAB70: mov     ecx, offset off_B0309C; "CreditsMenu.bik"
0x9AAB75: jmp     loc_403BC0
0x9AAB7A: mov     edx, [esp+arg_4]
0x9AAB7E: lea     eax, [edx]
0x9AAB80: mov     ecx, [edx-4]
0x9AAB83: xor     ecx, eax
0x9AAB85: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AAB8A: mov     eax, offset stru_AD7AC0
0x9AAB8F: jmp     ___CxxFrameHandler3
