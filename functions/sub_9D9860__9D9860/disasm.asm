0x9D9860: push    0FFFFFFFFh
0x9D9862: push    offset SEH_9D9860
0x9D9867: mov     eax, large fs:0
0x9D986D: push    eax
0x9D986E: mov     eax, ___security_cookie
0x9D9873: xor     eax, esp
0x9D9875: push    eax
0x9D9876: lea     eax, [esp+10h+var_C]
0x9D987A: mov     large fs:0, eax
0x9D9880: push    offset dword_B030C4
0x9D9885: mov     ecx, offset INISettingCollection
0x9D988A: mov     [esp+14h+var_4], 0
0x9D9892: call    SettingCollectionList_AddSetting
0x9D9897: push    offset sub_A171E0; void (__cdecl *)()
0x9D989C: call    _atexit
0x9D98A1: add     esp, 4
0x9D98A4: mov     ecx, [esp+10h+var_C]
0x9D98A8: mov     large fs:0, ecx
0x9D98AF: pop     ecx
0x9D98B0: add     esp, 0Ch
0x9D98B3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9AAC60: mov     ecx, offset dword_B030C4
0x9AAC65: jmp     loc_403BC0
0x9AAC6A: mov     edx, [esp+arg_4]
0x9AAC6E: lea     eax, [edx]
0x9AAC70: mov     ecx, [edx-4]
0x9AAC73: xor     ecx, eax
0x9AAC75: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AAC7A: mov     eax, offset stru_AD7B9C
0x9AAC7F: jmp     ___CxxFrameHandler3
