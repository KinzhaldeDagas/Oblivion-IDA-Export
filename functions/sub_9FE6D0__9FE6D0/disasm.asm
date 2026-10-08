0x9FE6D0: push    0FFFFFFFFh
0x9FE6D2: push    offset SEH_9FE6D0
0x9FE6D7: mov     eax, large fs:0
0x9FE6DD: push    eax
0x9FE6DE: mov     eax, ___security_cookie
0x9FE6E3: xor     eax, esp
0x9FE6E5: push    eax
0x9FE6E6: lea     eax, [esp+10h+var_C]
0x9FE6EA: mov     large fs:0, eax
0x9FE6F0: push    offset unk_B15748
0x9FE6F5: mov     ecx, offset INISettingCollection
0x9FE6FA: mov     [esp+14h+var_4], 0
0x9FE702: call    SettingCollectionList_AddSetting
0x9FE707: push    offset sub_A25DD0; void (__cdecl *)()
0x9FE70C: call    _atexit
0x9FE711: add     esp, 4
0x9FE714: mov     ecx, [esp+10h+var_C]
0x9FE718: mov     large fs:0, ecx
0x9FE71F: pop     ecx
0x9FE720: add     esp, 0Ch
0x9FE723: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9C4CB0: mov     ecx, offset unk_B15748
0x9C4CB5: jmp     loc_403BC0
0x9C4CBA: mov     edx, [esp+arg_4]
0x9C4CBE: lea     eax, [edx]
0x9C4CC0: mov     ecx, [edx-4]
0x9C4CC3: xor     ecx, eax
0x9C4CC5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C4CCA: mov     eax, offset stru_AED588
0x9C4CCF: jmp     ___CxxFrameHandler3
