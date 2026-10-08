0x9FC940: push    0FFFFFFFFh
0x9FC942: push    offset SEH_9FC940
0x9FC947: mov     eax, large fs:0
0x9FC94D: push    eax
0x9FC94E: mov     eax, ___security_cookie
0x9FC953: xor     eax, esp
0x9FC955: push    eax
0x9FC956: lea     eax, [esp+10h+var_C]
0x9FC95A: mov     large fs:0, eax
0x9FC960: push    offset dword_B1482C
0x9FC965: mov     ecx, offset INISettingCollection
0x9FC96A: mov     [esp+14h+var_4], 0
0x9FC972: call    SettingCollectionList_AddSetting
0x9FC977: push    offset sub_A24FC0; void (__cdecl *)()
0x9FC97C: call    _atexit
0x9FC981: add     esp, 4
0x9FC984: mov     ecx, [esp+10h+var_C]
0x9FC988: mov     large fs:0, ecx
0x9FC98F: pop     ecx
0x9FC990: add     esp, 0Ch
0x9FC993: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9C22C0: mov     ecx, offset dword_B1482C
0x9C22C5: jmp     loc_403BC0
0x9C22CA: mov     edx, [esp+arg_4]
0x9C22CE: lea     eax, [edx]
0x9C22D0: mov     ecx, [edx-4]
0x9C22D3: xor     ecx, eax
0x9C22D5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C22DA: mov     eax, offset stru_AEB1CC
0x9C22DF: jmp     ___CxxFrameHandler3
