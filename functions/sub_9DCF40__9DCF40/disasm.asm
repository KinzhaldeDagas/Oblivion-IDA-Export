0x9DCF40: push    0FFFFFFFFh
0x9DCF42: push    offset SEH_9DCF40
0x9DCF47: mov     eax, large fs:0
0x9DCF4D: push    eax
0x9DCF4E: mov     eax, ___security_cookie
0x9DCF53: xor     eax, esp
0x9DCF55: push    eax
0x9DCF56: lea     eax, [esp+10h+var_C]
0x9DCF5A: mov     large fs:0, eax
0x9DCF60: push    offset byte_B06CB4
0x9DCF65: mov     ecx, offset INISettingCollection
0x9DCF6A: mov     [esp+14h+var_4], 0
0x9DCF72: call    SettingCollectionList_AddSetting
0x9DCF77: push    offset sub_A18D50; void (__cdecl *)()
0x9DCF7C: call    _atexit
0x9DCF81: add     esp, 4
0x9DCF84: mov     ecx, [esp+10h+var_C]
0x9DCF88: mov     large fs:0, ecx
0x9DCF8F: pop     ecx
0x9DCF90: add     esp, 0Ch
0x9DCF93: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B06A0: mov     ecx, offset byte_B06CB4
0x9B06A5: jmp     loc_403BC0
0x9B06AA: mov     edx, [esp+arg_4]
0x9B06AE: lea     eax, [edx]
0x9B06B0: mov     ecx, [edx-4]
0x9B06B3: xor     ecx, eax
0x9B06B5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B06BA: mov     eax, offset stru_ADC9A0
0x9B06BF: jmp     ___CxxFrameHandler3
