0x9FCFA0: push    0FFFFFFFFh
0x9FCFA2: push    offset SEH_9FCFA0
0x9FCFA7: mov     eax, large fs:0
0x9FCFAD: push    eax
0x9FCFAE: mov     eax, ___security_cookie
0x9FCFB3: xor     eax, esp
0x9FCFB5: push    eax
0x9FCFB6: lea     eax, [esp+10h+var_C]
0x9FCFBA: mov     large fs:0, eax
0x9FCFC0: push    offset dword_B148CC
0x9FCFC5: mov     ecx, offset INISettingCollection
0x9FCFCA: mov     [esp+14h+var_4], 0
0x9FCFD2: call    SettingCollectionList_AddSetting
0x9FCFD7: push    offset sub_A252F0; void (__cdecl *)()
0x9FCFDC: call    _atexit
0x9FCFE1: add     esp, 4
0x9FCFE4: mov     ecx, [esp+10h+var_C]
0x9FCFE8: mov     large fs:0, ecx
0x9FCFEF: pop     ecx
0x9FCFF0: add     esp, 0Ch
0x9FCFF3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9C2CC0: mov     ecx, offset dword_B148CC
0x9C2CC5: jmp     loc_403BC0
0x9C2CCA: mov     edx, [esp+arg_4]
0x9C2CCE: lea     eax, [edx]
0x9C2CD0: mov     ecx, [edx-4]
0x9C2CD3: xor     ecx, eax
0x9C2CD5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C2CDA: mov     eax, offset stru_AEBA08
0x9C2CDF: jmp     ___CxxFrameHandler3
