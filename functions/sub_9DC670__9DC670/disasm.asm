0x9DC670: push    0FFFFFFFFh
0x9DC672: push    offset SEH_9DC670
0x9DC677: mov     eax, large fs:0
0x9DC67D: push    eax
0x9DC67E: mov     eax, ___security_cookie
0x9DC683: xor     eax, esp
0x9DC685: push    eax
0x9DC686: lea     eax, [esp+10h+var_C]
0x9DC68A: mov     large fs:0, eax
0x9DC690: push    offset dword_B06AA8
0x9DC695: mov     ecx, offset INISettingCollection
0x9DC69A: mov     [esp+14h+var_4], 0
0x9DC6A2: call    SettingCollectionList_AddSetting
0x9DC6A7: push    offset sub_A18890; void (__cdecl *)()
0x9DC6AC: call    _atexit
0x9DC6B1: add     esp, 4
0x9DC6B4: mov     ecx, [esp+10h+var_C]
0x9DC6B8: mov     large fs:0, ecx
0x9DC6BF: pop     ecx
0x9DC6C0: add     esp, 0Ch
0x9DC6C3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9AFA10: mov     ecx, offset dword_B06AA8
0x9AFA15: jmp     loc_403BC0
0x9AFA1A: mov     edx, [esp+arg_4]
0x9AFA1E: lea     eax, [edx]
0x9AFA20: mov     ecx, [edx-4]
0x9AFA23: xor     ecx, eax
0x9AFA25: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AFA2A: mov     eax, offset stru_ADBF2C
0x9AFA2F: jmp     ___CxxFrameHandler3
