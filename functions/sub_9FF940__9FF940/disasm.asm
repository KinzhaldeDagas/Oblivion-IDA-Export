0x9FF940: push    0FFFFFFFFh
0x9FF942: push    offset SEH_9FF940
0x9FF947: mov     eax, large fs:0
0x9FF94D: push    eax
0x9FF94E: mov     eax, ___security_cookie
0x9FF953: xor     eax, esp
0x9FF955: push    eax
0x9FF956: lea     eax, [esp+10h+var_C]
0x9FF95A: mov     large fs:0, eax
0x9FF960: push    offset unk_B162C4
0x9FF965: mov     ecx, offset INISettingCollection
0x9FF96A: mov     [esp+14h+var_4], 0
0x9FF972: call    SettingCollectionList_AddSetting
0x9FF977: push    offset sub_A26580; void (__cdecl *)()
0x9FF97C: call    _atexit
0x9FF981: add     esp, 4
0x9FF984: mov     ecx, [esp+10h+var_C]
0x9FF988: mov     large fs:0, ecx
0x9FF98F: pop     ecx
0x9FF990: add     esp, 0Ch
0x9FF993: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9C6C20: mov     ecx, offset unk_B162C4
0x9C6C25: jmp     loc_403BC0
0x9C6C2A: mov     edx, [esp+arg_4]
0x9C6C2E: lea     eax, [edx]
0x9C6C30: mov     ecx, [edx-4]
0x9C6C33: xor     ecx, eax
0x9C6C35: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C6C3A: mov     eax, offset stru_AEF0E0
0x9C6C3F: jmp     ___CxxFrameHandler3
