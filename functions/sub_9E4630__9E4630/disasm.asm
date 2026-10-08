0x9E4630: push    0FFFFFFFFh
0x9E4632: push    offset SEH_9E4630
0x9E4637: mov     eax, large fs:0
0x9E463D: push    eax
0x9E463E: mov     eax, ___security_cookie
0x9E4643: xor     eax, esp
0x9E4645: push    eax
0x9E4646: lea     eax, [esp+10h+var_C]
0x9E464A: mov     large fs:0, eax
0x9E4650: push    offset flt_B11A44
0x9E4655: mov     ecx, offset BlendSettingCollection
0x9E465A: mov     [esp+14h+var_4], 0
0x9E4662: call    SettingCollectionList_AddSetting
0x9E4667: push    offset sub_A1C760; void (__cdecl *)()
0x9E466C: call    _atexit
0x9E4671: add     esp, 4
0x9E4674: mov     ecx, [esp+10h+var_C]
0x9E4678: mov     large fs:0, ecx
0x9E467F: pop     ecx
0x9E4680: add     esp, 0Ch
0x9E4683: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B9710: mov     ecx, offset flt_B11A44
0x9B9715: jmp     loc_403BC0
0x9B971A: mov     edx, [esp+arg_4]
0x9B971E: lea     eax, [edx]
0x9B9720: mov     ecx, [edx-4]
0x9B9723: xor     ecx, eax
0x9B9725: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B972A: mov     eax, offset stru_AE3A18
0x9B972F: jmp     ___CxxFrameHandler3
