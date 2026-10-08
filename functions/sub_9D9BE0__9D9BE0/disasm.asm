0x9D9BE0: push    0FFFFFFFFh
0x9D9BE2: push    offset SEH_9D9BE0
0x9D9BE7: mov     eax, large fs:0
0x9D9BED: push    eax
0x9D9BEE: mov     eax, ___security_cookie
0x9D9BF3: xor     eax, esp
0x9D9BF5: push    eax
0x9D9BF6: lea     eax, [esp+10h+var_C]
0x9D9BFA: mov     large fs:0, eax
0x9D9C00: push    offset dword_B0315C
0x9D9C05: mov     ecx, offset INISettingCollection
0x9D9C0A: mov     [esp+14h+var_4], 0
0x9D9C12: call    SettingCollectionList_AddSetting
0x9D9C17: push    offset sub_A17390; void (__cdecl *)()
0x9D9C1C: call    _atexit
0x9D9C21: add     esp, 4
0x9D9C24: mov     ecx, [esp+10h+var_C]
0x9D9C28: mov     large fs:0, ecx
0x9D9C2F: pop     ecx
0x9D9C30: add     esp, 0Ch
0x9D9C33: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9AAEE0: mov     ecx, offset dword_B0315C
0x9AAEE5: jmp     loc_403BC0
0x9AAEEA: mov     edx, [esp+arg_4]
0x9AAEEE: lea     eax, [edx]
0x9AAEF0: mov     ecx, [edx-4]
0x9AAEF3: xor     ecx, eax
0x9AAEF5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AAEFA: mov     eax, offset stru_AD7DD4
0x9AAEFF: jmp     ___CxxFrameHandler3
