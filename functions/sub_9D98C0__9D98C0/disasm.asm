0x9D98C0: push    0FFFFFFFFh
0x9D98C2: push    offset SEH_9D98C0
0x9D98C7: mov     eax, large fs:0
0x9D98CD: push    eax
0x9D98CE: mov     eax, ___security_cookie
0x9D98D3: xor     eax, esp
0x9D98D5: push    eax
0x9D98D6: lea     eax, [esp+10h+var_C]
0x9D98DA: mov     large fs:0, eax
0x9D98E0: push    offset flt_B0311C
0x9D98E5: mov     ecx, offset INISettingCollection
0x9D98EA: mov     [esp+14h+var_4], 0
0x9D98F2: call    SettingCollectionList_AddSetting
0x9D98F7: push    offset sub_A17210; void (__cdecl *)()
0x9D98FC: call    _atexit
0x9D9901: add     esp, 4
0x9D9904: mov     ecx, [esp+10h+var_C]
0x9D9908: mov     large fs:0, ecx
0x9D990F: pop     ecx
0x9D9910: add     esp, 0Ch
0x9D9913: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9AAD60: mov     ecx, offset flt_B0311C
0x9AAD65: jmp     loc_403BC0
0x9AAD6A: mov     edx, [esp+arg_4]
0x9AAD6E: lea     eax, [edx]
0x9AAD70: mov     ecx, [edx-4]
0x9AAD73: xor     ecx, eax
0x9AAD75: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AAD7A: mov     eax, offset stru_AD7C74
0x9AAD7F: jmp     ___CxxFrameHandler3
