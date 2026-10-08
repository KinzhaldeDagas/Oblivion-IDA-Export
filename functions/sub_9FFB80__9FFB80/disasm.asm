0x9FFB80: push    0FFFFFFFFh
0x9FFB82: push    offset SEH_9FFB80
0x9FFB87: mov     eax, large fs:0
0x9FFB8D: push    eax
0x9FFB8E: mov     eax, ___security_cookie
0x9FFB93: xor     eax, esp
0x9FFB95: push    eax
0x9FFB96: lea     eax, [esp+10h+var_C]
0x9FFB9A: mov     large fs:0, eax
0x9FFBA0: push    offset dword_B162F4
0x9FFBA5: mov     ecx, offset INISettingCollection
0x9FFBAA: mov     [esp+14h+var_4], 0
0x9FFBB2: call    SettingCollectionList_AddSetting
0x9FFBB7: push    offset sub_A266A0; void (__cdecl *)()
0x9FFBBC: call    _atexit
0x9FFBC1: add     esp, 4
0x9FFBC4: mov     ecx, [esp+10h+var_C]
0x9FFBC8: mov     large fs:0, ecx
0x9FFBCF: pop     ecx
0x9FFBD0: add     esp, 0Ch
0x9FFBD3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9C6D40: mov     ecx, offset dword_B162F4
0x9C6D45: jmp     loc_403BC0
0x9C6D4A: mov     edx, [esp+arg_4]
0x9C6D4E: lea     eax, [edx]
0x9C6D50: mov     ecx, [edx-4]
0x9C6D53: xor     ecx, eax
0x9C6D55: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C6D5A: mov     eax, offset stru_AEF1E8
0x9C6D5F: jmp     ___CxxFrameHandler3
