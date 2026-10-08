0x9E2350: push    0FFFFFFFFh
0x9E2352: push    offset SEH_9E2350
0x9E2357: mov     eax, large fs:0
0x9E235D: push    eax
0x9E235E: mov     eax, ___security_cookie
0x9E2363: xor     eax, esp
0x9E2365: push    eax
0x9E2366: lea     eax, [esp+10h+var_C]
0x9E236A: mov     large fs:0, eax
0x9E2370: push    offset flt_B08150
0x9E2375: mov     ecx, offset INISettingCollection
0x9E237A: mov     [esp+14h+var_4], 0
0x9E2382: call    SettingCollectionList_AddSetting
0x9E2387: push    offset sub_A1B450; void (__cdecl *)()
0x9E238C: call    _atexit
0x9E2391: add     esp, 4
0x9E2394: mov     ecx, [esp+10h+var_C]
0x9E2398: mov     large fs:0, ecx
0x9E239F: pop     ecx
0x9E23A0: add     esp, 0Ch
0x9E23A3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B3160: mov     ecx, offset flt_B08150
0x9B3165: jmp     loc_403BC0
0x9B316A: mov     edx, [esp+arg_4]
0x9B316E: lea     eax, [edx]
0x9B3170: mov     ecx, [edx-4]
0x9B3173: xor     ecx, eax
0x9B3175: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B317A: mov     eax, offset stru_ADEEC8
0x9B317F: jmp     ___CxxFrameHandler3
