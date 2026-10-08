0x9D9B20: push    0FFFFFFFFh
0x9D9B22: push    offset SEH_9D9B20
0x9D9B27: mov     eax, large fs:0
0x9D9B2D: push    eax
0x9D9B2E: mov     eax, ___security_cookie
0x9D9B33: xor     eax, esp
0x9D9B35: push    eax
0x9D9B36: lea     eax, [esp+10h+var_C]
0x9D9B3A: mov     large fs:0, eax
0x9D9B40: push    offset dword_B0314C
0x9D9B45: mov     ecx, offset INISettingCollection
0x9D9B4A: mov     [esp+14h+var_4], 0
0x9D9B52: call    SettingCollectionList_AddSetting
0x9D9B57: push    offset sub_A17330; void (__cdecl *)()
0x9D9B5C: call    _atexit
0x9D9B61: add     esp, 4
0x9D9B64: mov     ecx, [esp+10h+var_C]
0x9D9B68: mov     large fs:0, ecx
0x9D9B6F: pop     ecx
0x9D9B70: add     esp, 0Ch
0x9D9B73: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9AAE80: mov     ecx, offset dword_B0314C
0x9AAE85: jmp     loc_403BC0
0x9AAE8A: mov     edx, [esp+arg_4]
0x9AAE8E: lea     eax, [edx]
0x9AAE90: mov     ecx, [edx-4]
0x9AAE93: xor     ecx, eax
0x9AAE95: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AAE9A: mov     eax, offset stru_AD7D7C
0x9AAE9F: jmp     ___CxxFrameHandler3
