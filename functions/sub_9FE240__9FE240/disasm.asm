0x9FE240: push    0FFFFFFFFh
0x9FE242: push    offset SEH_9FE240
0x9FE247: mov     eax, large fs:0
0x9FE24D: push    eax
0x9FE24E: mov     eax, ___security_cookie
0x9FE253: xor     eax, esp
0x9FE255: push    eax
0x9FE256: lea     eax, [esp+10h+var_C]
0x9FE25A: mov     large fs:0, eax
0x9FE260: push    offset flt_B14F28
0x9FE265: mov     ecx, offset INISettingCollection
0x9FE26A: mov     [esp+14h+var_4], 0
0x9FE272: call    SettingCollectionList_AddSetting
0x9FE277: push    offset sub_A25C20; void (__cdecl *)()
0x9FE27C: call    _atexit
0x9FE281: add     esp, 4
0x9FE284: mov     ecx, [esp+10h+var_C]
0x9FE288: mov     large fs:0, ecx
0x9FE28F: pop     ecx
0x9FE290: add     esp, 0Ch
0x9FE293: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9C4690: mov     ecx, offset flt_B14F28
0x9C4695: jmp     loc_403BC0
0x9C469A: mov     edx, [esp+arg_4]
0x9C469E: lea     eax, [edx]
0x9C46A0: mov     ecx, [edx-4]
0x9C46A3: xor     ecx, eax
0x9C46A5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C46AA: mov     eax, offset stru_AED024
0x9C46AF: jmp     ___CxxFrameHandler3
