0x9DCE80: push    0FFFFFFFFh
0x9DCE82: push    offset SEH_9DCE80
0x9DCE87: mov     eax, large fs:0
0x9DCE8D: push    eax
0x9DCE8E: mov     eax, ___security_cookie
0x9DCE93: xor     eax, esp
0x9DCE95: push    eax
0x9DCE96: lea     eax, [esp+10h+var_C]
0x9DCE9A: mov     large fs:0, eax
0x9DCEA0: push    offset byte_B06CA4
0x9DCEA5: mov     ecx, offset INISettingCollection
0x9DCEAA: mov     [esp+14h+var_4], 0
0x9DCEB2: call    SettingCollectionList_AddSetting
0x9DCEB7: push    offset sub_A18CF0; void (__cdecl *)()
0x9DCEBC: call    _atexit
0x9DCEC1: add     esp, 4
0x9DCEC4: mov     ecx, [esp+10h+var_C]
0x9DCEC8: mov     large fs:0, ecx
0x9DCECF: pop     ecx
0x9DCED0: add     esp, 0Ch
0x9DCED3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B0640: mov     ecx, offset byte_B06CA4
0x9B0645: jmp     loc_403BC0
0x9B064A: mov     edx, [esp+arg_4]
0x9B064E: lea     eax, [edx]
0x9B0650: mov     ecx, [edx-4]
0x9B0653: xor     ecx, eax
0x9B0655: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B065A: mov     eax, offset stru_ADC948
0x9B065F: jmp     ___CxxFrameHandler3
