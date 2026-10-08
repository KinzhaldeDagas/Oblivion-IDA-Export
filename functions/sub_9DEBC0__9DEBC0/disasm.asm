0x9DEBC0: push    0FFFFFFFFh
0x9DEBC2: push    offset SEH_9DEBC0
0x9DEBC7: mov     eax, large fs:0
0x9DEBCD: push    eax
0x9DEBCE: mov     eax, ___security_cookie
0x9DEBD3: xor     eax, esp
0x9DEBD5: push    eax
0x9DEBD6: lea     eax, [esp+10h+var_C]
0x9DEBDA: mov     large fs:0, eax
0x9DEBE0: push    offset byte_B06F14
0x9DEBE5: mov     ecx, offset INISettingCollection
0x9DEBEA: mov     [esp+14h+var_4], 0
0x9DEBF2: call    SettingCollectionList_AddSetting
0x9DEBF7: push    offset sub_A19B90; void (__cdecl *)()
0x9DEBFC: call    _atexit
0x9DEC01: add     esp, 4
0x9DEC04: mov     ecx, [esp+10h+var_C]
0x9DEC08: mov     large fs:0, ecx
0x9DEC0F: pop     ecx
0x9DEC10: add     esp, 0Ch
0x9DEC13: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B14E0: mov     ecx, offset byte_B06F14
0x9B14E5: jmp     loc_403BC0
0x9B14EA: mov     edx, [esp+arg_4]
0x9B14EE: lea     eax, [edx]
0x9B14F0: mov     ecx, [edx-4]
0x9B14F3: xor     ecx, eax
0x9B14F5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B14FA: mov     eax, offset stru_ADD6B0
0x9B14FF: jmp     ___CxxFrameHandler3
