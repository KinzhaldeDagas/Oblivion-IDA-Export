0x9DC100: push    0FFFFFFFFh
0x9DC102: push    offset SEH_9DC100
0x9DC107: mov     eax, large fs:0
0x9DC10D: push    eax
0x9DC10E: mov     eax, ___security_cookie
0x9DC113: xor     eax, esp
0x9DC115: push    eax
0x9DC116: lea     eax, [esp+10h+var_C]
0x9DC11A: mov     large fs:0, eax
0x9DC120: push    offset flt_B06540
0x9DC125: mov     ecx, offset INISettingCollection
0x9DC12A: mov     [esp+14h+var_4], 0
0x9DC132: call    SettingCollectionList_AddSetting
0x9DC137: push    offset sub_A185E0; void (__cdecl *)()
0x9DC13C: call    _atexit
0x9DC141: add     esp, 4
0x9DC144: mov     ecx, [esp+10h+var_C]
0x9DC148: mov     large fs:0, ecx
0x9DC14F: pop     ecx
0x9DC150: add     esp, 0Ch
0x9DC153: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9AEF40: mov     ecx, offset flt_B06540
0x9AEF45: jmp     loc_403BC0
0x9AEF4A: mov     edx, [esp+arg_4]
0x9AEF4E: lea     eax, [edx]
0x9AEF50: mov     ecx, [edx-4]
0x9AEF53: xor     ecx, eax
0x9AEF55: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AEF5A: mov     eax, offset stru_ADB5F8
0x9AEF5F: jmp     ___CxxFrameHandler3
