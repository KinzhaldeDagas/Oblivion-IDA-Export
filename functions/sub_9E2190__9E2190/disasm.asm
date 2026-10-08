0x9E2190: push    0FFFFFFFFh
0x9E2192: push    offset SEH_9E2190
0x9E2197: mov     eax, large fs:0
0x9E219D: push    eax
0x9E219E: mov     eax, ___security_cookie
0x9E21A3: xor     eax, esp
0x9E21A5: push    eax
0x9E21A6: lea     eax, [esp+10h+var_C]
0x9E21AA: mov     large fs:0, eax
0x9E21B0: push    offset flt_B080DC
0x9E21B5: mov     ecx, offset INISettingCollection
0x9E21BA: mov     [esp+14h+var_4], 0
0x9E21C2: call    SettingCollectionList_AddSetting
0x9E21C7: push    offset sub_A1B370; void (__cdecl *)()
0x9E21CC: call    _atexit
0x9E21D1: add     esp, 4
0x9E21D4: mov     ecx, [esp+10h+var_C]
0x9E21D8: mov     large fs:0, ecx
0x9E21DF: pop     ecx
0x9E21E0: add     esp, 0Ch
0x9E21E3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B2D90: mov     ecx, offset flt_B080DC
0x9B2D95: jmp     loc_403BC0
0x9B2D9A: mov     edx, [esp+arg_4]
0x9B2D9E: lea     eax, [edx]
0x9B2DA0: mov     ecx, [edx-4]
0x9B2DA3: xor     ecx, eax
0x9B2DA5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B2DAA: mov     eax, offset stru_ADEBE8
0x9B2DAF: jmp     ___CxxFrameHandler3
