0x9DDBA0: push    0FFFFFFFFh
0x9DDBA2: push    offset SEH_9DDBA0
0x9DDBA7: mov     eax, large fs:0
0x9DDBAD: push    eax
0x9DDBAE: mov     eax, ___security_cookie
0x9DDBB3: xor     eax, esp
0x9DDBB5: push    eax
0x9DDBB6: lea     eax, [esp+10h+var_C]
0x9DDBBA: mov     large fs:0, eax
0x9DDBC0: push    offset ForcePow2Text
0x9DDBC5: mov     ecx, offset INISettingCollection
0x9DDBCA: mov     [esp+14h+var_4], 0
0x9DDBD2: call    SettingCollectionList_AddSetting
0x9DDBD7: push    offset sub_A19380; void (__cdecl *)()
0x9DDBDC: call    _atexit
0x9DDBE1: add     esp, 4
0x9DDBE4: mov     ecx, [esp+10h+var_C]
0x9DDBE8: mov     large fs:0, ecx
0x9DDBEF: pop     ecx
0x9DDBF0: add     esp, 0Ch
0x9DDBF3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B0CD0: mov     ecx, offset ForcePow2Text
0x9B0CD5: jmp     loc_403BC0
0x9B0CDA: mov     edx, [esp+arg_4]
0x9B0CDE: lea     eax, [edx]
0x9B0CE0: mov     ecx, [edx-4]
0x9B0CE3: xor     ecx, eax
0x9B0CE5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B0CEA: mov     eax, offset stru_ADCF4C
0x9B0CEF: jmp     ___CxxFrameHandler3
