0x9E24D0: push    0FFFFFFFFh
0x9E24D2: push    offset SEH_9E24D0
0x9E24D7: mov     eax, large fs:0
0x9E24DD: push    eax
0x9E24DE: mov     eax, ___security_cookie
0x9E24E3: xor     eax, esp
0x9E24E5: push    eax
0x9E24E6: lea     eax, [esp+10h+var_C]
0x9E24EA: mov     large fs:0, eax
0x9E24F0: push    offset flt_B08170
0x9E24F5: mov     ecx, offset INISettingCollection
0x9E24FA: mov     [esp+14h+var_4], 0
0x9E2502: call    SettingCollectionList_AddSetting
0x9E2507: push    offset sub_A1B510; void (__cdecl *)()
0x9E250C: call    _atexit
0x9E2511: add     esp, 4
0x9E2514: mov     ecx, [esp+10h+var_C]
0x9E2518: mov     large fs:0, ecx
0x9E251F: pop     ecx
0x9E2520: add     esp, 0Ch
0x9E2523: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B3220: mov     ecx, offset flt_B08170
0x9B3225: jmp     loc_403BC0
0x9B322A: mov     edx, [esp+arg_4]
0x9B322E: lea     eax, [edx]
0x9B3230: mov     ecx, [edx-4]
0x9B3233: xor     ecx, eax
0x9B3235: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B323A: mov     eax, offset stru_ADEF78
0x9B323F: jmp     ___CxxFrameHandler3
