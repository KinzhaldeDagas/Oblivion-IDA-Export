0x9E2230: push    0FFFFFFFFh
0x9E2232: push    offset SEH_9E2230
0x9E2237: mov     eax, large fs:0
0x9E223D: push    eax
0x9E223E: mov     eax, ___security_cookie
0x9E2243: xor     eax, esp
0x9E2245: push    eax
0x9E2246: lea     eax, [esp+10h+var_C]
0x9E224A: mov     large fs:0, eax
0x9E2250: push    offset byte_B08138
0x9E2255: mov     ecx, offset INISettingCollection
0x9E225A: mov     [esp+14h+var_4], 0
0x9E2262: call    SettingCollectionList_AddSetting
0x9E2267: push    offset sub_A1B3C0; void (__cdecl *)()
0x9E226C: call    _atexit
0x9E2271: add     esp, 4
0x9E2274: mov     ecx, [esp+10h+var_C]
0x9E2278: mov     large fs:0, ecx
0x9E227F: pop     ecx
0x9E2280: add     esp, 0Ch
0x9E2283: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B30D0: mov     ecx, offset byte_B08138
0x9B30D5: jmp     loc_403BC0
0x9B30DA: mov     edx, [esp+arg_4]
0x9B30DE: lea     eax, [edx]
0x9B30E0: mov     ecx, [edx-4]
0x9B30E3: xor     ecx, eax
0x9B30E5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B30EA: mov     eax, offset stru_ADEE44
0x9B30EF: jmp     ___CxxFrameHandler3
