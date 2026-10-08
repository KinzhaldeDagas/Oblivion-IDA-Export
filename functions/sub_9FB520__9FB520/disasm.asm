0x9FB520: push    0FFFFFFFFh
0x9FB522: push    offset SEH_9FB520
0x9FB527: mov     eax, large fs:0
0x9FB52D: push    eax
0x9FB52E: mov     eax, ___security_cookie
0x9FB533: xor     eax, esp
0x9FB535: push    eax
0x9FB536: lea     eax, [esp+10h+var_C]
0x9FB53A: mov     large fs:0, eax
0x9FB540: push    offset unk_B135C0
0x9FB545: mov     ecx, offset INISettingCollection
0x9FB54A: mov     [esp+14h+var_4], 0
0x9FB552: call    SettingCollectionList_AddSetting
0x9FB557: push    offset sub_A246D0; void (__cdecl *)()
0x9FB55C: call    _atexit
0x9FB561: add     esp, 4
0x9FB564: mov     ecx, [esp+10h+var_C]
0x9FB568: mov     large fs:0, ecx
0x9FB56F: pop     ecx
0x9FB570: add     esp, 0Ch
0x9FB573: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9BEEE0: mov     ecx, offset unk_B135C0
0x9BEEE5: jmp     loc_403BC0
0x9BEEEA: mov     edx, [esp+arg_4]
0x9BEEEE: lea     eax, [edx]
0x9BEEF0: mov     ecx, [edx-4]
0x9BEEF3: xor     ecx, eax
0x9BEEF5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BEEFA: mov     eax, offset stru_AE8538
0x9BEEFF: jmp     ___CxxFrameHandler3
