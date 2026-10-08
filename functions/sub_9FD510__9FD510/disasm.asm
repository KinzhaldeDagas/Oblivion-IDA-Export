0x9FD510: push    0FFFFFFFFh
0x9FD512: push    offset SEH_9FD510
0x9FD517: mov     eax, large fs:0
0x9FD51D: push    eax
0x9FD51E: mov     eax, ___security_cookie
0x9FD523: xor     eax, esp
0x9FD525: push    eax
0x9FD526: lea     eax, [esp+10h+var_C]
0x9FD52A: mov     large fs:0, eax
0x9FD530: push    offset flt_B14BAC
0x9FD535: mov     ecx, offset INISettingCollection
0x9FD53A: mov     [esp+14h+var_4], 0
0x9FD542: call    SettingCollectionList_AddSetting
0x9FD547: push    offset sub_A25580; void (__cdecl *)()
0x9FD54C: call    _atexit
0x9FD551: add     esp, 4
0x9FD554: mov     ecx, [esp+10h+var_C]
0x9FD558: mov     large fs:0, ecx
0x9FD55F: pop     ecx
0x9FD560: add     esp, 0Ch
0x9FD563: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9C34E0: mov     ecx, offset flt_B14BAC
0x9C34E5: jmp     loc_403BC0
0x9C34EA: mov     edx, [esp+arg_4]
0x9C34EE: lea     eax, [edx]
0x9C34F0: mov     ecx, [edx-4]
0x9C34F3: xor     ecx, eax
0x9C34F5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C34FA: mov     eax, offset stru_AEC0DC
0x9C34FF: jmp     ___CxxFrameHandler3
