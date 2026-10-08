0x9DC2D0: push    0FFFFFFFFh
0x9DC2D2: push    offset SEH_9DC2D0
0x9DC2D7: mov     eax, large fs:0
0x9DC2DD: push    eax
0x9DC2DE: mov     eax, ___security_cookie
0x9DC2E3: xor     eax, esp
0x9DC2E5: push    eax
0x9DC2E6: lea     eax, [esp+10h+var_C]
0x9DC2EA: mov     large fs:0, eax
0x9DC2F0: push    offset flt_B06704
0x9DC2F5: mov     ecx, offset INISettingCollection
0x9DC2FA: mov     [esp+14h+var_4], 0
0x9DC302: call    SettingCollectionList_AddSetting
0x9DC307: push    offset sub_A18690; void (__cdecl *)()
0x9DC30C: call    _atexit
0x9DC311: add     esp, 4
0x9DC314: mov     ecx, [esp+10h+var_C]
0x9DC318: mov     large fs:0, ecx
0x9DC31F: pop     ecx
0x9DC320: add     esp, 0Ch
0x9DC323: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9AF430: mov     ecx, offset flt_B06704
0x9AF435: jmp     loc_403BC0
0x9AF43A: mov     edx, [esp+arg_4]
0x9AF43E: lea     eax, [edx]
0x9AF440: mov     ecx, [edx-4]
0x9AF443: xor     ecx, eax
0x9AF445: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AF44A: mov     eax, offset stru_ADBA28
0x9AF44F: jmp     ___CxxFrameHandler3
