0x9DCB80: push    0FFFFFFFFh
0x9DCB82: push    offset SEH_9DCB80
0x9DCB87: mov     eax, large fs:0
0x9DCB8D: push    eax
0x9DCB8E: mov     eax, ___security_cookie
0x9DCB93: xor     eax, esp
0x9DCB95: push    eax
0x9DCB96: lea     eax, [esp+10h+var_C]
0x9DCB9A: mov     large fs:0, eax
0x9DCBA0: push    offset dword_B06C64
0x9DCBA5: mov     ecx, offset INISettingCollection
0x9DCBAA: mov     [esp+14h+var_4], 0
0x9DCBB2: call    SettingCollectionList_AddSetting
0x9DCBB7: push    offset sub_A18B70; void (__cdecl *)()
0x9DCBBC: call    _atexit
0x9DCBC1: add     esp, 4
0x9DCBC4: mov     ecx, [esp+10h+var_C]
0x9DCBC8: mov     large fs:0, ecx
0x9DCBCF: pop     ecx
0x9DCBD0: add     esp, 0Ch
0x9DCBD3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B04C0: mov     ecx, offset dword_B06C64
0x9B04C5: jmp     loc_403BC0
0x9B04CA: mov     edx, [esp+arg_4]
0x9B04CE: lea     eax, [edx]
0x9B04D0: mov     ecx, [edx-4]
0x9B04D3: xor     ecx, eax
0x9B04D5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B04DA: mov     eax, offset stru_ADC7E8
0x9B04DF: jmp     ___CxxFrameHandler3
