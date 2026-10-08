0x9E22F0: push    0FFFFFFFFh
0x9E22F2: push    offset SEH_9E22F0
0x9E22F7: mov     eax, large fs:0
0x9E22FD: push    eax
0x9E22FE: mov     eax, ___security_cookie
0x9E2303: xor     eax, esp
0x9E2305: push    eax
0x9E2306: lea     eax, [esp+10h+var_C]
0x9E230A: mov     large fs:0, eax
0x9E2310: push    offset useQuadratic
0x9E2315: mov     ecx, offset INISettingCollection
0x9E231A: mov     [esp+14h+var_4], 0
0x9E2322: call    SettingCollectionList_AddSetting
0x9E2327: push    offset sub_A1B420; void (__cdecl *)()
0x9E232C: call    _atexit
0x9E2331: add     esp, 4
0x9E2334: mov     ecx, [esp+10h+var_C]
0x9E2338: mov     large fs:0, ecx
0x9E233F: pop     ecx
0x9E2340: add     esp, 0Ch
0x9E2343: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B3130: mov     ecx, offset useQuadratic
0x9B3135: jmp     loc_403BC0
0x9B313A: mov     edx, [esp+arg_4]
0x9B313E: lea     eax, [edx]
0x9B3140: mov     ecx, [edx-4]
0x9B3143: xor     ecx, eax
0x9B3145: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B314A: mov     eax, offset stru_ADEE9C
0x9B314F: jmp     ___CxxFrameHandler3
